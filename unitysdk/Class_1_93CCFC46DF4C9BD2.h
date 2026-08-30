#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_725;
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_93CCFC46DF4C9BD2_METHOD_1_01ACC9B513C5E7F7_OFFSET UNITYSDK_OFFSET(0x1631E390)
#define CLASS_1_93CCFC46DF4C9BD2_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1631E4D0)
#define CLASS_1_93CCFC46DF4C9BD2__CTOR_OFFSET UNITYSDK_OFFSET(0x1631E560)

inline static constexpr unsigned int Class_1_93CCFC46DF4C9BD2_TypeDefinitionIndex = 64392;

class Class_1_93CCFC46DF4C9BD2 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Action_1<::Class_0_16E4307DCC419505_725*>*>* EPKIGJMDIED; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93CCFC46DF4C9BD2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_01ACC9B513C5E7F7(::Class_0_16E4307DCC419505_725* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_725*))((::PBYTE)hIl2Cpp + CLASS_1_93CCFC46DF4C9BD2_METHOD_1_01ACC9B513C5E7F7_OFFSET))(this, a1);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93CCFC46DF4C9BD2_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}
};
