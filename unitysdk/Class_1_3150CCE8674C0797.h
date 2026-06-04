#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_11C13BB2EAE9D3D9;
class Class_1_544F425D4D7FE2EE;
class Class_1_5EBD02232B1B6972;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3150CCE8674C0797_METHOD_1_8D96BA5395067BDD_OFFSET UNITYSDK_OFFSET(0x1392A560)
#define CLASS_1_3150CCE8674C0797_METHOD_1_A47AB3EDC18FFDC6_OFFSET UNITYSDK_OFFSET(0x1392A250)
#define CLASS_1_3150CCE8674C0797__CTOR_OFFSET UNITYSDK_OFFSET(0x1392A980)

inline static constexpr unsigned int Class_1_3150CCE8674C0797_TypeDefinitionIndex = 58335;

class Class_1_3150CCE8674C0797 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3150CCE8674C0797__CTOR_OFFSET))(this);
	}

	::Class_1_11C13BB2EAE9D3D9* Method_1_A47AB3EDC18FFDC6(::Class_1_544F425D4D7FE2EE* a1)
	{
		return ((::Class_1_11C13BB2EAE9D3D9*(*)(::PVOID, ::Class_1_544F425D4D7FE2EE*))((::PBYTE)hIl2Cpp + CLASS_1_3150CCE8674C0797_METHOD_1_A47AB3EDC18FFDC6_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_5EBD02232B1B6972*>* Method_1_8D96BA5395067BDD(::Class_1_544F425D4D7FE2EE* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_5EBD02232B1B6972*>*(*)(::PVOID, ::Class_1_544F425D4D7FE2EE*))((::PBYTE)hIl2Cpp + CLASS_1_3150CCE8674C0797_METHOD_1_8D96BA5395067BDD_OFFSET))(this, a1);
	}
};
