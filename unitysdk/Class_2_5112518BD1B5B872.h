#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_547;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_2_5112518BD1B5B872_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB298B50)
#define CLASS_2_5112518BD1B5B872_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xB2989D0)
#define CLASS_2_5112518BD1B5B872_METHOD_2_2DA90F020EB3A373_OFFSET UNITYSDK_OFFSET(0xB298A40)
#define CLASS_2_5112518BD1B5B872_METHOD_2_8919FC8A9BA0FD8F_OFFSET UNITYSDK_OFFSET(0xB2988A0)
#define CLASS_2_5112518BD1B5B872_METHOD_2_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0xB298980)
#define CLASS_2_5112518BD1B5B872_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB298940)
#define CLASS_2_5112518BD1B5B872_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB298C30)
#define CLASS_2_5112518BD1B5B872_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB298C70)
#define CLASS_2_5112518BD1B5B872_TICK_OFFSET UNITYSDK_OFFSET(0xB298680)
#define CLASS_2_5112518BD1B5B872__CTOR_OFFSET UNITYSDK_OFFSET(0xB298670)

inline static constexpr unsigned int Class_2_5112518BD1B5B872_TypeDefinitionIndex = 55160;

class Class_2_5112518BD1B5B872 : public ::Class_1_5F51D4049EA87B7B
{
public:
	static ::System::Int32* StaticGet_LPPOAPGGCBK()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_5112518BD1B5B872_TypeDefinitionIndex)->GetStaticField(0x7E70);
	}
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::Class_3_07C3C4D2990C49EE* NMMBJIFKJON; // 0x20
	::System::Boolean IONEGBLBPEA; // 0x28
	::System::Single CAGKLHHHCJK; // 0x2C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_2_5112518BD1B5B872__CTOR_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5112518BD1B5B872_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_8919FC8A9BA0FD8F(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::TaskConfig*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::TaskConfig*>*))((::PBYTE)hIl2Cpp + CLASS_2_5112518BD1B5B872_METHOD_2_8919FC8A9BA0FD8F_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5112518BD1B5B872_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Single Method_2_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5112518BD1B5B872_METHOD_2_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5112518BD1B5B872_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_2DA90F020EB3A373(::Class_0_16E4307DCC419505_547* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_547*))((::PBYTE)hIl2Cpp + CLASS_2_5112518BD1B5B872_METHOD_2_2DA90F020EB3A373_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5112518BD1B5B872_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5112518BD1B5B872_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5112518BD1B5B872_ONTASKRESET_OFFSET))(this);
	}
};
