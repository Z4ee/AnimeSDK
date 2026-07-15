#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/AvatarBaseTypeKind.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_COMPLEXSKILLAISOURCEAVATARBASETYPE_METHOD_3_87A7A6434711FC44_OFFSET UNITYSDK_OFFSET(0x1BC26710)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEAVATARBASETYPE_METHOD_3_8B252CD7B3E0BE15_OFFSET UNITYSDK_OFFSET(0x1BC266A0)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEAVATARBASETYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC26700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAISourceAvatarBaseType_TypeDefinitionIndex = 14940;

	class ComplexSkillAISourceAvatarBaseType : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::System::Boolean IsTarget; // 0x10
		::RPG::GameCore::AvatarBaseType BaseType; // 0x14
		::RPG::GameCore::AvatarBaseTypeKind BaseTypeKind; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEAVATARBASETYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8B252CD7B3E0BE15(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAISourceAvatarBaseType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAISourceAvatarBaseType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEAVATARBASETYPE_METHOD_3_8B252CD7B3E0BE15_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_87A7A6434711FC44(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAISourceAvatarBaseType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAISourceAvatarBaseType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEAVATARBASETYPE_METHOD_3_87A7A6434711FC44_OFFSET))(a1, a2);
		}
	};
}
