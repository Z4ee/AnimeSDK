#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class GridFightTrait; }
namespace RPG::Client { class GridFightTraitConfigBase; }
namespace RPG::Client { class GridFightTraitEffectConfig; }
namespace RPG::GameCore { class BattleGridFightTeamTraitData; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_57958B24C7F372CD_METHOD_2_1B5CCAA3C91F67F2_OFFSET UNITYSDK_OFFSET(0x169CE800)
#define CLASS_2_57958B24C7F372CD_METHOD_2_EAD24AFE10569E66_OFFSET UNITYSDK_OFFSET(0x169CE6C0)
#define CLASS_2_57958B24C7F372CD__CTOR_OFFSET UNITYSDK_OFFSET(0x169CEB50)
#define CLASS_2_57958B24C7F372CD__ONBIND_OFFSET UNITYSDK_OFFSET(0x169CE530)

inline static constexpr unsigned int Class_2_57958B24C7F372CD_TypeDefinitionIndex = 72225;

class Class_2_57958B24C7F372CD : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* DJCBDJMACFH; // 0x0
	::System::String* IIFENECAOBG; // 0x60
	::RPG::Client::GridFightTrait* ENFAMOIAMGL; // 0x68
	::RPG::Client::GridFightTraitEffectConfig* HECGJKBHOMI; // 0x70
	::RPG::Client::AnimatorButton* NHNPPHCCPGA; // 0x78
	::RPG::GameCore::BattleGridFightTeamTraitData* NHDBMHJLKNF; // 0x80
	::System::Action_1<::System::Object*>* AMIEOPJOEIJ; // 0x88
	::System::String* CGNGHKIIGCM; // 0x90
	::RPG::Client::GridFightTraitConfigBase* AJDMLJMMPMJ; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57958B24C7F372CD__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57958B24C7F372CD__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_EAD24AFE10569E66(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_57958B24C7F372CD_METHOD_2_EAD24AFE10569E66_OFFSET))(this, a1);
	}

	::System::Void Method_2_1B5CCAA3C91F67F2(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_57958B24C7F372CD_METHOD_2_1B5CCAA3C91F67F2_OFFSET))(this, a1);
	}
};
