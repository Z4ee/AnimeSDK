#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_18.h"

namespace Foundation { template <typename T> class ObjectPool_1; }
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIControlReference; }
template <typename T> class Class_3_30A064D7BE47C07D;

inline static constexpr unsigned int Class_3_30A064D7BE47C07D_TypeDefinitionIndex = 48281;

template <typename T>
class Class_3_30A064D7BE47C07D : public ::Class_2_A48F3719AA1CF200_18
{
public:
	::MoleMole::UIControlReference* Field_3_0; // 0x0
	static ::Foundation::ObjectPool_1<::Class_3_30A064D7BE47C07D<T>*>** StaticGet_Field_3_1()
	{
		return (::Foundation::ObjectPool_1<::Class_3_30A064D7BE47C07D<T>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_30A064D7BE47C07D_TypeDefinitionIndex)->GetStaticField(0x0);
	}
};
