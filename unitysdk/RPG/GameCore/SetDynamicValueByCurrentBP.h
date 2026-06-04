#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BPValueType.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYCURRENTBP_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x19C40E00)
#define RPG_GAMECORE_SETDYNAMICVALUEBYCURRENTBP_METHOD_4_D4F9E2EB196B42F6_OFFSET UNITYSDK_OFFSET(0x19C38E10)
#define RPG_GAMECORE_SETDYNAMICVALUEBYCURRENTBP_METHOD_4_F1975248C08BDEFA_OFFSET UNITYSDK_OFFSET(0x19C40D80)
#define RPG_GAMECORE_SETDYNAMICVALUEBYCURRENTBP__CTOR_OFFSET UNITYSDK_OFFSET(0x19C38DB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByCurrentBP_TypeDefinitionIndex = 21840;

	class SetDynamicValueByCurrentBP : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::RPG::GameCore::TeamType Team; // 0x24
		::RPG::GameCore::BPValueType ValueType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYCURRENTBP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_F1975248C08BDEFA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByCurrentBP*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByCurrentBP*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYCURRENTBP_METHOD_4_F1975248C08BDEFA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D4F9E2EB196B42F6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByCurrentBP* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByCurrentBP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYCURRENTBP_METHOD_4_D4F9E2EB196B42F6_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYCURRENTBP_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}
