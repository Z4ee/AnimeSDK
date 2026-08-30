#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PUMANMOVENOTIFYCONFIG_METHOD_2_2B32ABE60215DFC2_OFFSET UNITYSDK_OFFSET(0x1D18AA30)
#define RPG_GAMECORE_PUMANMOVENOTIFYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D18ABB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PuManMoveNotifyConfig_TypeDefinitionIndex = 16770;

	class PuManMoveNotifyConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* StartPoint; // 0x10
		::System::String* MidPoint; // 0x18
		::System::Single MoveBeat; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PUMANMOVENOTIFYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_2B32ABE60215DFC2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PuManMoveNotifyConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PuManMoveNotifyConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PUMANMOVENOTIFYCONFIG_METHOD_2_2B32ABE60215DFC2_OFFSET))(a1, a2);
		}
	};
}
