#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/LimaoNewsEmployeeStateType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_C0A429D585B22054_METHOD_1_0131B28D046A5D7C_OFFSET UNITYSDK_OFFSET(0x1CEC1430)
#define CLASS_1_C0A429D585B22054__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEC1610)

inline static constexpr unsigned int Class_1_C0A429D585B22054_TypeDefinitionIndex = 13975;

class Class_1_C0A429D585B22054 : public ::System::Object
{
public:
	::System::UInt32 LPNBEANGIGE; // 0x10
	::System::UInt32 CNHDBLLCFFB; // 0x14
	::RPG::Client::TextID EJJIJCCPJHP; // 0x18
	::RPG::GameCore::LimaoNewsEmployeeStateType BKEMOJMOLBB; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0A429D585B22054__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_0131B28D046A5D7C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_C0A429D585B22054*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_C0A429D585B22054*&))((::PBYTE)hIl2Cpp + CLASS_1_C0A429D585B22054_METHOD_1_0131B28D046A5D7C_OFFSET))(a1, a2);
	}
};
