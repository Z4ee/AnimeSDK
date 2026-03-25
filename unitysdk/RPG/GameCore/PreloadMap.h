#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlaneType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PRELOADMAP_METHOD_3_1D2970ED930FF42F_OFFSET UNITYSDK_OFFSET(0x17511E00)
#define RPG_GAMECORE_PRELOADMAP_METHOD_3_8B4762048E06EEA6_OFFSET UNITYSDK_OFFSET(0x17511E80)
#define RPG_GAMECORE_PRELOADMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x17511E50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PreloadMap_TypeDefinitionIndex = 20042;

	class PreloadMap : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 PlaneID; // 0x18
		::System::UInt32 FloorID; // 0x1C
		::RPG::GameCore::PlaneType PlaneType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRELOADMAP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1D2970ED930FF42F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PreloadMap*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PreloadMap*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRELOADMAP_METHOD_3_1D2970ED930FF42F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8B4762048E06EEA6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PreloadMap* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PreloadMap*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRELOADMAP_METHOD_3_8B4762048E06EEA6_OFFSET))(a1, a2);
		}
	};
}
