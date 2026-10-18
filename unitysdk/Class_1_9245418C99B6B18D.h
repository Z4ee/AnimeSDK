#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7E6CC96E08E99895;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }

#define CLASS_1_9245418C99B6B18D_GET_NODES_OFFSET UNITYSDK_OFFSET(0xB18A1B0)
#define CLASS_1_9245418C99B6B18D__CTOR_OFFSET UNITYSDK_OFFSET(0xB18A1A0)

inline static constexpr unsigned int Class_1_9245418C99B6B18D_TypeDefinitionIndex = 79161;

class Class_1_9245418C99B6B18D : public ::System::Object
{
public:
	::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::Class_1_7E6CC96E08E99895*>* _Nodes_k__BackingField; // 0x10

	::System::Void _ctor(::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::Class_1_7E6CC96E08E99895*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::Class_1_7E6CC96E08E99895*>*))((::PBYTE)hIl2Cpp + CLASS_1_9245418C99B6B18D__CTOR_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::Class_1_7E6CC96E08E99895*>* get_Nodes()
	{
		return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::Class_1_7E6CC96E08E99895*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9245418C99B6B18D_GET_NODES_OFFSET))(this);
	}
};
