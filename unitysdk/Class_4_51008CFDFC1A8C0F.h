#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

namespace System { class String; }
template <typename T> class Class_4_B51FB35349ACD175;
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_4_51008CFDFC1A8C0F_METHOD_4_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x115BCAB0)
#define CLASS_4_51008CFDFC1A8C0F_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x115BCFD0)
#define CLASS_4_51008CFDFC1A8C0F_METHOD_4_7A00E552FBB51A60_OFFSET UNITYSDK_OFFSET(0x115BCC00)
#define CLASS_4_51008CFDFC1A8C0F__CTOR_OFFSET UNITYSDK_OFFSET(0x115BCEA0)

inline static constexpr unsigned int Class_4_51008CFDFC1A8C0F_TypeDefinitionIndex = 70585;

class Class_4_51008CFDFC1A8C0F : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_F91115D9A1F02F5F<::System::String*>* Field_4_0; // 0x28
	::Class_4_F91115D9A1F02F5F<::System::String*>* Field_4_1; // 0x30
	::Class_4_B51FB35349ACD175<::System::Int32>* Field_4_2; // 0x38

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
