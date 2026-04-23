#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChenLingEnchantRow; }

#define CLASS_1_1B7044A592B17773_GET_ID_OFFSET UNITYSDK_OFFSET(0x9830070)
#define CLASS_1_1B7044A592B17773_METHOD_1_4EC0B5BFB0508F6B_OFFSET UNITYSDK_OFFSET(0x9830090)
#define CLASS_1_1B7044A592B17773_METHOD_1_A40738130934C79F_1_OFFSET UNITYSDK_OFFSET(0x9830170)
#define CLASS_1_1B7044A592B17773_METHOD_1_A40738130934C79F_OFFSET UNITYSDK_OFFSET(0x98300F0)
#define CLASS_1_1B7044A592B17773_SET_ID_OFFSET UNITYSDK_OFFSET(0x9830080)
#define CLASS_1_1B7044A592B17773__CTOR_OFFSET UNITYSDK_OFFSET(0x9830050)

inline static constexpr unsigned int Class_1_1B7044A592B17773_TypeDefinitionIndex = 56654;

class Class_1_1B7044A592B17773 : public ::System::Object
{
public:
	::System::UInt32 _ID_k__BackingField; // 0x10

	::System::Void _ctor(::RPG::GameCore::ChenLingEnchantRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingEnchantRow*))((::PBYTE)hIl2Cpp + CLASS_1_1B7044A592B17773__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B7044A592B17773_GET_ID_OFFSET))(this);
	}

	::System::Void set_ID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1B7044A592B17773_SET_ID_OFFSET))(this, value);
	}

	::RPG::GameCore::ChenLingEnchantRow* Method_1_4EC0B5BFB0508F6B()
	{
		return ((::RPG::GameCore::ChenLingEnchantRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B7044A592B17773_METHOD_1_4EC0B5BFB0508F6B_OFFSET))(this);
	}

	::RPG::Client::TextID Method_1_A40738130934C79F()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B7044A592B17773_METHOD_1_A40738130934C79F_OFFSET))(this);
	}

	::RPG::Client::TextID Method_1_A40738130934C79F_1()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B7044A592B17773_METHOD_1_A40738130934C79F_1_OFFSET))(this);
	}
};
