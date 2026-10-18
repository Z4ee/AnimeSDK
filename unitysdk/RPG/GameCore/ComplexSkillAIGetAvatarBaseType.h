#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_COMPLEXSKILLAIGETAVATARBASETYPE_METHOD_3_6DA4CD959BCD9905_OFFSET UNITYSDK_OFFSET(0x1D5CE350)
#define RPG_GAMECORE_COMPLEXSKILLAIGETAVATARBASETYPE_METHOD_3_DDB3A3E1D1B10E40_OFFSET UNITYSDK_OFFSET(0x1D5CE2D0)
#define RPG_GAMECORE_COMPLEXSKILLAIGETAVATARBASETYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5CE340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAIGetAvatarBaseType_TypeDefinitionIndex = 15572;

	class ComplexSkillAIGetAvatarBaseType : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIGETAVATARBASETYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DDB3A3E1D1B10E40(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAIGetAvatarBaseType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAIGetAvatarBaseType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIGETAVATARBASETYPE_METHOD_3_DDB3A3E1D1B10E40_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6DA4CD959BCD9905(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAIGetAvatarBaseType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAIGetAvatarBaseType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIGETAVATARBASETYPE_METHOD_3_6DA4CD959BCD9905_OFFSET))(a1, a2);
		}
	};
}
