#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITFLOORTIMER_METHOD_3_6CEBA139ED71347D_OFFSET UNITYSDK_OFFSET(0x178F9DF0)
#define RPG_GAMECORE_WAITFLOORTIMER_METHOD_3_C995D561F1C0696C_OFFSET UNITYSDK_OFFSET(0x178F9E70)
#define RPG_GAMECORE_WAITFLOORTIMER__CTOR_OFFSET UNITYSDK_OFFSET(0x178F9E40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitFloorTimer_TypeDefinitionIndex = 18776;

	class WaitFloorTimer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single OnSecond; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFLOORTIMER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6CEBA139ED71347D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitFloorTimer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitFloorTimer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFLOORTIMER_METHOD_3_6CEBA139ED71347D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C995D561F1C0696C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitFloorTimer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitFloorTimer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFLOORTIMER_METHOD_3_C995D561F1C0696C_OFFSET))(a1, a2);
		}
	};
}
