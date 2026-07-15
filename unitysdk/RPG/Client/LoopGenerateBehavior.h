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

#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_GET_CURRENTCONFIGINDEX_OFFSET UNITYSDK_OFFSET(0x15BE68F0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_GET_PREVIEWMODE_OFFSET UNITYSDK_OFFSET(0x15BE66A0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_GET__CURRENTCONFIG_OFFSET UNITYSDK_OFFSET(0x15BE66C0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_GET__CURRENTSPEED_OFFSET UNITYSDK_OFFSET(0x15BE6870)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_GET__ISFORWARD_OFFSET UNITYSDK_OFFSET(0x15BE6900)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0x15BE67F0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_07470E244E8D2DC0_OFFSET UNITYSDK_OFFSET(0x15BE8260)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_0DE0877707CBEC83_OFFSET UNITYSDK_OFFSET(0x15BE8A60)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_14CC93EEBE7DC8CE_OFFSET UNITYSDK_OFFSET(0x15BE7840)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x15BE73F0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x15BE90D0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x15BE7690)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x15BE6970)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x15BE75D0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0x15BE7630)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_4343F372F34C05BF_3_OFFSET UNITYSDK_OFFSET(0x15BE76D0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_4343F372F34C05BF_4_OFFSET UNITYSDK_OFFSET(0x15BE7730)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x15BE6F60)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_4C288C0C3DC7B4CA_OFFSET UNITYSDK_OFFSET(0x15BE6FD0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_7014E71C60BDE051_OFFSET UNITYSDK_OFFSET(0x15BE8900)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x15BE6DB0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_9CA35E5BF1A50E77_OFFSET UNITYSDK_OFFSET(0x15BE8820)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_A1781348F0A89177_OFFSET UNITYSDK_OFFSET(0x15BE6D40)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_B3A3DFDFFD8F3DB1_OFFSET UNITYSDK_OFFSET(0x15BE7FF0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_CA604B8DCE366A4E_OFFSET UNITYSDK_OFFSET(0x15BE8CD0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_SET_PREVIEWMODE_OFFSET UNITYSDK_OFFSET(0x15BE66B0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0x15BE7790)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x15BE91D0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x15BE9130)

namespace RPG::Client
{
	inline static constexpr unsigned int LoopGenerateBehavior_TypeDefinitionIndex = 67716;

	class LoopGenerateBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		static ::System::Int32* StaticGet__MaxLoopCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LoopGenerateBehavior_TypeDefinitionIndex)->GetStaticField(0xA7E0);
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

		::System::Int32 get_CurrentConfigIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_GET_CURRENTCONFIGINDEX_OFFSET))(this);
		}

		::System::Boolean get__IsForward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_GET__ISFORWARD_OFFSET))(this);
		}

		::System::Void Method_3_4307B2A4B4A12C1A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_4307B2A4B4A12C1A_OFFSET))(this);
		}

		::System::Void Method_3_A1781348F0A89177()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_A1781348F0A89177_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_3_2450CFC043E97F54()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_2450CFC043E97F54_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET))(this);
		}

		::System::Boolean Method_3_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_4343F372F34C05BF_3_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_4343F372F34C05BF_4_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::System::Void Method_3_14CC93EEBE7DC8CE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_14CC93EEBE7DC8CE_OFFSET))(this, a1);
		}

		::System::Void Method_3_B3A3DFDFFD8F3DB1(::RPG::Client::LoopGenerateBehavior_RuntimeSlider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LoopGenerateBehavior_RuntimeSlider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_B3A3DFDFFD8F3DB1_OFFSET))(this, a1);
		}

		::System::Boolean Method_3_9CA35E5BF1A50E77()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_9CA35E5BF1A50E77_OFFSET))(this);
		}

		::RPG::Client::LoopGenerateBehavior_Struct_2_2AD9EAB8D0AC0300 Method_3_7014E71C60BDE051(::System::Single a1)
		{
			return ((::RPG::Client::LoopGenerateBehavior_Struct_2_2AD9EAB8D0AC0300(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_7014E71C60BDE051_OFFSET))(this, a1);
		}

		::RPG::Client::LoopGenerateBehavior_RuntimeSlider* Method_3_0DE0877707CBEC83(::RPG::Client::LoopGenerateBehavior_SliderTemplate a1)
		{
			return ((::RPG::Client::LoopGenerateBehavior_RuntimeSlider*(*)(::PVOID, ::RPG::Client::LoopGenerateBehavior_SliderTemplate))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_0DE0877707CBEC83_OFFSET))(this, a1);
		}

		::System::Void Method_3_4C288C0C3DC7B4CA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_4C288C0C3DC7B4CA_OFFSET))(this);
		}

		::RPG::Client::LoopGenerateBehavior_RuntimeSlider* Method_3_07470E244E8D2DC0()
		{
			return ((::RPG::Client::LoopGenerateBehavior_RuntimeSlider*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_07470E244E8D2DC0_OFFSET))(this);
		}

		::System::Void Method_3_97D83E4CB3B11935()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_97D83E4CB3B11935_OFFSET))(this);
		}

		::System::Void Method_3_CA604B8DCE366A4E(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_CA604B8DCE366A4E_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_2685B6183E614529(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_METHOD_3_2685B6183E614529_OFFSET))(this, a1);
		}

		::RPG::Client::LoopGenerateMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::LoopGenerateMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}
	};
}
