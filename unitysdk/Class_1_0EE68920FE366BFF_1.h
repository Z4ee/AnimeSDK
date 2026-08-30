#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C6C5256FBDC1500F_1;
class Class_2_17EDF3520C9FC3DE;
class Class_3_89DDDD327D710B05;
namespace Entitas { template <typename T> class IGroup_1; }

#define CLASS_1_0EE68920FE366BFF_1_EXECUTE_OFFSET UNITYSDK_OFFSET(0x192828C0)
#define CLASS_1_0EE68920FE366BFF_1_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x192827C0)
#define CLASS_1_0EE68920FE366BFF_1_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x19282780)
#define CLASS_1_0EE68920FE366BFF_1__CTOR_OFFSET UNITYSDK_OFFSET(0x19282770)

inline static constexpr unsigned int Class_1_0EE68920FE366BFF_1_TypeDefinitionIndex = 76192;

class Class_1_0EE68920FE366BFF_1 : public ::System::Object
{
public:
	::Entitas::IGroup_1<::Class_2_17EDF3520C9FC3DE*>* CIIFMONKDJK; // 0x10
	::Class_1_C6C5256FBDC1500F_1* FKINCGODJEP; // 0x18
	::Class_3_89DDDD327D710B05* PDENFEFCAGN; // 0x20

	::System::Void _ctor(::Class_1_C6C5256FBDC1500F_1* a1, ::Class_3_89DDDD327D710B05* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C6C5256FBDC1500F_1*, ::Class_3_89DDDD327D710B05*))((::PBYTE)hIl2Cpp + CLASS_1_0EE68920FE366BFF_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EE68920FE366BFF_1_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EE68920FE366BFF_1_INITIALIZE_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EE68920FE366BFF_1_EXECUTE_OFFSET))(this);
	}
};
