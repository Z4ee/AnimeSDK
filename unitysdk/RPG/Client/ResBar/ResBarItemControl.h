#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl_1.h"

class Class_0_16E4307DCC419505_1464;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class LocalizedText; }
namespace RPG::UINavigation { class UINavigationButton; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
template <typename T> class Class_1_D90286A3143EECEC;

#define RPG_CLIENT_RESBAR_RESBARITEMCONTROL__BINDING_OFFSET UNITYSDK_OFFSET(0xDEAEDB0)
#define RPG_CLIENT_RESBAR_RESBARITEMCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xDEB02F0)

namespace RPG::Client::ResBar
{
	inline static constexpr unsigned int ResBarItemControl_TypeDefinitionIndex = 79141;

	class ResBarItemControl : public ::Sofa::BaseSofaControl_1<::Class_0_16E4307DCC419505_1464*>
	{
	public:
		::UnityEngine::UI::Image* _Icon; // 0x70
		::RPG::Client::LocalizedText* _CountText; // 0x78
		::RPG::Client::AnimatorButton* _BtnDetail; // 0x80
		::UnityEngine::Transform* _BtnPlus; // 0x88
		::UnityEngine::Transform* _Splash; // 0x90
		::RPG::Client::LocalizedText* _TotalNumText; // 0x98
		::UnityEngine::Transform* _MaxTip; // 0xA0
		::UnityEngine::Transform* _MaxEffect; // 0xA8
		::RPG::UINavigation::UINavigationButton* _NavigationButton; // 0xB0
		::UnityEngine::Transform* _KeyMapInfo; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESBAR_RESBARITEMCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _Binding(::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_1464*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_1464*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESBAR_RESBARITEMCONTROL__BINDING_OFFSET))(this, a1);
		}
	};
}
