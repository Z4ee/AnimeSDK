#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TextDynamicParamBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MiParameterConfigBase; }

#define RPG_GAMECORE_FATETEXTDYNAMICPARAMTRAITNAME_METHOD_3_3C3F1DB80DDD2778_OFFSET UNITYSDK_OFFSET(0x19717C20)
#define RPG_GAMECORE_FATETEXTDYNAMICPARAMTRAITNAME_METHOD_3_BB28B4C562F08E88_OFFSET UNITYSDK_OFFSET(0x19717C80)
#define RPG_GAMECORE_FATETEXTDYNAMICPARAMTRAITNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x19717C70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateTextDynamicParamTraitName_TypeDefinitionIndex = 15820;

	class FateTextDynamicParamTraitName : public ::RPG::GameCore::TextDynamicParamBase
	{
	public:
		::RPG::GameCore::MiParameterConfigBase* TraitID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATETEXTDYNAMICPARAMTRAITNAME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3C3F1DB80DDD2778(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateTextDynamicParamTraitName*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateTextDynamicParamTraitName*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATETEXTDYNAMICPARAMTRAITNAME_METHOD_3_3C3F1DB80DDD2778_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BB28B4C562F08E88(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateTextDynamicParamTraitName* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateTextDynamicParamTraitName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATETEXTDYNAMICPARAMTRAITNAME_METHOD_3_BB28B4C562F08E88_OFFSET))(a1, a2);
		}
	};
}
