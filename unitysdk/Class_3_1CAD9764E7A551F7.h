#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_1_5F51D4049EA87B7B;
namespace RPG::GameCore { class AdvFilterNearbyMonsters; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_1CAD9764E7A551F7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16242F50)
#define CLASS_3_1CAD9764E7A551F7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x162428B0)
#define CLASS_3_1CAD9764E7A551F7__CTOR_OFFSET UNITYSDK_OFFSET(0x16242880)

inline static constexpr unsigned int Class_3_1CAD9764E7A551F7_TypeDefinitionIndex = 49987;

class Class_3_1CAD9764E7A551F7 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvFilterNearbyMonsters*>
{
public:
	::Class_1_5F51D4049EA87B7B* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvFilterNearbyMonsters* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvFilterNearbyMonsters*))((::PBYTE)hIl2Cpp + CLASS_3_1CAD9764E7A551F7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1CAD9764E7A551F7_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1CAD9764E7A551F7_DISPOSE_OFFSET))(this);
	}
};
