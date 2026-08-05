#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BE149A7D6310B037.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_51.h"

class Class_3_010347D17DFD5D8F_3;
class Class_3_A7313D82B77F7C76;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_4D5664F824CA4BC9_METHOD_2_37B18AB5E16A6521_OFFSET UNITYSDK_OFFSET(0x12B79AF0)
#define CLASS_2_4D5664F824CA4BC9_METHOD_2_607508F85072F4C4_OFFSET UNITYSDK_OFFSET(0x12B793F0)
#define CLASS_2_4D5664F824CA4BC9_METHOD_2_7A310FDCDE635116_OFFSET UNITYSDK_OFFSET(0x12B79690)
#define CLASS_2_4D5664F824CA4BC9_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12B79780)
#define CLASS_2_4D5664F824CA4BC9_METHOD_2_F87F502BB53431DE_OFFSET UNITYSDK_OFFSET(0x12B797C0)
#define CLASS_2_4D5664F824CA4BC9__CTOR_OFFSET UNITYSDK_OFFSET(0x12B793E0)

inline static constexpr unsigned int Class_2_4D5664F824CA4BC9_TypeDefinitionIndex = 90067;

class Class_2_4D5664F824CA4BC9 : public ::Class_1_BE149A7D6310B037
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_A7313D82B77F7C76*>* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D5664F824CA4BC9__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_607508F85072F4C4(::System::UInt32 a1, ::System::Collections::Generic::List_1<::System::Int32>*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + CLASS_2_4D5664F824CA4BC9_METHOD_2_607508F85072F4C4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D5664F824CA4BC9_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_F87F502BB53431DE(::Class_3_010347D17DFD5D8F_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_010347D17DFD5D8F_3*))((::PBYTE)hIl2Cpp + CLASS_2_4D5664F824CA4BC9_METHOD_2_F87F502BB53431DE_OFFSET))(this, a1);
	}

	::Enum_3_0A3761FE34514D6C_51 Method_2_37B18AB5E16A6521(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::Enum_3_0A3761FE34514D6C_51(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_4D5664F824CA4BC9_METHOD_2_37B18AB5E16A6521_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_7A310FDCDE635116(::System::UInt32 a1, ::Class_3_A7313D82B77F7C76*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Class_3_A7313D82B77F7C76*&))((::PBYTE)hIl2Cpp + CLASS_2_4D5664F824CA4BC9_METHOD_2_7A310FDCDE635116_OFFSET))(this, a1, a2);
	}
};
