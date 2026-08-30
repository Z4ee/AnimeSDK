#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SwitchRefBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_SWITCHREFFLOORCUSTOMSTRING_METHOD_3_08E978B2A0BB50C0_OFFSET UNITYSDK_OFFSET(0x1E152BF0)
#define RPG_GAMECORE_SWITCHREFFLOORCUSTOMSTRING_METHOD_3_FB054228EC6FB87D_OFFSET UNITYSDK_OFFSET(0x1E153420)
#define RPG_GAMECORE_SWITCHREFFLOORCUSTOMSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x1E152BE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchRefFloorCustomString_TypeDefinitionIndex = 17327;

	class SwitchRefFloorCustomString : public ::RPG::GameCore::SwitchRefBase
	{
	public:
		::RPG::GameCore::DynamicString* Name; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFFLOORCUSTOMSTRING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FB054228EC6FB87D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchRefFloorCustomString*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchRefFloorCustomString*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFFLOORCUSTOMSTRING_METHOD_3_FB054228EC6FB87D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_08E978B2A0BB50C0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchRefFloorCustomString* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchRefFloorCustomString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFFLOORCUSTOMSTRING_METHOD_3_08E978B2A0BB50C0_OFFSET))(a1, a2);
		}
	};
}
