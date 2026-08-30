#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETENTITYAVAILABLE_METHOD_3_855A02B281644A7E_OFFSET UNITYSDK_OFFSET(0x1D4FC4F0)
#define RPG_GAMECORE_SETENTITYAVAILABLE_METHOD_3_F747590225868747_OFFSET UNITYSDK_OFFSET(0x1D4FC540)
#define RPG_GAMECORE_SETENTITYAVAILABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4FC530)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetEntityAvailable_TypeDefinitionIndex = 20365;

	class SetEntityAvailable : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean IsAvailable; // 0x20
		::System::Boolean IncludeModelVisible; // 0x21
		::System::Boolean ResetPosition; // 0x22

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENTITYAVAILABLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_855A02B281644A7E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetEntityAvailable*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetEntityAvailable*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENTITYAVAILABLE_METHOD_3_855A02B281644A7E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F747590225868747(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetEntityAvailable* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetEntityAvailable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENTITYAVAILABLE_METHOD_3_F747590225868747_OFFSET))(a1, a2);
		}
	};
}
