#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PROPCURVEMOVESTARTMODE_METHOD_2_1CAADBF49CA18D51_OFFSET UNITYSDK_OFFSET(0x1D362400)
#define RPG_GAMECORE_PROPCURVEMOVESTARTMODE_METHOD_2_69838BB5F72F0A9B_OFFSET UNITYSDK_OFFSET(0x1D362B40)
#define RPG_GAMECORE_PROPCURVEMOVESTARTMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D362BA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropCurveMoveStartMode_TypeDefinitionIndex = 20765;

	class PropCurveMoveStartMode : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCURVEMOVESTARTMODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_1CAADBF49CA18D51(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropCurveMoveStartMode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropCurveMoveStartMode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCURVEMOVESTARTMODE_METHOD_2_1CAADBF49CA18D51_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_69838BB5F72F0A9B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropCurveMoveStartMode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropCurveMoveStartMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCURVEMOVESTARTMODE_METHOD_2_69838BB5F72F0A9B_OFFSET))(a1, a2);
		}
	};
}
