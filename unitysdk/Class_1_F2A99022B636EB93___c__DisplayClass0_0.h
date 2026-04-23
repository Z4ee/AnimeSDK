#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_791;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F2A99022B636EB93___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x97AA7A0)
#define CLASS_1_F2A99022B636EB93___C__DISPLAYCLASS0_0__EXECUTE_B__0_OFFSET UNITYSDK_OFFSET(0x97AACB0)

inline static constexpr unsigned int Class_1_F2A99022B636EB93___c__DisplayClass0_0_TypeDefinitionIndex = 61863;

class Class_1_F2A99022B636EB93___c__DisplayClass0_0 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_791*>* displayActions; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F2A99022B636EB93___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
	}

	::System::Void _Execute_b__0(::Class_0_16E4307DCC419505_791* displayAction)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_791*))((::PBYTE)hIl2Cpp + CLASS_1_F2A99022B636EB93___C__DISPLAYCLASS0_0__EXECUTE_B__0_OFFSET))(this, displayAction);
	}
};
