#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_4_ACC39E9B6D0DC863;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_A1E52E0152984879_3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x159C4D50)
#define CLASS_3_A1E52E0152984879_3__CTOR_OFFSET UNITYSDK_OFFSET(0x159C4C70)

inline static constexpr unsigned int Class_3_A1E52E0152984879_3_TypeDefinitionIndex = 55429;

class Class_3_A1E52E0152984879_3 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_4_ACC39E9B6D0DC863*>
{
public:
	::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_ACC39E9B6D0DC863* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_ACC39E9B6D0DC863*))((::PBYTE)hIl2Cpp + CLASS_3_A1E52E0152984879_3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A1E52E0152984879_3_ONTASKBEGIN_OFFSET))(this);
	}
};
