#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PPEffectFilterPriorityGroup.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PPFILTERSTACKEFFECTUPDATE_METHOD_3_586F8992622F031B_OFFSET UNITYSDK_OFFSET(0x199E0B80)
#define RPG_GAMECORE_PPFILTERSTACKEFFECTUPDATE_METHOD_3_ADCBE8690F006773_OFFSET UNITYSDK_OFFSET(0x199E0AE0)
#define RPG_GAMECORE_PPFILTERSTACKEFFECTUPDATE__CTOR_OFFSET UNITYSDK_OFFSET(0x199E0B40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PPFilterStackEffectUpdate_TypeDefinitionIndex = 19125;

	class PPFilterStackEffectUpdate : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean HiendOnly; // 0x18
		::System::String* AssetPath; // 0x20
		::RPG::GameCore::PPEffectFilterPriorityGroup PriorityGroup; // 0x28
		::System::Single StartRate; // 0x2C
		::System::Single TargetRate; // 0x30
		::System::Single Duration; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PPFILTERSTACKEFFECTUPDATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_ADCBE8690F006773(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PPFilterStackEffectUpdate*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PPFilterStackEffectUpdate*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PPFILTERSTACKEFFECTUPDATE_METHOD_3_ADCBE8690F006773_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_586F8992622F031B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PPFilterStackEffectUpdate* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PPFilterStackEffectUpdate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PPFILTERSTACKEFFECTUPDATE_METHOD_3_586F8992622F031B_OFFSET))(a1, a2);
		}
	};
}
