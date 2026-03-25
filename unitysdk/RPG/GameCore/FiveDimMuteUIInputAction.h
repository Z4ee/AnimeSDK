#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMMUTEUIINPUTACTION_METHOD_3_9F1BB6EFC21DA9E2_OFFSET UNITYSDK_OFFSET(0x171FFD60)
#define RPG_GAMECORE_FIVEDIMMUTEUIINPUTACTION_METHOD_3_BEB95AD9924F5FB6_OFFSET UNITYSDK_OFFSET(0x171FFC50)
#define RPG_GAMECORE_FIVEDIMMUTEUIINPUTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x171FFD40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimMuteUIInputAction_TypeDefinitionIndex = 17229;

	class FiveDimMuteUIInputAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean IsMute; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMUTEUIINPUTACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BEB95AD9924F5FB6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMuteUIInputAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMuteUIInputAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMUTEUIINPUTACTION_METHOD_3_BEB95AD9924F5FB6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9F1BB6EFC21DA9E2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMuteUIInputAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMuteUIInputAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMUTEUIINPUTACTION_METHOD_3_9F1BB6EFC21DA9E2_OFFSET))(a1, a2);
		}
	};
}
