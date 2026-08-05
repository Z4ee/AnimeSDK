#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3A216973E1BA9106.h"

class Class_2_F5737224A0253470;
namespace System { class Action; }
namespace System { class String; }

#define CLASS_2_52EDC71EBDE5F1F5_METHOD_2_2E29038CF17E20BD_OFFSET UNITYSDK_OFFSET(0x1C1261F0)
#define CLASS_2_52EDC71EBDE5F1F5_METHOD_2_D2E86A575805E3C6_OFFSET UNITYSDK_OFFSET(0x1C125D20)
#define CLASS_2_52EDC71EBDE5F1F5__CTOR_OFFSET UNITYSDK_OFFSET(0x1C125C50)

inline static constexpr unsigned int Class_2_52EDC71EBDE5F1F5_TypeDefinitionIndex = 73077;

class Class_2_52EDC71EBDE5F1F5 : public ::Class_1_3A216973E1BA9106
{
public:
	::Class_2_F5737224A0253470* Field_2_5; // 0x18
	::System::Action* Field_2_6; // 0x20
	::System::String* Field_2_1; // 0x28
	::System::Boolean Field_2_7; // 0x30
	::System::Single Field_2_4; // 0x34
	::System::Int32 Field_2_0; // 0x38

	::System::Void _ctor(::System::String* a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_52EDC71EBDE5F1F5__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_D2E86A575805E3C6(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_52EDC71EBDE5F1F5_METHOD_2_D2E86A575805E3C6_OFFSET))(this, a1);
	}

	::System::Void Method_2_2E29038CF17E20BD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_52EDC71EBDE5F1F5_METHOD_2_2E29038CF17E20BD_OFFSET))(this);
	}
};
