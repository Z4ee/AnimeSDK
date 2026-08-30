#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_REMOVEVIRTUALLINEUPBINDPLANE_METHOD_3_47CCA36528EA6480_OFFSET UNITYSDK_OFFSET(0x1D3A0B60)
#define RPG_GAMECORE_REMOVEVIRTUALLINEUPBINDPLANE_METHOD_3_B5E24AB9A68F237C_OFFSET UNITYSDK_OFFSET(0x1D3A0BB0)
#define RPG_GAMECORE_REMOVEVIRTUALLINEUPBINDPLANE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3A0BA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RemoveVirtualLineupBindPlane_TypeDefinitionIndex = 21366;

	class RemoveVirtualLineupBindPlane : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEVIRTUALLINEUPBINDPLANE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_47CCA36528EA6480(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveVirtualLineupBindPlane*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveVirtualLineupBindPlane*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEVIRTUALLINEUPBINDPLANE_METHOD_3_47CCA36528EA6480_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B5E24AB9A68F237C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveVirtualLineupBindPlane* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveVirtualLineupBindPlane*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEVIRTUALLINEUPBINDPLANE_METHOD_3_B5E24AB9A68F237C_OFFSET))(a1, a2);
		}
	};
}
