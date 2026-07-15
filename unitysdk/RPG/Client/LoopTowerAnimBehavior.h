#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class LoopTowerAnimBehavior_Class_1_2DA16813DB0B3208; }
namespace RPG::Client { class LoopTowerAnimBehavior_LoopTowerSlide; }
namespace RPG::Client { class LoopTowerAnimMonoPlugin; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0x15BF0C50)
#define RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_METHOD_3_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x15BF21E0)
#define RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x15BF2800)
#define RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0x15BF2860)
#define RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_METHOD_3_4343F372F34C05BF_3_OFFSET UNITYSDK_OFFSET(0x15BF3290)
#define RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_METHOD_3_4343F372F34C05BF_4_OFFSET UNITYSDK_OFFSET(0x15BF32F0)
#define RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x15BF27A0)
#define RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_METHOD_3_43690B86AECB092E_OFFSET UNITYSDK_OFFSET(0x15BF1680)
#define RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_METHOD_3_46D79C223C10A615_OFFSET UNITYSDK_OFFSET(0x15BEFE60)
#define RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_METHOD_3_49E81587B5BA7737_OFFSET UNITYSDK_OFFSET(0x15BF0650)
#define RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_METHOD_3_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x15BF2390)
#define RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_METHOD_3_6011BBCAB21C4BB7_OFFSET UNITYSDK_OFFSET(0x15BF00D0)
#define RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_METHOD_3_6516B39957C2E680_OFFSET UNITYSDK_OFFSET(0x15BEFED0)
#define RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0x15BF28D0)
#define RPG_CLIENT_LOOPTOWERANIMBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x15BF3350)

namespace RPG::Client
{
	inline static constexpr unsigned int LoopTowerAnimBehavior_TypeDefinitionIndex = 67724;

	class LoopTowerAnimBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		static ::System::Boolean* StaticGet_DisableShakeSource()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(LoopTowerAnimBehavior_TypeDefinitionIndex)->GetStaticField(0x8B30);
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

		::System::Void Method_3_46D79C223C10A615(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_METHOD_3_46D79C223C10A615_OFFSET))(this, a1);
		}

		::System::Void Method_3_6516B39957C2E680(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_METHOD_3_6516B39957C2E680_OFFSET))(this, a1);
		}

		::System::Void Method_3_6011BBCAB21C4BB7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_METHOD_3_6011BBCAB21C4BB7_OFFSET))(this);
		}

		::System::Void Method_3_49E81587B5BA7737()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_METHOD_3_49E81587B5BA7737_OFFSET))(this);
		}

		::RPG::Client::LoopTowerAnimBehavior_LoopTowerSlide* Method_3_43690B86AECB092E()
		{
			return ((::RPG::Client::LoopTowerAnimBehavior_LoopTowerSlide*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_METHOD_3_43690B86AECB092E_OFFSET))(this);
		}

		::System::Void Method_3_06330CD58CB602B6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_METHOD_3_06330CD58CB602B6_OFFSET))(this);
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
