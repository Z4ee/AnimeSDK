#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_STARTAIM_METHOD_3_437D51C179124BDD_OFFSET UNITYSDK_OFFSET(0x1D566100)
#define RPG_GAMECORE_STARTAIM_METHOD_3_DD0E6FB00E9A9041_OFFSET UNITYSDK_OFFSET(0x1D566180)
#define RPG_GAMECORE_STARTAIM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D566150)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StartAim_TypeDefinitionIndex = 22156;

	class StartAim : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* AimerName; // 0x20
		::System::String* TargetAttachPoint; // 0x28
		::RPG::MVector3 TargetOffset; // 0x30
		::System::Single TransitTime; // 0x3C
		::System::Single VerticalAlpha; // 0x40
		::System::Single HorizontalAlpha; // 0x44
		::System::Boolean IsEffect; // 0x48
		::System::Boolean TraceTarget; // 0x49
		::System::String* EffectPath; // 0x50
		::RPG::MVector2 LimitTargetRange; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTAIM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_437D51C179124BDD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StartAim*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StartAim*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTAIM_METHOD_3_437D51C179124BDD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DD0E6FB00E9A9041(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StartAim* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StartAim*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTAIM_METHOD_3_DD0E6FB00E9A9041_OFFSET))(a1, a2);
		}
	};
}
