#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

namespace MoleMole { class TurnBattleUnitBase; }

#define CLASS_2_30AC6D08929031AC_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xCD680A0)
#define CLASS_2_30AC6D08929031AC_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0xCD68190)
#define CLASS_2_30AC6D08929031AC_METHOD_2_C5FD96584F04303F_OFFSET UNITYSDK_OFFSET(0xCD68350)
#define CLASS_2_30AC6D08929031AC_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xCD682B0)
#define CLASS_2_30AC6D08929031AC_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xCD68220)
#define CLASS_2_30AC6D08929031AC__CCTOR_OFFSET UNITYSDK_OFFSET(0xCD68110)
#define CLASS_2_30AC6D08929031AC__CTOR_OFFSET UNITYSDK_OFFSET(0xCD68180)

inline static constexpr unsigned int Class_2_30AC6D08929031AC_TypeDefinitionIndex = 55977;

class Class_2_30AC6D08929031AC : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_2 = 0x134; // 0x0
	::MoleMole::TurnBattleUnitBase* Field_2_1; // 0x20
	::System::Single Field_2_0; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_30AC6D08929031AC__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_30AC6D08929031AC__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_30AC6D08929031AC_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_30AC6D08929031AC_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_30AC6D08929031AC_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_30AC6D08929031AC_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_C5FD96584F04303F(::System::Single a1, ::MoleMole::TurnBattleUnitBase* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::MoleMole::TurnBattleUnitBase*))((::PBYTE)hIl2Cpp + CLASS_2_30AC6D08929031AC_METHOD_2_C5FD96584F04303F_OFFSET))(this, a1, a2);
	}
};
