#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_467;
class Class_1_1CD633F3449963C2;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_1_64B9451F24006A38_METHOD_1_7F379DCDB08D60A9_OFFSET UNITYSDK_OFFSET(0x1182C2C0)
#define CLASS_1_64B9451F24006A38_METHOD_1_DD83B132A127F395_OFFSET UNITYSDK_OFFSET(0x1182C960)
#define CLASS_1_64B9451F24006A38__CTOR_OFFSET UNITYSDK_OFFSET(0x1182C550)

inline static constexpr unsigned int Class_1_64B9451F24006A38_TypeDefinitionIndex = 55697;

class Class_1_64B9451F24006A38 : public ::System::Object
{
public:
	::System::Collections::Generic::IList_1<::Class_1_1CD633F3449963C2*>* Field_1_0; // 0x10

	::System::Void _ctor(::System::Collections::Generic::IList_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_64B9451F24006A38__CTOR_OFFSET))(this, a1);
	}

	static ::Class_0_16E4307DCC419505_467* Method_1_7F379DCDB08D60A9(::System::Collections::Generic::IList_1<::System::String*>* a1)
	{
		return ((::Class_0_16E4307DCC419505_467*(*)(::System::Collections::Generic::IList_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_64B9451F24006A38_METHOD_1_7F379DCDB08D60A9_OFFSET))(a1);
	}

	::System::Boolean Method_1_DD83B132A127F395(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_64B9451F24006A38_METHOD_1_DD83B132A127F395_OFFSET))(this, a1);
	}
};
