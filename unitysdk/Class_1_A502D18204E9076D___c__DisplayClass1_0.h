#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A502D18204E9076D_Class_1_820E1836F7B5650C;
namespace RPG::AvatarSystem { class IAvatar; }

#define CLASS_1_A502D18204E9076D___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15BF8FC0)
#define CLASS_1_A502D18204E9076D___C__DISPLAYCLASS1_0__SORT_B__0_OFFSET UNITYSDK_OFFSET(0x15BFA250)

inline static constexpr unsigned int Class_1_A502D18204E9076D___c__DisplayClass1_0_TypeDefinitionIndex = 66731;

class Class_1_A502D18204E9076D___c__DisplayClass1_0 : public ::System::Object
{
public:
	::Class_1_A502D18204E9076D_Class_1_820E1836F7B5650C* ctx; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A502D18204E9076D___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
	}

	::System::Int32 _Sort_b__0(::RPG::AvatarSystem::IAvatar* a1, ::RPG::AvatarSystem::IAvatar* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_A502D18204E9076D___C__DISPLAYCLASS1_0__SORT_B__0_OFFSET))(this, a1, a2);
	}
};
