#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_73.h"

class Class_1_E5B7864412CDC074;
class Class_5_AF65C3A968E836D2;
namespace MoleMole::Config { class ConfigHollowChessboard; }

#define CLASS_2_BC8F753F58C0DF80_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x1625AAD0)
#define CLASS_2_BC8F753F58C0DF80_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1625AB30)
#define CLASS_2_BC8F753F58C0DF80__CTOR_OFFSET UNITYSDK_OFFSET(0x1625AAC0)

inline static constexpr unsigned int Class_2_BC8F753F58C0DF80_TypeDefinitionIndex = 79441;

class Class_2_BC8F753F58C0DF80 : public ::Class_1_43BD383C98B4C0C5_73
{
public:
	::Class_1_E5B7864412CDC074* Field_2_2; // 0x10
	::Class_5_AF65C3A968E836D2* Field_2_0; // 0x18
	::MoleMole::Config::ConfigHollowChessboard* Field_2_1; // 0x20

	::System::Void _ctor(::Class_5_AF65C3A968E836D2* a1, ::MoleMole::Config::ConfigHollowChessboard* a2, ::Class_1_E5B7864412CDC074* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_AF65C3A968E836D2*, ::MoleMole::Config::ConfigHollowChessboard*, ::Class_1_E5B7864412CDC074*))((::PBYTE)hIl2Cpp + CLASS_2_BC8F753F58C0DF80__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BC8F753F58C0DF80_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC8F753F58C0DF80_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}
};
