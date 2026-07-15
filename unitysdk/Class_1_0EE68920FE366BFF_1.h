#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C6C5256FBDC1500F_1;
class Class_2_17EDF3520C9FC3DE;
class Class_3_89DDDD327D710B05;
namespace Entitas { template <typename T> class IGroup_1; }

#define CLASS_1_0EE68920FE366BFF_1_EXECUTE_OFFSET UNITYSDK_OFFSET(0x177BD5B0)
#define CLASS_1_0EE68920FE366BFF_1_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x177BD4B0)
#define CLASS_1_0EE68920FE366BFF_1_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x177BD470)
#define CLASS_1_0EE68920FE366BFF_1__CTOR_OFFSET UNITYSDK_OFFSET(0x177BD460)

inline static constexpr unsigned int Class_1_0EE68920FE366BFF_1_TypeDefinitionIndex = 72756;

class Class_1_0EE68920FE366BFF_1 : public ::System::Object
{
public:
	::Class_3_89DDDD327D710B05* Field_1_0; // 0x10
	::Class_1_C6C5256FBDC1500F_1* Field_1_1; // 0x18
	::Entitas::IGroup_1<::Class_2_17EDF3520C9FC3DE*>* Field_1_2; // 0x20

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
