#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Nap::NapECS { class EcsWorld; }

#define STRUCT_2_5D55D2D92073E392_CLASS_1_FDD701DC064DA68F_1__CTOR_OFFSET UNITYSDK_OFFSET(0x12BF6910)

inline static constexpr unsigned int Struct_2_5D55D2D92073E392_Class_1_FDD701DC064DA68F_1_TypeDefinitionIndex = 78855;

class Struct_2_5D55D2D92073E392_Class_1_FDD701DC064DA68F_1 : public ::System::Object
{
public:
	::Nap::NapECS::EcsWorld* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5D55D2D92073E392_CLASS_1_FDD701DC064DA68F_1__CTOR_OFFSET))(this);
	}
};
