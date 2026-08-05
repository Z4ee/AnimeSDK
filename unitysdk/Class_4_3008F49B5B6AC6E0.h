#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"
#include "unitysdk/UnityEngine/Vector3.h"

template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_3008F49B5B6AC6E0_METHOD_4_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x158DBF30)
#define CLASS_4_3008F49B5B6AC6E0_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x158DC330)
#define CLASS_4_3008F49B5B6AC6E0_METHOD_4_9EC823C358D831A9_OFFSET UNITYSDK_OFFSET(0x158DC080)
#define CLASS_4_3008F49B5B6AC6E0__CTOR_OFFSET UNITYSDK_OFFSET(0x158DC200)

inline static constexpr unsigned int Class_4_3008F49B5B6AC6E0_TypeDefinitionIndex = 86084;

class Class_4_3008F49B5B6AC6E0 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::UnityEngine::Vector3>* Field_4_1; // 0x28
	::Class_4_2FF7D360A2F3EC48<::MoleMole::EntityHandle>* Field_4_0; // 0x30
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_4_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3008F49B5B6AC6E0__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3008F49B5B6AC6E0_METHOD_4_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_4_9EC823C358D831A9(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_3008F49B5B6AC6E0_METHOD_4_9EC823C358D831A9_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3008F49B5B6AC6E0_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
