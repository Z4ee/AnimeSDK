#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_MONOEFFECT_TAGGOCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x15B34A40)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffect_TagGoConfig_TypeDefinitionIndex = 39614;

	class MonoEffect_TagGoConfig : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* go; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* AnimatorZoneTags; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* AnimatoZoneTagsBlackList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_TAGGOCONFIG__CTOR_OFFSET))(this);
		}
	};
}
