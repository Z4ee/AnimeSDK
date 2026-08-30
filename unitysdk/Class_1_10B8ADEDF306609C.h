#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_10B8ADEDF306609C_METHOD_1_239127A8B01A1A3F_OFFSET UNITYSDK_OFFSET(0x1CA8C7E0)
#define CLASS_1_10B8ADEDF306609C__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA8C940)

inline static constexpr unsigned int Class_1_10B8ADEDF306609C_TypeDefinitionIndex = 13800;

class Class_1_10B8ADEDF306609C : public ::System::Object
{
public:
	::RPG::Client::TextID JFKMCIFGHLK; // 0x10
	::System::UInt32 HIHLLBFEONI; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_10B8ADEDF306609C__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_239127A8B01A1A3F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_10B8ADEDF306609C*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_10B8ADEDF306609C*&))((::PBYTE)hIl2Cpp + CLASS_1_10B8ADEDF306609C_METHOD_1_239127A8B01A1A3F_OFFSET))(a1, a2);
	}
};
