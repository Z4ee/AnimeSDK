#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_4_0A8485919B1E9073_METHOD_4_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x12E40B40)
#define CLASS_4_0A8485919B1E9073_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x12E41040)
#define CLASS_4_0A8485919B1E9073_METHOD_4_46A9C8713E8D6F4F_OFFSET UNITYSDK_OFFSET(0x12E40C90)
#define CLASS_4_0A8485919B1E9073__CTOR_OFFSET UNITYSDK_OFFSET(0x12E40F10)

inline static constexpr unsigned int Class_4_0A8485919B1E9073_TypeDefinitionIndex = 59720;

class Class_4_0A8485919B1E9073 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_F91115D9A1F02F5F<::System::Boolean>* Field_4_2; // 0x28
	::Class_4_F91115D9A1F02F5F<::System::Int32>* Field_4_1; // 0x30
	::Class_4_F91115D9A1F02F5F<::MoleMole::EntityHandle>* Field_4_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0A8485919B1E9073__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0A8485919B1E9073_METHOD_4_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_4_46A9C8713E8D6F4F(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_0A8485919B1E9073_METHOD_4_46A9C8713E8D6F4F_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0A8485919B1E9073_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
