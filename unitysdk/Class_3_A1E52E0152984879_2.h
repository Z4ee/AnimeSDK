#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_4_47CC8AE2D161D071;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_A1E52E0152984879_2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15C8BCA0)
#define CLASS_3_A1E52E0152984879_2__CTOR_OFFSET UNITYSDK_OFFSET(0x15C8BBC0)

inline static constexpr unsigned int Class_3_A1E52E0152984879_2_TypeDefinitionIndex = 55418;

class Class_3_A1E52E0152984879_2 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_4_47CC8AE2D161D071*>
{
public:
	::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_47CC8AE2D161D071* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_47CC8AE2D161D071*))((::PBYTE)hIl2Cpp + CLASS_3_A1E52E0152984879_2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A1E52E0152984879_2_ONTASKBEGIN_OFFSET))(this);
	}
};
