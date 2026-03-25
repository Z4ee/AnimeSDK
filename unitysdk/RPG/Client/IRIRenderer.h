#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_14BF1B11C879825B;
namespace RPG::Client { class IRIManager; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define RPG_CLIENT_IRIRENDERER_AWAKE_OFFSET UNITYSDK_OFFSET(0x99368B0)
#define RPG_CLIENT_IRIRENDERER_GET_UPDATETRANSFORM_OFFSET UNITYSDK_OFFSET(0x9936EB0)
#define RPG_CLIENT_IRIRENDERER_METHOD_5_3A7AB6A3EF7DB649_OFFSET UNITYSDK_OFFSET(0x9936900)
#define RPG_CLIENT_IRIRENDERER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x9936D80)
#define RPG_CLIENT_IRIRENDERER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9936C50)
#define RPG_CLIENT_IRIRENDERER_SET_UPDATETRANSFORM_OFFSET UNITYSDK_OFFSET(0x9936EC0)
#define RPG_CLIENT_IRIRENDERER__CCTOR_OFFSET UNITYSDK_OFFSET(0x9936F00)
#define RPG_CLIENT_IRIRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x9936ED0)

namespace RPG::Client
{
	inline static constexpr unsigned int IRIRenderer_TypeDefinitionIndex = 56285;

	class IRIRenderer : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::Client::IRIRenderer*>** StaticGet_Field_5_5()
		{
			return (::System::Collections::Generic::List_1<::RPG::Client::IRIRenderer*>**)Il2CppClass::FromTypeDefinitionIndex(IRIRenderer_TypeDefinitionIndex)->GetStaticField(0x1FA40);
		}
		static ::RPG::Client::IRIManager** StaticGet_Field_5_10()
		{
			return (::RPG::Client::IRIManager**)Il2CppClass::FromTypeDefinitionIndex(IRIRenderer_TypeDefinitionIndex)->GetStaticField(0x1FA48);
		}
		static ::System::Collections::Generic::HashSet_1<::RPG::Client::IRIRenderer*>** StaticGet_Field_5_6()
		{
			return (::System::Collections::Generic::HashSet_1<::RPG::Client::IRIRenderer*>**)Il2CppClass::FromTypeDefinitionIndex(IRIRenderer_TypeDefinitionIndex)->GetStaticField(0x1FA50);
		}
		static ::System::Boolean* StaticGet_UseGlobalVolume()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(IRIRenderer_TypeDefinitionIndex)->GetStaticField(0x84F0);
		}
		::System::String* DataAssetPath; // 0x18
		::System::Boolean _UpdateTransform_k__BackingField; // 0x20
		::Class_1_14BF1B11C879825B* Field_5_3; // 0x28
		::System::UInt64 Field_5_4; // 0x30
		::UnityEngine::Collider* Field_5_7; // 0x38
		::UnityEngine::Vector3 Field_5_8; // 0x40
		::UnityEngine::Vector3 Field_5_9; // 0x4C

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

		::System::Void set_UpdateTransform(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRIRENDERER_SET_UPDATETRANSFORM_OFFSET))(this, value);
		}

		::RPG::Client::IRIManager* Method_5_3A7AB6A3EF7DB649()
		{
			return ((::RPG::Client::IRIManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRIRENDERER_METHOD_5_3A7AB6A3EF7DB649_OFFSET))(this);
		}
	};
}
