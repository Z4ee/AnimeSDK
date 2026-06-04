#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateGameBroadcastConditionCheckerSingleton_1.h"

namespace RPG::Client { class FateGameData; }
namespace System { class String; }

#define CLASS_2_6B7D0511CDFA7867_METHOD_2_70213D2AAE850FD5_OFFSET UNITYSDK_OFFSET(0xACA4FD0)
#define CLASS_2_6B7D0511CDFA7867__CTOR_OFFSET UNITYSDK_OFFSET(0xACA51B0)

inline static constexpr unsigned int Class_2_6B7D0511CDFA7867_TypeDefinitionIndex = 59792;

class Class_2_6B7D0511CDFA7867 : public ::RPG::Client::FateGameBroadcastConditionCheckerSingleton_1<::Class_2_6B7D0511CDFA7867*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B7D0511CDFA7867__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_70213D2AAE850FD5(::Il2CppArray<::System::String*>* a1, ::RPG::Client::FateGameData* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::RPG::Client::FateGameData*))((::PBYTE)hIl2Cpp + CLASS_2_6B7D0511CDFA7867_METHOD_2_70213D2AAE850FD5_OFFSET))(this, a1, a2);
	}
};
