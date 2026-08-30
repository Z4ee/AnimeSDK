#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LODDETAIL_METHOD_2_665A2E82F1B1D82D_OFFSET UNITYSDK_OFFSET(0x1D487900)
#define RPG_GAMECORE_LODDETAIL_METHOD_2_91FCB9F9F5ADEC73_OFFSET UNITYSDK_OFFSET(0x1D487600)
#define RPG_GAMECORE_LODDETAIL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4878F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LodDetail_TypeDefinitionIndex = 18970;

	class LodDetail : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 Lod; // 0x10
		::System::Single Percent; // 0x14
		::System::UInt16 Quality; // 0x18
		::System::UInt64 QualityAdjustments; // 0x20
		::System::Boolean HLOD; // 0x28
		::System::Boolean DitherSwitch; // 0x29

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LODDETAIL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_91FCB9F9F5ADEC73(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LodDetail*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LodDetail*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LODDETAIL_METHOD_2_91FCB9F9F5ADEC73_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_665A2E82F1B1D82D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LodDetail* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LodDetail*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LODDETAIL_METHOD_2_665A2E82F1B1D82D_OFFSET))(a1, a2);
		}
	};
}
