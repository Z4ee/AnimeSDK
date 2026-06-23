#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

namespace System { class String; }
template <typename T> class Class_4_B51FB35349ACD175;
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_4_7CB74801AED844C5_METHOD_4_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x14EA94D0)
#define CLASS_4_7CB74801AED844C5_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x14EA9AD0)
#define CLASS_4_7CB74801AED844C5_METHOD_4_9D7A9451E63F9903_OFFSET UNITYSDK_OFFSET(0x14EA9620)
#define CLASS_4_7CB74801AED844C5__CTOR_OFFSET UNITYSDK_OFFSET(0x14EA99A0)

inline static constexpr unsigned int Class_4_7CB74801AED844C5_TypeDefinitionIndex = 41141;

class Class_4_7CB74801AED844C5 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_B51FB35349ACD175<::System::Single>* Field_4_2; // 0x28
	::Class_4_F91115D9A1F02F5F<::System::String*>* Field_4_0; // 0x30
	::Class_4_B51FB35349ACD175<::System::Single>* Field_4_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7CB74801AED844C5__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7CB74801AED844C5_METHOD_4_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_4_9D7A9451E63F9903(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_7CB74801AED844C5_METHOD_4_9D7A9451E63F9903_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7CB74801AED844C5_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
