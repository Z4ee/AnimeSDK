#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1C60A581E4366C03;
namespace System { class Version; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1FCDC350AF1C27AB_METHOD_1_1F47FB4F745DACA0_OFFSET UNITYSDK_OFFSET(0xD7CBA20)
#define CLASS_1_1FCDC350AF1C27AB_METHOD_1_A2B8457F84547A2A_OFFSET UNITYSDK_OFFSET(0xD7CBD80)
#define CLASS_1_1FCDC350AF1C27AB__CTOR_OFFSET UNITYSDK_OFFSET(0xD7CBE60)

inline static constexpr unsigned int Class_1_1FCDC350AF1C27AB_TypeDefinitionIndex = 64563;

class Class_1_1FCDC350AF1C27AB : public ::System::Object
{
public:
	::System::Version* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_2_1C60A581E4366C03*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1FCDC350AF1C27AB__CTOR_OFFSET))(this);
	}

	::Class_2_1C60A581E4366C03* Method_1_1F47FB4F745DACA0(::System::Version* a1, ::System::Version* a2)
	{
		return ((::Class_2_1C60A581E4366C03*(*)(::PVOID, ::System::Version*, ::System::Version*))((::PBYTE)hIl2Cpp + CLASS_1_1FCDC350AF1C27AB_METHOD_1_1F47FB4F745DACA0_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_A2B8457F84547A2A(::System::Version* a1, ::System::Version* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Version*, ::System::Version*))((::PBYTE)hIl2Cpp + CLASS_1_1FCDC350AF1C27AB_METHOD_1_A2B8457F84547A2A_OFFSET))(this, a1, a2);
	}
};
