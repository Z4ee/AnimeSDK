#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/Struct_2_794DA620EA232BC8.h"

class Class_1_42C9945E1C4C7D4F;
namespace MoleMole { class BubbleGroupPlayGraphContent; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_259AD2155C74A170_DISPOSE_OFFSET UNITYSDK_OFFSET(0x139203A0)
#define CLASS_2_259AD2155C74A170_METHOD_2_1B34B4422E8A6FCB_1_OFFSET UNITYSDK_OFFSET(0x13920A50)
#define CLASS_2_259AD2155C74A170_METHOD_2_1B34B4422E8A6FCB_OFFSET UNITYSDK_OFFSET(0x13920620)
#define CLASS_2_259AD2155C74A170_METHOD_2_7EB62F550E616822_OFFSET UNITYSDK_OFFSET(0x139204D0)
#define CLASS_2_259AD2155C74A170_METHOD_2_B21F6175A0F7D2BB_OFFSET UNITYSDK_OFFSET(0x13920770)
#define CLASS_2_259AD2155C74A170_METHOD_2_BB7A1049F84E8127_OFFSET UNITYSDK_OFFSET(0x13920BA0)
#define CLASS_2_259AD2155C74A170_ONCREATE_OFFSET UNITYSDK_OFFSET(0x139203E0)
#define CLASS_2_259AD2155C74A170__CTOR_OFFSET UNITYSDK_OFFSET(0x139204B0)

inline static constexpr unsigned int Class_2_259AD2155C74A170_TypeDefinitionIndex = 79287;

class Class_2_259AD2155C74A170 : public ::Foundation::SingletonDisposable_1<::Class_2_259AD2155C74A170*>
{
public:
	::System::Collections::Generic::Dictionary_2<::Struct_2_794DA620EA232BC8, ::Class_1_42C9945E1C4C7D4F*>* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_259AD2155C74A170__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_259AD2155C74A170_DISPOSE_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_259AD2155C74A170_ONCREATE_OFFSET))(this);
	}

	::System::Void Method_2_7EB62F550E616822(::Struct_2_794DA620EA232BC8 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_794DA620EA232BC8))((::PBYTE)hIl2Cpp + CLASS_2_259AD2155C74A170_METHOD_2_7EB62F550E616822_OFFSET))(this, a1);
	}

	::System::Void Method_2_1B34B4422E8A6FCB(::Struct_2_794DA620EA232BC8 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_794DA620EA232BC8))((::PBYTE)hIl2Cpp + CLASS_2_259AD2155C74A170_METHOD_2_1B34B4422E8A6FCB_OFFSET))(this, a1);
	}

	::System::Void Method_2_B21F6175A0F7D2BB(::Struct_2_794DA620EA232BC8 a1, ::MoleMole::BubbleGroupPlayGraphContent* a2, ::System::Func_1<::Class_1_42C9945E1C4C7D4F*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_794DA620EA232BC8, ::MoleMole::BubbleGroupPlayGraphContent*, ::System::Func_1<::Class_1_42C9945E1C4C7D4F*>*))((::PBYTE)hIl2Cpp + CLASS_2_259AD2155C74A170_METHOD_2_B21F6175A0F7D2BB_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_1B34B4422E8A6FCB_1(::Struct_2_794DA620EA232BC8 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_794DA620EA232BC8))((::PBYTE)hIl2Cpp + CLASS_2_259AD2155C74A170_METHOD_2_1B34B4422E8A6FCB_1_OFFSET))(this, a1);
	}

	static ::Class_1_42C9945E1C4C7D4F* Method_2_BB7A1049F84E8127()
	{
		return ((::Class_1_42C9945E1C4C7D4F*(*)())((::PBYTE)hIl2Cpp + CLASS_2_259AD2155C74A170_METHOD_2_BB7A1049F84E8127_OFFSET))();
	}
};
