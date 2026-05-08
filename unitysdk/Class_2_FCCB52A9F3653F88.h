#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_916F5ACE544947F8.h"
#include "unitysdk/Enum_3_8290B74BD5E13566.h"

#define CLASS_2_FCCB52A9F3653F88_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B790890)
#define CLASS_2_FCCB52A9F3653F88_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1B7909B0)
#define CLASS_2_FCCB52A9F3653F88_METHOD_2_D703A23F48C81AFC_OFFSET UNITYSDK_OFFSET(0x1B790A00)
#define CLASS_2_FCCB52A9F3653F88_METHOD_2_FBC488F018A169C1_OFFSET UNITYSDK_OFFSET(0x1B790900)
#define CLASS_2_FCCB52A9F3653F88__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7908E0)

inline static constexpr unsigned int Class_2_FCCB52A9F3653F88_TypeDefinitionIndex = 26424;

class Class_2_FCCB52A9F3653F88 : public ::Class_1_916F5ACE544947F8<::Class_2_FCCB52A9F3653F88*>
{
public:
	::System::UInt32 Field_2_1; // 0x10
	::System::UInt32 Field_2_0; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FCCB52A9F3653F88__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FCCB52A9F3653F88_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_FBC488F018A169C1(::System::UInt64 a1, ::System::Int16& a2, ::System::Int16& a3, ::System::UInt32& a4, ::System::Int16& a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Int16&, ::System::Int16&, ::System::UInt32&, ::System::Int16&))((::PBYTE)hIl2Cpp + CLASS_2_FCCB52A9F3653F88_METHOD_2_FBC488F018A169C1_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FCCB52A9F3653F88_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::UInt64 Method_2_D703A23F48C81AFC(::Enum_3_8290B74BD5E13566 a1, ::System::Int16 a2)
	{
		return ((::System::UInt64(*)(::PVOID, ::Enum_3_8290B74BD5E13566, ::System::Int16))((::PBYTE)hIl2Cpp + CLASS_2_FCCB52A9F3653F88_METHOD_2_D703A23F48C81AFC_OFFSET))(this, a1, a2);
	}
};
