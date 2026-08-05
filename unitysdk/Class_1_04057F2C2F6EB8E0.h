#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_04057F2C2F6EB8E0_Struct_2_F80D45BF1D56A38F.h"
#include "unitysdk/Enum_3_C0D064AD753299B0.h"
#include "unitysdk/MoleMole/Arcade/CoreBase/ComponentMask.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class WeakReference_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_04057F2C2F6EB8E0_METHOD_1_04DE4FBB293DFBD6_OFFSET UNITYSDK_OFFSET(0x1EFEA850)
#define CLASS_1_04057F2C2F6EB8E0_METHOD_1_5C92B634C23AD520_OFFSET UNITYSDK_OFFSET(0x1EFEA720)
#define CLASS_1_04057F2C2F6EB8E0_METHOD_1_636F552EE555A4C5_1_OFFSET UNITYSDK_OFFSET(0x1EFEB670)
#define CLASS_1_04057F2C2F6EB8E0_METHOD_1_636F552EE555A4C5_OFFSET UNITYSDK_OFFSET(0x1EFEA990)
#define CLASS_1_04057F2C2F6EB8E0_METHOD_1_85E35087DB9818F4_OFFSET UNITYSDK_OFFSET(0x1EFEBBA0)
#define CLASS_1_04057F2C2F6EB8E0_METHOD_1_879869C5CC845069_OFFSET UNITYSDK_OFFSET(0x1EFEA8B0)
#define CLASS_1_04057F2C2F6EB8E0_METHOD_1_8D27807039A51AB5_OFFSET UNITYSDK_OFFSET(0x1EFEAE30)
#define CLASS_1_04057F2C2F6EB8E0_METHOD_1_9D2FF4141E3C4B39_OFFSET UNITYSDK_OFFSET(0x1EFEA690)
#define CLASS_1_04057F2C2F6EB8E0_METHOD_1_A6CFA891B52872E7_1_OFFSET UNITYSDK_OFFSET(0x1EFEADB0)
#define CLASS_1_04057F2C2F6EB8E0_METHOD_1_A6CFA891B52872E7_OFFSET UNITYSDK_OFFSET(0x1EFEA7D0)
#define CLASS_1_04057F2C2F6EB8E0_METHOD_1_A7EB4DBA00D8967A_OFFSET UNITYSDK_OFFSET(0x1EFEA930)
#define CLASS_1_04057F2C2F6EB8E0_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x1EFEBFF0)
#define CLASS_1_04057F2C2F6EB8E0_METHOD_1_B40AE9A8D5EDF4AA_OFFSET UNITYSDK_OFFSET(0x1EFEB8B0)
#define CLASS_1_04057F2C2F6EB8E0_METHOD_1_C18A07BCE5CC3A1F_OFFSET UNITYSDK_OFFSET(0x1EFEABD0)
#define CLASS_1_04057F2C2F6EB8E0_METHOD_1_D4ECDD2DCF962266_OFFSET UNITYSDK_OFFSET(0x1EFEBE60)
#define CLASS_1_04057F2C2F6EB8E0__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFEA5E0)

inline static constexpr unsigned int Class_1_04057F2C2F6EB8E0_TypeDefinitionIndex = 29317;

