#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_231.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_810.h"

class Class_0_16E4307DCC419505_7;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_888734130AA1067E_METHOD_2_4478975C5865236B_OFFSET UNITYSDK_OFFSET(0x18967B80)
#define CLASS_2_888734130AA1067E_METHOD_2_479ECF74E102EE11_OFFSET UNITYSDK_OFFSET(0x18968580)
#define CLASS_2_888734130AA1067E__CTOR_OFFSET UNITYSDK_OFFSET(0x18967AE0)

inline static constexpr unsigned int Class_2_888734130AA1067E_TypeDefinitionIndex = 12385;

class Class_2_888734130AA1067E : public ::Class_1_5DA2E7556103D5A3_231
{
public:
	::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>* Field_2_0; // 0xF0

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_810 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_810, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_888734130AA1067E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Method_2_4478975C5865236B(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_888734130AA1067E_METHOD_2_4478975C5865236B_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Method_2_479ECF74E102EE11(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_888734130AA1067E_METHOD_2_479ECF74E102EE11_OFFSET))(this, a1);
	}
};
