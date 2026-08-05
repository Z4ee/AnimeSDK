#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_36;
class Class_1_0D6706375CDAAE8C;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_A17C274079359ED8_CLASS_1_22F69D07F2B37368_METHOD_1_908758788F1E500B_OFFSET UNITYSDK_OFFSET(0x1028E340)
#define CLASS_2_A17C274079359ED8_CLASS_1_22F69D07F2B37368_METHOD_1_D2DD6AE28AAF69CC_OFFSET UNITYSDK_OFFSET(0x1028E330)
#define CLASS_2_A17C274079359ED8_CLASS_1_22F69D07F2B37368__CTOR_OFFSET UNITYSDK_OFFSET(0x1028E320)

inline static constexpr unsigned int Class_2_A17C274079359ED8_Class_1_22F69D07F2B37368_TypeDefinitionIndex = 70394;

class Class_2_A17C274079359ED8_Class_1_22F69D07F2B37368 : public ::System::Object
{
public:
	::System::Action_1<::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*>* Field_1_0; // 0x10
	::System::Action* Field_1_7; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A17C274079359ED8_CLASS_1_22F69D07F2B37368__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D2DD6AE28AAF69CC(::Class_0_16E4307DCC419505_36* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + CLASS_2_A17C274079359ED8_CLASS_1_22F69D07F2B37368_METHOD_1_D2DD6AE28AAF69CC_OFFSET))(this, a1);
	}

	::System::Void Method_1_908758788F1E500B(::Class_0_16E4307DCC419505_36* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + CLASS_2_A17C274079359ED8_CLASS_1_22F69D07F2B37368_METHOD_1_908758788F1E500B_OFFSET))(this, a1);
	}
};
