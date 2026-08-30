#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_4_8D0415E5090E33F9;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_A1E52E0152984879_4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19270620)
#define CLASS_3_A1E52E0152984879_4__CTOR_OFFSET UNITYSDK_OFFSET(0x19270540)

inline static constexpr unsigned int Class_3_A1E52E0152984879_4_TypeDefinitionIndex = 55647;

class Class_3_A1E52E0152984879_4 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_4_8D0415E5090E33F9*>
{
public:
	::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_8D0415E5090E33F9* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_8D0415E5090E33F9*))((::PBYTE)hIl2Cpp + CLASS_3_A1E52E0152984879_4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A1E52E0152984879_4_ONTASKBEGIN_OFFSET))(this);
	}
};
