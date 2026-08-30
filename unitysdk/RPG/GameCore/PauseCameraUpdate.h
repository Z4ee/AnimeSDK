#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PAUSECAMERAUPDATE_METHOD_3_75B1B2AA45FCFA79_OFFSET UNITYSDK_OFFSET(0x1D418270)
#define RPG_GAMECORE_PAUSECAMERAUPDATE_METHOD_3_BAD57853B5B95582_OFFSET UNITYSDK_OFFSET(0x1D4182B0)
#define RPG_GAMECORE_PAUSECAMERAUPDATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4182A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PauseCameraUpdate_TypeDefinitionIndex = 20583;

	class PauseCameraUpdate : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Pause; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAUSECAMERAUPDATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_75B1B2AA45FCFA79(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PauseCameraUpdate*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PauseCameraUpdate*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAUSECAMERAUPDATE_METHOD_3_75B1B2AA45FCFA79_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BAD57853B5B95582(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PauseCameraUpdate* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PauseCameraUpdate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAUSECAMERAUPDATE_METHOD_3_BAD57853B5B95582_OFFSET))(a1, a2);
		}
	};
}
