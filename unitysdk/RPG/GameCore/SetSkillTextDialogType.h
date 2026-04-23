#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SkillTextDialogType.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETSKILLTEXTDIALOGTYPE_METHOD_3_3930E09BC7B49144_OFFSET UNITYSDK_OFFSET(0x18E420B0)
#define RPG_GAMECORE_SETSKILLTEXTDIALOGTYPE_METHOD_3_B83F5CC25A05EFAC_OFFSET UNITYSDK_OFFSET(0x18E42030)
#define RPG_GAMECORE_SETSKILLTEXTDIALOGTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x18E42080)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetSkillTextDialogType_TypeDefinitionIndex = 21853;

	class SetSkillTextDialogType : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::RPG::GameCore::SkillType>* SkillTypes; // 0x20
		::RPG::GameCore::SkillTextDialogType Type; // 0x28
		::System::Boolean IsReplace; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSKILLTEXTDIALOGTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B83F5CC25A05EFAC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetSkillTextDialogType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetSkillTextDialogType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSKILLTEXTDIALOGTYPE_METHOD_3_B83F5CC25A05EFAC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3930E09BC7B49144(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetSkillTextDialogType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetSkillTextDialogType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSKILLTEXTDIALOGTYPE_METHOD_3_3930E09BC7B49144_OFFSET))(a1, a2);
		}
	};
}
