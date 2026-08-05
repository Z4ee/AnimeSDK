#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"
#include "unitysdk/UnityEngine/Vector3.h"

template <typename T> class Class_4_2FF7D360A2F3EC48;
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_4_E959B2881C40422A_METHOD_4_22EB5E1405A8445C_OFFSET UNITYSDK_OFFSET(0x10D23C10)
#define CLASS_4_E959B2881C40422A_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x10D23FD0)
#define CLASS_4_E959B2881C40422A_METHOD_4_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x10D23A60)
#define CLASS_4_E959B2881C40422A__CTOR_OFFSET UNITYSDK_OFFSET(0x10D23E70)

inline static constexpr unsigned int Class_4_E959B2881C40422A_TypeDefinitionIndex = 80200;

class Class_4_E959B2881C40422A : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_8D3E479B491881B3<::UnityEngine::Vector3>* Field_4_6; // 0x28
	::Class_4_8D3E479B491881B3<::UnityEngine::Vector3>* Field_4_0; // 0x30
	::Class_4_8D3E479B491881B3<::UnityEngine::Vector3>* Field_4_7; // 0x38
	::Class_4_2FF7D360A2F3EC48<::MoleMole::EntityHandle>* Field_4_1; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E959B2881C40422A__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E959B2881C40422A_METHOD_4_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_4_22EB5E1405A8445C(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_E959B2881C40422A_METHOD_4_22EB5E1405A8445C_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E959B2881C40422A_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
