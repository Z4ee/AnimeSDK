#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::ViewObject::Donjon { class DonjonFloorObject; }
namespace MoleMole::Config { class ConfigDecorBase; }

#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1586CD30)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER___C__DISPLAYCLASS16_0__ONPOSTLEVELREADY_B__0_OFFSET UNITYSDK_OFFSET(0x1586CD40)

namespace Foundation::ViewObject::Donjon
{
	inline static constexpr unsigned int DonjonFloorManager___c__DisplayClass16_0_TypeDefinitionIndex = 74373;

	class DonjonFloorManager___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::Foundation::ViewObject::Donjon::DonjonFloorObject* donjonFloorObject; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnPostLevelReady_b__0(::MoleMole::Config::ConfigDecorBase* decor)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigDecorBase*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER___C__DISPLAYCLASS16_0__ONPOSTLEVELREADY_B__0_OFFSET))(this, decor);
		}
	};
}
