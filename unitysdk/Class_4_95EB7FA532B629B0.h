#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"
#include "unitysdk/UnityEngine/Vector3.h"

template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_4_95EB7FA532B629B0_METHOD_4_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x13C9E8B0)
#define CLASS_4_95EB7FA532B629B0_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x13C9EC50)
#define CLASS_4_95EB7FA532B629B0_METHOD_4_98B0208DB3A6542F_OFFSET UNITYSDK_OFFSET(0x13C9EA00)
#define CLASS_4_95EB7FA532B629B0__CTOR_OFFSET UNITYSDK_OFFSET(0x13C9EB20)

inline static constexpr unsigned int Class_4_95EB7FA532B629B0_TypeDefinitionIndex = 86971;

class Class_4_95EB7FA532B629B0 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_F91115D9A1F02F5F<::Foundation::ViewObject::ViewObjectHandle>* Field_4_0; // 0x28
	::Class_4_F91115D9A1F02F5F<::UnityEngine::Vector3>* Field_4_1; // 0x30
	::Class_4_F91115D9A1F02F5F<::UnityEngine::Vector3>* Field_4_2; // 0x38

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
