#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_STACKSKILLDESC_METHOD_3_E001CC4C5B83652D_OFFSET UNITYSDK_OFFSET(0x17762A80)
#define RPG_GAMECORE_STACKSKILLDESC_METHOD_3_EFFA8692BDCE2294_OFFSET UNITYSDK_OFFSET(0x17762A00)
#define RPG_GAMECORE_STACKSKILLDESC__CTOR_OFFSET UNITYSDK_OFFSET(0x17762A50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StackSkillDesc_TypeDefinitionIndex = 21358;

	class StackSkillDesc : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* SkillName; // 0x18
		::RPG::Client::TextID OverrideDescTextID; // 0x20
		::RPG::Client::TextID OverrideSimpleDescTextID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKSKILLDESC__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EFFA8692BDCE2294(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StackSkillDesc*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StackSkillDesc*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKSKILLDESC_METHOD_3_EFFA8692BDCE2294_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E001CC4C5B83652D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StackSkillDesc* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StackSkillDesc*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKSKILLDESC_METHOD_3_E001CC4C5B83652D_OFFSET))(a1, a2);
		}
	};
}
