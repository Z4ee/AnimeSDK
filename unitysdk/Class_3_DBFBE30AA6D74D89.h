#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_3_DBFBE30AA6D74D89_METHOD_3_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x14357700)
#define CLASS_3_DBFBE30AA6D74D89_METHOD_3_4A7D8AD50F8D54B5_OFFSET UNITYSDK_OFFSET(0x143578B0)
#define CLASS_3_DBFBE30AA6D74D89_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14357C20)
#define CLASS_3_DBFBE30AA6D74D89__CTOR_OFFSET UNITYSDK_OFFSET(0x14357AE0)

inline static constexpr unsigned int Class_3_DBFBE30AA6D74D89_TypeDefinitionIndex = 49548;

class Class_3_DBFBE30AA6D74D89 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x18
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_3_1; // 0x20
	::Class_3_B537A0AA78803363* Field_3_3; // 0x28
	::Class_4_2FF7D360A2F3EC48<::System::Collections::Generic::List_1<::System::String*>*>* Field_3_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DBFBE30AA6D74D89__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DBFBE30AA6D74D89_METHOD_3_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_3_4A7D8AD50F8D54B5(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_DBFBE30AA6D74D89_METHOD_3_4A7D8AD50F8D54B5_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DBFBE30AA6D74D89_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
