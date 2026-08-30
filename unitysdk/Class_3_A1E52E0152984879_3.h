#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_4_DA7C942171912AE3;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_A1E52E0152984879_3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1AF50100)
#define CLASS_3_A1E52E0152984879_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF50020)

inline static constexpr unsigned int Class_3_A1E52E0152984879_3_TypeDefinitionIndex = 55622;

class Class_3_A1E52E0152984879_3 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_4_DA7C942171912AE3*>
{
public:
	::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_DA7C942171912AE3* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_DA7C942171912AE3*))((::PBYTE)hIl2Cpp + CLASS_3_A1E52E0152984879_3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A1E52E0152984879_3_ONTASKBEGIN_OFFSET))(this);
	}
};
