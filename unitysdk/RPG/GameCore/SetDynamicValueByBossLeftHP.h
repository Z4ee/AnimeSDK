#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYBOSSLEFTHP_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1C2DFCB0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYBOSSLEFTHP_METHOD_4_DF1A67C31E24BE8F_OFFSET UNITYSDK_OFFSET(0x1C2DFAC0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYBOSSLEFTHP_METHOD_4_F48462ED69AA1E26_OFFSET UNITYSDK_OFFSET(0x1C2DFB00)
#define RPG_GAMECORE_SETDYNAMICVALUEBYBOSSLEFTHP__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2DFAF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByBossLeftHP_TypeDefinitionIndex = 21952;

	class SetDynamicValueByBossLeftHP : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::RPG::GameCore::TargetEvaluator* BossTargetType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYBOSSLEFTHP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_DF1A67C31E24BE8F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByBossLeftHP*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByBossLeftHP*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYBOSSLEFTHP_METHOD_4_DF1A67C31E24BE8F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F48462ED69AA1E26(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByBossLeftHP* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByBossLeftHP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYBOSSLEFTHP_METHOD_4_F48462ED69AA1E26_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYBOSSLEFTHP_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}
