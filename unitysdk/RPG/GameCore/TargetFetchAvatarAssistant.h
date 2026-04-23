#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETFETCHAVATARASSISTANT_METHOD_4_310AEEFCB3CF1031_OFFSET UNITYSDK_OFFSET(0x18EE31B0)
#define RPG_GAMECORE_TARGETFETCHAVATARASSISTANT_METHOD_4_86B195EFDBF8B54F_OFFSET UNITYSDK_OFFSET(0x18EDB290)
#define RPG_GAMECORE_TARGETFETCHAVATARASSISTANT__CTOR_OFFSET UNITYSDK_OFFSET(0x18EDB240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAvatarAssistant_TypeDefinitionIndex = 22931;

	class TargetFetchAvatarAssistant : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAVATARASSISTANT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_310AEEFCB3CF1031(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAvatarAssistant*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAvatarAssistant*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAVATARASSISTANT_METHOD_4_310AEEFCB3CF1031_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_86B195EFDBF8B54F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAvatarAssistant* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAvatarAssistant*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAVATARASSISTANT_METHOD_4_86B195EFDBF8B54F_OFFSET))(a1, a2);
		}
	};
}
