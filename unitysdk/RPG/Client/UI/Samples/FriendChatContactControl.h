#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl_1.h"

class Class_0_16E4307DCC419505_1293;
namespace RPG::Client { class LocalizedText; }
namespace RPG::UINavigation { class UINavigationButton; }
namespace UnityEngine::UI { class Image; }
template <typename T> class Class_1_D90286A3143EECEC;

#define RPG_CLIENT_UI_SAMPLES_FRIENDCHATCONTACTCONTROL__BINDING_OFFSET UNITYSDK_OFFSET(0xE402DB0)
#define RPG_CLIENT_UI_SAMPLES_FRIENDCHATCONTACTCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xE403480)

namespace RPG::Client::Ui::Samples
{
	inline static constexpr unsigned int FriendChatContactControl_TypeDefinitionIndex = 73432;

	class FriendChatContactControl : public ::Sofa::BaseSofaControl_1<::Class_0_16E4307DCC419505_1293*>
	{
	public:
		::UnityEngine::UI::Image* _AvatarImage; // 0x70
		::RPG::Client::LocalizedText* _NameText; // 0x78
		::RPG::Client::LocalizedText* _LevelText; // 0x80
		::RPG::UINavigation::UINavigationButton* _UnreadButton; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_FRIENDCHATCONTACTCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _Binding(::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_1293*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_1293*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_FRIENDCHATCONTACTCONTROL__BINDING_OFFSET))(this, a1);
		}
	};
}
