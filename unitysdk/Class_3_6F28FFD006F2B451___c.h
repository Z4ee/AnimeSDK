#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_36;
class Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C;
class Class_3_87492AF8E794E45E_44;
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_3_6F28FFD006F2B451___C_METHOD_1_7DAF5B3ADF494895_OFFSET UNITYSDK_OFFSET(0x1C69D0A0)
#define CLASS_3_6F28FFD006F2B451___C_METHOD_1_A0042105686D97E8_OFFSET UNITYSDK_OFFSET(0x1C69D090)
#define CLASS_3_6F28FFD006F2B451___C_METHOD_1_F26E1A4AA40850B5_OFFSET UNITYSDK_OFFSET(0x1C69CE70)
#define CLASS_3_6F28FFD006F2B451___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C69CE20)
#define CLASS_3_6F28FFD006F2B451___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C69CE60)

inline static constexpr unsigned int Class_3_6F28FFD006F2B451___c_TypeDefinitionIndex = 91933;

class Class_3_6F28FFD006F2B451___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_3_87492AF8E794E45E_44*>** StaticGet___9__17_1()
	{
		return (::System::Action_1<::Class_3_87492AF8E794E45E_44*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_6F28FFD006F2B451___c_TypeDefinitionIndex)->GetStaticField(0x51F90);
	}
	static ::Class_3_6F28FFD006F2B451___c** StaticGet___9()
	{
		return (::Class_3_6F28FFD006F2B451___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_6F28FFD006F2B451___c_TypeDefinitionIndex)->GetStaticField(0x51F98);
	}
	static ::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C** StaticGet___9__17_2()
	{
		return (::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C**)Il2CppClass::FromTypeDefinitionIndex(Class_3_6F28FFD006F2B451___c_TypeDefinitionIndex)->GetStaticField(0x51FA0);
	}
	static ::System::Comparison_1<::System::Int32>** StaticGet___9__17_0()
	{
		return (::System::Comparison_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_6F28FFD006F2B451___c_TypeDefinitionIndex)->GetStaticField(0x51FA8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_6F28FFD006F2B451___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6F28FFD006F2B451___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_F26E1A4AA40850B5(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_6F28FFD006F2B451___C_METHOD_1_F26E1A4AA40850B5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A0042105686D97E8(::Class_3_87492AF8E794E45E_44* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_87492AF8E794E45E_44*))((::PBYTE)hIl2Cpp + CLASS_3_6F28FFD006F2B451___C_METHOD_1_A0042105686D97E8_OFFSET))(this, a1);
	}

	::System::Void Method_1_7DAF5B3ADF494895(::Class_0_16E4307DCC419505_36* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + CLASS_3_6F28FFD006F2B451___C_METHOD_1_7DAF5B3ADF494895_OFFSET))(this, a1);
	}
};
