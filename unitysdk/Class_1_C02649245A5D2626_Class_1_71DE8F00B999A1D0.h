#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ShaderAniHelp;

#define CLASS_1_C02649245A5D2626_CLASS_1_71DE8F00B999A1D0_METHOD_1_1F00AA034ABA53D9_OFFSET UNITYSDK_OFFSET(0x1B9B8100)
#define CLASS_1_C02649245A5D2626_CLASS_1_71DE8F00B999A1D0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9B80F0)

inline static constexpr unsigned int Class_1_C02649245A5D2626_Class_1_71DE8F00B999A1D0_TypeDefinitionIndex = 52532;

class Class_1_C02649245A5D2626_Class_1_71DE8F00B999A1D0 : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626_CLASS_1_71DE8F00B999A1D0__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1F00AA034ABA53D9(::ShaderAniHelp* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::ShaderAniHelp*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626_CLASS_1_71DE8F00B999A1D0_METHOD_1_1F00AA034ABA53D9_OFFSET))(this, a1, a2);
	}
};
