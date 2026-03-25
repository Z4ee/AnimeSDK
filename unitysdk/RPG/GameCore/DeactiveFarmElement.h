#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_DEACTIVEFARMELEMENT_METHOD_3_7706044986DEBDB0_OFFSET UNITYSDK_OFFSET(0x1714C320)
#define RPG_GAMECORE_DEACTIVEFARMELEMENT_METHOD_3_F26E4C9C1C088BE9_OFFSET UNITYSDK_OFFSET(0x1714C3A0)
#define RPG_GAMECORE_DEACTIVEFARMELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1714C370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DeactiveFarmElement_TypeDefinitionIndex = 20269;

	class DeactiveFarmElement : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEACTIVEFARMELEMENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7706044986DEBDB0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DeactiveFarmElement*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DeactiveFarmElement*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEACTIVEFARMELEMENT_METHOD_3_7706044986DEBDB0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F26E4C9C1C088BE9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DeactiveFarmElement* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DeactiveFarmElement*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEACTIVEFARMELEMENT_METHOD_3_F26E4C9C1C088BE9_OFFSET))(a1, a2);
		}
	};
}
