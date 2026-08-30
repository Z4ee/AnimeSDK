#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class LoopTowerAnimBehavior_Class_1_2DA16813DB0B3208; }
namespace RPG::Client { class LoopTowerAnimBehavior_LoopTowerSlide; }
namespace RPG::Client { class LoopTowerAnimMonoPlugin; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0x17489A80)
#define RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_METHOD_3_107FD70DCCEDAA2A_OFFSET UNITYSDK_OFFSET(0x17489470)
#define RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x1748BA00)
#define RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0x1748BA60)
#define RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_METHOD_3_4343F372F34C05BF_3_OFFSET UNITYSDK_OFFSET(0x1748C460)
#define RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_METHOD_3_4343F372F34C05BF_4_OFFSET UNITYSDK_OFFSET(0x1748C4C0)
#define RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1748B9A0)
#define RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_METHOD_3_43690B86AECB092E_OFFSET UNITYSDK_OFFSET(0x1748A5D0)
#define RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_METHOD_3_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x1748B590)
#define RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_METHOD_3_6516B39957C2E680_OFFSET UNITYSDK_OFFSET(0x17488DA0)
#define RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_METHOD_3_85A29D63AC16EE29_OFFSET UNITYSDK_OFFSET(0x17488FA0)
#define RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_METHOD_3_8C4AEC0BC1CA0CB4_OFFSET UNITYSDK_OFFSET(0x17488CA0)
#define RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_METHOD_3_B0351A8151A472A4_1_OFFSET UNITYSDK_OFFSET(0x1748B130)
#define RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_METHOD_3_B0351A8151A472A4_OFFSET UNITYSDK_OFFSET(0x17489B00)
#define RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_METHOD_3_FDA446125651C201_OFFSET UNITYSDK_OFFSET(0x1748B290)
#define RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_METHOD_3_FFBC3E5986CAC663_OFFSET UNITYSDK_OFFSET(0x1748B240)
#define RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0x1748BAD0)
#define RPG_CLIENT_LOOPTOWERANIMBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1748C520)

namespace RPG::Client
{
	inline static constexpr unsigned int LoopTowerAnimBehavior_TypeDefinitionIndex = 70884;

	class LoopTowerAnimBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		static ::System::Boolean* StaticGet_DisableShakeSource()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(LoopTowerAnimBehavior_TypeDefinitionIndex)->GetStaticField(0xFB20);
		}
		::System::Collections::Generic::List_1<::RPG::Client::LoopTowerAnimBehavior_LoopTowerSlide*>* _TowerSliders; // 0x38
		::RPG::Client::LoopTowerAnimBehavior_Class_1_2DA16813DB0B3208* _RandomBezierCurveGenerator; // 0x40
		::UnityEngine::Vector3 _UpDir; // 0x48
		::System::Single _RotateY; // 0x54
		::System::Single _TotalTime; // 0x58
		::System::Boolean _ForceAsignNext; // 0x5C
		::System::Int32 _ForceAsignNextIndex; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPTOWERANIMBEHAVIOR__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_8C4AEC0BC1CA0CB4(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_METHOD_3_8C4AEC0BC1CA0CB4_OFFSET))(this, a1);
		}

		::System::Void Method_3_6516B39957C2E680(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_METHOD_3_6516B39957C2E680_OFFSET))(this, a1);
		}

		::System::Boolean Method_3_85A29D63AC16EE29()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_METHOD_3_85A29D63AC16EE29_OFFSET))(this);
		}

		::System::Boolean Method_3_107FD70DCCEDAA2A()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_METHOD_3_107FD70DCCEDAA2A_OFFSET))(this);
		}

		::RPG::Client::LoopTowerAnimBehavior_LoopTowerSlide* Method_3_43690B86AECB092E()
		{
			return ((::RPG::Client::LoopTowerAnimBehavior_LoopTowerSlide*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_METHOD_3_43690B86AECB092E_OFFSET))(this);
		}

		static ::System::Void Method_3_B0351A8151A472A4(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_METHOD_3_B0351A8151A472A4_OFFSET))(a1);
		}

		static ::System::Void Method_3_B0351A8151A472A4_1(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_METHOD_3_B0351A8151A472A4_1_OFFSET))(a1);
		}

		::System::Void Method_3_FFBC3E5986CAC663()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_METHOD_3_FFBC3E5986CAC663_OFFSET))(this);
		}

		::System::Void Method_3_FDA446125651C201(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_METHOD_3_FDA446125651C201_OFFSET))(this, a1);
		}

		::System::Void Method_3_508D4DD02D3DB74E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_METHOD_3_508D4DD02D3DB74E_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::System::Void Method_3_4343F372F34C05BF_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_METHOD_3_4343F372F34C05BF_3_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_METHOD_3_4343F372F34C05BF_4_OFFSET))(this);
		}

		::RPG::Client::LoopTowerAnimMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::LoopTowerAnimMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}
	};
}
