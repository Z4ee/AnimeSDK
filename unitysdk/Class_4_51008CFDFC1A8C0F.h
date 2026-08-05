#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

namespace System { class String; }
template <typename T> class Class_4_2FF7D360A2F3EC48;
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_4_51008CFDFC1A8C0F_METHOD_4_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x15999210)
#define CLASS_4_51008CFDFC1A8C0F_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x15999730)
#define CLASS_4_51008CFDFC1A8C0F_METHOD_4_7A00E552FBB51A60_OFFSET UNITYSDK_OFFSET(0x15999360)
#define CLASS_4_51008CFDFC1A8C0F__CTOR_OFFSET UNITYSDK_OFFSET(0x15999600)

inline static constexpr unsigned int Class_4_51008CFDFC1A8C0F_TypeDefinitionIndex = 55935;

class Class_4_51008CFDFC1A8C0F : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_4_0; // 0x28
	::Class_4_8D3E479B491881B3<::System::Int32>* Field_4_7; // 0x30
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_4_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_51008CFDFC1A8C0F__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_51008CFDFC1A8C0F_METHOD_4_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_4_7A00E552FBB51A60(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_51008CFDFC1A8C0F_METHOD_4_7A00E552FBB51A60_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_51008CFDFC1A8C0F_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
