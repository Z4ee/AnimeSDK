#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SwitchRefBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_SWITCHREFLEVELVARNUMBER_METHOD_3_142FFF7ED6A11A12_OFFSET UNITYSDK_OFFSET(0x1D58FF90)
#define RPG_GAMECORE_SWITCHREFLEVELVARNUMBER_METHOD_3_1D8087E2BB8D854F_OFFSET UNITYSDK_OFFSET(0x1D58F8D0)
#define RPG_GAMECORE_SWITCHREFLEVELVARNUMBER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D58F8C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchRefLevelVarNumber_TypeDefinitionIndex = 17336;

	class SwitchRefLevelVarNumber : public ::RPG::GameCore::SwitchRefBase
	{
	public:
		::RPG::GameCore::DynamicFloat* Value; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFLEVELVARNUMBER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_142FFF7ED6A11A12(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchRefLevelVarNumber*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchRefLevelVarNumber*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFLEVELVARNUMBER_METHOD_3_142FFF7ED6A11A12_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1D8087E2BB8D854F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchRefLevelVarNumber* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchRefLevelVarNumber*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFLEVELVARNUMBER_METHOD_3_1D8087E2BB8D854F_OFFSET))(a1, a2);
		}
	};
}
