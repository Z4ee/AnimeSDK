#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEDLCBLOCKWEIGHT_METHOD_2_EB041128467ADAA0_OFFSET UNITYSDK_OFFSET(0x1D3D5D80)
#define RPG_GAMECORE_ROGUEDLCBLOCKWEIGHT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3D5EA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCBlockWeight_TypeDefinitionIndex = 17699;

	class RogueDLCBlockWeight : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 CreateNum; // 0x10
		::System::UInt32 Weight; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCBLOCKWEIGHT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_EB041128467ADAA0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueDLCBlockWeight*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDLCBlockWeight*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCBLOCKWEIGHT_METHOD_2_EB041128467ADAA0_OFFSET))(a1, a2);
		}
	};
}
