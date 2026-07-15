#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETDITHERGROUP_METHOD_3_2639B0D9B79BE1CA_OFFSET UNITYSDK_OFFSET(0x1C2DC3B0)
#define RPG_GAMECORE_SETDITHERGROUP_METHOD_3_A6B25F25C67E701F_OFFSET UNITYSDK_OFFSET(0x1C2DC3F0)
#define RPG_GAMECORE_SETDITHERGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2DC3E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDitherGroup_TypeDefinitionIndex = 22087;

	class SetDitherGroup : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* GroupName; // 0x18
		::RPG::GameCore::TargetEvaluator* ShowList; // 0x20
		::RPG::GameCore::TargetEvaluator* HideList; // 0x28
		::System::Int32 Priority; // 0x30
		::System::Single FadeDuration; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDITHERGROUP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2639B0D9B79BE1CA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDitherGroup*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDitherGroup*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDITHERGROUP_METHOD_3_2639B0D9B79BE1CA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A6B25F25C67E701F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDitherGroup* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDitherGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDITHERGROUP_METHOD_3_A6B25F25C67E701F_OFFSET))(a1, a2);
		}
	};
}
