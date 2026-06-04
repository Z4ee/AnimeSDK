#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/EnumStatusType.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYSTATUSCOUNT_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x19C45870)
#define RPG_GAMECORE_SETDYNAMICVALUEBYSTATUSCOUNT_METHOD_4_717DBA7C9F56F115_OFFSET UNITYSDK_OFFSET(0x19C45640)
#define RPG_GAMECORE_SETDYNAMICVALUEBYSTATUSCOUNT_METHOD_4_A8128B3A370A15BE_OFFSET UNITYSDK_OFFSET(0x19C45560)
#define RPG_GAMECORE_SETDYNAMICVALUEBYSTATUSCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x19C455E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByStatusCount_TypeDefinitionIndex = 21834;

	class SetDynamicValueByStatusCount : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::RPG::GameCore::TargetEvaluator* ReadTargetType; // 0x28
		::RPG::GameCore::TargetEvaluator* CasterFilter; // 0x30
		::RPG::GameCore::EnumStatusType StatusType; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSTATUSCOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_A8128B3A370A15BE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByStatusCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByStatusCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSTATUSCOUNT_METHOD_4_A8128B3A370A15BE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_717DBA7C9F56F115(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByStatusCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByStatusCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSTATUSCOUNT_METHOD_4_717DBA7C9F56F115_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSTATUSCOUNT_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}
