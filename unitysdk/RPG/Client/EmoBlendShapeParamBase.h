#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoEmoBlendShapesController; }
namespace System { class String; }

#define RPG_CLIENT_EMOBLENDSHAPEPARAMBASE_GET_BLENDSHAPENAMES_OFFSET UNITYSDK_OFFSET(0xA27E090)
#define RPG_CLIENT_EMOBLENDSHAPEPARAMBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xA27E080)

namespace RPG::Client
{
	inline static constexpr unsigned int EmoBlendShapeParamBase_TypeDefinitionIndex = 65573;

	class EmoBlendShapeParamBase : public ::System::Object
	{
	public:
		::RPG::Client::MonoEmoBlendShapesController* controller; // 0x10
		::System::String* name; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOBLENDSHAPEPARAMBASE__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_BlendShapeNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOBLENDSHAPEPARAMBASE_GET_BLENDSHAPENAMES_OFFSET))(this);
		}
	};
}
