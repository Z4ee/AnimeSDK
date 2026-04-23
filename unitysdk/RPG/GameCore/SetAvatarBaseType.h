#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/AvatarBaseTypeKind.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETAVATARBASETYPE_METHOD_3_12674314453660FE_OFFSET UNITYSDK_OFFSET(0x18E0AA90)
#define RPG_GAMECORE_SETAVATARBASETYPE_METHOD_3_F11C75DCB2C4E981_OFFSET UNITYSDK_OFFSET(0x18E0AA00)
#define RPG_GAMECORE_SETAVATARBASETYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x18E0AA60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetAvatarBaseType_TypeDefinitionIndex = 22561;

	class SetAvatarBaseType : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::AvatarBaseTypeKind BaseTypeKind; // 0x20
		::RPG::GameCore::TargetEvaluator* BaseTypeSourceTarget; // 0x28
		::RPG::GameCore::AvatarBaseTypeKind SourceBaseTypeKind; // 0x30
		::RPG::GameCore::AvatarBaseType BaseType; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETAVATARBASETYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F11C75DCB2C4E981(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetAvatarBaseType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetAvatarBaseType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETAVATARBASETYPE_METHOD_3_F11C75DCB2C4E981_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_12674314453660FE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetAvatarBaseType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetAvatarBaseType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETAVATARBASETYPE_METHOD_3_12674314453660FE_OFFSET))(a1, a2);
		}
	};
}
