#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_EDITOR_SHADERPASSVARIENTCOLLECTION_SPVC__CTOR_OFFSET UNITYSDK_OFFSET(0xE4646F0)

namespace RPG::Editor
{
	inline static constexpr unsigned int ShaderPassVarientCollection_SPVC_TypeDefinitionIndex = 52296;

	class ShaderPassVarientCollection_SPVC : public ::System::Object
	{
	public:
		::System::String* ShaderName; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* Varients; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_SHADERPASSVARIENTCOLLECTION_SPVC__CTOR_OFFSET))(this);
		}
	};
}
