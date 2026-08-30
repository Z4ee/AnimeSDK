#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVREMOVEAIHANGUPINFO_METHOD_3_36193BA4508F702A_OFFSET UNITYSDK_OFFSET(0x1CDD69F0)
#define RPG_GAMECORE_ADVREMOVEAIHANGUPINFO_METHOD_3_6DF94D95D10CE8D3_OFFSET UNITYSDK_OFFSET(0x1CDD6A30)
#define RPG_GAMECORE_ADVREMOVEAIHANGUPINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDD6A20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvRemoveAIHangUpInfo_TypeDefinitionIndex = 19997;

	class AdvRemoveAIHangUpInfo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* EntityInstanceID; // 0x20
		::RPG::GameCore::DynamicString* HangUpKey; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVREMOVEAIHANGUPINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_36193BA4508F702A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvRemoveAIHangUpInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvRemoveAIHangUpInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVREMOVEAIHANGUPINFO_METHOD_3_36193BA4508F702A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6DF94D95D10CE8D3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvRemoveAIHangUpInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvRemoveAIHangUpInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVREMOVEAIHANGUPINFO_METHOD_3_6DF94D95D10CE8D3_OFFSET))(a1, a2);
		}
	};
}
