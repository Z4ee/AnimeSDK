#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7C7C41AB1BA6A929;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A55DC9AE6705F8CA__CTOR_OFFSET UNITYSDK_OFFSET(0x109075F0)

inline static constexpr unsigned int Class_1_A55DC9AE6705F8CA_TypeDefinitionIndex = 60568;

class Class_1_A55DC9AE6705F8CA : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_7C7C41AB1BA6A929*>* Field_1_2; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* Field_1_3; // 0x18
	::System::Int32 Field_1_0; // 0x20
	::System::Int32 Field_1_1; // 0x24

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::Class_1_7C7C41AB1BA6A929*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::Class_1_7C7C41AB1BA6A929*>*))((::PBYTE)hIl2Cpp + CLASS_1_A55DC9AE6705F8CA__CTOR_OFFSET))(this, a1, a2, a3);
	}
};
