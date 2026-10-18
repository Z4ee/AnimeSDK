#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl_1.h"

class Class_0_16E4307DCC419505_1466;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class LocalizedText; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
template <typename T> class Class_1_D90286A3143EECEC;

#define RPG_CLIENT_COMMONBUTTON_COMMONBUTTONCONTROL__BINDING_OFFSET UNITYSDK_OFFSET(0xCBA56B0)
#define RPG_CLIENT_COMMONBUTTON_COMMONBUTTONCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xCBA60B0)

namespace RPG::Client::CommonButton
{
	inline static constexpr unsigned int CommonButtonControl_TypeDefinitionIndex = 81244;

	class CommonButtonControl : public ::Sofa::BaseSofaControl_1<::Class_0_16E4307DCC419505_1466*>
	{
	public:
		::RPG::Client::AnimatorButton* _Button; // 0x70
		::System::Boolean _KeepPrefabIcon; // 0x78
		::UnityEngine::UI::Image* _Icon; // 0x80
		::System::Boolean _KeepPrefabLabel; // 0x88
		::RPG::Client::LocalizedText* _Label; // 0x90
		::UnityEngine::Transform* _RedDot; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONBUTTON_COMMONBUTTONCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _Binding(::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_1466*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_1466*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONBUTTON_COMMONBUTTONCONTROL__BINDING_OFFSET))(this, a1);
		}
	};
}
