#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PamChatQuickFunctionType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class PamChatQuickFunctionConfigRow; }
namespace System { class String; }

#define CLASS_1_7CC98C6000D59BCE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x8A72440)
#define CLASS_1_7CC98C6000D59BCE_GET_SENDTEXT_OFFSET UNITYSDK_OFFSET(0x8A72460)
#define CLASS_1_7CC98C6000D59BCE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x8A72420)
#define CLASS_1_7CC98C6000D59BCE_METHOD_1_7F54D2E1DDD7728B_OFFSET UNITYSDK_OFFSET(0x8A72480)
#define CLASS_1_7CC98C6000D59BCE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x8A72450)
#define CLASS_1_7CC98C6000D59BCE_SET_SENDTEXT_OFFSET UNITYSDK_OFFSET(0x8A72470)
#define CLASS_1_7CC98C6000D59BCE_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x8A72430)
#define CLASS_1_7CC98C6000D59BCE__CTOR_OFFSET UNITYSDK_OFFSET(0x8A723F0)

inline static constexpr unsigned int Class_1_7CC98C6000D59BCE_TypeDefinitionIndex = 51359;

class Class_1_7CC98C6000D59BCE : public ::System::Object
{
public:
	::RPG::Client::TextID _SendText_k__BackingField; // 0x10
	::RPG::Client::PamChatQuickFunctionType _Type_k__BackingField; // 0x20
	::RPG::Client::TextID _Name_k__BackingField; // 0x28

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

	static ::System::String* Method_1_7F54D2E1DDD7728B(::RPG::Client::PamChatQuickFunctionType a1)
	{
		return ((::System::String*(*)(::RPG::Client::PamChatQuickFunctionType))((::PBYTE)hIl2Cpp + CLASS_1_7CC98C6000D59BCE_METHOD_1_7F54D2E1DDD7728B_OFFSET))(a1);
	}
};
