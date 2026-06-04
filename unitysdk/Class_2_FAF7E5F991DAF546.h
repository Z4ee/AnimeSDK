#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EAdventureAppearMode.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/System/Nullable_1.h"

namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterModelComponent; }
namespace System { class Action; }

#define CLASS_2_FAF7E5F991DAF546_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14579A20)
#define CLASS_2_FAF7E5F991DAF546_METHOD_2_03C4FFAD29DE0852_OFFSET UNITYSDK_OFFSET(0x14579DD0)
#define CLASS_2_FAF7E5F991DAF546_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x14579CB0)
#define CLASS_2_FAF7E5F991DAF546_METHOD_2_25B6EFC63CE6F337_OFFSET UNITYSDK_OFFSET(0x1457A2F0)
#define CLASS_2_FAF7E5F991DAF546_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1457A360)
#define CLASS_2_FAF7E5F991DAF546_METHOD_2_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0x14579D10)
#define CLASS_2_FAF7E5F991DAF546_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x14579A70)
#define CLASS_2_FAF7E5F991DAF546_METHOD_2_99AC52A5C48A589D_OFFSET UNITYSDK_OFFSET(0x1457A230)
#define CLASS_2_FAF7E5F991DAF546_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0x14579AF0)
#define CLASS_2_FAF7E5F991DAF546_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0x14579D90)
#define CLASS_2_FAF7E5F991DAF546__CTOR_OFFSET UNITYSDK_OFFSET(0x1457A3C0)

inline static constexpr unsigned int Class_2_FAF7E5F991DAF546_TypeDefinitionIndex = 53230;

class Class_2_FAF7E5F991DAF546 : public ::RPG::GameCore::GameComponentBase
{
public:
	::RPG::GameCore::CharacterModelComponent* Field_2_0; // 0x18
	::System::Action* Field_2_1; // 0x20
	::RPG::GameCore::AdventureCharacterController* Field_2_2; // 0x28
	::System::Boolean Field_2_3; // 0x30
	::System::Boolean Field_2_4; // 0x31
	::System::Nullable_1<::RPG::GameCore::EAdventureAppearMode> Field_2_5; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FAF7E5F991DAF546__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FAF7E5F991DAF546_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FAF7E5F991DAF546_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void OnModelArtLoaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FAF7E5F991DAF546_ONMODELARTLOADED_OFFSET))(this);
	}

	::System::Void OnModelArtUnloaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FAF7E5F991DAF546_ONMODELARTUNLOADED_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FAF7E5F991DAF546_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_2_03C4FFAD29DE0852()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FAF7E5F991DAF546_METHOD_2_03C4FFAD29DE0852_OFFSET))(this);
	}

	::System::Void Method_2_99AC52A5C48A589D(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_FAF7E5F991DAF546_METHOD_2_99AC52A5C48A589D_OFFSET))(this, a1);
	}

	::System::Void Method_2_25B6EFC63CE6F337(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_FAF7E5F991DAF546_METHOD_2_25B6EFC63CE6F337_OFFSET))(this, a1);
	}

	::System::Void Method_2_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FAF7E5F991DAF546_METHOD_2_9681042564541CD6_1_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FAF7E5F991DAF546_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}
};
