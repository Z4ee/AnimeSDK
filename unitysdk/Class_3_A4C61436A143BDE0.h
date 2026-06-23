#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Struct_2_B136CFD8FB6B8F37.h"

class Class_1_2F8B68D1845DB68F;
namespace MoleMole::Config { class PerceptionSenseConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_A4C61436A143BDE0_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1623F560)
#define CLASS_3_A4C61436A143BDE0_METHOD_3_47385152B550451C_OFFSET UNITYSDK_OFFSET(0x1623F870)
#define CLASS_3_A4C61436A143BDE0_METHOD_3_56705F2BCC552450_OFFSET UNITYSDK_OFFSET(0x1623F6C0)
#define CLASS_3_A4C61436A143BDE0_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x1623FA30)
#define CLASS_3_A4C61436A143BDE0_METHOD_3_D93EC3DDD756C47C_OFFSET UNITYSDK_OFFSET(0x1623FAC0)
#define CLASS_3_A4C61436A143BDE0_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1623F4F0)
#define CLASS_3_A4C61436A143BDE0__CCTOR_OFFSET UNITYSDK_OFFSET(0x1623F5B0)
#define CLASS_3_A4C61436A143BDE0__CTOR_OFFSET UNITYSDK_OFFSET(0x1623F630)

inline static constexpr unsigned int Class_3_A4C61436A143BDE0_TypeDefinitionIndex = 52761;

class Class_3_A4C61436A143BDE0 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_1 = 0x1; // 0x0
	::System::Collections::Generic::List_1<::Class_1_2F8B68D1845DB68F*>* Field_3_0; // 0x48

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_A4C61436A143BDE0__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A4C61436A143BDE0__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A4C61436A143BDE0_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A4C61436A143BDE0_GETCLASSID_OFFSET))(this);
	}

	::Struct_2_B136CFD8FB6B8F37 Method_3_56705F2BCC552450(::System::String* a1)
	{
		return ((::Struct_2_B136CFD8FB6B8F37(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_A4C61436A143BDE0_METHOD_3_56705F2BCC552450_OFFSET))(this, a1);
	}

	::System::Void Method_3_47385152B550451C(::System::Collections::Generic::List_1<::MoleMole::Config::PerceptionSenseConfig*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::PerceptionSenseConfig*>*))((::PBYTE)hIl2Cpp + CLASS_3_A4C61436A143BDE0_METHOD_3_47385152B550451C_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A4C61436A143BDE0_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_3_A4C61436A143BDE0* Method_3_D93EC3DDD756C47C()
	{
		return ((::Class_3_A4C61436A143BDE0*(*)())((::PBYTE)hIl2Cpp + CLASS_3_A4C61436A143BDE0_METHOD_3_D93EC3DDD756C47C_OFFSET))();
	}
};
