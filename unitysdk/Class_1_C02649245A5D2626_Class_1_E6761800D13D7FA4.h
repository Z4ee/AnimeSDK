#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_E4C95F6C5D4D6E84.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_460;
class Class_1_1EA8435E138F2E03;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine::UI::Extension { class ITabButtonGroup; }

#define CLASS_1_C02649245A5D2626_CLASS_1_E6761800D13D7FA4_METHOD_1_0D7638DBC93E5002_OFFSET UNITYSDK_OFFSET(0x13CF2DA0)
#define CLASS_1_C02649245A5D2626_CLASS_1_E6761800D13D7FA4_METHOD_1_2452E5505CDF4D8D_OFFSET UNITYSDK_OFFSET(0x13CF2D50)
#define CLASS_1_C02649245A5D2626_CLASS_1_E6761800D13D7FA4_METHOD_1_F617D77D98D26950_OFFSET UNITYSDK_OFFSET(0x13CF2F70)
#define CLASS_1_C02649245A5D2626_CLASS_1_E6761800D13D7FA4__CTOR_OFFSET UNITYSDK_OFFSET(0x13CEF9F0)

inline static constexpr unsigned int Class_1_C02649245A5D2626_Class_1_E6761800D13D7FA4_TypeDefinitionIndex = 52506;

class Class_1_C02649245A5D2626_Class_1_E6761800D13D7FA4 : public ::System::Object
{
public:
	::System::Func_1<::System::Int32>* Field_1_0; // 0x10
	::System::Func_2<::System::Int32, ::System::Boolean>* Field_1_7; // 0x18
	::System::Func_1<::System::Int32>* Field_1_9; // 0x20
	::System::Func_2<::System::Int32, ::Class_1_1EA8435E138F2E03*>* Field_1_10; // 0x28
	::System::Func_1<::System::Int32>* Field_1_8; // 0x30
	::Struct_2_E4C95F6C5D4D6E84 Field_1_5; // 0x38
	::System::Action_1<::System::Int32>* Field_1_1; // 0x48
	::System::Func_2<::System::Int32, ::System::String*>* Field_1_11; // 0x50
	::Class_0_16E4307DCC419505_460* Field_1_6; // 0x58
	::System::Boolean Field_1_2; // 0x60
	::System::Boolean Field_1_4; // 0x61

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626_CLASS_1_E6761800D13D7FA4__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_2452E5505CDF4D8D()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626_CLASS_1_E6761800D13D7FA4_METHOD_1_2452E5505CDF4D8D_OFFSET))(this);
	}

	::System::Void Method_1_0D7638DBC93E5002()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626_CLASS_1_E6761800D13D7FA4_METHOD_1_0D7638DBC93E5002_OFFSET))(this);
	}

	::System::Void Method_1_F617D77D98D26950(::UnityEngine::UI::Extension::ITabButtonGroup* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::ITabButtonGroup*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626_CLASS_1_E6761800D13D7FA4_METHOD_1_F617D77D98D26950_OFFSET))(this, a1, a2);
	}
};
