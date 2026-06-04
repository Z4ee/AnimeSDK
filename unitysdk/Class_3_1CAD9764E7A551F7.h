#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_1_5F51D4049EA87B7B;
namespace RPG::GameCore { class AdvFilterNearbyMonsters; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_1CAD9764E7A551F7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13C88880)
#define CLASS_3_1CAD9764E7A551F7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13C882C0)
#define CLASS_3_1CAD9764E7A551F7__CTOR_OFFSET UNITYSDK_OFFSET(0x13C88290)
#define CLASS_3_1CAD9764E7A551F7___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13C888F0)

inline static constexpr unsigned int Class_3_1CAD9764E7A551F7_TypeDefinitionIndex = 48974;

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

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1CAD9764E7A551F7___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
