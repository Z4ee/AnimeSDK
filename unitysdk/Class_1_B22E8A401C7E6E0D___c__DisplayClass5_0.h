#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::FateRin::View::Card { class FateRinCardPosControlView; }

#define CLASS_1_B22E8A401C7E6E0D___C__DISPLAYCLASS5_0__CREATESETOFFSETNODEWORLDPOSECOMMAND_B__0_OFFSET UNITYSDK_OFFSET(0x17E5DA50)
#define CLASS_1_B22E8A401C7E6E0D___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17E5C4E0)

inline static constexpr unsigned int Class_1_B22E8A401C7E6E0D___c__DisplayClass5_0_TypeDefinitionIndex = 79520;

class Class_1_B22E8A401C7E6E0D___c__DisplayClass5_0 : public ::System::Object
{
public:
	::RPG::Client::FateRin::View::Card::FateRinCardPosControlView* posCtrl; // 0x10
	::UnityEngine::Quaternion worldRot; // 0x18
	::UnityEngine::Vector3 worldPos; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B22E8A401C7E6E0D___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
	}

	::System::Void _CreateSetOffsetNodeWorldPoseCommand_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B22E8A401C7E6E0D___C__DISPLAYCLASS5_0__CREATESETOFFSETNODEWORLDPOSECOMMAND_B__0_OFFSET))(this);
	}
};
