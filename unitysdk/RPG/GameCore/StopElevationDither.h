#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_STOPELEVATIONDITHER_METHOD_3_10AB5464A57C6E14_OFFSET UNITYSDK_OFFSET(0x18EA35C0)
#define RPG_GAMECORE_STOPELEVATIONDITHER_METHOD_3_A98C30CD0CD96205_OFFSET UNITYSDK_OFFSET(0x18EA3640)
#define RPG_GAMECORE_STOPELEVATIONDITHER__CTOR_OFFSET UNITYSDK_OFFSET(0x18EA3610)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StopElevationDither_TypeDefinitionIndex = 19600;

	class StopElevationDither : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsStop; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPELEVATIONDITHER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_10AB5464A57C6E14(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StopElevationDither*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StopElevationDither*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPELEVATIONDITHER_METHOD_3_10AB5464A57C6E14_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A98C30CD0CD96205(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StopElevationDither* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StopElevationDither*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPELEVATIONDITHER_METHOD_3_A98C30CD0CD96205_OFFSET))(a1, a2);
		}
	};
}
