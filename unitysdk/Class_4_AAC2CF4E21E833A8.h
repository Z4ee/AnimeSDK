#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Class_4_AAC2CF4E21E833A8_Enum_3_0827F7A996D1D834_1.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/Config/Spline_WayPoint.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_AF7A56E03A4D3952;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_4_AAC2CF4E21E833A8_METHOD_4_01E0B8C9EBEC1CA9_OFFSET UNITYSDK_OFFSET(0x125830C0)
#define CLASS_4_AAC2CF4E21E833A8_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x12583130)
#define CLASS_4_AAC2CF4E21E833A8_METHOD_4_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x125828D0)
#define CLASS_4_AAC2CF4E21E833A8_METHOD_4_97936DF5E528D6C4_OFFSET UNITYSDK_OFFSET(0x12582D50)
#define CLASS_4_AAC2CF4E21E833A8_METHOD_4_D8BF40F27BE9947D_OFFSET UNITYSDK_OFFSET(0x12582F70)
#define CLASS_4_AAC2CF4E21E833A8_METHOD_4_DBA553A11D93935E_OFFSET UNITYSDK_OFFSET(0x12583140)
#define CLASS_4_AAC2CF4E21E833A8_METHOD_4_EA1CE0AF6E069614_OFFSET UNITYSDK_OFFSET(0x125829B0)
#define CLASS_4_AAC2CF4E21E833A8__CTOR_OFFSET UNITYSDK_OFFSET(0x12582FD0)

inline static constexpr unsigned int Class_4_AAC2CF4E21E833A8_TypeDefinitionIndex = 71338;

class Class_4_AAC2CF4E21E833A8 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_F91115D9A1F02F5F<::MoleMole::Config::Spline_WayPoint>* Field_4_1; // 0x28
	::Struct_2_29439DBE2B63DCF3 Field_4_2; // 0x30
	::Class_4_F91115D9A1F02F5F<::Foundation::ViewObject::ViewObjectHandle>* Field_4_0; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_AAC2CF4E21E833A8__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_AAC2CF4E21E833A8_METHOD_4_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_4_EA1CE0AF6E069614(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_AAC2CF4E21E833A8_METHOD_4_EA1CE0AF6E069614_OFFSET))(this, a1);
	}

	::System::String* Method_4_D8BF40F27BE9947D()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_AAC2CF4E21E833A8_METHOD_4_D8BF40F27BE9947D_OFFSET))(this);
	}

	::Class_4_AAC2CF4E21E833A8_Enum_3_0827F7A996D1D834_1 Method_4_01E0B8C9EBEC1CA9(::Class_3_AF7A56E03A4D3952* a1)
	{
		return ((::Class_4_AAC2CF4E21E833A8_Enum_3_0827F7A996D1D834_1(*)(::PVOID, ::Class_3_AF7A56E03A4D3952*))((::PBYTE)hIl2Cpp + CLASS_4_AAC2CF4E21E833A8_METHOD_4_01E0B8C9EBEC1CA9_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_AAC2CF4E21E833A8_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_4_DBA553A11D93935E(::Struct_2_29439DBE2B63DCF3 a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_AAC2CF4E21E833A8_METHOD_4_DBA553A11D93935E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_97936DF5E528D6C4(::Class_3_AF7A56E03A4D3952* a1, ::System::Int32 a2, ::Struct_2_29439DBE2B63DCF3& a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_AF7A56E03A4D3952*, ::System::Int32, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_AAC2CF4E21E833A8_METHOD_4_97936DF5E528D6C4_OFFSET))(this, a1, a2, a3);
	}
};
