#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropCurveMoveStartMode.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PROPCURVEMOVESTARTMODE_NORMAL_METHOD_3_7F6A5A6847BBACA8_OFFSET UNITYSDK_OFFSET(0x17518AC0)
#define RPG_GAMECORE_PROPCURVEMOVESTARTMODE_NORMAL_METHOD_3_C116D1010E80F525_OFFSET UNITYSDK_OFFSET(0x17518710)
#define RPG_GAMECORE_PROPCURVEMOVESTARTMODE_NORMAL__CTOR_OFFSET UNITYSDK_OFFSET(0x17518700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropCurveMoveStartMode_Normal_TypeDefinitionIndex = 19330;

	class PropCurveMoveStartMode_Normal : public ::RPG::GameCore::PropCurveMoveStartMode
	{
	public:
		::System::Boolean Positive; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCURVEMOVESTARTMODE_NORMAL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7F6A5A6847BBACA8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropCurveMoveStartMode_Normal*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropCurveMoveStartMode_Normal*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCURVEMOVESTARTMODE_NORMAL_METHOD_3_7F6A5A6847BBACA8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C116D1010E80F525(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropCurveMoveStartMode_Normal* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropCurveMoveStartMode_Normal*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCURVEMOVESTARTMODE_NORMAL_METHOD_3_C116D1010E80F525_OFFSET))(a1, a2);
		}
	};
}
