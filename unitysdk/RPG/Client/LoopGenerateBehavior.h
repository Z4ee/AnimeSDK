#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LoopGenerateBehavior_GenerateConfig.h"
#include "unitysdk/RPG/Client/LoopGenerateBehavior_SliderTemplate.h"
#include "unitysdk/RPG/Client/LoopGenerateBehavior_Struct_2_2AD9EAB8D0AC0300.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class LoopGenerateBehavior_RuntimeSlider; }
namespace RPG::Client { class LoopGenerateMonoPlugin; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_GET_CURRENTCONFIGINDEX_OFFSET UNITYSDK_OFFSET(0xD584F00)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_GET_PREVIEWMODE_OFFSET UNITYSDK_OFFSET(0xD584990)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_GET__ANCHORPOSITIONONTRACK_OFFSET UNITYSDK_OFFSET(0xD584CF0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_GET__CURRENTCONFIG_OFFSET UNITYSDK_OFFSET(0xD5849B0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_GET__CURRENTSPEED_OFFSET UNITYSDK_OFFSET(0xD584AD0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_GET__ISFORWARD_OFFSET UNITYSDK_OFFSET(0xD584B50)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xD589B60)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_01C1B3BBD3D9744A_OFFSET UNITYSDK_OFFSET(0xD58B560)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_05CB392013C2B610_OFFSET UNITYSDK_OFFSET(0xD5860E0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_196844B4132EFADA_OFFSET UNITYSDK_OFFSET(0xD588870)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_1F48AB7B56BDD842_OFFSET UNITYSDK_OFFSET(0xD58B490)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_1FDDF0F8732BD1E7_OFFSET UNITYSDK_OFFSET(0xD589330)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xD5856F0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_26C3CEC3D50100E1_OFFSET UNITYSDK_OFFSET(0xD587350)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_2DF7969B85DC261B_OFFSET UNITYSDK_OFFSET(0xD58A960)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_2E3C71AD8E78BD37_1_OFFSET UNITYSDK_OFFSET(0xD586A30)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_2E3C71AD8E78BD37_OFFSET UNITYSDK_OFFSET(0xD586080)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_343A8D0B9A80FA1B_1_OFFSET UNITYSDK_OFFSET(0xD5855D0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_343A8D0B9A80FA1B_OFFSET UNITYSDK_OFFSET(0xD588060)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_359F524347624371_OFFSET UNITYSDK_OFFSET(0xD58B2D0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xD585DE0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_3CF43707BF2E9BBA_OFFSET UNITYSDK_OFFSET(0xD586A90)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_3E8C6C27D3157980_OFFSET UNITYSDK_OFFSET(0xD587150)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_41F91000B6D154D6_OFFSET UNITYSDK_OFFSET(0xD586B40)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0xD585E20)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0xD585E80)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xD585750)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_489605F44A3DA235_OFFSET UNITYSDK_OFFSET(0xD587F70)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0xD585B30)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_50CF3DE66FC9EE5E_OFFSET UNITYSDK_OFFSET(0xD5884E0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_5DB24FF26B3E6B25_OFFSET UNITYSDK_OFFSET(0xD5857C0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_5DF5B6CB5F171C10_OFFSET UNITYSDK_OFFSET(0xD587B90)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_61929A3103595552_OFFSET UNITYSDK_OFFSET(0xD586E90)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_66F42CE2EDA79734_OFFSET UNITYSDK_OFFSET(0xD584F10)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_6946C610D47FE5F0_OFFSET UNITYSDK_OFFSET(0xD5892E0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_6B1192ED4B83CD8F_OFFSET UNITYSDK_OFFSET(0xD589D80)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_6E9072C320FA29F4_OFFSET UNITYSDK_OFFSET(0xD589790)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_77322110BAB36133_OFFSET UNITYSDK_OFFSET(0xD58A090)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_7AABF16126468CE5_OFFSET UNITYSDK_OFFSET(0xD588950)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_7C2C2820B36B9508_OFFSET UNITYSDK_OFFSET(0xD589F80)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_7ED1A617F38325F4_OFFSET UNITYSDK_OFFSET(0xD585CD0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_8080E22F79F246F0_1_OFFSET UNITYSDK_OFFSET(0xD585D60)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_8080E22F79F246F0_OFFSET UNITYSDK_OFFSET(0xD585C50)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_81090DB796164975_OFFSET UNITYSDK_OFFSET(0xD588E40)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_82E992240300FB30_OFFSET UNITYSDK_OFFSET(0xD58BB30)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0xD5870A0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0xD589E40)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_8574F6654C7A1EE7_OFFSET UNITYSDK_OFFSET(0xD587050)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_86DAAF5E57B8D9C5_OFFSET UNITYSDK_OFFSET(0xD5881E0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_8858C2C146C0C88C_OFFSET UNITYSDK_OFFSET(0xD586470)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_96F4DD40F689F030_1_OFFSET UNITYSDK_OFFSET(0xD589C30)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_96F4DD40F689F030_OFFSET UNITYSDK_OFFSET(0xD589BA0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_97529D4ED7AD3741_OFFSET UNITYSDK_OFFSET(0xD588CC0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0xD5853D0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_AE0B725AB77F7E6F_OFFSET UNITYSDK_OFFSET(0xD5850C0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_AEE7D7192A910D28_OFFSET UNITYSDK_OFFSET(0xD5861B0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_B1DACD7E8B88788E_OFFSET UNITYSDK_OFFSET(0xD587E70)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_B4399B858EBFA977_OFFSET UNITYSDK_OFFSET(0xD588660)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_B681CCB7CA0E61C0_OFFSET UNITYSDK_OFFSET(0xD589FF0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_B701F1B09526DB71_OFFSET UNITYSDK_OFFSET(0xD584D80)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_B8E82AFAD9F7F4B3_OFFSET UNITYSDK_OFFSET(0xD588A90)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_BC41A14DA3276F14_OFFSET UNITYSDK_OFFSET(0xD586D40)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_C093753911E3263F_OFFSET UNITYSDK_OFFSET(0xD5887C0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xD589D20)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_D09831639F615812_OFFSET UNITYSDK_OFFSET(0xD585570)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_D0BD1377F2594D33_1_OFFSET UNITYSDK_OFFSET(0xD586350)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0xD586230)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_D339EFAB24ED44B0_OFFSET UNITYSDK_OFFSET(0xD58BC90)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_D5804A5743C3CF97_OFFSET UNITYSDK_OFFSET(0xD58B6D0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_DB5DF1C74B5F8C15_OFFSET UNITYSDK_OFFSET(0xD587620)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_DEAC86EB2AD5D389_OFFSET UNITYSDK_OFFSET(0xD589120)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_E80E8B87D44B3447_OFFSET UNITYSDK_OFFSET(0xD587890)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_E87DB0AA7B6E1394_OFFSET UNITYSDK_OFFSET(0xD588560)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_ECA2A63EDDD75AB6_OFFSET UNITYSDK_OFFSET(0xD5889F0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_F6F711795AB60FA2_OFFSET UNITYSDK_OFFSET(0xD589900)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_SET_PREVIEWMODE_OFFSET UNITYSDK_OFFSET(0xD5849A0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0xD585EE0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR__CCTOR_OFFSET UNITYSDK_OFFSET(0xD58BF90)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0xD58BEA0)

namespace RPG::Client
{
	inline static constexpr unsigned int LoopGenerateBehavior_TypeDefinitionIndex = 70871;

	class LoopGenerateBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		static ::System::Int32* StaticGet__NextEndpointGroupId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LoopGenerateBehavior_TypeDefinitionIndex)->GetStaticField(0x14970);
		}
		static ::System::Int32* StaticGet__MaxLoopCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LoopGenerateBehavior_TypeDefinitionIndex)->GetStaticField(0x14974);
		}
		::System::Boolean _PreviewMode_k__BackingField; // 0x38
		::System::Boolean _IsTransitionState; // 0x39
		::System::Single _TransitionSpeed; // 0x3C
		::System::Boolean _IfUseTempSpeed; // 0x40
		::System::Single _TempSpeed; // 0x44
		::System::Collections::Generic::List_1<::RPG::Client::LoopGenerateBehavior_RuntimeSlider*>* _CurrentUnusedSliderPool; // 0x48
		::System::Collections::Generic::List_1<::RPG::Client::LoopGenerateBehavior_RuntimeSlider*>* _CurrentUsedSliderPool; // 0x50
		::System::Collections::Generic::List_1<::RPG::Client::LoopGenerateBehavior_RuntimeSlider*>* _LastUsedSliderPool; // 0x58
		::UnityEngine::Vector2 _FilledRange; // 0x60
		::System::Int32 _CurrentConfigIndex; // 0x68
		::System::Int32 _CurrentGroupWeightPairIndex; // 0x6C
		::System::Int32 _CurrentElementIndex; // 0x70
		::System::Int32 _ActivePhaseIndex; // 0x74
		::System::Single _PhaseElapsed; // 0x78
		::System::Single _PhaseComputedSpeed; // 0x7C
		::System::Int32 _PhaseConfigCursor; // 0x80
		::System::Boolean _PhaseCompleted; // 0x84
		::System::Collections::Generic::List_1<::System::Int32>* _LoadedPhaseConfigIndices; // 0x88
		::System::Boolean _StopEndpointSpawned; // 0x90
		::RPG::Client::LoopGenerateBehavior_RuntimeSlider* _StopEndpointSlider; // 0x98
		::System::Single _StopDockDistance; // 0xA0
		::System::Single _StopDockStartProgress; // 0xA4
		::System::Single _StopLastEndpointCenterOnTrack; // 0xA8
		::System::Boolean _StopLastEndpointCenterOnTrackValid; // 0xAC
		::System::Boolean _SkipPhaseTimeOnce; // 0xAD
		::System::Boolean _HasPendingConfigSwitch; // 0xAE
		::System::Int32 _PendingConfigIndex; // 0xB0
		::System::Boolean _PendingSwitchAfterCurrentGroup; // 0xB4
		::System::Boolean _PendingSkipAssetManagement; // 0xB5

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR__CCTOR_OFFSET))();
		}

		::System::Boolean get_PreviewMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_GET_PREVIEWMODE_OFFSET))(this);
		}

		::System::Void set_PreviewMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_SET_PREVIEWMODE_OFFSET))(this, a1);
		}

		::RPG::Client::LoopGenerateBehavior_GenerateConfig get__CurrentConfig()
		{
			return ((::RPG::Client::LoopGenerateBehavior_GenerateConfig(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_GET__CURRENTCONFIG_OFFSET))(this);
		}

		::System::Single get__CurrentSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_GET__CURRENTSPEED_OFFSET))(this);
		}

		::System::Boolean get__IsForward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_GET__ISFORWARD_OFFSET))(this);
		}

		::System::Single get__AnchorPositionOnTrack()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_GET__ANCHORPOSITIONONTRACK_OFFSET))(this);
		}

		::System::Single Method_3_B701F1B09526DB71(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_B701F1B09526DB71_OFFSET))(this, a1);
		}

		::System::Int32 get_CurrentConfigIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_GET_CURRENTCONFIGINDEX_OFFSET))(this);
		}

		::System::Void Method_3_66F42CE2EDA79734()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_66F42CE2EDA79734_OFFSET))(this);
		}

		::System::Void Method_3_AE0B725AB77F7E6F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_AE0B725AB77F7E6F_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_3_4EA6B1791DACA9CC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_4EA6B1791DACA9CC_OFFSET))(this);
		}

		::System::Void Method_3_8080E22F79F246F0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_8080E22F79F246F0_OFFSET))(this);
		}

		::System::Void Method_3_8080E22F79F246F0_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_8080E22F79F246F0_1_OFFSET))(this);
		}

		::System::Boolean Method_3_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::System::Void Method_3_7ED1A617F38325F4(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_7ED1A617F38325F4_OFFSET))(this, a1);
		}

		static ::System::Void Method_3_05CB392013C2B610(::System::Collections::Generic::List_1<::RPG::Client::LoopGenerateBehavior_RuntimeSlider*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::RPG::Client::LoopGenerateBehavior_RuntimeSlider*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_05CB392013C2B610_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AEE7D7192A910D28(::RPG::Client::LoopGenerateBehavior_RuntimeSlider* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::RPG::Client::LoopGenerateBehavior_RuntimeSlider*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_AEE7D7192A910D28_OFFSET))(a1, a2);
		}

		::System::Void Method_3_D0BD1377F2594D33()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_D0BD1377F2594D33_OFFSET))(this);
		}

		::System::Void Method_3_D0BD1377F2594D33_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_D0BD1377F2594D33_1_OFFSET))(this);
		}

		::System::Void Method_3_2E3C71AD8E78BD37(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_2E3C71AD8E78BD37_OFFSET))(this, a1);
		}

		::System::Void Method_3_2E3C71AD8E78BD37_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_2E3C71AD8E78BD37_1_OFFSET))(this, a1);
		}

		::System::Void Method_3_8858C2C146C0C88C(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_8858C2C146C0C88C_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_61929A3103595552()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_61929A3103595552_OFFSET))(this);
		}

		::System::Void Method_3_BC41A14DA3276F14(::RPG::Client::LoopGenerateBehavior_RuntimeSlider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LoopGenerateBehavior_RuntimeSlider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_BC41A14DA3276F14_OFFSET))(this, a1);
		}

		::System::Void Method_3_3CF43707BF2E9BBA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_3CF43707BF2E9BBA_OFFSET))(this);
		}

		::System::Void Method_3_41F91000B6D154D6(::RPG::Client::LoopGenerateBehavior_RuntimeSlider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LoopGenerateBehavior_RuntimeSlider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_41F91000B6D154D6_OFFSET))(this, a1);
		}

		::System::Boolean Method_3_83DA3EC57FF907F4()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_83DA3EC57FF907F4_OFFSET))(this);
		}

		::RPG::Client::LoopGenerateBehavior_Struct_2_2AD9EAB8D0AC0300 Method_3_3E8C6C27D3157980(::System::Single a1)
		{
			return ((::RPG::Client::LoopGenerateBehavior_Struct_2_2AD9EAB8D0AC0300(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_3E8C6C27D3157980_OFFSET))(this, a1);
		}

		::RPG::Client::LoopGenerateBehavior_RuntimeSlider* Method_3_26C3CEC3D50100E1(::RPG::Client::LoopGenerateBehavior_SliderTemplate a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::RPG::Client::LoopGenerateBehavior_RuntimeSlider*(*)(::PVOID, ::RPG::Client::LoopGenerateBehavior_SliderTemplate, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_26C3CEC3D50100E1_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::LoopGenerateBehavior_RuntimeSlider* Method_3_DB5DF1C74B5F8C15(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::RPG::Client::LoopGenerateBehavior_RuntimeSlider*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_DB5DF1C74B5F8C15_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean Method_3_E80E8B87D44B3447(::System::Int32& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_E80E8B87D44B3447_OFFSET))(this, a1);
		}

		::System::Boolean Method_3_5DF5B6CB5F171C10(::System::Int32 a1, ::System::Collections::Generic::List_1<::System::Int32>*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_5DF5B6CB5F171C10_OFFSET))(this, a1, a2);
		}

		::RPG::Client::LoopGenerateBehavior_RuntimeSlider* Method_3_8574F6654C7A1EE7()
		{
			return ((::RPG::Client::LoopGenerateBehavior_RuntimeSlider*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_8574F6654C7A1EE7_OFFSET))(this);
		}

		::RPG::Client::LoopGenerateBehavior_RuntimeSlider* Method_3_B1DACD7E8B88788E(::System::Boolean a1)
		{
			return ((::RPG::Client::LoopGenerateBehavior_RuntimeSlider*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_B1DACD7E8B88788E_OFFSET))(this, a1);
		}

		::System::Void Method_3_489605F44A3DA235(::RPG::Client::LoopGenerateBehavior_RuntimeSlider* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LoopGenerateBehavior_RuntimeSlider*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_489605F44A3DA235_OFFSET))(this, a1, a2);
		}

		::RPG::Client::LoopGenerateBehavior_RuntimeSlider* Method_3_343A8D0B9A80FA1B(::System::Int32 a1)
		{
			return ((::RPG::Client::LoopGenerateBehavior_RuntimeSlider*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_343A8D0B9A80FA1B_OFFSET))(this, a1);
		}

		::RPG::Client::LoopGenerateBehavior_RuntimeSlider* Method_3_343A8D0B9A80FA1B_1(::System::Int32 a1)
		{
			return ((::RPG::Client::LoopGenerateBehavior_RuntimeSlider*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_343A8D0B9A80FA1B_1_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LoopGenerateBehavior_RuntimeSlider*>* Method_3_86DAAF5E57B8D9C5(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LoopGenerateBehavior_RuntimeSlider*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_86DAAF5E57B8D9C5_OFFSET))(this, a1);
		}

		::System::Void Method_3_E87DB0AA7B6E1394(::System::Collections::Generic::List_1<::RPG::Client::LoopGenerateBehavior_RuntimeSlider*>* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::LoopGenerateBehavior_RuntimeSlider*>*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_E87DB0AA7B6E1394_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_B4399B858EBFA977(::RPG::Client::LoopGenerateBehavior_RuntimeSlider* a1, ::System::Single& a2, ::System::Single& a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LoopGenerateBehavior_RuntimeSlider*, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_B4399B858EBFA977_OFFSET))(this, a1, a2, a3);
		}

		::System::Single Method_3_50CF3DE66FC9EE5E(::RPG::Client::LoopGenerateBehavior_RuntimeSlider* a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::LoopGenerateBehavior_RuntimeSlider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_50CF3DE66FC9EE5E_OFFSET))(this, a1);
		}

		::System::Void Method_3_C093753911E3263F(::RPG::Client::LoopGenerateBehavior_RuntimeSlider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LoopGenerateBehavior_RuntimeSlider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_C093753911E3263F_OFFSET))(this, a1);
		}

		::System::Single Method_3_196844B4132EFADA(::RPG::Client::LoopGenerateBehavior_RuntimeSlider* a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::LoopGenerateBehavior_RuntimeSlider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_196844B4132EFADA_OFFSET))(this, a1);
		}

		static ::System::Boolean Method_3_7AABF16126468CE5(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_7AABF16126468CE5_OFFSET))(a1, a2, a3);
		}

		::RPG::Client::LoopGenerateBehavior_RuntimeSlider* Method_3_ECA2A63EDDD75AB6(::System::Int32 a1)
		{
			return ((::RPG::Client::LoopGenerateBehavior_RuntimeSlider*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_ECA2A63EDDD75AB6_OFFSET))(this, a1);
		}

		::System::Void Method_3_B8E82AFAD9F7F4B3(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_B8E82AFAD9F7F4B3_OFFSET))(this, a1);
		}

		::System::Void Method_3_97529D4ED7AD3741()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_97529D4ED7AD3741_OFFSET))(this);
		}

		::System::Boolean Method_3_81090DB796164975(::System::Int32 a1, ::System::Single& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_81090DB796164975_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_DEAC86EB2AD5D389()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_DEAC86EB2AD5D389_OFFSET))(this);
		}

		::System::Void Method_3_6946C610D47FE5F0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_6946C610D47FE5F0_OFFSET))(this);
		}

		::System::Void Method_3_5DB24FF26B3E6B25(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_5DB24FF26B3E6B25_OFFSET))(this, a1);
		}

		::System::Void Method_3_A1ADC999CFACEB89()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_A1ADC999CFACEB89_OFFSET))(this);
		}

		::System::Void Method_3_1FDDF0F8732BD1E7(::System::Int32 a1, ::System::Single a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_1FDDF0F8732BD1E7_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_6E9072C320FA29F4(::System::Int32 a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_6E9072C320FA29F4_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_2685B6183E614529(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_2685B6183E614529_OFFSET))(this, a1);
		}

		::System::Void Method_3_D09831639F615812(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_D09831639F615812_OFFSET))(this, a1);
		}

		::System::Single Method_3_F6F711795AB60FA2(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_F6F711795AB60FA2_OFFSET))(this, a1, a2);
		}

		::System::Single Method_3_96F4DD40F689F030(::UnityEngine::AnimationCurve* a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::AnimationCurve*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_96F4DD40F689F030_OFFSET))(this, a1, a2);
		}

		::System::Single Method_3_96F4DD40F689F030_1(::UnityEngine::AnimationCurve* a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::AnimationCurve*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_96F4DD40F689F030_1_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Boolean Method_3_6B1192ED4B83CD8F()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_6B1192ED4B83CD8F_OFFSET))(this);
		}

		::System::Void Method_3_84B92802FDAFF6C8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_84B92802FDAFF6C8_OFFSET))(this);
		}

		::System::Void Method_3_7C2C2820B36B9508()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_7C2C2820B36B9508_OFFSET))(this);
		}

		::System::Void Method_3_B681CCB7CA0E61C0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_B681CCB7CA0E61C0_OFFSET))(this);
		}

		::System::Void Method_3_2DF7969B85DC261B(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_2DF7969B85DC261B_OFFSET))(this, a1);
		}

		::System::Void Method_3_D5804A5743C3CF97(::System::Int32 a1, ::RPG::Client::LoopGenerateBehavior_RuntimeSlider* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::LoopGenerateBehavior_RuntimeSlider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_D5804A5743C3CF97_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_359F524347624371(::RPG::Client::LoopGenerateBehavior_RuntimeSlider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LoopGenerateBehavior_RuntimeSlider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_359F524347624371_OFFSET))(this, a1);
		}

		::System::Void Method_3_77322110BAB36133(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_77322110BAB36133_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_82E992240300FB30()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_82E992240300FB30_OFFSET))(this);
		}

		::System::Void Method_3_D339EFAB24ED44B0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_D339EFAB24ED44B0_OFFSET))(this);
		}

		::System::Boolean Method_3_1F48AB7B56BDD842(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_1F48AB7B56BDD842_OFFSET))(this, a1);
		}

		::System::Single Method_3_01C1B3BBD3D9744A(::UnityEngine::AnimationCurve* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_01C1B3BBD3D9744A_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::LoopGenerateMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::LoopGenerateMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}
	};
}
