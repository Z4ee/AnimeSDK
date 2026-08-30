#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_4_53B8D1DFB0B66FBC_1;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_A1E52E0152984879_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE89CF00)
#define CLASS_3_A1E52E0152984879__CTOR_OFFSET UNITYSDK_OFFSET(0xE89CE20)

inline static constexpr unsigned int Class_3_A1E52E0152984879_TypeDefinitionIndex = 54089;

class Class_3_A1E52E0152984879 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_4_53B8D1DFB0B66FBC_1*>
{
public:
	::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_53B8D1DFB0B66FBC_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_53B8D1DFB0B66FBC_1*))((::PBYTE)hIl2Cpp + CLASS_3_A1E52E0152984879__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A1E52E0152984879_ONTASKBEGIN_OFFSET))(this);
	}
};
