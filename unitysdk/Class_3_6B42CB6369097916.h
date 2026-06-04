#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class DrinkMakerCheersCancelMakerDrinkAfterPerformance; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_6B42CB6369097916_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13755EC0)
#define CLASS_3_6B42CB6369097916__CTOR_OFFSET UNITYSDK_OFFSET(0x13755E90)

inline static constexpr unsigned int Class_3_6B42CB6369097916_TypeDefinitionIndex = 54286;

class Class_3_6B42CB6369097916 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::DrinkMakerCheersCancelMakerDrinkAfterPerformance*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DrinkMakerCheersCancelMakerDrinkAfterPerformance* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DrinkMakerCheersCancelMakerDrinkAfterPerformance*))((::PBYTE)hIl2Cpp + CLASS_3_6B42CB6369097916__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6B42CB6369097916_ONTASKBEGIN_OFFSET))(this);
	}
};
