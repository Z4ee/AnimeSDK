#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_BA16E9393901F240_METHOD_1_2A8D0F3828218E1E_1_OFFSET UNITYSDK_OFFSET(0x17118030)
#define CLASS_1_BA16E9393901F240_METHOD_1_2A8D0F3828218E1E_OFFSET UNITYSDK_OFFSET(0x17117F50)
#define CLASS_1_BA16E9393901F240_METHOD_1_C9B1A5C2559C8ED0_1_OFFSET UNITYSDK_OFFSET(0x171180B0)
#define CLASS_1_BA16E9393901F240_METHOD_1_C9B1A5C2559C8ED0_OFFSET UNITYSDK_OFFSET(0x17117FD0)
#define CLASS_1_BA16E9393901F240__CTOR_OFFSET UNITYSDK_OFFSET(0x17118110)

inline static constexpr unsigned int Class_1_BA16E9393901F240_TypeDefinitionIndex = 79735;

class Class_1_BA16E9393901F240 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BA16E9393901F240__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2A8D0F3828218E1E(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_BA16E9393901F240_METHOD_1_2A8D0F3828218E1E_OFFSET))(this, a1);
	}

	::System::Void Method_1_C9B1A5C2559C8ED0(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BA16E9393901F240_METHOD_1_C9B1A5C2559C8ED0_OFFSET))(this, a1);
	}

	::System::Void Method_1_2A8D0F3828218E1E_1(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_BA16E9393901F240_METHOD_1_2A8D0F3828218E1E_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_C9B1A5C2559C8ED0_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BA16E9393901F240_METHOD_1_C9B1A5C2559C8ED0_1_OFFSET))(this, a1);
	}
};
