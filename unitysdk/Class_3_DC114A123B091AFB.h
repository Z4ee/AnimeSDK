#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_3_543D6A58C82F7516;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_DC114A123B091AFB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB854ED0)
#define CLASS_3_DC114A123B091AFB__CTOR_OFFSET UNITYSDK_OFFSET(0xB854EA0)

inline static constexpr unsigned int Class_3_DC114A123B091AFB_TypeDefinitionIndex = 55363;

class Class_3_DC114A123B091AFB : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_543D6A58C82F7516*>
{
public:
	::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_543D6A58C82F7516* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_543D6A58C82F7516*))((::PBYTE)hIl2Cpp + CLASS_3_DC114A123B091AFB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DC114A123B091AFB_ONTASKBEGIN_OFFSET))(this);
	}
};
