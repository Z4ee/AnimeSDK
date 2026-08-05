#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_1176;
class Class_2_3B1E761D184CCDAF;
class Class_2_5E8E56AB26D3F10E_Class_1_E2EAEB159D32F976;
class Class_3_1F0B390B50451710;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_5E8E56AB26D3F10E_CLASS_1_72AD9BDF76DF42C7_METHOD_1_08BBACE844405300_OFFSET UNITYSDK_OFFSET(0x18C447D0)
#define CLASS_2_5E8E56AB26D3F10E_CLASS_1_72AD9BDF76DF42C7_METHOD_1_48C6F0C9B6C1D34C_OFFSET UNITYSDK_OFFSET(0x18C45A90)
#define CLASS_2_5E8E56AB26D3F10E_CLASS_1_72AD9BDF76DF42C7_METHOD_1_9F70EA32F370861C_OFFSET UNITYSDK_OFFSET(0x18C45290)
#define CLASS_2_5E8E56AB26D3F10E_CLASS_1_72AD9BDF76DF42C7_METHOD_1_AEFB51B41A1D5BA1_OFFSET UNITYSDK_OFFSET(0x18C45D70)
#define CLASS_2_5E8E56AB26D3F10E_CLASS_1_72AD9BDF76DF42C7_METHOD_1_CCC37AC615BA6251_OFFSET UNITYSDK_OFFSET(0x18C44580)
#define CLASS_2_5E8E56AB26D3F10E_CLASS_1_72AD9BDF76DF42C7__CTOR_OFFSET UNITYSDK_OFFSET(0x18C44390)

inline static constexpr unsigned int Class_2_5E8E56AB26D3F10E_Class_1_72AD9BDF76DF42C7_TypeDefinitionIndex = 58271;

class Class_2_5E8E56AB26D3F10E_Class_1_72AD9BDF76DF42C7 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_4 = 0x1; // 0x0
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_7; // 0x10
	::Class_2_208CC9941471731A_1176* Field_1_1; // 0x18
	::Class_2_5E8E56AB26D3F10E_Class_1_E2EAEB159D32F976* Field_1_0; // 0x20
	::System::Collections::Generic::List_1<::Class_2_3B1E761D184CCDAF*>* Field_1_5; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_6; // 0x30
	::System::UInt32 Field_1_2; // 0x38

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_5E8E56AB26D3F10E_CLASS_1_72AD9BDF76DF42C7__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_CCC37AC615BA6251(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_5E8E56AB26D3F10E_CLASS_1_72AD9BDF76DF42C7_METHOD_1_CCC37AC615BA6251_OFFSET))(this, a1);
	}

	::System::Void Method_1_08BBACE844405300()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E8E56AB26D3F10E_CLASS_1_72AD9BDF76DF42C7_METHOD_1_08BBACE844405300_OFFSET))(this);
	}

	::System::Boolean Method_1_9F70EA32F370861C(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_5E8E56AB26D3F10E_CLASS_1_72AD9BDF76DF42C7_METHOD_1_9F70EA32F370861C_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_48C6F0C9B6C1D34C(::Class_2_3B1E761D184CCDAF* a1, ::Class_2_3B1E761D184CCDAF* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_3B1E761D184CCDAF*, ::Class_2_3B1E761D184CCDAF*))((::PBYTE)hIl2Cpp + CLASS_2_5E8E56AB26D3F10E_CLASS_1_72AD9BDF76DF42C7_METHOD_1_48C6F0C9B6C1D34C_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_1_AEFB51B41A1D5BA1(::Class_3_1F0B390B50451710* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::Class_3_1F0B390B50451710*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_5E8E56AB26D3F10E_CLASS_1_72AD9BDF76DF42C7_METHOD_1_AEFB51B41A1D5BA1_OFFSET))(a1, a2);
	}
};
