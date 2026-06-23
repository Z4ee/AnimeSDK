#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Nap::NapECS { class EcsWorld; }

#define STRUCT_2_5D55D2D92073E392_CLASS_1_FDD701DC064DA68F__CTOR_OFFSET UNITYSDK_OFFSET(0x101EA8E0)

inline static constexpr unsigned int Struct_2_5D55D2D92073E392_Class_1_FDD701DC064DA68F_TypeDefinitionIndex = 56254;

class Struct_2_5D55D2D92073E392_Class_1_FDD701DC064DA68F : public ::System::Object
{
public:
	::Nap::NapECS::EcsWorld* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5D55D2D92073E392_CLASS_1_FDD701DC064DA68F__CTOR_OFFSET))(this);
	}
};
