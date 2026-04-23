#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_ENTITYENVADJUST_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA28A720)
#define RPG_CLIENT_ENTITYENVADJUST_START_OFFSET UNITYSDK_OFFSET(0xA28A1F0)
#define RPG_CLIENT_ENTITYENVADJUST_UPDATE_OFFSET UNITYSDK_OFFSET(0xA28A550)
#define RPG_CLIENT_ENTITYENVADJUST__CCTOR_OFFSET UNITYSDK_OFFSET(0xA28AA50)
#define RPG_CLIENT_ENTITYENVADJUST__CTOR_OFFSET UNITYSDK_OFFSET(0xA28A9B0)

namespace RPG::Client
{
	inline static constexpr unsigned int EntityEnvAdjust_TypeDefinitionIndex = 64781;

	class EntityEnvAdjust : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_Field_5_7()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EntityEnvAdjust_TypeDefinitionIndex)->GetStaticField(0x3810);
		}
		static ::System::Int32* StaticGet_Field_5_8()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EntityEnvAdjust_TypeDefinitionIndex)->GetStaticField(0x3814);
		}
		::UnityEngine::Color EnvColor; // 0x18
		::UnityEngine::Color AddColor; // 0x28
		::System::Single Contrast; // 0x38
		::UnityEngine::Color HightLight; // 0x3C
		::UnityEngine::Color Shadow; // 0x4C
		::Il2CppArray<::UnityEngine::Renderer*>* Field_5_5; // 0x60
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::Il2CppArray<::UnityEngine::Material*>*>* Field_5_6; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYENVADJUST__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYENVADJUST__CCTOR_OFFSET))();
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYENVADJUST_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYENVADJUST_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYENVADJUST_ONDESTROY_OFFSET))(this);
		}
	};
}
