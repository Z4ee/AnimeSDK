#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PamChatQuickFunctionType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class PamChatQuickFunctionConfigRow; }

#define CLASS_1_7CC98C6000D59BCE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x97B0990)
#define CLASS_1_7CC98C6000D59BCE_GET_SENDTEXT_OFFSET UNITYSDK_OFFSET(0x97B09B0)
#define CLASS_1_7CC98C6000D59BCE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x97B0970)
#define CLASS_1_7CC98C6000D59BCE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x97B09A0)
#define CLASS_1_7CC98C6000D59BCE_SET_SENDTEXT_OFFSET UNITYSDK_OFFSET(0x97B09C0)
#define CLASS_1_7CC98C6000D59BCE_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x97B0980)
#define CLASS_1_7CC98C6000D59BCE__CTOR_OFFSET UNITYSDK_OFFSET(0x97B0940)

inline static constexpr unsigned int Class_1_7CC98C6000D59BCE_TypeDefinitionIndex = 58296;

class Class_1_7CC98C6000D59BCE : public ::System::Object
{
public:
	::RPG::Client::PamChatQuickFunctionType _Type_k__BackingField; // 0x10
	::RPG::Client::TextID _Name_k__BackingField; // 0x18
	::RPG::Client::TextID _SendText_k__BackingField; // 0x28

	::System::Void _ctor(::RPG::GameCore::PamChatQuickFunctionConfigRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PamChatQuickFunctionConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_7CC98C6000D59BCE__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::PamChatQuickFunctionType get_Type()
	{
		return ((::RPG::Client::PamChatQuickFunctionType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7CC98C6000D59BCE_GET_TYPE_OFFSET))(this);
	}

	::System::Void set_Type(::RPG::Client::PamChatQuickFunctionType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PamChatQuickFunctionType))((::PBYTE)hIl2Cpp + CLASS_1_7CC98C6000D59BCE_SET_TYPE_OFFSET))(this, value);
	}

	::RPG::Client::TextID get_Name()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7CC98C6000D59BCE_GET_NAME_OFFSET))(this);
	}

	::System::Void set_Name(::RPG::Client::TextID value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_7CC98C6000D59BCE_SET_NAME_OFFSET))(this, value);
	}

	::RPG::Client::TextID get_SendText()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7CC98C6000D59BCE_GET_SENDTEXT_OFFSET))(this);
	}

	::System::Void set_SendText(::RPG::Client::TextID value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_7CC98C6000D59BCE_SET_SENDTEXT_OFFSET))(this, value);
	}
};
