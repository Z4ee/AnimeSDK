#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_VOLUMEDISTANCEMAP_METHOD_2_5A1D43DEA3B97CCB_OFFSET UNITYSDK_OFFSET(0x19E50100)
#define RPG_GAMECORE_VOLUMEDISTANCEMAP_METHOD_2_E0E95C03951619C1_OFFSET UNITYSDK_OFFSET(0x19E50250)
#define RPG_GAMECORE_VOLUMEDISTANCEMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x19E50240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VolumeDistanceMap_TypeDefinitionIndex = 18174;

	class VolumeDistanceMap : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 Size; // 0x10
		::Il2CppArray<::System::Int32>* DistanceMapInternal; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VOLUMEDISTANCEMAP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_5A1D43DEA3B97CCB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VolumeDistanceMap*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VolumeDistanceMap*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VOLUMEDISTANCEMAP_METHOD_2_5A1D43DEA3B97CCB_OFFSET))(a1, a2);
		}

		::System::Single Method_2_E0E95C03951619C1(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VOLUMEDISTANCEMAP_METHOD_2_E0E95C03951619C1_OFFSET))(this, a1, a2);
		}
	};
}
