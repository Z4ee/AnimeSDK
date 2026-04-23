#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FB32407D2CB425FF;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A43790479D6509DE_METHOD_1_3FDBA9EC9B7EC058_OFFSET UNITYSDK_OFFSET(0x930D5C0)
#define CLASS_1_A43790479D6509DE_METHOD_1_BD6E3C2B0CF2A8D5_OFFSET UNITYSDK_OFFSET(0x930D740)
#define CLASS_1_A43790479D6509DE__CTOR_OFFSET UNITYSDK_OFFSET(0x930D930)

inline static constexpr unsigned int Class_1_A43790479D6509DE_TypeDefinitionIndex = 51815;

class Class_1_A43790479D6509DE : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_FB32407D2CB425FF*>* Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x18
	::System::UInt32 Field_1_3; // 0x1C
	::System::Int32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A43790479D6509DE__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3FDBA9EC9B7EC058(::System::Single a1, ::System::Action* a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_A43790479D6509DE_METHOD_1_3FDBA9EC9B7EC058_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_BD6E3C2B0CF2A8D5(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A43790479D6509DE_METHOD_1_BD6E3C2B0CF2A8D5_OFFSET))(this, a1);
	}
};
