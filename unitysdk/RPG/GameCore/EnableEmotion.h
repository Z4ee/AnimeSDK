#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ENABLEEMOTION_METHOD_3_448BF841545CC7FB_OFFSET UNITYSDK_OFFSET(0x196E3850)
#define RPG_GAMECORE_ENABLEEMOTION_METHOD_3_BDCA8F784546FD1C_OFFSET UNITYSDK_OFFSET(0x196E38E0)
#define RPG_GAMECORE_ENABLEEMOTION__CTOR_OFFSET UNITYSDK_OFFSET(0x196E38B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnableEmotion_TypeDefinitionIndex = 21183;

	class EnableEmotion : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean Enable; // 0x20
		::System::Single TransitOutTime; // 0x24
		::System::Single TransitInTime; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEEMOTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_448BF841545CC7FB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnableEmotion*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnableEmotion*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEEMOTION_METHOD_3_448BF841545CC7FB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BDCA8F784546FD1C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnableEmotion* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnableEmotion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEEMOTION_METHOD_3_BDCA8F784546FD1C_OFFSET))(a1, a2);
		}
	};
}
