#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"

namespace RPG::Client { class StageDynamicLightBoxMonoPlugin; }
namespace UnityEngine { class MeshRenderer; }

#define RPG_CLIENT_STAGEDYNAMICLIGHTBOXBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0x196F2330)
#define RPG_CLIENT_STAGEDYNAMICLIGHTBOXBEHAVIOR_METHOD_3_0869E1192F8E01DF_OFFSET UNITYSDK_OFFSET(0x196F2370)
#define RPG_CLIENT_STAGEDYNAMICLIGHTBOXBEHAVIOR_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x196F3CB0)
#define RPG_CLIENT_STAGEDYNAMICLIGHTBOXBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x196F3AD0)
#define RPG_CLIENT_STAGEDYNAMICLIGHTBOXBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0x196F3BF0)
#define RPG_CLIENT_STAGEDYNAMICLIGHTBOXBEHAVIOR_METHOD_3_4343F372F34C05BF_3_OFFSET UNITYSDK_OFFSET(0x196F3C50)
#define RPG_CLIENT_STAGEDYNAMICLIGHTBOXBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x196F3A70)
#define RPG_CLIENT_STAGEDYNAMICLIGHTBOXBEHAVIOR_METHOD_3_8DF47EF45ABD2A6C_1_OFFSET UNITYSDK_OFFSET(0x196F3CF0)
#define RPG_CLIENT_STAGEDYNAMICLIGHTBOXBEHAVIOR_METHOD_3_8DF47EF45ABD2A6C_OFFSET UNITYSDK_OFFSET(0x196F39E0)
#define RPG_CLIENT_STAGEDYNAMICLIGHTBOXBEHAVIOR_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x196F3940)
#define RPG_CLIENT_STAGEDYNAMICLIGHTBOXBEHAVIOR_METHOD_3_AF36EBA0C8D1FBA2_OFFSET UNITYSDK_OFFSET(0x196F2200)
#define RPG_CLIENT_STAGEDYNAMICLIGHTBOXBEHAVIOR_METHOD_3_EEED34E9AAC26D51_OFFSET UNITYSDK_OFFSET(0x196F2700)
#define RPG_CLIENT_STAGEDYNAMICLIGHTBOXBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0x196F3B30)
#define RPG_CLIENT_STAGEDYNAMICLIGHTBOXBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x196F3D80)

namespace RPG::Client
{
	inline static constexpr unsigned int StageDynamicLightBoxBehavior_TypeDefinitionIndex = 70920;

	class StageDynamicLightBoxBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::System::Int32 _CurrentTemplateID; // 0x38
		::System::Single _CurrentTime; // 0x3C
		::UnityEngine::MeshRenderer* _Renderer; // 0x40
		::System::Boolean _MatDirty; // 0x48
		::System::Int32 _ProgressMapID; // 0x4C
		::System::Int32 _FormationMapID; // 0x50
		::System::Int32 _ProgressID; // 0x54
		::System::Int32 _BulbXID; // 0x58
		::System::Int32 _BulbYID; // 0x5C
		::System::Int32 _FormationRepeateXID; // 0x60
		::System::Int32 _FormationRepeateYID; // 0x64
		::System::Int32 _LayoutModeXID; // 0x68
		::System::Int32 _LayoutModeYID; // 0x6C
		::System::Int32 _FormationAdaptiveModeID; // 0x70
		::System::Int32 _FormationAdaptiveCountXID; // 0x74
		::System::Int32 _FormationAdaptiveCountYID; // 0x78
		::System::Int32 _EmissionColorID; // 0x7C
		::System::Int32 _ThresholdID; // 0x80
		::System::Int32 _EmissionIntID; // 0x84
		::System::Int32 _ThicknessID; // 0x88
		::System::Int32 _ContrastID; // 0x8C
		::System::Int32 _AltasID; // 0x90
		::System::Int32 _MainMapID; // 0x94
		::System::Int32 _SwitchID; // 0x98
		::System::Int32 _FormationmapTypeID; // 0x9C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEDYNAMICLIGHTBOXBEHAVIOR__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_AF36EBA0C8D1FBA2(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEDYNAMICLIGHTBOXBEHAVIOR_METHOD_3_AF36EBA0C8D1FBA2_OFFSET))(this, a1);
		}

		::System::Void Method_3_0869E1192F8E01DF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEDYNAMICLIGHTBOXBEHAVIOR_METHOD_3_0869E1192F8E01DF_OFFSET))(this);
		}

		::System::Void Method_3_EEED34E9AAC26D51()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEDYNAMICLIGHTBOXBEHAVIOR_METHOD_3_EEED34E9AAC26D51_OFFSET))(this);
		}

		::System::Void Method_3_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEDYNAMICLIGHTBOXBEHAVIOR_METHOD_3_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_3_8DF47EF45ABD2A6C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEDYNAMICLIGHTBOXBEHAVIOR_METHOD_3_8DF47EF45ABD2A6C_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEDYNAMICLIGHTBOXBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEDYNAMICLIGHTBOXBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEDYNAMICLIGHTBOXBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::System::Void Method_3_4343F372F34C05BF_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEDYNAMICLIGHTBOXBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEDYNAMICLIGHTBOXBEHAVIOR_METHOD_3_4343F372F34C05BF_3_OFFSET))(this);
		}

		::System::Boolean Method_3_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEDYNAMICLIGHTBOXBEHAVIOR_METHOD_3_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Void Method_3_8DF47EF45ABD2A6C_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEDYNAMICLIGHTBOXBEHAVIOR_METHOD_3_8DF47EF45ABD2A6C_1_OFFSET))(this);
		}

		::RPG::Client::StageDynamicLightBoxMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::StageDynamicLightBoxMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEDYNAMICLIGHTBOXBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}
	};
}
