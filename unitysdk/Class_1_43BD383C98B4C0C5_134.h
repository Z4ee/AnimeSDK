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

#define CLASS_1_43BD383C98B4C0C5_134__CTOR_OFFSET UNITYSDK_OFFSET(0x11608DC0)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_134_TypeDefinitionIndex = 57283;

class Class_1_43BD383C98B4C0C5_134 : public ::System::Object
{
public:
	::Class_3_9B28A54582B92258* PAHHNMLMNLN; // 0x10
	::RPG::GameCore::GameEntity* IDHNNGCOKCH; // 0x18
	::Class_3_CD04D3296DF4C842_4* MGJLINFADJK; // 0x20
	::Class_3_CD04D3296DF4C842_5* EJGFFPJMDIH; // 0x28
	::System::Boolean MADDJJABCGN; // 0x30
	::System::Boolean HPPALBKPJPO; // 0x31
	::System::Boolean NEPIENADMBM; // 0x32
	::System::Boolean IOLGEMDEGIH; // 0x33
	::RPG::GameCore::CharacterMotionFlag FPHBEHJJBIA; // 0x34
	::UnityEngine::Quaternion GMAGENDCBLH; // 0x38
	::System::Single KMBJFKGKMLC; // 0x48
	::System::Single MPIFJNFLAKC; // 0x4C
	::System::Nullable_1<::RPG::GameCore::ECharacterNavSteerMode> EHCJEIINCOO; // 0x50
	::System::Single HEPLJFJLFKJ; // 0x58
	::System::Boolean LPGNBEECDJJ; // 0x5C
	::System::Boolean DDGOIDJKPII; // 0x5D
	::System::Boolean DCHBBAHHKPC; // 0x5E
	::System::Boolean PPGEKDEAGHK; // 0x5F
	::System::Boolean JOAOPFMNAKK; // 0x60
	::System::Boolean NPCBIMFJKJN; // 0x61
	::System::Boolean DMPMPFFHDJE; // 0x62
	::System::Boolean MMLHGBNJHLA; // 0x63
	::System::Single KPOIPKNAPDG; // 0x64
	::System::Int32 NDBBGADNKLC; // 0x68
	::RPG::GameCore::EAdventureNavigationAccuratelyMode NBLBJHGMHDP; // 0x6C
	::System::Single HOPIHHIEJEH; // 0x70
	::System::Single OOLMNOPJCAC; // 0x74
	::System::Single HFPPEDKNPIK; // 0x78
	::RPG::GameCore::AdvNavigationMotionFlagMode IAOBLNHHDBH; // 0x7C
	::UnityEngine::Vector3 OPMGDNNAEJF; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_134__CTOR_OFFSET))(this);
	}
};
