#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_B947D336595B4072;
namespace RPG::Client { class IRIManager; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define RPG_CLIENT_IRIRENDERER_AWAKE_OFFSET UNITYSDK_OFFSET(0xD3E5B10)
#define RPG_CLIENT_IRIRENDERER_GET_UPDATETRANSFORM_OFFSET UNITYSDK_OFFSET(0xD3E6100)
#define RPG_CLIENT_IRIRENDERER_METHOD_5_3A7AB6A3EF7DB649_OFFSET UNITYSDK_OFFSET(0xD3E5B60)
#define RPG_CLIENT_IRIRENDERER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xD3E5FD0)
#define RPG_CLIENT_IRIRENDERER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD3E5EA0)
#define RPG_CLIENT_IRIRENDERER_SET_UPDATETRANSFORM_OFFSET UNITYSDK_OFFSET(0xD3E6110)
#define RPG_CLIENT_IRIRENDERER__CCTOR_OFFSET UNITYSDK_OFFSET(0xD3E6150)
#define RPG_CLIENT_IRIRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0xD3E6120)

namespace RPG::Client
{
	inline static constexpr unsigned int IRIRenderer_TypeDefinitionIndex = 68857;

	class IRIRenderer : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::Client::IRIRenderer*>** StaticGet_PHOKFJMLCDE()
		{
			return (::System::Collections::Generic::List_1<::RPG::Client::IRIRenderer*>**)Il2CppClass::FromTypeDefinitionIndex(IRIRenderer_TypeDefinitionIndex)->GetStaticField(0x5C100);
		}
		static ::System::Collections::Generic::HashSet_1<::RPG::Client::IRIRenderer*>** StaticGet_KPODFFOJOBN()
		{
			return (::System::Collections::Generic::HashSet_1<::RPG::Client::IRIRenderer*>**)Il2CppClass::FromTypeDefinitionIndex(IRIRenderer_TypeDefinitionIndex)->GetStaticField(0x5C108);
		}
		static ::RPG::Client::IRIManager** StaticGet_KJEGMPNCGEH()
		{
			return (::RPG::Client::IRIManager**)Il2CppClass::FromTypeDefinitionIndex(IRIRenderer_TypeDefinitionIndex)->GetStaticField(0x5C110);
		}
		static ::System::Boolean* StaticGet_UseGlobalVolume()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(IRIRenderer_TypeDefinitionIndex)->GetStaticField(0x12F30);
		}
		::System::String* DataAssetPath; // 0x18
		::System::Boolean _UpdateTransform_k__BackingField; // 0x20
		::Class_1_B947D336595B4072* JOOGPAFFGNM; // 0x28
		::System::UInt64 PJDJNFIMJFK; // 0x30
		::UnityEngine::Collider* ADKPEOEFBFI; // 0x38
		::UnityEngine::Vector3 KFEJGBAKKEF; // 0x40
		::UnityEngine::Vector3 NCBBBANOECE; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRIRENDERER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_IRIRENDERER__CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRIRENDERER_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRIRENDERER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRIRENDERER_ONDISABLE_OFFSET))(this);
		}

		::System::Boolean get_UpdateTransform()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRIRENDERER_GET_UPDATETRANSFORM_OFFSET))(this);
		}

		::System::Void set_UpdateTransform(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRIRENDERER_SET_UPDATETRANSFORM_OFFSET))(this, a1);
		}

		::RPG::Client::IRIManager* Method_5_3A7AB6A3EF7DB649()
		{
			return ((::RPG::Client::IRIManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRIRENDERER_METHOD_5_3A7AB6A3EF7DB649_OFFSET))(this);
		}
	};
}
