#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateGameBroadcastConditionCheckerSingleton_1.h"

namespace RPG::Client { class FateGameData; }
namespace System { class String; }

#define CLASS_2_EA434EAA3B0CD2DD_METHOD_2_7432774FA955940C_OFFSET UNITYSDK_OFFSET(0x1A761220)
#define CLASS_2_EA434EAA3B0CD2DD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A761440)

inline static constexpr unsigned int Class_2_EA434EAA3B0CD2DD_TypeDefinitionIndex = 64058;

class Class_2_EA434EAA3B0CD2DD : public ::RPG::Client::FateGameBroadcastConditionCheckerSingleton_1<::Class_2_EA434EAA3B0CD2DD*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EA434EAA3B0CD2DD__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_7432774FA955940C(::Il2CppArray<::System::String*>* a1, ::RPG::Client::FateGameData* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::RPG::Client::FateGameData*))((::PBYTE)hIl2Cpp + CLASS_2_EA434EAA3B0CD2DD_METHOD_2_7432774FA955940C_OFFSET))(this, a1, a2);
	}
};
