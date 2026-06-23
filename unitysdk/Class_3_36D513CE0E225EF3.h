#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
template <typename T> class Class_4_B51FB35349ACD175;
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_3_36D513CE0E225EF3_METHOD_3_25666B778FEDA7B2_OFFSET UNITYSDK_OFFSET(0x15A08FF0)
#define CLASS_3_36D513CE0E225EF3_METHOD_3_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0x15A08D30)
#define CLASS_3_36D513CE0E225EF3_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15A09520)
#define CLASS_3_36D513CE0E225EF3__CTOR_OFFSET UNITYSDK_OFFSET(0x15A092E0)

inline static constexpr unsigned int Class_3_36D513CE0E225EF3_TypeDefinitionIndex = 44421;

class Class_3_36D513CE0E225EF3 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_3_B537A0AA78803363* Field_3_5; // 0x18
	::Class_4_F91115D9A1F02F5F<::System::String*>* Field_3_3; // 0x20
	::Class_3_B537A0AA78803363* Field_3_6; // 0x28
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x30
	::Class_4_F91115D9A1F02F5F<::MoleMole::EntityHandle>* Field_3_1; // 0x38
	::Class_4_B51FB35349ACD175<::System::Int32>* Field_3_4; // 0x40
	::Class_4_F91115D9A1F02F5F<::Foundation::ViewObject::ViewObjectHandle>* Field_3_2; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_36D513CE0E225EF3__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_84B92802FDAFF6C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_36D513CE0E225EF3_METHOD_3_84B92802FDAFF6C8_OFFSET))(this);
	}

	::System::Void Method_3_25666B778FEDA7B2(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_36D513CE0E225EF3_METHOD_3_25666B778FEDA7B2_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_36D513CE0E225EF3_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
