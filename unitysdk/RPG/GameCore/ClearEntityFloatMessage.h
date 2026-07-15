#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FloatMessageType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_CLEARENTITYFLOATMESSAGE_METHOD_3_73D3A38D13684085_OFFSET UNITYSDK_OFFSET(0x1C253AE0)
#define RPG_GAMECORE_CLEARENTITYFLOATMESSAGE_METHOD_3_AE5DC3DD41091FD2_OFFSET UNITYSDK_OFFSET(0x1C253A90)
#define RPG_GAMECORE_CLEARENTITYFLOATMESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C253AD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClearEntityFloatMessage_TypeDefinitionIndex = 22382;

	class ClearEntityFloatMessage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::FloatMessageType MessageType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARENTITYFLOATMESSAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AE5DC3DD41091FD2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClearEntityFloatMessage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClearEntityFloatMessage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARENTITYFLOATMESSAGE_METHOD_3_AE5DC3DD41091FD2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_73D3A38D13684085(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClearEntityFloatMessage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClearEntityFloatMessage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARENTITYFLOATMESSAGE_METHOD_3_73D3A38D13684085_OFFSET))(a1, a2);
		}
	};
}
