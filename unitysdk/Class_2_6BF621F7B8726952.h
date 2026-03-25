#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateGameBroadcastConditionCheckerSingleton_1.h"

namespace RPG::Client { class FateGameData; }
namespace System { class String; }

#define CLASS_2_6BF621F7B8726952_METHOD_2_C3B4339D463BE2A7_OFFSET UNITYSDK_OFFSET(0x1190C630)
#define CLASS_2_6BF621F7B8726952__CTOR_OFFSET UNITYSDK_OFFSET(0x1190C840)

inline static constexpr unsigned int Class_2_6BF621F7B8726952_TypeDefinitionIndex = 51913;

class Class_2_6BF621F7B8726952 : public ::RPG::Client::FateGameBroadcastConditionCheckerSingleton_1<::Class_2_6BF621F7B8726952*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6BF621F7B8726952__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_C3B4339D463BE2A7(::Il2CppArray<::System::String*>* a1, ::RPG::Client::FateGameData* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::RPG::Client::FateGameData*))((::PBYTE)hIl2Cpp + CLASS_2_6BF621F7B8726952_METHOD_2_C3B4339D463BE2A7_OFFSET))(this, a1, a2);
	}
};
