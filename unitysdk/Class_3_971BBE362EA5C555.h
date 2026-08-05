#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

namespace System { class String; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_3_971BBE362EA5C555_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x16E7AB60)
#define CLASS_3_971BBE362EA5C555_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16E7B020)
#define CLASS_3_971BBE362EA5C555_METHOD_3_D7A29A2D368B3689_OFFSET UNITYSDK_OFFSET(0x16E7ABF0)
#define CLASS_3_971BBE362EA5C555__CTOR_OFFSET UNITYSDK_OFFSET(0x16E7AF80)

inline static constexpr unsigned int Class_3_971BBE362EA5C555_TypeDefinitionIndex = 40243;

class Class_3_971BBE362EA5C555 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_3_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_971BBE362EA5C555__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_971BBE362EA5C555_METHOD_3_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_3_D7A29A2D368B3689(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_971BBE362EA5C555_METHOD_3_D7A29A2D368B3689_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_971BBE362EA5C555_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
