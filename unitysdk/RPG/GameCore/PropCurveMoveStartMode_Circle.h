#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropCurveMoveStartMode.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PROPCURVEMOVESTARTMODE_CIRCLE_METHOD_3_9DB5B83664B0F9AB_OFFSET UNITYSDK_OFFSET(0x175189F0)
#define RPG_GAMECORE_PROPCURVEMOVESTARTMODE_CIRCLE_METHOD_3_AC3EDB92E0AEB42E_OFFSET UNITYSDK_OFFSET(0x17518640)
#define RPG_GAMECORE_PROPCURVEMOVESTARTMODE_CIRCLE__CTOR_OFFSET UNITYSDK_OFFSET(0x17518630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropCurveMoveStartMode_Circle_TypeDefinitionIndex = 19332;

	class PropCurveMoveStartMode_Circle : public ::RPG::GameCore::PropCurveMoveStartMode
	{
	public:
		::System::Boolean Positive; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCURVEMOVESTARTMODE_CIRCLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9DB5B83664B0F9AB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropCurveMoveStartMode_Circle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropCurveMoveStartMode_Circle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCURVEMOVESTARTMODE_CIRCLE_METHOD_3_9DB5B83664B0F9AB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AC3EDB92E0AEB42E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropCurveMoveStartMode_Circle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropCurveMoveStartMode_Circle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCURVEMOVESTARTMODE_CIRCLE_METHOD_3_AC3EDB92E0AEB42E_OFFSET))(a1, a2);
		}
	};
}
