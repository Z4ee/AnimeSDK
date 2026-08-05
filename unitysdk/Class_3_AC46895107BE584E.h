#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_945F852A8B481F54_Struct_2_F234142FB4C9E425.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/MoleMole/GameplayTag.h"

namespace System::Collections::Generic { template <typename T> class ICollection_1; }

#define CLASS_3_AC46895107BE584E_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x14791D60)
#define CLASS_3_AC46895107BE584E_METHOD_3_49CCB156646A689A_OFFSET UNITYSDK_OFFSET(0x14792000)
#define CLASS_3_AC46895107BE584E_METHOD_3_4C81F312BD1F80E6_OFFSET UNITYSDK_OFFSET(0x14791F40)
#define CLASS_3_AC46895107BE584E_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x14791EB0)
#define CLASS_3_AC46895107BE584E_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x14792370)
#define CLASS_3_AC46895107BE584E_METHOD_3_CCD88C0D86A5A786_OFFSET UNITYSDK_OFFSET(0x14791FB0)
#define CLASS_3_AC46895107BE584E_METHOD_3_FDE88B9DCD4387D7_OFFSET UNITYSDK_OFFSET(0x14791E40)
#define CLASS_3_AC46895107BE584E_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x14791D10)
#define CLASS_3_AC46895107BE584E__CCTOR_OFFSET UNITYSDK_OFFSET(0x14791DB0)
#define CLASS_3_AC46895107BE584E__CTOR_OFFSET UNITYSDK_OFFSET(0x14791E30)

inline static constexpr unsigned int Class_3_AC46895107BE584E_TypeDefinitionIndex = 78406;

class Class_3_AC46895107BE584E : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_0 = 0xAC; // 0x0
	::Class_2_945F852A8B481F54_Struct_2_F234142FB4C9E425 Field_3_1; // 0x48

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_AC46895107BE584E__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AC46895107BE584E__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AC46895107BE584E_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AC46895107BE584E_GETCLASSID_OFFSET))(this);
	}

	::System::Boolean Method_3_FDE88B9DCD4387D7(::MoleMole::GameplayTag a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::GameplayTag))((::PBYTE)hIl2Cpp + CLASS_3_AC46895107BE584E_METHOD_3_FDE88B9DCD4387D7_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AC46895107BE584E_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_3_4C81F312BD1F80E6(::MoleMole::GameplayTag a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GameplayTag))((::PBYTE)hIl2Cpp + CLASS_3_AC46895107BE584E_METHOD_3_4C81F312BD1F80E6_OFFSET))(this, a1);
	}

	::System::Void Method_3_CCD88C0D86A5A786()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AC46895107BE584E_METHOD_3_CCD88C0D86A5A786_OFFSET))(this);
	}

	::System::Void Method_3_49CCB156646A689A(::System::Collections::Generic::ICollection_1<::MoleMole::GameplayTag>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::MoleMole::GameplayTag>*))((::PBYTE)hIl2Cpp + CLASS_3_AC46895107BE584E_METHOD_3_49CCB156646A689A_OFFSET))(this, a1);
	}

	static ::Class_3_AC46895107BE584E* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_AC46895107BE584E*(*)())((::PBYTE)hIl2Cpp + CLASS_3_AC46895107BE584E_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}
};
