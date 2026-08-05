#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"
#include "unitysdk/Struct_2_FE9BD044832BC9C3.h"

class Class_3_CF43FA1E89397A1C;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_A0130986640BCBF1_METHOD_4_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x17F05AD0)
#define CLASS_4_A0130986640BCBF1_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x17F06370)
#define CLASS_4_A0130986640BCBF1_METHOD_4_5D8C2AC43865453F_OFFSET UNITYSDK_OFFSET(0x17F06150)
#define CLASS_4_A0130986640BCBF1_METHOD_4_86F8B7095AA93B3B_OFFSET UNITYSDK_OFFSET(0x17F05C20)
#define CLASS_4_A0130986640BCBF1__CTOR_OFFSET UNITYSDK_OFFSET(0x17F06220)

inline static constexpr unsigned int Class_4_A0130986640BCBF1_TypeDefinitionIndex = 74011;

class Class_4_A0130986640BCBF1 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_3_CF43FA1E89397A1C* Field_4_0; // 0x28
	::Class_4_2FF7D360A2F3EC48<::Foundation::ViewObject::ViewObjectHandle>* Field_4_1; // 0x30
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_4_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A0130986640BCBF1__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A0130986640BCBF1_METHOD_4_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_4_86F8B7095AA93B3B(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_A0130986640BCBF1_METHOD_4_86F8B7095AA93B3B_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A0130986640BCBF1_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_4_5D8C2AC43865453F(::Struct_2_FE9BD044832BC9C3 a1, ::System::Int32 a2, ::System::String* a3)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::Struct_2_FE9BD044832BC9C3, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_4_A0130986640BCBF1_METHOD_4_5D8C2AC43865453F_OFFSET))(this, a1, a2, a3);
	}
};
