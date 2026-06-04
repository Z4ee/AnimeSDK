#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A11BE7693BACC4F5.h"

namespace System { class String; }

#define CLASS_2_994FA7BE20A3CF32_METHOD_2_7C963766BF13D95B_OFFSET UNITYSDK_OFFSET(0xA852F10)
#define CLASS_2_994FA7BE20A3CF32_METHOD_2_E0909E93F3B3FCCF_OFFSET UNITYSDK_OFFSET(0xA852E60)
#define CLASS_2_994FA7BE20A3CF32__CTOR_OFFSET UNITYSDK_OFFSET(0xA852F00)

inline static constexpr unsigned int Class_2_994FA7BE20A3CF32_TypeDefinitionIndex = 72076;

class Class_2_994FA7BE20A3CF32 : public ::Class_1_A11BE7693BACC4F5
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_994FA7BE20A3CF32__CTOR_OFFSET))(this);
	}

	::System::String* Method_2_E0909E93F3B3FCCF(::System::String* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_994FA7BE20A3CF32_METHOD_2_E0909E93F3B3FCCF_OFFSET))(this, a1);
	}

	::System::String* Method_2_7C963766BF13D95B(::System::String* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_994FA7BE20A3CF32_METHOD_2_7C963766BF13D95B_OFFSET))(this, a1);
	}
};
