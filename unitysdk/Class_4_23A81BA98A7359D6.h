#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_C3F0E3B5AB5977AE_6;
class Class_3_CF43FA1E89397A1C;
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_23A81BA98A7359D6_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x129246E0)
#define CLASS_4_23A81BA98A7359D6_METHOD_4_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x12923BA0)
#define CLASS_4_23A81BA98A7359D6_METHOD_4_F5338FFAF10B5586_OFFSET UNITYSDK_OFFSET(0x12923DB0)
#define CLASS_4_23A81BA98A7359D6__CTOR_OFFSET UNITYSDK_OFFSET(0x129244D0)

inline static constexpr unsigned int Class_4_23A81BA98A7359D6_TypeDefinitionIndex = 63554;

class Class_4_23A81BA98A7359D6 : public ::Class_3_F3948D237059FA7A
{
public:
	static ::Class_3_C3F0E3B5AB5977AE_6** StaticGet_Field_4_6()
	{
		return (::Class_3_C3F0E3B5AB5977AE_6**)Il2CppClass::FromTypeDefinitionIndex(Class_4_23A81BA98A7359D6_TypeDefinitionIndex)->GetStaticField(0x31DA0);
	}
	::Class_4_2FF7D360A2F3EC48<::Foundation::ViewObject::ViewObjectHandle>* Field_4_3; // 0x28
	::Class_3_CF43FA1E89397A1C* Field_4_0; // 0x30
	::Class_3_CF43FA1E89397A1C* Field_4_7; // 0x38
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_4_1; // 0x40
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_4_2; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_23A81BA98A7359D6__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_23A81BA98A7359D6_METHOD_4_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_4_F5338FFAF10B5586(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_23A81BA98A7359D6_METHOD_4_F5338FFAF10B5586_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_23A81BA98A7359D6_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
