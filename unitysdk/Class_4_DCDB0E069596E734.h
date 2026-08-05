#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"
#include "unitysdk/UnityEngine/Vector3.h"

template <typename T> class Class_4_2FF7D360A2F3EC48;
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_4_DCDB0E069596E734_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0xDC6BC80)
#define CLASS_4_DCDB0E069596E734_METHOD_4_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0xDC6B1C0)
#define CLASS_4_DCDB0E069596E734_METHOD_4_8E007DA9036887B2_OFFSET UNITYSDK_OFFSET(0xDC6B4E0)
#define CLASS_4_DCDB0E069596E734__CTOR_OFFSET UNITYSDK_OFFSET(0xDC6BA30)

inline static constexpr unsigned int Class_4_DCDB0E069596E734_TypeDefinitionIndex = 44574;

class Class_4_DCDB0E069596E734 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::UnityEngine::Vector3>* Field_4_0; // 0x28
	::Class_4_2FF7D360A2F3EC48<::System::Single>* Field_4_5; // 0x30
	::Class_4_8D3E479B491881B3<::System::Single>* Field_4_10; // 0x38
	::Class_4_2FF7D360A2F3EC48<::MoleMole::EntityHandle>* Field_4_1; // 0x40
	::Class_4_2FF7D360A2F3EC48<::System::Single>* Field_4_4; // 0x48
	::Class_4_2FF7D360A2F3EC48<::UnityEngine::Vector3>* Field_4_6; // 0x50
	::Class_4_2FF7D360A2F3EC48<::System::Single>* Field_4_11; // 0x58
	::Class_4_2FF7D360A2F3EC48<::MoleMole::EntityHandle>* Field_4_7; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_DCDB0E069596E734__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_28EB11670A8E5A86()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_DCDB0E069596E734_METHOD_4_28EB11670A8E5A86_OFFSET))(this);
	}

	::System::Void Method_4_8E007DA9036887B2(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_DCDB0E069596E734_METHOD_4_8E007DA9036887B2_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_DCDB0E069596E734_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
