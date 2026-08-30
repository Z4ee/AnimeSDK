#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateGameBroadcastConditionCheckerSingleton_1.h"

namespace RPG::Client { class FateGameData; }
namespace System { class String; }

#define CLASS_2_8CD35D5EC1D57B5E_METHOD_2_D5B2D22A976FD016_OFFSET UNITYSDK_OFFSET(0x18FED0F0)
#define CLASS_2_8CD35D5EC1D57B5E__CTOR_OFFSET UNITYSDK_OFFSET(0x18FED140)

inline static constexpr unsigned int Class_2_8CD35D5EC1D57B5E_TypeDefinitionIndex = 64057;

class Class_2_8CD35D5EC1D57B5E : public ::RPG::Client::FateGameBroadcastConditionCheckerSingleton_1<::Class_2_8CD35D5EC1D57B5E*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8CD35D5EC1D57B5E__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_D5B2D22A976FD016(::Il2CppArray<::System::String*>* a1, ::RPG::Client::FateGameData* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::RPG::Client::FateGameData*))((::PBYTE)hIl2Cpp + CLASS_2_8CD35D5EC1D57B5E_METHOD_2_D5B2D22A976FD016_OFFSET))(this, a1, a2);
	}
};
