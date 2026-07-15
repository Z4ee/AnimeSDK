#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0BCDBB6467B5097D;
class Class_1_544F425D4D7FE2EE;
class Class_1_5EBD02232B1B6972;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2FEED122674C36DE_METHOD_1_0FADAAE18DFBD9D4_OFFSET UNITYSDK_OFFSET(0x17561E60)
#define CLASS_1_2FEED122674C36DE_METHOD_1_A47AB3EDC18FFDC6_OFFSET UNITYSDK_OFFSET(0x17561B50)
#define CLASS_1_2FEED122674C36DE__CTOR_OFFSET UNITYSDK_OFFSET(0x175622F0)

inline static constexpr unsigned int Class_1_2FEED122674C36DE_TypeDefinitionIndex = 59597;

class Class_1_2FEED122674C36DE : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FEED122674C36DE__CTOR_OFFSET))(this);
	}

	::Class_1_0BCDBB6467B5097D* Method_1_A47AB3EDC18FFDC6(::Class_1_544F425D4D7FE2EE* a1)
	{
		return ((::Class_1_0BCDBB6467B5097D*(*)(::PVOID, ::Class_1_544F425D4D7FE2EE*))((::PBYTE)hIl2Cpp + CLASS_1_2FEED122674C36DE_METHOD_1_A47AB3EDC18FFDC6_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_5EBD02232B1B6972*>* Method_1_0FADAAE18DFBD9D4(::Class_1_544F425D4D7FE2EE* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_5EBD02232B1B6972*>*(*)(::PVOID, ::Class_1_544F425D4D7FE2EE*))((::PBYTE)hIl2Cpp + CLASS_1_2FEED122674C36DE_METHOD_1_0FADAAE18DFBD9D4_OFFSET))(this, a1);
	}
};
