#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceBuffName.h"
#include "unitysdk/System/Object.h"

class Class_1_7686EC5B8E7BB729;
class Class_2_21AD365C113DC484;
class Class_2_F3C45F1FC7349B6E;
namespace RPG::GameCore { class CakeRaceBuffConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D8C7E5539A252BC5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C298880)
#define CLASS_1_D8C7E5539A252BC5_METHOD_1_2C88F69FC05088B6_OFFSET UNITYSDK_OFFSET(0x1C29B790)
#define CLASS_1_D8C7E5539A252BC5_METHOD_1_34F044103B72BF90_OFFSET UNITYSDK_OFFSET(0x1C27AE10)
#define CLASS_1_D8C7E5539A252BC5_METHOD_1_48E304199FFFF1EE_OFFSET UNITYSDK_OFFSET(0x1C29BC10)
#define CLASS_1_D8C7E5539A252BC5_METHOD_1_8D61BE16C9463302_OFFSET UNITYSDK_OFFSET(0x1C29BCC0)
#define CLASS_1_D8C7E5539A252BC5_METHOD_1_AE63CEA86E741786_OFFSET UNITYSDK_OFFSET(0x1C297F60)
#define CLASS_1_D8C7E5539A252BC5_METHOD_1_BDB7EC2588B532AB_OFFSET UNITYSDK_OFFSET(0x1C29B6E0)
#define CLASS_1_D8C7E5539A252BC5__CTOR_OFFSET UNITYSDK_OFFSET(0x1C29B5F0)

inline static constexpr unsigned int Class_1_D8C7E5539A252BC5_TypeDefinitionIndex = 36600;

class Class_1_D8C7E5539A252BC5 : public ::System::Object
{
public:
	::Class_2_F3C45F1FC7349B6E* PDENFEFCAGN; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* BJBKBDJFBMB; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_1_7686EC5B8E7BB729*>*>* MGLAMPIIONC; // 0x20

	::System::Void _ctor(::Class_2_F3C45F1FC7349B6E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_1_D8C7E5539A252BC5__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_D8C7E5539A252BC5* Method_1_AE63CEA86E741786(::Class_2_F3C45F1FC7349B6E* a1)
	{
		return ((::Class_1_D8C7E5539A252BC5*(*)(::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_1_D8C7E5539A252BC5_METHOD_1_AE63CEA86E741786_OFFSET))(a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8C7E5539A252BC5_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_BDB7EC2588B532AB(::Class_2_21AD365C113DC484* a1, ::Il2CppArray<::RPG::GameCore::CakeRaceBuffConfig*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_21AD365C113DC484*, ::Il2CppArray<::RPG::GameCore::CakeRaceBuffConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_D8C7E5539A252BC5_METHOD_1_BDB7EC2588B532AB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2C88F69FC05088B6(::Class_2_21AD365C113DC484* a1, ::RPG::GameCore::CakeRaceBuffConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_21AD365C113DC484*, ::RPG::GameCore::CakeRaceBuffConfig*))((::PBYTE)hIl2Cpp + CLASS_1_D8C7E5539A252BC5_METHOD_1_2C88F69FC05088B6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8D61BE16C9463302()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8C7E5539A252BC5_METHOD_1_8D61BE16C9463302_OFFSET))(this);
	}

	::System::Void Method_1_34F044103B72BF90(::System::Int32 a1, ::Il2CppArray<::RPG::GameCore::CakeRaceBuffName>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::RPG::GameCore::CakeRaceBuffName>*))((::PBYTE)hIl2Cpp + CLASS_1_D8C7E5539A252BC5_METHOD_1_34F044103B72BF90_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_1_7686EC5B8E7BB729*>* Method_1_48E304199FFFF1EE(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_7686EC5B8E7BB729*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D8C7E5539A252BC5_METHOD_1_48E304199FFFF1EE_OFFSET))(this, a1);
	}
};
