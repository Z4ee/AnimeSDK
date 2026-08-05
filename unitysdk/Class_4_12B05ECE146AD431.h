#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"
#include "unitysdk/UnityEngine/Vector3.h"

template <typename T> class Class_4_2FF7D360A2F3EC48;
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_4_12B05ECE146AD431_METHOD_4_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x12F2CDE0)
#define CLASS_4_12B05ECE146AD431_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x12F2D360)
#define CLASS_4_12B05ECE146AD431_METHOD_4_DEABC489FFA72692_OFFSET UNITYSDK_OFFSET(0x12F2CF30)
#define CLASS_4_12B05ECE146AD431__CTOR_OFFSET UNITYSDK_OFFSET(0x12F2D230)

inline static constexpr unsigned int Class_4_12B05ECE146AD431_TypeDefinitionIndex = 62720;

class Class_4_12B05ECE146AD431 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::MoleMole::EntityHandle>* Field_4_1; // 0x28
	::Class_4_8D3E479B491881B3<::UnityEngine::Vector3>* Field_4_7; // 0x30
	::Class_4_8D3E479B491881B3<::UnityEngine::Vector3>* Field_4_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_12B05ECE146AD431__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_12B05ECE146AD431_METHOD_4_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_4_DEABC489FFA72692(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_12B05ECE146AD431_METHOD_4_DEABC489FFA72692_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_12B05ECE146AD431_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
