#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_13586CBADB3B91B7.h"

class Class_1_B353AD2F4C8AD4F8;
class Class_2_7B173A84028F0757;
class Class_2_F21834FAEFB228CB;
class Class_3_CC58CB58CA7EE5CF;
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_2_DEF0E57684940023_METHOD_2_1DFC139DDDA052D2_OFFSET UNITYSDK_OFFSET(0x1B5E5AA0)
#define CLASS_2_DEF0E57684940023_METHOD_2_1F4F7952600B2FDA_OFFSET UNITYSDK_OFFSET(0x1B5E5A30)
#define CLASS_2_DEF0E57684940023_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x1B5E59C0)
#define CLASS_2_DEF0E57684940023__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5E57D0)

inline static constexpr unsigned int Class_2_DEF0E57684940023_TypeDefinitionIndex = 9259;

class Class_2_DEF0E57684940023 : public ::Class_1_13586CBADB3B91B7
{
public:
	::Class_2_F21834FAEFB228CB* Field_2_1; // 0x28
	::Class_3_CC58CB58CA7EE5CF* Field_2_0; // 0x30
	::System::Type* Field_2_3; // 0x38
	::System::Collections::Generic::IList_1<::Class_2_7B173A84028F0757*>* Field_2_2; // 0x40

	::System::Void _ctor(::Class_3_CC58CB58CA7EE5CF* a1, ::Class_1_B353AD2F4C8AD4F8* a2, ::Class_2_F21834FAEFB228CB* a3, ::System::Int32 a4, ::System::Type* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_CC58CB58CA7EE5CF*, ::Class_1_B353AD2F4C8AD4F8*, ::Class_2_F21834FAEFB228CB*, ::System::Int32, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_2_DEF0E57684940023__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::String* Method_2_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DEF0E57684940023_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_13586CBADB3B91B7*>* Method_2_1F4F7952600B2FDA(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_13586CBADB3B91B7*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_DEF0E57684940023_METHOD_2_1F4F7952600B2FDA_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IList_1<::Class_2_7B173A84028F0757*>* Method_2_1DFC139DDDA052D2()
	{
		return ((::System::Collections::Generic::IList_1<::Class_2_7B173A84028F0757*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DEF0E57684940023_METHOD_2_1DFC139DDDA052D2_OFFSET))(this);
	}
};
