#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B353AD2F4C8AD4F8;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_13586CBADB3B91B7_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1F5CFD30)
#define CLASS_1_13586CBADB3B91B7_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1F5CFD40)
#define CLASS_1_13586CBADB3B91B7_METHOD_1_B07B48CC935CD821_OFFSET UNITYSDK_OFFSET(0x1F5CFD50)
#define CLASS_1_13586CBADB3B91B7__CTOR_OFFSET UNITYSDK_OFFSET(0x1F5CFD20)

inline static constexpr unsigned int Class_1_13586CBADB3B91B7_TypeDefinitionIndex = 19039;

class Class_1_13586CBADB3B91B7 : public ::System::Object
{
public:
	::System::String* Field_1_7; // 0x10
	::Class_1_B353AD2F4C8AD4F8* Field_1_6; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor(::Class_1_B353AD2F4C8AD4F8* a1, ::System::String* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B353AD2F4C8AD4F8*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_13586CBADB3B91B7__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13586CBADB3B91B7_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::Class_1_B353AD2F4C8AD4F8* Method_1_24748FC20F375725()
	{
		return ((::Class_1_B353AD2F4C8AD4F8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13586CBADB3B91B7_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_13586CBADB3B91B7*>* Method_1_B07B48CC935CD821(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_13586CBADB3B91B7*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_13586CBADB3B91B7_METHOD_1_B07B48CC935CD821_OFFSET))(this, a1);
	}
};
