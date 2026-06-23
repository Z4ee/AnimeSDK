#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_95455B7ED919F227.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_EA466FC87C93105A_METHOD_1_01465EF48F78A046_OFFSET UNITYSDK_OFFSET(0x14E61B50)
#define CLASS_1_EA466FC87C93105A_METHOD_1_53086CF79F68CAFC_OFFSET UNITYSDK_OFFSET(0x14E61D00)
#define CLASS_1_EA466FC87C93105A_METHOD_1_6BCEDD4814D8A8D9_OFFSET UNITYSDK_OFFSET(0x14E61A60)
#define CLASS_1_EA466FC87C93105A_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x14E61AE0)
#define CLASS_1_EA466FC87C93105A__CTOR_OFFSET UNITYSDK_OFFSET(0x14E61A00)

inline static constexpr unsigned int Class_1_EA466FC87C93105A_TypeDefinitionIndex = 87374;

class Class_1_EA466FC87C93105A : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Struct_2_95455B7ED919F227>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA466FC87C93105A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6BCEDD4814D8A8D9(::Struct_2_95455B7ED919F227 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_95455B7ED919F227))((::PBYTE)hIl2Cpp + CLASS_1_EA466FC87C93105A_METHOD_1_6BCEDD4814D8A8D9_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA466FC87C93105A_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Boolean Method_1_01465EF48F78A046(::Struct_2_95455B7ED919F227 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_95455B7ED919F227))((::PBYTE)hIl2Cpp + CLASS_1_EA466FC87C93105A_METHOD_1_01465EF48F78A046_OFFSET))(this, a1);
	}

	::System::Void Method_1_53086CF79F68CAFC(::System::Action_1<::Struct_2_95455B7ED919F227>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Struct_2_95455B7ED919F227>*))((::PBYTE)hIl2Cpp + CLASS_1_EA466FC87C93105A_METHOD_1_53086CF79F68CAFC_OFFSET))(this, a1);
	}
};
