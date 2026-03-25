#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarBaseTypeKind.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_COMPLEXSKILLAIGETAVATARBASETYPE_METHOD_3_EBF60C546B0C1125_OFFSET UNITYSDK_OFFSET(0x17123260)
#define RPG_GAMECORE_COMPLEXSKILLAIGETAVATARBASETYPE_METHOD_3_F3E704BAB96BC99A_OFFSET UNITYSDK_OFFSET(0x171232D0)
#define RPG_GAMECORE_COMPLEXSKILLAIGETAVATARBASETYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x171232B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAIGetAvatarBaseType_TypeDefinitionIndex = 14268;

	class ComplexSkillAIGetAvatarBaseType : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::RPG::GameCore::AvatarBaseTypeKind BaseTypeKind; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIGETAVATARBASETYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EBF60C546B0C1125(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAIGetAvatarBaseType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAIGetAvatarBaseType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIGETAVATARBASETYPE_METHOD_3_EBF60C546B0C1125_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F3E704BAB96BC99A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAIGetAvatarBaseType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAIGetAvatarBaseType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIGETAVATARBASETYPE_METHOD_3_F3E704BAB96BC99A_OFFSET))(a1, a2);
		}
	};
}
