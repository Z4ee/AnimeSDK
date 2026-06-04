#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_HITMOTIONPARAMS_METHOD_2_608F85D17A394CFB_OFFSET UNITYSDK_OFFSET(0x198389E0)
#define RPG_GAMECORE_HITMOTIONPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x19838C10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HitMotionParams_TypeDefinitionIndex = 21358;

	class HitMotionParams : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::MVector3 Offset; // 0x10
		::System::Single RiseTime; // 0x1C
		::System::Single HangTime; // 0x20
		::System::Single FallTime; // 0x24
		::System::Single HangPeakTime; // 0x28
		::System::Single HangBeginHeightRatio; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HITMOTIONPARAMS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_608F85D17A394CFB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HitMotionParams*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HitMotionParams*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HITMOTIONPARAMS_METHOD_2_608F85D17A394CFB_OFFSET))(a1, a2);
		}
	};
}
