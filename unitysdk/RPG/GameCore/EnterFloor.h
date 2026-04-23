#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ENTERFLOOR_METHOD_3_0157EBAF621AC9A9_OFFSET UNITYSDK_OFFSET(0x188AB670)
#define RPG_GAMECORE_ENTERFLOOR_METHOD_3_1972C19BE2F191A0_OFFSET UNITYSDK_OFFSET(0x188AB6F0)
#define RPG_GAMECORE_ENTERFLOOR__CTOR_OFFSET UNITYSDK_OFFSET(0x188AB6C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnterFloor_TypeDefinitionIndex = 20410;

	class EnterFloor : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 FloorID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTERFLOOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0157EBAF621AC9A9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnterFloor*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnterFloor*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTERFLOOR_METHOD_3_0157EBAF621AC9A9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1972C19BE2F191A0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnterFloor* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnterFloor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTERFLOOR_METHOD_3_1972C19BE2F191A0_OFFSET))(a1, a2);
		}
	};
}
