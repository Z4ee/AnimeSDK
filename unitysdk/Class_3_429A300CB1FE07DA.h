#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_B51FB35349ACD175;
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_3_429A300CB1FE07DA_METHOD_3_25666B778FEDA7B2_OFFSET UNITYSDK_OFFSET(0x15987A30)
#define CLASS_3_429A300CB1FE07DA_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x159881E0)
#define CLASS_3_429A300CB1FE07DA_METHOD_3_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x15987830)
#define CLASS_3_429A300CB1FE07DA__CTOR_OFFSET UNITYSDK_OFFSET(0x15988040)

inline static constexpr unsigned int Class_3_429A300CB1FE07DA_TypeDefinitionIndex = 84652;

class Class_3_429A300CB1FE07DA : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_B51FB35349ACD175<::System::Boolean>* Field_3_1; // 0x18
	::Class_4_B51FB35349ACD175<::System::Int32>* Field_3_4; // 0x20
	::Class_4_B51FB35349ACD175<::System::Collections::Generic::List_1<::System::String*>*>* Field_3_3; // 0x28
	::Class_4_F91115D9A1F02F5F<::System::Int32>* Field_3_0; // 0x30
	::Class_4_B51FB35349ACD175<::System::Single>* Field_3_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_429A300CB1FE07DA__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_429A300CB1FE07DA_METHOD_3_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_3_25666B778FEDA7B2(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_429A300CB1FE07DA_METHOD_3_25666B778FEDA7B2_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_429A300CB1FE07DA_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
