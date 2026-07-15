#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UILayer.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class UIController; }
namespace System { class String; }

#define RPG_CLIENT_TUTORIALUIWRAPPER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x16FE04E0)
#define RPG_CLIENT_TUTORIALUIWRAPPER_GET_UILAYER_OFFSET UNITYSDK_OFFSET(0x16FE0500)
#define RPG_CLIENT_TUTORIALUIWRAPPER_SET_NAME_OFFSET UNITYSDK_OFFSET(0x16FE04F0)
#define RPG_CLIENT_TUTORIALUIWRAPPER_SET_UILAYER_OFFSET UNITYSDK_OFFSET(0x16FE0510)
#define RPG_CLIENT_TUTORIALUIWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x16FD72C0)

namespace RPG::Client
{
	inline static constexpr unsigned int TutorialUIWrapper_TypeDefinitionIndex = 65232;

	class TutorialUIWrapper : public ::System::Object
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10
		::RPG::Client::UILayer _UILayer_k__BackingField; // 0x18

		::System::Void _ctor(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALUIWRAPPER__CTOR_OFFSET))(this, a1);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALUIWRAPPER_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALUIWRAPPER_SET_NAME_OFFSET))(this, a1);
		}

		::RPG::Client::UILayer get_UILayer()
		{
			return ((::RPG::Client::UILayer(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALUIWRAPPER_GET_UILAYER_OFFSET))(this);
		}

		::System::Void set_UILayer(::RPG::Client::UILayer a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UILayer))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALUIWRAPPER_SET_UILAYER_OFFSET))(this, a1);
		}
	};
}
