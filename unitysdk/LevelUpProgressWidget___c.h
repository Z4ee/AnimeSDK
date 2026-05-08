#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace DG::Tweening { class TweenCallback; }

#define LEVELUPPROGRESSWIDGET___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1312A1B0)
#define LEVELUPPROGRESSWIDGET___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1312A1F0)
#define LEVELUPPROGRESSWIDGET___C__PROGRESSBARANIM_B__13_1_OFFSET UNITYSDK_OFFSET(0x1312A200)

inline static constexpr unsigned int LevelUpProgressWidget___c_TypeDefinitionIndex = 71170;

class LevelUpProgressWidget___c : public ::System::Object
{
public:
	static ::DG::Tweening::TweenCallback** StaticGet___9__13_1()
	{
		return (::DG::Tweening::TweenCallback**)Il2CppClass::FromTypeDefinitionIndex(LevelUpProgressWidget___c_TypeDefinitionIndex)->GetStaticField(0x344E0);
	}
	static ::LevelUpProgressWidget___c** StaticGet___9()
	{
		return (::LevelUpProgressWidget___c**)Il2CppClass::FromTypeDefinitionIndex(LevelUpProgressWidget___c_TypeDefinitionIndex)->GetStaticField(0x344E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LEVELUPPROGRESSWIDGET___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEVELUPPROGRESSWIDGET___C__CTOR_OFFSET))(this);
	}

	::System::Void _ProgressBarAnim_b__13_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEVELUPPROGRESSWIDGET___C__PROGRESSBARANIM_B__13_1_OFFSET))(this);
	}
};
