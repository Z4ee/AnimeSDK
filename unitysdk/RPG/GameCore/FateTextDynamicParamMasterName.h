#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TextDynamicParamBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MiParameterConfigBase; }

#define RPG_GAMECORE_FATETEXTDYNAMICPARAMMASTERNAME_METHOD_3_528DA7711A744165_OFFSET UNITYSDK_OFFSET(0x1BA77890)
#define RPG_GAMECORE_FATETEXTDYNAMICPARAMMASTERNAME_METHOD_3_F3341C9F5049A199_OFFSET UNITYSDK_OFFSET(0x1BA779B0)
#define RPG_GAMECORE_FATETEXTDYNAMICPARAMMASTERNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA779A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateTextDynamicParamMasterName_TypeDefinitionIndex = 15995;

	class FateTextDynamicParamMasterName : public ::RPG::GameCore::TextDynamicParamBase
	{
	public:
		::RPG::GameCore::MiParameterConfigBase* MasterAvatarID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATETEXTDYNAMICPARAMMASTERNAME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_528DA7711A744165(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateTextDynamicParamMasterName*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateTextDynamicParamMasterName*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATETEXTDYNAMICPARAMMASTERNAME_METHOD_3_528DA7711A744165_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F3341C9F5049A199(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateTextDynamicParamMasterName* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateTextDynamicParamMasterName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATETEXTDYNAMICPARAMMASTERNAME_METHOD_3_F3341C9F5049A199_OFFSET))(a1, a2);
		}
	};
}
