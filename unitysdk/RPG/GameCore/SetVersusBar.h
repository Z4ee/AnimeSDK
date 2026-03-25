#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SETVERSUSBAR_METHOD_3_6395EFD1FF31AAE5_OFFSET UNITYSDK_OFFSET(0x176E6840)
#define RPG_GAMECORE_SETVERSUSBAR_METHOD_3_6B61804D4EF0B13E_OFFSET UNITYSDK_OFFSET(0x176E67C0)
#define RPG_GAMECORE_SETVERSUSBAR__CTOR_OFFSET UNITYSDK_OFFSET(0x176E6810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetVersusBar_TypeDefinitionIndex = 21373;

	class SetVersusBar : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* TeamLightIcon; // 0x18
		::System::String* TeamDarkIcon; // 0x20
		::System::Boolean ShowHalfOnTotalProgressZero; // 0x28
		::System::Boolean ShowFullScreenEffect; // 0x29

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETVERSUSBAR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6B61804D4EF0B13E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetVersusBar*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetVersusBar*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETVERSUSBAR_METHOD_3_6B61804D4EF0B13E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6395EFD1FF31AAE5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetVersusBar* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetVersusBar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETVERSUSBAR_METHOD_3_6395EFD1FF31AAE5_OFFSET))(a1, a2);
		}
	};
}
