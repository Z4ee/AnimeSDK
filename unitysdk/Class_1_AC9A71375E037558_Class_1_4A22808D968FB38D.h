#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_355;
class Class_1_AC9A71375E037558;
namespace System { class Action; }
namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_AC9A71375E037558_CLASS_1_4A22808D968FB38D_METHOD_1_509B1C3C859EAFB5_OFFSET UNITYSDK_OFFSET(0x16726000)
#define CLASS_1_AC9A71375E037558_CLASS_1_4A22808D968FB38D_METHOD_1_6D658AC13DFA5224_OFFSET UNITYSDK_OFFSET(0x16726030)
#define CLASS_1_AC9A71375E037558_CLASS_1_4A22808D968FB38D_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x167261C0)
#define CLASS_1_AC9A71375E037558_CLASS_1_4A22808D968FB38D__CTOR_OFFSET UNITYSDK_OFFSET(0x16725FF0)

inline static constexpr unsigned int Class_1_AC9A71375E037558_Class_1_4A22808D968FB38D_TypeDefinitionIndex = 50521;

class Class_1_AC9A71375E037558_Class_1_4A22808D968FB38D : public ::System::Object
{
public:
	::Class_1_AC9A71375E037558* Field_1_1; // 0x10
	::System::Action* Field_1_3; // 0x18
	::Il2CppArray<::System::Single>* Field_1_0; // 0x20
	::System::Action_1<::System::Exception*>* Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC9A71375E037558_CLASS_1_4A22808D968FB38D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_509B1C3C859EAFB5(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_1_AC9A71375E037558_CLASS_1_4A22808D968FB38D_METHOD_1_509B1C3C859EAFB5_OFFSET))(this, a1);
	}

	::System::Void Method_1_6D658AC13DFA5224(::Class_0_16E4307DCC419505_355* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_355*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AC9A71375E037558_CLASS_1_4A22808D968FB38D_METHOD_1_6D658AC13DFA5224_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC9A71375E037558_CLASS_1_4A22808D968FB38D_METHOD_1_F8C7231308CD2C82_OFFSET))(this);
	}
};
