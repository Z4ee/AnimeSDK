#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_SETHITOVERRIDELAYERWEIGHT_METHOD_3_43C0BA850493C1B8_OFFSET UNITYSDK_OFFSET(0x1D501DE0)
#define RPG_GAMECORE_SETHITOVERRIDELAYERWEIGHT_METHOD_3_DF5B36B0EDF5BE9B_OFFSET UNITYSDK_OFFSET(0x1D501E20)
#define RPG_GAMECORE_SETHITOVERRIDELAYERWEIGHT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D501E10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetHitOverrideLayerWeight_TypeDefinitionIndex = 22830;

	class SetHitOverrideLayerWeight : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* Weight; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETHITOVERRIDELAYERWEIGHT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_43C0BA850493C1B8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetHitOverrideLayerWeight*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetHitOverrideLayerWeight*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETHITOVERRIDELAYERWEIGHT_METHOD_3_43C0BA850493C1B8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DF5B36B0EDF5BE9B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetHitOverrideLayerWeight* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetHitOverrideLayerWeight*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETHITOVERRIDELAYERWEIGHT_METHOD_3_DF5B36B0EDF5BE9B_OFFSET))(a1, a2);
		}
	};
}
