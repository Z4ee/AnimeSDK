#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYMAXBP_METHOD_3_89CE83E6F058368D_OFFSET UNITYSDK_OFFSET(0x19C422B0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYMAXBP_METHOD_3_9790E6C24050D718_OFFSET UNITYSDK_OFFSET(0x19C42340)
#define RPG_GAMECORE_SETDYNAMICVALUEBYMAXBP__CTOR_OFFSET UNITYSDK_OFFSET(0x19C42310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByMaxBP_TypeDefinitionIndex = 22297;

	class SetDynamicValueByMaxBP : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::RPG::GameCore::TeamType Team; // 0x24
		::System::Boolean GetRawMax; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYMAXBP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_89CE83E6F058368D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByMaxBP*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByMaxBP*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYMAXBP_METHOD_3_89CE83E6F058368D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9790E6C24050D718(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByMaxBP* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByMaxBP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYMAXBP_METHOD_3_9790E6C24050D718_OFFSET))(a1, a2);
		}
	};
}
