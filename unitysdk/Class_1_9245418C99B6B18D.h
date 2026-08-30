#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F512C5C8F4EF9039;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }

#define CLASS_1_9245418C99B6B18D_GET_NODES_OFFSET UNITYSDK_OFFSET(0xB4B4F90)
#define CLASS_1_9245418C99B6B18D__CTOR_OFFSET UNITYSDK_OFFSET(0xB4B4F80)

inline static constexpr unsigned int Class_1_9245418C99B6B18D_TypeDefinitionIndex = 78682;

class Class_1_9245418C99B6B18D : public ::System::Object
{
public:
	::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::Class_1_F512C5C8F4EF9039*>* _Nodes_k__BackingField; // 0x10

	::System::Void _ctor(::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::Class_1_F512C5C8F4EF9039*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::Class_1_F512C5C8F4EF9039*>*))((::PBYTE)hIl2Cpp + CLASS_1_9245418C99B6B18D__CTOR_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::Class_1_F512C5C8F4EF9039*>* get_Nodes()
	{
		return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::Class_1_F512C5C8F4EF9039*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9245418C99B6B18D_GET_NODES_OFFSET))(this);
	}
};
