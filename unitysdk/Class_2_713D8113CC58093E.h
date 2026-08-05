#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_44.h"

class Class_1_F356FCA60006484C;
namespace System { class Object; }

#define CLASS_2_713D8113CC58093E_METHOD_2_1741F36AF3C17A7B_OFFSET UNITYSDK_OFFSET(0x123BFC30)
#define CLASS_2_713D8113CC58093E__CTOR_OFFSET UNITYSDK_OFFSET(0x123C0180)

inline static constexpr unsigned int Class_2_713D8113CC58093E_TypeDefinitionIndex = 83116;

class Class_2_713D8113CC58093E : public ::Class_1_43BD383C98B4C0C5_44
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_713D8113CC58093E__CTOR_OFFSET))(this);
	}

	::Class_1_F356FCA60006484C* Method_2_1741F36AF3C17A7B(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::Class_1_F356FCA60006484C*(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_713D8113CC58093E_METHOD_2_1741F36AF3C17A7B_OFFSET))(this, a1);
	}
};
