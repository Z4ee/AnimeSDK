#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_34.h"

namespace Foundation { template <typename T> class ObjectPool_1; }
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIControlReference; }
template <typename T> class Class_3_826A30478DA34A69;

inline static constexpr unsigned int Class_3_826A30478DA34A69_TypeDefinitionIndex = 80388;

template <typename T>
class Class_3_826A30478DA34A69 : public ::Class_2_A48F3719AA1CF200_34
{
public:
	::MoleMole::UIControlReference* Field_3_1; // 0x0
	static ::Foundation::ObjectPool_1<::Class_3_826A30478DA34A69<T>*>** StaticGet_Field_3_0()
	{
		return (::Foundation::ObjectPool_1<::Class_3_826A30478DA34A69<T>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_826A30478DA34A69_TypeDefinitionIndex)->GetStaticField(0x0);
	}
};
