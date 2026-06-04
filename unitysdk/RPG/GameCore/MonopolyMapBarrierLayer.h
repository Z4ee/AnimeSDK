#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MonopolyMapBaseLayer.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MONOPOLYMAPBARRIERLAYER_METHOD_3_CC7B17EEC39912A0_OFFSET UNITYSDK_OFFSET(0x199616E0)
#define RPG_GAMECORE_MONOPOLYMAPBARRIERLAYER_METHOD_3_E103A8A2F0FB2A12_OFFSET UNITYSDK_OFFSET(0x19961740)
#define RPG_GAMECORE_MONOPOLYMAPBARRIERLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x19961730)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyMapBarrierLayer_TypeDefinitionIndex = 15427;

	class MonopolyMapBarrierLayer : public ::RPG::GameCore::MonopolyMapBaseLayer
	{
	public:
		::System::UInt32 EventID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYMAPBARRIERLAYER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CC7B17EEC39912A0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonopolyMapBarrierLayer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyMapBarrierLayer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYMAPBARRIERLAYER_METHOD_3_CC7B17EEC39912A0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E103A8A2F0FB2A12(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonopolyMapBarrierLayer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyMapBarrierLayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYMAPBARRIERLAYER_METHOD_3_E103A8A2F0FB2A12_OFFSET))(a1, a2);
		}
	};
}
