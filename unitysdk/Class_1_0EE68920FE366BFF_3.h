#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B4357A1C72BABC6B;
class Class_2_B9E8C2EEAA5C96EC;
class Class_3_1E4F9B0ED3BF21DE;
namespace Entitas { template <typename T> class IGroup_1; }

#define CLASS_1_0EE68920FE366BFF_3_EXECUTE_OFFSET UNITYSDK_OFFSET(0x16B6A250)
#define CLASS_1_0EE68920FE366BFF_3_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x16B6A130)
#define CLASS_1_0EE68920FE366BFF_3_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x16B6A200)
#define CLASS_1_0EE68920FE366BFF_3__CTOR_OFFSET UNITYSDK_OFFSET(0x16B6A120)

inline static constexpr unsigned int Class_1_0EE68920FE366BFF_3_TypeDefinitionIndex = 76687;

class Class_1_0EE68920FE366BFF_3 : public ::System::Object
{
public:
	::Entitas::IGroup_1<::Class_2_B9E8C2EEAA5C96EC*>* PECJBCGJFDN; // 0x10
	::Class_1_B4357A1C72BABC6B* FKINCGODJEP; // 0x18
	::Class_3_1E4F9B0ED3BF21DE* PDENFEFCAGN; // 0x20

	::System::Void _ctor(::Class_1_B4357A1C72BABC6B* a1, ::Class_3_1E4F9B0ED3BF21DE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4357A1C72BABC6B*, ::Class_3_1E4F9B0ED3BF21DE*))((::PBYTE)hIl2Cpp + CLASS_1_0EE68920FE366BFF_3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EE68920FE366BFF_3_INITIALIZE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EE68920FE366BFF_3_TEARDOWN_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EE68920FE366BFF_3_EXECUTE_OFFSET))(this);
	}
};
