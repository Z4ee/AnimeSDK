#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_55230CEF110DAF7B.h"
#include "unitysdk/Enum_3_C6DD60387A24E143.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_3_61A5922E5046F385_2;

#define CLASS_4_46F7B02CFF7D2FCF_METHOD_4_6FE2CC308CC0B264_OFFSET UNITYSDK_OFFSET(0x128C21E0)
#define CLASS_4_46F7B02CFF7D2FCF_METHOD_4_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x128C21B0)
#define CLASS_4_46F7B02CFF7D2FCF__CTOR_OFFSET UNITYSDK_OFFSET(0x128C21C0)

inline static constexpr unsigned int Class_4_46F7B02CFF7D2FCF_TypeDefinitionIndex = 88766;

class Class_4_46F7B02CFF7D2FCF : public ::Class_3_55230CEF110DAF7B
{
public:
	::System::Single Field_4_7; // 0x10
	::System::ValueTuple_2<::System::Single, ::System::Single> Field_4_6; // 0x14
	::System::Single Field_4_0; // 0x1C

	::System::Void _ctor(::System::Single a1, ::System::ValueTuple_2<::System::Single, ::System::Single> a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::ValueTuple_2<::System::Single, ::System::Single>))((::PBYTE)hIl2Cpp + CLASS_4_46F7B02CFF7D2FCF__CTOR_OFFSET))(this, a1, a2);
	}

	::Enum_3_C6DD60387A24E143 Method_4_A96DCA30C6927810()
	{
		return ((::Enum_3_C6DD60387A24E143(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_46F7B02CFF7D2FCF_METHOD_4_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Boolean Method_4_6FE2CC308CC0B264(::Class_3_61A5922E5046F385_2* a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_61A5922E5046F385_2*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_46F7B02CFF7D2FCF_METHOD_4_6FE2CC308CC0B264_OFFSET))(this, a1, a2);
	}
};
