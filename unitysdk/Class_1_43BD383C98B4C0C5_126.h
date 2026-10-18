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

#define CLASS_1_43BD383C98B4C0C5_126_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xC02CCB0)
#define CLASS_1_43BD383C98B4C0C5_126__CTOR_OFFSET UNITYSDK_OFFSET(0xC0134D0)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_126_TypeDefinitionIndex = 57117;

class Class_1_43BD383C98B4C0C5_126 : public ::System::Object
{
public:
	::Class_3_CD04D3296DF4C842_4* MGJLINFADJK; // 0x10
	::RPG::GameCore::GameEntity* IDHNNGCOKCH; // 0x18
	::Class_3_CD04D3296DF4C842_5* EJGFFPJMDIH; // 0x20
	::UnityEngine::AsyncOperation* CLEOBKHDDFJ; // 0x28
	::UnityEngine::AI::NavMeshPath* DPPHPKKPCIP; // 0x30
	::Class_3_9B28A54582B92258* PAHHNMLMNLN; // 0x38
	::RPG::GameCore::CharacterMotionFlag FPHBEHJJBIA; // 0x40
	::UnityEngine::Vector3 OPMGDNNAEJF; // 0x44
	::System::Single OOLMNOPJCAC; // 0x50
	::System::Single KPOIPKNAPDG; // 0x54
	::System::Nullable_1<::RPG::GameCore::ECharacterNavSteerMode> EHCJEIINCOO; // 0x58
	::RPG::GameCore::EAdventureNavigationAccuratelyMode NBLBJHGMHDP; // 0x60
	::UnityEngine::Quaternion GMAGENDCBLH; // 0x64
	::System::Single MPIFJNFLAKC; // 0x74
	::System::Single HFPPEDKNPIK; // 0x78
	::System::Boolean NEPIENADMBM; // 0x7C
	::System::Boolean NPCBIMFJKJN; // 0x7D
	::System::Boolean PPGEKDEAGHK; // 0x7E
	::System::Boolean MMLHGBNJHLA; // 0x7F
	::System::Boolean EIHNNAMBIOM; // 0x80
	::System::Boolean OANFKKOHADN; // 0x81
	::System::Boolean JOAOPFMNAKK; // 0x82
	::System::Boolean GGCOENFCMOF; // 0x83
	::System::Boolean LGMJBJJDOLH; // 0x84
	::System::Boolean DMPMPFFHDJE; // 0x85
	::System::Boolean IOLGEMDEGIH; // 0x86
	::System::Boolean DDGOIDJKPII; // 0x87
	::UnityEngine::Vector3 LCLOGOKEJFK; // 0x88
	::System::Boolean LPGNBEECDJJ; // 0x94
	::System::Boolean MADDJJABCGN; // 0x95
	::System::Boolean DCHBBAHHKPC; // 0x96
	::System::Boolean HPPALBKPJPO; // 0x97
	::System::Single HOPIHHIEJEH; // 0x98
	::System::Single KMBJFKGKMLC; // 0x9C
	::System::Single HEPLJFJLFKJ; // 0xA0
	::System::Int32 NDBBGADNKLC; // 0xA4
	::RPG::GameCore::AdvNavigationMotionFlagMode IAOBLNHHDBH; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_126__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_126_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
