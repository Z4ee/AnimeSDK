#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TutorialDynamicParamBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_BATTLETUTORIALDYNAMICVALUEPARAM_METHOD_3_44B0A91649C3F8F8_OFFSET UNITYSDK_OFFSET(0x18707290)
#define RPG_GAMECORE_BATTLETUTORIALDYNAMICVALUEPARAM_METHOD_3_5CFEE7C351C98D35_OFFSET UNITYSDK_OFFSET(0x187071D0)
#define RPG_GAMECORE_BATTLETUTORIALDYNAMICVALUEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x18707280)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleTutorialDynamicValueParam_TypeDefinitionIndex = 23336;

	class BattleTutorialDynamicValueParam : public ::RPG::GameCore::TutorialDynamicParamBase
	{
	public:
		::System::String* Key; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLETUTORIALDYNAMICVALUEPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5CFEE7C351C98D35(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleTutorialDynamicValueParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleTutorialDynamicValueParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLETUTORIALDYNAMICVALUEPARAM_METHOD_3_5CFEE7C351C98D35_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_44B0A91649C3F8F8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleTutorialDynamicValueParam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleTutorialDynamicValueParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLETUTORIALDYNAMICVALUEPARAM_METHOD_3_44B0A91649C3F8F8_OFFSET))(a1, a2);
		}
	};
}
