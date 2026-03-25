#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnviromentControlPriority.h"
#include "unitysdk/System/Object.h"

class Class_1_63A76FE4E2C52F9B;
class Class_1_EAF7984A8FAD6BE4;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_1_36482E09B481A30B_Class_1_D8DC37582ADF31CC;

#define CLASS_1_36482E09B481A30B_METHOD_1_001CC259DF2D6DE5_OFFSET UNITYSDK_OFFSET(0x10ABC780)
#define CLASS_1_36482E09B481A30B_METHOD_1_1561BFA77991A03A_OFFSET UNITYSDK_OFFSET(0x10ABBEB0)
#define CLASS_1_36482E09B481A30B_METHOD_1_205C1376CE7E468F_OFFSET UNITYSDK_OFFSET(0x10ABC000)
#define CLASS_1_36482E09B481A30B_METHOD_1_56055B445D3630C6_OFFSET UNITYSDK_OFFSET(0x10ABBBD0)
#define CLASS_1_36482E09B481A30B_METHOD_1_6747250BC2D13457_OFFSET UNITYSDK_OFFSET(0x10ABC2C0)
#define CLASS_1_36482E09B481A30B_METHOD_1_73052712910A9EE7_OFFSET UNITYSDK_OFFSET(0x10ABC540)
#define CLASS_1_36482E09B481A30B_METHOD_1_7A73D560C63A580F_OFFSET UNITYSDK_OFFSET(0x10ABBF90)
#define CLASS_1_36482E09B481A30B_METHOD_1_83ABD0834C73505B_OFFSET UNITYSDK_OFFSET(0x10ABBC60)
#define CLASS_1_36482E09B481A30B_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x10ABC270)
#define CLASS_1_36482E09B481A30B_METHOD_1_A78BE4D3701AA998_OFFSET UNITYSDK_OFFSET(0x10ABB8C0)
#define CLASS_1_36482E09B481A30B_METHOD_1_CF1B9C669D54424F_OFFSET UNITYSDK_OFFSET(0x10ABB610)
#define CLASS_1_36482E09B481A30B_METHOD_1_D4ABA560D8B61552_OFFSET UNITYSDK_OFFSET(0x10ABBD30)
#define CLASS_1_36482E09B481A30B_METHOD_1_E14A7FCF78650419_OFFSET UNITYSDK_OFFSET(0x10ABBDF0)
#define CLASS_1_36482E09B481A30B_METHOD_1_F5D02CB63424FC5A_OFFSET UNITYSDK_OFFSET(0x10ABC220)
#define CLASS_1_36482E09B481A30B__CTOR_OFFSET UNITYSDK_OFFSET(0x10ABC810)

inline static constexpr unsigned int Class_1_36482E09B481A30B_TypeDefinitionIndex = 40136;

class Class_1_36482E09B481A30B : public ::System::Object
{
public:
	::Class_1_36482E09B481A30B_Class_1_D8DC37582ADF31CC<::Class_1_63A76FE4E2C52F9B*>* Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::EnviromentControlPriority, ::Class_1_63A76FE4E2C52F9B*>* Field_1_0; // 0x18
	::System::Collections::Generic::List_1<::RPG::GameCore::EnviromentControlPriority>* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36482E09B481A30B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CF1B9C669D54424F(::RPG::GameCore::EnviromentControlPriority a1, ::Class_1_EAF7984A8FAD6BE4* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority, ::Class_1_EAF7984A8FAD6BE4*))((::PBYTE)hIl2Cpp + CLASS_1_36482E09B481A30B_METHOD_1_CF1B9C669D54424F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A78BE4D3701AA998(::RPG::GameCore::EnviromentControlPriority a1, ::Class_1_EAF7984A8FAD6BE4* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority, ::Class_1_EAF7984A8FAD6BE4*))((::PBYTE)hIl2Cpp + CLASS_1_36482E09B481A30B_METHOD_1_A78BE4D3701AA998_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_56055B445D3630C6(::RPG::GameCore::EnviromentControlPriority a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + CLASS_1_36482E09B481A30B_METHOD_1_56055B445D3630C6_OFFSET))(this, a1);
	}

	::Class_1_EAF7984A8FAD6BE4* Method_1_83ABD0834C73505B(::RPG::GameCore::EnviromentControlPriority a1)
	{
		return ((::Class_1_EAF7984A8FAD6BE4*(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + CLASS_1_36482E09B481A30B_METHOD_1_83ABD0834C73505B_OFFSET))(this, a1);
	}

	::Class_1_63A76FE4E2C52F9B* Method_1_D4ABA560D8B61552(::RPG::GameCore::EnviromentControlPriority a1)
	{
		return ((::Class_1_63A76FE4E2C52F9B*(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + CLASS_1_36482E09B481A30B_METHOD_1_D4ABA560D8B61552_OFFSET))(this, a1);
	}

	::Class_1_EAF7984A8FAD6BE4* Method_1_E14A7FCF78650419()
	{
		return ((::Class_1_EAF7984A8FAD6BE4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36482E09B481A30B_METHOD_1_E14A7FCF78650419_OFFSET))(this);
	}

	::Class_1_EAF7984A8FAD6BE4* Method_1_1561BFA77991A03A()
	{
		return ((::Class_1_EAF7984A8FAD6BE4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36482E09B481A30B_METHOD_1_1561BFA77991A03A_OFFSET))(this);
	}

	::RPG::GameCore::EnviromentControlPriority Method_1_7A73D560C63A580F()
	{
		return ((::RPG::GameCore::EnviromentControlPriority(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36482E09B481A30B_METHOD_1_7A73D560C63A580F_OFFSET))(this);
	}

	::System::Boolean Method_1_205C1376CE7E468F(::RPG::GameCore::EnviromentControlPriority a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + CLASS_1_36482E09B481A30B_METHOD_1_205C1376CE7E468F_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_1_63A76FE4E2C52F9B*>* Method_1_F5D02CB63424FC5A()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_1_63A76FE4E2C52F9B*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36482E09B481A30B_METHOD_1_F5D02CB63424FC5A_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36482E09B481A30B_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Void Method_1_6747250BC2D13457()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36482E09B481A30B_METHOD_1_6747250BC2D13457_OFFSET))(this);
	}

	::System::Void Method_1_73052712910A9EE7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36482E09B481A30B_METHOD_1_73052712910A9EE7_OFFSET))(this);
	}

	::Class_1_63A76FE4E2C52F9B* Method_1_001CC259DF2D6DE5(::System::Int32 a1)
	{
		return ((::Class_1_63A76FE4E2C52F9B*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_36482E09B481A30B_METHOD_1_001CC259DF2D6DE5_OFFSET))(this, a1);
	}
};
