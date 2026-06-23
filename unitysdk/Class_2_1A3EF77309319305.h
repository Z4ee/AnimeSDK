#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1487A3F820CB8361.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/Struct_2_7D9908C3EA3882B7.h"

class Class_0_16E4307DCC419505_272;
class Class_0_16E4307DCC419505_721;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_1A3EF77309319305_METHOD_2_5FF5C61A6E57C587_OFFSET UNITYSDK_OFFSET(0x11377FC0)
#define CLASS_2_1A3EF77309319305_METHOD_2_6208128E387A4C57_OFFSET UNITYSDK_OFFSET(0x11378070)
#define CLASS_2_1A3EF77309319305_METHOD_2_E35E299B93424AAF_OFFSET UNITYSDK_OFFSET(0x11377BE0)
#define CLASS_2_1A3EF77309319305__CTOR_OFFSET UNITYSDK_OFFSET(0x11377F30)

inline static constexpr unsigned int Class_2_1A3EF77309319305_TypeDefinitionIndex = 71845;

class Class_2_1A3EF77309319305 : public ::Class_1_1487A3F820CB8361
{
public:
	::Struct_2_7D9908C3EA3882B7 Field_2_0; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A3EF77309319305__CTOR_OFFSET))(this);
	}

	::System::Single Method_2_E35E299B93424AAF(::Class_0_16E4307DCC419505_272* a1, ::MoleMole::Config::BaseProperty a2)
	{
		return ((::System::Single(*)(::PVOID, ::Class_0_16E4307DCC419505_272*, ::MoleMole::Config::BaseProperty))((::PBYTE)hIl2Cpp + CLASS_2_1A3EF77309319305_METHOD_2_E35E299B93424AAF_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_5FF5C61A6E57C587(::Class_0_16E4307DCC419505_272* a1, ::MoleMole::Config::BaseProperty a2)
	{
		return ((::System::Single(*)(::PVOID, ::Class_0_16E4307DCC419505_272*, ::MoleMole::Config::BaseProperty))((::PBYTE)hIl2Cpp + CLASS_2_1A3EF77309319305_METHOD_2_5FF5C61A6E57C587_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6208128E387A4C57(::System::UInt32 a1, ::System::UInt32 a2, ::System::Int32 a3, ::System::Int32 a4, ::Class_0_16E4307DCC419505_272* a5, ::Class_0_16E4307DCC419505_721* a6, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Int32, ::System::Int32, ::Class_0_16E4307DCC419505_272*, ::Class_0_16E4307DCC419505_721*, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_2_1A3EF77309319305_METHOD_2_6208128E387A4C57_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}
};
