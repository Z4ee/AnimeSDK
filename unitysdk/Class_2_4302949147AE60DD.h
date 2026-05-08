#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_33.h"

class Class_2_D02DABCF41CDA271;
class Class_2_DF2C726EEEEC912D;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_2_4302949147AE60DD_METHOD_2_7FCC736E80947BDF_OFFSET UNITYSDK_OFFSET(0x1419E3D0)
#define CLASS_2_4302949147AE60DD__CTOR_OFFSET UNITYSDK_OFFSET(0x1419E940)

inline static constexpr unsigned int Class_2_4302949147AE60DD_TypeDefinitionIndex = 51007;

class Class_2_4302949147AE60DD : public ::Class_1_43BD383C98B4C0C5_33
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4302949147AE60DD__CTOR_OFFSET))(this);
	}

	::System::String* Method_2_7FCC736E80947BDF(::Class_2_DF2C726EEEEC912D* a1, ::Class_2_D02DABCF41CDA271* a2, ::System::String* a3, ::System::Collections::Generic::IList_1<::System::String*>* a4, ::System::Collections::Generic::IList_1<::System::Int32>* a5, ::System::String* a6)
	{
		return ((::System::String*(*)(::PVOID, ::Class_2_DF2C726EEEEC912D*, ::Class_2_D02DABCF41CDA271*, ::System::String*, ::System::Collections::Generic::IList_1<::System::String*>*, ::System::Collections::Generic::IList_1<::System::Int32>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_4302949147AE60DD_METHOD_2_7FCC736E80947BDF_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}
};
