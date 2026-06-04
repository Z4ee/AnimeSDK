#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUECURRENTSKILLUSEPARAM_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x19C488C0)
#define RPG_GAMECORE_SETDYNAMICVALUECURRENTSKILLUSEPARAM_METHOD_4_1D607E84D7477DFB_OFFSET UNITYSDK_OFFSET(0x19C48750)
#define RPG_GAMECORE_SETDYNAMICVALUECURRENTSKILLUSEPARAM_METHOD_4_1F0FE68C76115F86_OFFSET UNITYSDK_OFFSET(0x19C48680)
#define RPG_GAMECORE_SETDYNAMICVALUECURRENTSKILLUSEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x19C48700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueCurrentSkillUseParam_TypeDefinitionIndex = 21532;

	class SetDynamicValueCurrentSkillUseParam : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUECURRENTSKILLUSEPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1F0FE68C76115F86(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueCurrentSkillUseParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueCurrentSkillUseParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUECURRENTSKILLUSEPARAM_METHOD_4_1F0FE68C76115F86_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1D607E84D7477DFB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueCurrentSkillUseParam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueCurrentSkillUseParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUECURRENTSKILLUSEPARAM_METHOD_4_1D607E84D7477DFB_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUECURRENTSKILLUSEPARAM_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}
