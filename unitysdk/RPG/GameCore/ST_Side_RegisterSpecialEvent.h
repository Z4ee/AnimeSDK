#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STSpecialEventType.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ST_SIDE_REGISTERSPECIALEVENT_METHOD_4_7CA488C00B33FDAC_OFFSET UNITYSDK_OFFSET(0x1DB452F0)
#define RPG_GAMECORE_ST_SIDE_REGISTERSPECIALEVENT_METHOD_4_D7442EF998285D53_OFFSET UNITYSDK_OFFSET(0x1DB45330)
#define RPG_GAMECORE_ST_SIDE_REGISTERSPECIALEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB45320)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_RegisterSpecialEvent_TypeDefinitionIndex = 19897;

	class ST_Side_RegisterSpecialEvent : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::RPG::GameCore::STSpecialEventType SpecialEventType; // 0x18
		::System::String* AiEventWhenNotify; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_REGISTERSPECIALEVENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_7CA488C00B33FDAC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_RegisterSpecialEvent*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_RegisterSpecialEvent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_REGISTERSPECIALEVENT_METHOD_4_7CA488C00B33FDAC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D7442EF998285D53(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_RegisterSpecialEvent* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_RegisterSpecialEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_REGISTERSPECIALEVENT_METHOD_4_D7442EF998285D53_OFFSET))(a1, a2);
		}
	};
}
