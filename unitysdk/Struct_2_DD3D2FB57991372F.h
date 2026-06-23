#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

inline static constexpr unsigned int Struct_2_DD3D2FB57991372F_TypeDefinitionIndex = 80223;

template <typename T>
struct Struct_2_DD3D2FB57991372F
{
	static ::System::Boolean* StaticGet_Field_2_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_DD3D2FB57991372F_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::Boolean Field_2_1; // 0x0
	::System::Boolean Field_2_2; // 0x0
	::System::Collections::Generic::IEqualityComparer_1<T>* Field_2_3; // 0x0
};
