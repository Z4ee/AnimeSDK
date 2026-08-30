#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class DamageTextStyle;
namespace RPG::Client { class SimpleText; }

#define RPG_CLIENT_SIMPLETEXTSTYLECONTROLLER_APPLYSTYLE_OFFSET UNITYSDK_OFFSET(0x196C8FD0)
#define RPG_CLIENT_SIMPLETEXTSTYLECONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x196C8E40)
#define RPG_CLIENT_SIMPLETEXTSTYLECONTROLLER_GET_SIMPLETEXT_OFFSET UNITYSDK_OFFSET(0x196C8D90)
#define RPG_CLIENT_SIMPLETEXTSTYLECONTROLLER_SETOUTLINE1WIDTH_OFFSET UNITYSDK_OFFSET(0x196C8F60)
#define RPG_CLIENT_SIMPLETEXTSTYLECONTROLLER_SETSTYLE_OFFSET UNITYSDK_OFFSET(0x196C8E90)
#define RPG_CLIENT_SIMPLETEXTSTYLECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x196C9020)

namespace RPG::Client
{
	inline static constexpr unsigned int SimpleTextStyleController_TypeDefinitionIndex = 72055;

	class SimpleTextStyleController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::DamageTextStyle* _Style; // 0x18
		::RPG::Client::SimpleText* OPOGIAMONAF; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTSTYLECONTROLLER__CTOR_OFFSET))(this);
		}

		::RPG::Client::SimpleText* get_SimpleText()
		{
			return ((::RPG::Client::SimpleText*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTSTYLECONTROLLER_GET_SIMPLETEXT_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTSTYLECONTROLLER_AWAKE_OFFSET))(this);
		}

		::System::Void SetStyle(::DamageTextStyle* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DamageTextStyle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTSTYLECONTROLLER_SETSTYLE_OFFSET))(this, a1);
		}

		::System::Void SetOutline1Width(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTSTYLECONTROLLER_SETOUTLINE1WIDTH_OFFSET))(this, a1);
		}

		::System::Void ApplyStyle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTSTYLECONTROLLER_APPLYSTYLE_OFFSET))(this);
		}
	};
}
