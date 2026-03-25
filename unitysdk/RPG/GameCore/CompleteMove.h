#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_COMPLETEMOVE_METHOD_3_21A9ADA309925F5C_OFFSET UNITYSDK_OFFSET(0x171219D0)
#define RPG_GAMECORE_COMPLETEMOVE_METHOD_3_E1C4F5B9A6865396_OFFSET UNITYSDK_OFFSET(0x17121900)
#define RPG_GAMECORE_COMPLETEMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0x17121980)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CompleteMove_TypeDefinitionIndex = 20649;

	class CompleteMove : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLETEMOVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E1C4F5B9A6865396(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CompleteMove*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CompleteMove*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLETEMOVE_METHOD_3_E1C4F5B9A6865396_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_21A9ADA309925F5C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CompleteMove* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CompleteMove*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLETEMOVE_METHOD_3_21A9ADA309925F5C_OFFSET))(a1, a2);
		}
	};
}
