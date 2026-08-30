#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FOURROTATEVOXELVIEWCTRLCONFIG_METHOD_3_3B54243548F5E6FB_OFFSET UNITYSDK_OFFSET(0x1DCB9CB0)
#define RPG_GAMECORE_FOURROTATEVOXELVIEWCTRLCONFIG_METHOD_3_5A5057B6AABB09D0_OFFSET UNITYSDK_OFFSET(0x1DCB9C60)
#define RPG_GAMECORE_FOURROTATEVOXELVIEWCTRLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCB9CA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelViewCtrlConfig_TypeDefinitionIndex = 16587;

	class FourRotateVoxelViewCtrlConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsViewCtrl; // 0x10
		::System::Int32 AnimMatIndex; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELVIEWCTRLCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5A5057B6AABB09D0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelViewCtrlConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelViewCtrlConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELVIEWCTRLCONFIG_METHOD_3_5A5057B6AABB09D0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3B54243548F5E6FB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelViewCtrlConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelViewCtrlConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELVIEWCTRLCONFIG_METHOD_3_3B54243548F5E6FB_OFFSET))(a1, a2);
		}
	};
}
