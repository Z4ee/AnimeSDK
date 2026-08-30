#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TextDynamicParamBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MiParameterConfigBase; }

#define RPG_GAMECORE_FATETEXTDYNAMICPARAMTRAITNAME_METHOD_3_135CE51B455911B1_OFFSET UNITYSDK_OFFSET(0x1D0913C0)
#define RPG_GAMECORE_FATETEXTDYNAMICPARAMTRAITNAME_METHOD_3_66A753CD36F1B77D_OFFSET UNITYSDK_OFFSET(0x1D0912A0)
#define RPG_GAMECORE_FATETEXTDYNAMICPARAMTRAITNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0913B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateTextDynamicParamTraitName_TypeDefinitionIndex = 16470;

	class FateTextDynamicParamTraitName : public ::RPG::GameCore::TextDynamicParamBase
	{
	public:
		::RPG::GameCore::MiParameterConfigBase* TraitID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATETEXTDYNAMICPARAMTRAITNAME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_66A753CD36F1B77D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateTextDynamicParamTraitName*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateTextDynamicParamTraitName*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATETEXTDYNAMICPARAMTRAITNAME_METHOD_3_66A753CD36F1B77D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_135CE51B455911B1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateTextDynamicParamTraitName* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateTextDynamicParamTraitName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATETEXTDYNAMICPARAMTRAITNAME_METHOD_3_135CE51B455911B1_OFFSET))(a1, a2);
		}
	};
}
