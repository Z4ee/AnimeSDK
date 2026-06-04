#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropCurveMoveStartMode.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_PROPCURVEMOVESTARTMODE_PINPONG_METHOD_3_3F9921AC5E3EA22B_OFFSET UNITYSDK_OFFSET(0x19A8A060)
#define RPG_GAMECORE_PROPCURVEMOVESTARTMODE_PINPONG_METHOD_3_92FF931D8E767948_OFFSET UNITYSDK_OFFSET(0x19A8A0A0)
#define RPG_GAMECORE_PROPCURVEMOVESTARTMODE_PINPONG__CTOR_OFFSET UNITYSDK_OFFSET(0x19A8A090)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropCurveMoveStartMode_PinPong_TypeDefinitionIndex = 19855;

	class PropCurveMoveStartMode_PinPong : public ::RPG::GameCore::PropCurveMoveStartMode
	{
	public:
		::RPG::GameCore::DynamicString* PointIndex1; // 0x10
		::RPG::GameCore::DynamicString* PointIndex2; // 0x18
		::System::Boolean Positive; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCURVEMOVESTARTMODE_PINPONG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3F9921AC5E3EA22B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropCurveMoveStartMode_PinPong*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropCurveMoveStartMode_PinPong*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCURVEMOVESTARTMODE_PINPONG_METHOD_3_3F9921AC5E3EA22B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_92FF931D8E767948(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropCurveMoveStartMode_PinPong* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropCurveMoveStartMode_PinPong*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCURVEMOVESTARTMODE_PINPONG_METHOD_3_92FF931D8E767948_OFFSET))(a1, a2);
		}
	};
}
