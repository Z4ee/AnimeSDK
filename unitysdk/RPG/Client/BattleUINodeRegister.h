#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_84DDF02C8C4ECC11;
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_BATTLEUINODEREGISTER_AWAKE_OFFSET UNITYSDK_OFFSET(0xB41C1D0)
#define RPG_CLIENT_BATTLEUINODEREGISTER_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xB41C610)
#define RPG_CLIENT_BATTLEUINODEREGISTER_METHOD_5_1F0134B562731ABF_OFFSET UNITYSDK_OFFSET(0xB41C880)
#define RPG_CLIENT_BATTLEUINODEREGISTER_METHOD_5_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0xB41C2B0)
#define RPG_CLIENT_BATTLEUINODEREGISTER_METHOD_5_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0xB41C4F0)
#define RPG_CLIENT_BATTLEUINODEREGISTER_METHOD_5_F662791A0BE6B9AA_OFFSET UNITYSDK_OFFSET(0xB41C700)
#define RPG_CLIENT_BATTLEUINODEREGISTER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xB41C360)
#define RPG_CLIENT_BATTLEUINODEREGISTER_SPAWNED_OFFSET UNITYSDK_OFFSET(0xB41C5C0)
#define RPG_CLIENT_BATTLEUINODEREGISTER__CTOR_OFFSET UNITYSDK_OFFSET(0xB41C8D0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleUINodeRegister_TypeDefinitionIndex = 67549;

	class BattleUINodeRegister : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* UniqueName; // 0x18
		::Class_1_84DDF02C8C4ECC11* Field_5_1; // 0x20
		::System::Boolean Field_5_2; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUINODEREGISTER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUINODEREGISTER_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUINODEREGISTER_ONDESTROY_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUINODEREGISTER_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUINODEREGISTER_DESPAWNED_OFFSET))(this);
		}

		::System::Void Method_5_775B6D644F07B554()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUINODEREGISTER_METHOD_5_775B6D644F07B554_OFFSET))(this);
		}

		::System::Void Method_5_E3DE31A03057E055()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUINODEREGISTER_METHOD_5_E3DE31A03057E055_OFFSET))(this);
		}

		::System::Void Method_5_1F0134B562731ABF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUINODEREGISTER_METHOD_5_1F0134B562731ABF_OFFSET))(this, a1);
		}

		::Class_1_84DDF02C8C4ECC11* Method_5_F662791A0BE6B9AA()
		{
			return ((::Class_1_84DDF02C8C4ECC11*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUINODEREGISTER_METHOD_5_F662791A0BE6B9AA_OFFSET))(this);
		}
	};
}
