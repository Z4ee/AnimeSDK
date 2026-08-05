#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"
#include "unitysdk/UnityEngine/Vector3.h"

template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_95EB7FA532B629B0_METHOD_4_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x14203DB0)
#define CLASS_4_95EB7FA532B629B0_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x14204150)
#define CLASS_4_95EB7FA532B629B0_METHOD_4_98B0208DB3A6542F_OFFSET UNITYSDK_OFFSET(0x14203F00)
#define CLASS_4_95EB7FA532B629B0__CTOR_OFFSET UNITYSDK_OFFSET(0x14204020)

inline static constexpr unsigned int Class_4_95EB7FA532B629B0_TypeDefinitionIndex = 54387;

class Class_4_95EB7FA532B629B0 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::Foundation::ViewObject::ViewObjectHandle>* Field_4_0; // 0x28
	::Class_4_2FF7D360A2F3EC48<::UnityEngine::Vector3>* Field_4_6; // 0x30
	::Class_4_2FF7D360A2F3EC48<::UnityEngine::Vector3>* Field_4_7; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_95EB7FA532B629B0__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_95EB7FA532B629B0_METHOD_4_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_4_98B0208DB3A6542F(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_95EB7FA532B629B0_METHOD_4_98B0208DB3A6542F_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_95EB7FA532B629B0_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
