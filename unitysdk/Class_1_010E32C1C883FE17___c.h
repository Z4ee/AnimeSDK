#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_46FCAD36F5CA36C7;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_010E32C1C883FE17___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18818280)
#define CLASS_1_010E32C1C883FE17___C__CTOR_OFFSET UNITYSDK_OFFSET(0x188182B0)
#define CLASS_1_010E32C1C883FE17___C___COLLECTNAVNODESAFTERMERGE_B__15_0_OFFSET UNITYSDK_OFFSET(0x188182C0)

inline static constexpr unsigned int Class_1_010E32C1C883FE17___c_TypeDefinitionIndex = 74478;

class Class_1_010E32C1C883FE17___c : public ::System::Object
{
public:
	static ::Class_1_010E32C1C883FE17___c** StaticGet___9()
	{
		return (::Class_1_010E32C1C883FE17___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_010E32C1C883FE17___c_TypeDefinitionIndex)->GetStaticField(0x59FF0);
	}
	static ::System::Comparison_1<::Class_1_46FCAD36F5CA36C7*>** StaticGet___9__15_0()
	{
		return (::System::Comparison_1<::Class_1_46FCAD36F5CA36C7*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_010E32C1C883FE17___c_TypeDefinitionIndex)->GetStaticField(0x59FF8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_010E32C1C883FE17___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_010E32C1C883FE17___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __CollectNavNodesAfterMerge_b__15_0(::Class_1_46FCAD36F5CA36C7* a1, ::Class_1_46FCAD36F5CA36C7* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_46FCAD36F5CA36C7*, ::Class_1_46FCAD36F5CA36C7*))((::PBYTE)hIl2Cpp + CLASS_1_010E32C1C883FE17___C___COLLECTNAVNODESAFTERMERGE_B__15_0_OFFSET))(this, a1, a2);
	}
};
