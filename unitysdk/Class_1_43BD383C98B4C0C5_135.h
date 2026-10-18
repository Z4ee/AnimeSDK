#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TimeRewindState.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_135_Class_3_50D343C44D28BEFB_5;
class Class_1_F65DC6656DEF8159;
namespace RPG::Client { class EntityTimelineControlNode; }
namespace RPG::Client { class EntityTimelineControlTrackInfo; }
namespace RPG::GameCore { class EntityTimeRewindComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_43BD383C98B4C0C5_135_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE85D520)
#define CLASS_1_43BD383C98B4C0C5_135__CTOR_OFFSET UNITYSDK_OFFSET(0xE85D5A0)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_135_TypeDefinitionIndex = 60814;

class Class_1_43BD383C98B4C0C5_135 : public ::System::Object
{
public:
	::System::Action_2<::System::Single, ::System::Single>* GKMPBLLMLJP; // 0x10
	::System::Action* FDJAJEOODLO; // 0x18
	::System::Action* HFNONNMKLAN; // 0x20
	::System::Action* DMAKJKLLHJE; // 0x28
	::System::Action* HDBMPGIICFC; // 0x30
	::System::Action* OKCKIJJIFHL; // 0x38
	::System::Action_1<::System::Single>* AMLGIFLGNMG; // 0x40
	::System::Action_1<::System::Boolean>* EDMLMIKCKEH; // 0x48
	::System::Action_1<::RPG::Client::EntityTimelineControlNode*>* BLAJJDGMBNE; // 0x50
	::System::Action_1<::RPG::Client::EntityTimelineControlNode*>* NBBILGGGLFI; // 0x58
	::System::Action_2<::RPG::Client::EntityTimelineControlNode*, ::System::Boolean>* LNLAEDJGFIJ; // 0x60
	::System::Action* FBPPKLEJBPI; // 0x68
	::RPG::Client::EntityTimelineControlTrackInfo* MJLMHCLCIIG; // 0x70
	::RPG::GameCore::EntityTimeRewindComponent* NPJFJEKNJLH; // 0x78
	::System::Action* OGOFLCJPOFO; // 0x80
	::System::Action_1<::System::Boolean>* JHOGKNLACCD; // 0x88
	::System::Action* KCLOMBMDLMC; // 0x90
	::System::Action* NCCFDHMLKPJ; // 0x98
	::Class_1_43BD383C98B4C0C5_135_Class_3_50D343C44D28BEFB_5* NCHLMFAFMNE; // 0xA0
	::Class_1_F65DC6656DEF8159* EAJIJPKHOGD; // 0xA8
	::System::Func_2<::RPG::Client::EntityTimelineControlNode*, ::System::Boolean>* PPFAPGFMGND; // 0xB0
	::RPG::GameCore::GameEntity* EOBLJJBOBIN; // 0xB8
	::System::Action_1<::RPG::GameCore::TimeRewindState>* MLKHGLJJEFH; // 0xC0
	::System::Action_1<::System::Boolean>* IKBHFONCBKL; // 0xC8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_135__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_135_DISPOSE_OFFSET))(this);
	}
};
