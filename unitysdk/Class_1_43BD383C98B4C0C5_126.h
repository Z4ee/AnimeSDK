#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvNavigationMotionFlagMode.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/EAdventureNavigationAccuratelyMode.h"
#include "unitysdk/RPG/GameCore/ECharacterNavSteerMode.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_9B28A54582B92258;
class Class_3_CD04D3296DF4C842_4;
class Class_3_CD04D3296DF4C842_5;
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class AsyncOperation; }
namespace UnityEngine::AI { class NavMeshPath; }

#define CLASS_1_43BD383C98B4C0C5_126_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xC034210)
#define CLASS_1_43BD383C98B4C0C5_126__CTOR_OFFSET UNITYSDK_OFFSET(0xC01AB80)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_126_TypeDefinitionIndex = 57117;

class Class_1_43BD383C98B4C0C5_126 : public ::System::Object
{
public:
	::Class_3_CD04D3296DF4C842_5* EJGFFPJMDIH; // 0x10
	::UnityEngine::AsyncOperation* CLEOBKHDDFJ; // 0x18
	::Class_3_CD04D3296DF4C842_4* MGJLINFADJK; // 0x20
	::RPG::GameCore::GameEntity* IDHNNGCOKCH; // 0x28
	::Class_3_9B28A54582B92258* PAHHNMLMNLN; // 0x30
	::UnityEngine::AI::NavMeshPath* DPPHPKKPCIP; // 0x38
	::UnityEngine::Vector3 OPMGDNNAEJF; // 0x40
	::System::Boolean MADDJJABCGN; // 0x4C
	::System::Boolean DDGOIDJKPII; // 0x4D
	::System::Boolean PPGEKDEAGHK; // 0x4E
	::System::Boolean HPPALBKPJPO; // 0x4F
	::System::Boolean DCHBBAHHKPC; // 0x50
	::System::Boolean GGCOENFCMOF; // 0x51
	::System::Boolean OANFKKOHADN; // 0x52
	::System::Boolean NPCBIMFJKJN; // 0x53
	::System::Single HEPLJFJLFKJ; // 0x54
	::System::Single MPIFJNFLAKC; // 0x58
	::System::Int32 NDBBGADNKLC; // 0x5C
	::System::Nullable_1<::RPG::GameCore::ECharacterNavSteerMode> EHCJEIINCOO; // 0x60
	::System::Boolean LPGNBEECDJJ; // 0x68
	::System::Boolean DMPMPFFHDJE; // 0x69
	::System::Boolean NEPIENADMBM; // 0x6A
	::System::Boolean JOAOPFMNAKK; // 0x6B
	::System::Boolean IOLGEMDEGIH; // 0x6C
	::System::Boolean MMLHGBNJHLA; // 0x6D
	::System::Boolean EIHNNAMBIOM; // 0x6E
	::System::Boolean LGMJBJJDOLH; // 0x6F
	::UnityEngine::Quaternion GMAGENDCBLH; // 0x70
	::RPG::GameCore::EAdventureNavigationAccuratelyMode NBLBJHGMHDP; // 0x80
	::System::Single OOLMNOPJCAC; // 0x84
	::RPG::GameCore::AdvNavigationMotionFlagMode IAOBLNHHDBH; // 0x88
	::RPG::GameCore::CharacterMotionFlag FPHBEHJJBIA; // 0x8C
	::UnityEngine::Vector3 LCLOGOKEJFK; // 0x90
	::System::Single HFPPEDKNPIK; // 0x9C
	::System::Single KPOIPKNAPDG; // 0xA0
	::System::Single HOPIHHIEJEH; // 0xA4
	::System::Single KMBJFKGKMLC; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_126__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_126_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
