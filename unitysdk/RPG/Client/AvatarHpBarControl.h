#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl_1.h"

class Class_0_16E4307DCC419505_677;
namespace UnityEngine::UI { class Slider; }
template <typename T> class Class_1_D90286A3143EECEC;

#define RPG_CLIENT_AVATARHPBARCONTROL__BINDHP_OFFSET UNITYSDK_OFFSET(0xC8251A0)
#define RPG_CLIENT_AVATARHPBARCONTROL__BINDING_OFFSET UNITYSDK_OFFSET(0xC825140)
#define RPG_CLIENT_AVATARHPBARCONTROL__BINDPLUSHP_OFFSET UNITYSDK_OFFSET(0xC825870)
#define RPG_CLIENT_AVATARHPBARCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xC825C00)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarHpBarControl_TypeDefinitionIndex = 60227;

	class AvatarHpBarControl : public ::Sofa::BaseSofaControl_1<::Class_0_16E4307DCC419505_677*>
	{
	public:
		// static const ::System::Single _DangerHpRatioThreshold; // 0x0
		::UnityEngine::UI::Slider* _HpDangerSlider; // 0x58
		::UnityEngine::UI::Slider* _HpNormalSlider; // 0x60
		::UnityEngine::UI::Slider* _HpPlusSlider; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHPBARCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _Binding(::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_677*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_677*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHPBARCONTROL__BINDING_OFFSET))(this, a1);
		}

		::System::Void _BindHp(::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_677*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_677*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHPBARCONTROL__BINDHP_OFFSET))(this, a1);
		}

		::System::Void _BindPlusHp(::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_677*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_677*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHPBARCONTROL__BINDPLUSHP_OFFSET))(this, a1);
		}
	};
}