class Class_1_04057F2C2F6EB8E0 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::WeakReference_1<::System::Collections::Generic::HashSet_1<::System::UInt32>*>*>* Field_1_5; // 0x10
	::System::Collections::Generic::List_1<::Class_1_04057F2C2F6EB8E0_Struct_2_F80D45BF1D56A38F>* Field_1_7; // 0x18
	::MoleMole::Arcade::CoreBase::ComponentMask Field_1_1; // 0x20
	::MoleMole::Arcade::CoreBase::ComponentMask Field_1_0; // 0x40
	::System::Nullable_1<::System::UInt32> Field_1_6; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04057F2C2F6EB8E0__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::HashSet_1<::System::UInt32>*>* Method_1_9D2FF4141E3C4B39()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::HashSet_1<::System::UInt32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04057F2C2F6EB8E0_METHOD_1_9D2FF4141E3C4B39_OFFSET))(this);
	}

	::Class_1_04057F2C2F6EB8E0* Method_1_5C92B634C23AD520(::Il2CppArray<::System::UInt32>* a1)
	{
		return ((::Class_1_04057F2C2F6EB8E0*(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_04057F2C2F6EB8E0_METHOD_1_5C92B634C23AD520_OFFSET))(this, a1);
	}

	::Class_1_04057F2C2F6EB8E0* Method_1_A6CFA891B52872E7(::Il2CppArray<::System::UInt32>* a1)
	{
		return ((::Class_1_04057F2C2F6EB8E0*(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_04057F2C2F6EB8E0_METHOD_1_A6CFA891B52872E7_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_04DE4FBB293DFBD6(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_04057F2C2F6EB8E0_METHOD_1_04DE4FBB293DFBD6_OFFSET))(this, a1);
	}

	::Class_1_04057F2C2F6EB8E0* Method_1_879869C5CC845069(::Enum_3_C0D064AD753299B0 a1, ::Il2CppArray<::System::UInt32>* a2)
	{
		return ((::Class_1_04057F2C2F6EB8E0*(*)(::PVOID, ::Enum_3_C0D064AD753299B0, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_04057F2C2F6EB8E0_METHOD_1_879869C5CC845069_OFFSET))(this, a1, a2);
	}

	::Class_1_04057F2C2F6EB8E0* Method_1_A7EB4DBA00D8967A(::MoleMole::Arcade::CoreBase::ComponentMask& a1)
	{
		return ((::Class_1_04057F2C2F6EB8E0*(*)(::PVOID, ::MoleMole::Arcade::CoreBase::ComponentMask&))((::PBYTE)hIl2Cpp + CLASS_1_04057F2C2F6EB8E0_METHOD_1_A7EB4DBA00D8967A_OFFSET))(this, a1);
	}

	::Class_1_04057F2C2F6EB8E0* Method_1_636F552EE555A4C5(::MoleMole::Arcade::CoreBase::ComponentMask& a1)
	{
		return ((::Class_1_04057F2C2F6EB8E0*(*)(::PVOID, ::MoleMole::Arcade::CoreBase::ComponentMask&))((::PBYTE)hIl2Cpp + CLASS_1_04057F2C2F6EB8E0_METHOD_1_636F552EE555A4C5_OFFSET))(this, a1);
	}

	::System::Void Method_1_C18A07BCE5CC3A1F(::System::UInt32 a1, ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::HashSet_1<::System::UInt32>*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::HashSet_1<::System::UInt32>*>*))((::PBYTE)hIl2Cpp + CLASS_1_04057F2C2F6EB8E0_METHOD_1_C18A07BCE5CC3A1F_OFFSET))(this, a1, a2);
	}

	::Class_1_04057F2C2F6EB8E0* Method_1_A6CFA891B52872E7_1(::Il2CppArray<::System::UInt32>* a1)
	{
		return ((::Class_1_04057F2C2F6EB8E0*(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_04057F2C2F6EB8E0_METHOD_1_A6CFA891B52872E7_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8D27807039A51AB5(::MoleMole::Arcade::CoreBase::ComponentMask& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Arcade::CoreBase::ComponentMask&))((::PBYTE)hIl2Cpp + CLASS_1_04057F2C2F6EB8E0_METHOD_1_8D27807039A51AB5_OFFSET))(this, a1);
	}

	::Class_1_04057F2C2F6EB8E0* Method_1_636F552EE555A4C5_1(::MoleMole::Arcade::CoreBase::ComponentMask& a1)
	{
		return ((::Class_1_04057F2C2F6EB8E0*(*)(::PVOID, ::MoleMole::Arcade::CoreBase::ComponentMask&))((::PBYTE)hIl2Cpp + CLASS_1_04057F2C2F6EB8E0_METHOD_1_636F552EE555A4C5_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_B40AE9A8D5EDF4AA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04057F2C2F6EB8E0_METHOD_1_B40AE9A8D5EDF4AA_OFFSET))(this);
	}

	::Class_1_04057F2C2F6EB8E0* Method_1_85E35087DB9818F4(::Class_1_04057F2C2F6EB8E0* a1)
	{
		return ((::Class_1_04057F2C2F6EB8E0*(*)(::PVOID, ::Class_1_04057F2C2F6EB8E0*))((::PBYTE)hIl2Cpp + CLASS_1_04057F2C2F6EB8E0_METHOD_1_85E35087DB9818F4_OFFSET))(this, a1);
	}

	::Class_1_04057F2C2F6EB8E0* Method_1_D4ECDD2DCF962266(::Enum_3_C0D064AD753299B0 a1, ::MoleMole::Arcade::CoreBase::ComponentMask& a2)
	{
		return ((::Class_1_04057F2C2F6EB8E0*(*)(::PVOID, ::Enum_3_C0D064AD753299B0, ::MoleMole::Arcade::CoreBase::ComponentMask&))((::PBYTE)hIl2Cpp + CLASS_1_04057F2C2F6EB8E0_METHOD_1_D4ECDD2DCF962266_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04057F2C2F6EB8E0_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}
};
