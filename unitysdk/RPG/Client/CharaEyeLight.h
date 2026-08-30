#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CharaEyeLight_BloomIntensityID.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_CHARAEYELIGHT_METHOD_5_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1AD74B90)
#define RPG_CLIENT_CHARAEYELIGHT_METHOD_5_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x1AD74C30)
#define RPG_CLIENT_CHARAEYELIGHT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1AD74AD0)
#define RPG_CLIENT_CHARAEYELIGHT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1AD74820)
#define RPG_CLIENT_CHARAEYELIGHT_SETEYEINTENSITY_OFFSET UNITYSDK_OFFSET(0x1AD73B80)
#define RPG_CLIENT_CHARAEYELIGHT_UPDATE_OFFSET UNITYSDK_OFFSET(0x1AD74B40)
#define RPG_CLIENT_CHARAEYELIGHT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AD74D50)
#define RPG_CLIENT_CHARAEYELIGHT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD74D40)

namespace RPG::Client
{
	inline static constexpr unsigned int CharaEyeLight_TypeDefinitionIndex = 70213;

	class CharaEyeLight : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_HJAHKIJJJGF()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CharaEyeLight_TypeDefinitionIndex)->GetStaticField(0x29990);
		}
		::System::Single EyeIntensity; // 0x18
		::RPG::Client::CharaEyeLight_BloomIntensityID BloomIntensity; // 0x1C
		::UnityEngine::GameObject* Mesh; // 0x20
		::System::Boolean UseLutProperty; // 0x28
		::System::Single OBHHPLDLDBE; // 0x2C
		::System::Int32 EHEHFOIGPLI; // 0x30
		::UnityEngine::Renderer* JAMDAALMOAL; // 0x38
		::UnityEngine::Material* IMOHCDHKBAJ; // 0x40
		::UnityEngine::MaterialPropertyBlock* BMCPFHADPKJ; // 0x48
		::System::Int32 FDNMFJJOJDH; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARAEYELIGHT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARAEYELIGHT__CCTOR_OFFSET))();
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARAEYELIGHT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARAEYELIGHT_ONDISABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARAEYELIGHT_UPDATE_OFFSET))(this);
		}

		::System::Void SetEyeIntensity(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARAEYELIGHT_SETEYEINTENSITY_OFFSET))(this, a1);
		}

		::System::Void Method_5_A239DF324AF4215D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARAEYELIGHT_METHOD_5_A239DF324AF4215D_OFFSET))(this);
		}

		::System::Void Method_5_30D1209326FA87FC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARAEYELIGHT_METHOD_5_30D1209326FA87FC_OFFSET))(this);
		}
	};
}
