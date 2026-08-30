#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChenLingEnchantRow; }

#define CLASS_1_804D400E288715A8_GET_ID_OFFSET UNITYSDK_OFFSET(0x15B15EE0)
#define CLASS_1_804D400E288715A8_METHOD_1_3344DD6AC1F06686_OFFSET UNITYSDK_OFFSET(0x15B15F00)
#define CLASS_1_804D400E288715A8_METHOD_1_BD83D9A311EA4A81_1_OFFSET UNITYSDK_OFFSET(0x15B16020)
#define CLASS_1_804D400E288715A8_METHOD_1_BD83D9A311EA4A81_OFFSET UNITYSDK_OFFSET(0x15B15F60)
#define CLASS_1_804D400E288715A8_SET_ID_OFFSET UNITYSDK_OFFSET(0x15B15EF0)
#define CLASS_1_804D400E288715A8__CTOR_OFFSET UNITYSDK_OFFSET(0x15B15EC0)

inline static constexpr unsigned int Class_1_804D400E288715A8_TypeDefinitionIndex = 61524;

class Class_1_804D400E288715A8 : public ::System::Object
{
public:
	::System::UInt32 _ID_k__BackingField; // 0x10

	::System::Void _ctor(::RPG::GameCore::ChenLingEnchantRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingEnchantRow*))((::PBYTE)hIl2Cpp + CLASS_1_804D400E288715A8__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_804D400E288715A8_GET_ID_OFFSET))(this);
	}

	::System::Void set_ID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_804D400E288715A8_SET_ID_OFFSET))(this, a1);
	}

	::RPG::GameCore::ChenLingEnchantRow* Method_1_3344DD6AC1F06686()
	{
		return ((::RPG::GameCore::ChenLingEnchantRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_804D400E288715A8_METHOD_1_3344DD6AC1F06686_OFFSET))(this);
	}

	::RPG::Client::TextID Method_1_BD83D9A311EA4A81()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_804D400E288715A8_METHOD_1_BD83D9A311EA4A81_OFFSET))(this);
	}

	::RPG::Client::TextID Method_1_BD83D9A311EA4A81_1()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_804D400E288715A8_METHOD_1_BD83D9A311EA4A81_1_OFFSET))(this);
	}
};
