#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TextDynamicParamBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MiParameterConfigBase; }

#define RPG_GAMECORE_FATETEXTDYNAMICPARAMMASTERNAME_METHOD_3_2E9D706E0F0326C0_OFFSET UNITYSDK_OFFSET(0x19717AF0)
#define RPG_GAMECORE_FATETEXTDYNAMICPARAMMASTERNAME_METHOD_3_F86B53A3F63AA550_OFFSET UNITYSDK_OFFSET(0x19717B50)
#define RPG_GAMECORE_FATETEXTDYNAMICPARAMMASTERNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x19717B40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateTextDynamicParamMasterName_TypeDefinitionIndex = 15821;

	class FateTextDynamicParamMasterName : public ::RPG::GameCore::TextDynamicParamBase
	{
	public:
		::RPG::GameCore::MiParameterConfigBase* MasterAvatarID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATETEXTDYNAMICPARAMMASTERNAME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2E9D706E0F0326C0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateTextDynamicParamMasterName*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateTextDynamicParamMasterName*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATETEXTDYNAMICPARAMMASTERNAME_METHOD_3_2E9D706E0F0326C0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F86B53A3F63AA550(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateTextDynamicParamMasterName* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateTextDynamicParamMasterName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATETEXTDYNAMICPARAMMASTERNAME_METHOD_3_F86B53A3F63AA550_OFFSET))(a1, a2);
		}
	};
}
