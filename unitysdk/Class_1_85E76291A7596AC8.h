#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::MiniGame::BangbooPartyGame { class MonoMarcelBlock; }
namespace UnityEngine { class Transform; }

#define CLASS_1_85E76291A7596AC8_METHOD_1_A8F6F688241E6DBC_OFFSET UNITYSDK_OFFSET(0x185E8DB0)
#define CLASS_1_85E76291A7596AC8__CTOR_OFFSET UNITYSDK_OFFSET(0x185E8CF0)

inline static constexpr unsigned int Class_1_85E76291A7596AC8_TypeDefinitionIndex = 81348;

class Class_1_85E76291A7596AC8 : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_7; // 0x10
	::MoleMole::MiniGame::BangbooPartyGame::MonoMarcelBlock* Field_1_1; // 0x18
	::System::UInt32 Field_1_6; // 0x20
	::UnityEngine::Vector3 Field_1_0; // 0x24

	::System::Void _ctor(::MoleMole::MiniGame::BangbooPartyGame::MonoMarcelBlock* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MiniGame::BangbooPartyGame::MonoMarcelBlock*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_85E76291A7596AC8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_A8F6F688241E6DBC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_85E76291A7596AC8_METHOD_1_A8F6F688241E6DBC_OFFSET))(this);
	}
};
