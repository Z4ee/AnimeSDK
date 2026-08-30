#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTarget.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_2BF31F3092BDFD9E;
class Class_1_482F3423DE650EAD;
namespace RPG::Client { class WolfBroGunPlayTargetActionConfig; }
namespace RPG::Client { class WolfBroGunPlayTarget_Group; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_HP_INIT_OFFSET UNITYSDK_OFFSET(0xE4303F0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_HP_ISBOOMABLE_OFFSET UNITYSDK_OFFSET(0xE430640)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_HP_ISHITTABLE_OFFSET UNITYSDK_OFFSET(0xE430590)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_HP_METHOD_6_AD23FDCC7576BB32_OFFSET UNITYSDK_OFFSET(0xE4304B0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_HP_ONHIT_OFFSET UNITYSDK_OFFSET(0xE4306D0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_HP_ONLOSSHP_OFFSET UNITYSDK_OFFSET(0xE430AB0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_HP__CTOR_OFFSET UNITYSDK_OFFSET(0xE430AF0)

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroGunPlayTarget_HP_TypeDefinitionIndex = 68695;

	class WolfBroGunPlayTarget_HP : public ::RPG::Client::WolfBroGunPlayTarget
	{
	public:
		::System::UInt32 HP; // 0xD8
		::Il2CppArray<::RPG::Client::WolfBroGunPlayTargetActionConfig*>* OnHits; // 0xE0
		::System::Int32 KLJBKJONKMO; // 0xE8
		::System::Int32 HPEGMPIDEKB; // 0xEC
		::System::Collections::Generic::List_1<::Class_1_482F3423DE650EAD*>* EDPBILGFCFN; // 0xF0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_HP__CTOR_OFFSET))(this);
		}

		::System::Void Init(::Class_1_2BF31F3092BDFD9E* a1, ::RPG::Client::WolfBroGunPlayTarget_Group* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2BF31F3092BDFD9E*, ::RPG::Client::WolfBroGunPlayTarget_Group*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_HP_INIT_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_AD23FDCC7576BB32(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_HP_METHOD_6_AD23FDCC7576BB32_OFFSET))(this, a1);
		}

		::System::Boolean IsHittable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_HP_ISHITTABLE_OFFSET))(this);
		}

		::System::Boolean IsBoomable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_HP_ISBOOMABLE_OFFSET))(this);
		}

		::System::Boolean OnHit(::UnityEngine::Vector3 a1, ::System::Nullable_1<::UnityEngine::Vector3> a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Nullable_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_HP_ONHIT_OFFSET))(this, a1, a2);
		}

		::System::Void OnLossHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_HP_ONLOSSHP_OFFSET))(this);
		}
	};
}
