#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixVec2.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RTDEFENCEVALUEINCREASEMENT_METHOD_2_080F6E0945278D4B_OFFSET UNITYSDK_OFFSET(0x18DCE210)
#define RPG_GAMECORE_RTDEFENCEVALUEINCREASEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x18DCFC10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtDefenceValueIncreasement_TypeDefinitionIndex = 17161;

	class RtDefenceValueIncreasement : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixVec2>* Increasement; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDEFENCEVALUEINCREASEMENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_080F6E0945278D4B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtDefenceValueIncreasement*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtDefenceValueIncreasement*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDEFENCEVALUEINCREASEMENT_METHOD_2_080F6E0945278D4B_OFFSET))(a1, a2);
		}
	};
}
