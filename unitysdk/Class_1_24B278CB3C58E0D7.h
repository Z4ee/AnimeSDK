#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GeneralAudioItem; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_24B278CB3C58E0D7_METHOD_1_1D05975EBE70EF4B_OFFSET UNITYSDK_OFFSET(0x1701D110)

inline static constexpr unsigned int Class_1_24B278CB3C58E0D7_TypeDefinitionIndex = 65385;

class Class_1_24B278CB3C58E0D7 : public ::System::Object
{
public:
	static ::System::Void Method_1_1D05975EBE70EF4B(::RPG::Client::GeneralAudioItem* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::RPG::Client::GeneralAudioItem*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_24B278CB3C58E0D7_METHOD_1_1D05975EBE70EF4B_OFFSET))(a1, a2);
	}
};
