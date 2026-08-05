#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
namespace System { class String; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_758535F6758A44FC_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x12A802F0)
#define CLASS_4_758535F6758A44FC_METHOD_4_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x12A7F940)
#define CLASS_4_758535F6758A44FC_METHOD_4_8BAE13BA2D9987F5_OFFSET UNITYSDK_OFFSET(0x12A7FAF0)
#define CLASS_4_758535F6758A44FC__CTOR_OFFSET UNITYSDK_OFFSET(0x12A800E0)

inline static constexpr unsigned int Class_4_758535F6758A44FC_TypeDefinitionIndex = 80420;

class Class_4_758535F6758A44FC : public ::Class_3_F3948D237059FA7A
{
public:
	// static const ::System::String* Field_4_7; // 0x0
	::Class_3_B537A0AA78803363* Field_4_0; // 0x28
	::Class_3_B537A0AA78803363* Field_4_2; // 0x30
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_4_3; // 0x38
	::Class_3_B537A0AA78803363* Field_4_1; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_758535F6758A44FC__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_758535F6758A44FC_METHOD_4_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_4_8BAE13BA2D9987F5(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_758535F6758A44FC_METHOD_4_8BAE13BA2D9987F5_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_758535F6758A44FC_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
