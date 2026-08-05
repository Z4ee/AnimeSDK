#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

template <typename T> class Class_4_2FF7D360A2F3EC48;
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_4_AF94AF02FB4D8525_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x15B8E980)
#define CLASS_4_AF94AF02FB4D8525_METHOD_4_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x15B8E590)
#define CLASS_4_AF94AF02FB4D8525_METHOD_4_F4D4194FB86E4F25_OFFSET UNITYSDK_OFFSET(0x15B8E670)
#define CLASS_4_AF94AF02FB4D8525__CTOR_OFFSET UNITYSDK_OFFSET(0x15B8E890)

inline static constexpr unsigned int Class_4_AF94AF02FB4D8525_TypeDefinitionIndex = 57179;

class Class_4_AF94AF02FB4D8525 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_8D3E479B491881B3<::System::Int32>* Field_4_7; // 0x28
	::Class_4_2FF7D360A2F3EC48<::Foundation::ViewObject::ViewObjectHandle>* Field_4_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_AF94AF02FB4D8525__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_AF94AF02FB4D8525_METHOD_4_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_4_F4D4194FB86E4F25(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_AF94AF02FB4D8525_METHOD_4_F4D4194FB86E4F25_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_AF94AF02FB4D8525_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
