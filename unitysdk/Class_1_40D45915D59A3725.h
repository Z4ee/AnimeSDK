#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_99687E8C8BA89056_1;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_40D45915D59A3725__CTOR_OFFSET UNITYSDK_OFFSET(0x18B9BC90)

inline static constexpr unsigned int Class_1_40D45915D59A3725_TypeDefinitionIndex = 49375;

class Class_1_40D45915D59A3725 : public ::System::Object
{
public:
	::System::String* Id; // 0x10
	::Il2CppArray<::System::String*>* ConnectedEndpoints; // 0x18
	::System::Collections::Generic::List_1<::Class_1_99687E8C8BA89056_1*>* Nodes; // 0x20
	::System::Single Width; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40D45915D59A3725__CTOR_OFFSET))(this);
	}
};
