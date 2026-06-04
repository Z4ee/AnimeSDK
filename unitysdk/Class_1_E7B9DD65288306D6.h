#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PamChatQuickFunctionType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class PamChatQuickFunctionConfigRow; }

#define CLASS_1_E7B9DD65288306D6_GET_NAME_OFFSET UNITYSDK_OFFSET(0x134B3930)
#define CLASS_1_E7B9DD65288306D6_GET_SENDTEXT_OFFSET UNITYSDK_OFFSET(0x134B3950)
#define CLASS_1_E7B9DD65288306D6_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x134B3910)
#define CLASS_1_E7B9DD65288306D6_SET_NAME_OFFSET UNITYSDK_OFFSET(0x134B3940)
#define CLASS_1_E7B9DD65288306D6_SET_SENDTEXT_OFFSET UNITYSDK_OFFSET(0x134B3960)
#define CLASS_1_E7B9DD65288306D6_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x134B3920)
#define CLASS_1_E7B9DD65288306D6__CTOR_OFFSET UNITYSDK_OFFSET(0x134B38E0)

inline static constexpr unsigned int Class_1_E7B9DD65288306D6_TypeDefinitionIndex = 59226;

class Class_1_E7B9DD65288306D6 : public ::System::Object
{
public:
	::RPG::Client::PamChatQuickFunctionType _Type_k__BackingField; // 0x10
	::RPG::Client::TextID _SendText_k__BackingField; // 0x18
	::RPG::Client::TextID _Name_k__BackingField; // 0x28

	::System::Void _ctor(::RPG::GameCore::PamChatQuickFunctionConfigRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PamChatQuickFunctionConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_E7B9DD65288306D6__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::PamChatQuickFunctionType get_Type()
	{
		return ((::RPG::Client::PamChatQuickFunctionType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7B9DD65288306D6_GET_TYPE_OFFSET))(this);
	}

	::System::Void set_Type(::RPG::Client::PamChatQuickFunctionType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PamChatQuickFunctionType))((::PBYTE)hIl2Cpp + CLASS_1_E7B9DD65288306D6_SET_TYPE_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_Name()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7B9DD65288306D6_GET_NAME_OFFSET))(this);
	}

	::System::Void set_Name(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_E7B9DD65288306D6_SET_NAME_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_SendText()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7B9DD65288306D6_GET_SENDTEXT_OFFSET))(this);
	}

	::System::Void set_SendText(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_E7B9DD65288306D6_SET_SENDTEXT_OFFSET))(this, a1);
	}
};
