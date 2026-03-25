#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B4357A1C72BABC6B_1;
class Class_2_921296CE04546AF9;
class Class_3_99BC749707F2A8AC;
namespace Entitas { template <typename T> class IGroup_1; }

#define CLASS_1_0EE68920FE366BFF_1_EXECUTE_OFFSET UNITYSDK_OFFSET(0xD7F2D60)
#define CLASS_1_0EE68920FE366BFF_1_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xD7F2C30)
#define CLASS_1_0EE68920FE366BFF_1_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xD7F2BF0)
#define CLASS_1_0EE68920FE366BFF_1__CTOR_OFFSET UNITYSDK_OFFSET(0xD7F2BE0)

inline static constexpr unsigned int Class_1_0EE68920FE366BFF_1_TypeDefinitionIndex = 62428;

class Class_1_0EE68920FE366BFF_1 : public ::System::Object
{
public:
	::Class_1_B4357A1C72BABC6B_1* Field_1_0; // 0x10
	::Class_3_99BC749707F2A8AC* Field_1_1; // 0x18
	::Entitas::IGroup_1<::Class_2_921296CE04546AF9*>* Field_1_2; // 0x20

	::System::Void _ctor(::Class_1_B4357A1C72BABC6B_1* a1, ::Class_3_99BC749707F2A8AC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4357A1C72BABC6B_1*, ::Class_3_99BC749707F2A8AC*))((::PBYTE)hIl2Cpp + CLASS_1_0EE68920FE366BFF_1__CTOR_OFFSET))(this, a1, a2);
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
