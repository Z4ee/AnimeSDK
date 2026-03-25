#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FuncUnlockHint; }

#define CLASS_1_870112F37A57C86F_METHOD_1_01138A73F0423BD4_OFFSET UNITYSDK_OFFSET(0x113DC830)

inline static constexpr unsigned int Class_1_870112F37A57C86F_TypeDefinitionIndex = 55511;

class Class_1_870112F37A57C86F : public ::System::Object
{
public:
	static ::System::Void Method_1_01138A73F0423BD4(::RPG::Client::FuncUnlockHint* a1)
	{
		return ((::System::Void(*)(::RPG::Client::FuncUnlockHint*))((::PBYTE)hIl2Cpp + CLASS_1_870112F37A57C86F_METHOD_1_01138A73F0423BD4_OFFSET))(a1);
	}
};
