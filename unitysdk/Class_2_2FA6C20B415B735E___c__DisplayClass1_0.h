#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_2FA6C20B415B735E;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_2FA6C20B415B735E___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17087830)
#define CLASS_2_2FA6C20B415B735E___C__DISPLAYCLASS1_0__ONTASKBEGIN_B__0_OFFSET UNITYSDK_OFFSET(0x17087D40)

inline static constexpr unsigned int Class_2_2FA6C20B415B735E___c__DisplayClass1_0_TypeDefinitionIndex = 53175;

class Class_2_2FA6C20B415B735E___c__DisplayClass1_0 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* mainMissionIDList; // 0x10
	::Class_2_2FA6C20B415B735E* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2FA6C20B415B735E___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2FA6C20B415B735E___C__DISPLAYCLASS1_0__ONTASKBEGIN_B__0_OFFSET))(this);
	}
};
