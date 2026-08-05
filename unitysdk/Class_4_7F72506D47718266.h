#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_7F72506D47718266_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x114B9BF0)
#define CLASS_4_7F72506D47718266_METHOD_4_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x114B9460)
#define CLASS_4_7F72506D47718266_METHOD_4_F51E4A9A0BA8E8D9_OFFSET UNITYSDK_OFFSET(0x114B9A20)
#define CLASS_4_7F72506D47718266_METHOD_4_F637E7BBB4A3229E_OFFSET UNITYSDK_OFFSET(0x114B9540)
#define CLASS_4_7F72506D47718266__CTOR_OFFSET UNITYSDK_OFFSET(0x114B9B00)

inline static constexpr unsigned int Class_4_7F72506D47718266_TypeDefinitionIndex = 66062;

class Class_4_7F72506D47718266 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::Foundation::ViewObject::ViewObjectHandle>* Field_4_0; // 0x28
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_4_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7F72506D47718266__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7F72506D47718266_METHOD_4_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_4_F637E7BBB4A3229E(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_7F72506D47718266_METHOD_4_F637E7BBB4A3229E_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7F72506D47718266_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_4_F51E4A9A0BA8E8D9(::Struct_2_29439DBE2B63DCF3 a1, ::MoleMole::EntityHandle a2, ::System::Int32 a3)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3, ::MoleMole::EntityHandle, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_4_7F72506D47718266_METHOD_4_F51E4A9A0BA8E8D9_OFFSET))(this, a1, a2, a3);
	}
};
