#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETVIRTUALLINEUPBINDPLANE_METHOD_3_3B05C5E09AB7FA00_OFFSET UNITYSDK_OFFSET(0x176E6DB0)
#define RPG_GAMECORE_SETVIRTUALLINEUPBINDPLANE_METHOD_3_D3D9D3509851AC60_OFFSET UNITYSDK_OFFSET(0x176E6E40)
#define RPG_GAMECORE_SETVIRTUALLINEUPBINDPLANE__CTOR_OFFSET UNITYSDK_OFFSET(0x176E6E10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetVirtualLineupBindPlane_TypeDefinitionIndex = 19771;

	class SetVirtualLineupBindPlane : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETVIRTUALLINEUPBINDPLANE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3B05C5E09AB7FA00(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetVirtualLineupBindPlane*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetVirtualLineupBindPlane*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETVIRTUALLINEUPBINDPLANE_METHOD_3_3B05C5E09AB7FA00_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D3D9D3509851AC60(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetVirtualLineupBindPlane* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetVirtualLineupBindPlane*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETVIRTUALLINEUPBINDPLANE_METHOD_3_D3D9D3509851AC60_OFFSET))(a1, a2);
		}
	};
}
