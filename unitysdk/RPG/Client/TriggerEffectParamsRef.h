#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client { class TriggerEffectParams; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define RPG_CLIENT_TRIGGEREFFECTPARAMSREF_CLEAR_OFFSET UNITYSDK_OFFSET(0x85070)
#define RPG_CLIENT_TRIGGEREFFECTPARAMSREF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x851D0)
#define RPG_CLIENT_TRIGGEREFFECTPARAMSREF_EQUALS_OFFSET UNITYSDK_OFFSET(0x851C0)
#define RPG_CLIENT_TRIGGEREFFECTPARAMSREF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x850F0)
#define RPG_CLIENT_TRIGGEREFFECTPARAMSREF_GETISVALID_OFFSET UNITYSDK_OFFSET(0x85010)
#define RPG_CLIENT_TRIGGEREFFECTPARAMSREF_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xA63B3E0)
#define RPG_CLIENT_TRIGGEREFFECTPARAMSREF_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xA63B300)
#define RPG_CLIENT_TRIGGEREFFECTPARAMSREF_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x850D0)
#define RPG_CLIENT_TRIGGEREFFECTPARAMSREF_RESET_OFFSET UNITYSDK_OFFSET(0x84FB0)
#define RPG_CLIENT_TRIGGEREFFECTPARAMSREF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x850C0)
#define RPG_CLIENT_TRIGGEREFFECTPARAMSREF__CTOR_1_OFFSET UNITYSDK_OFFSET(0x84F80)
#define RPG_CLIENT_TRIGGEREFFECTPARAMSREF__CTOR_OFFSET UNITYSDK_OFFSET(0x2BD80)

namespace RPG::Client
{
	inline static constexpr unsigned int TriggerEffectParamsRef_TypeDefinitionIndex = 57197;

	struct alignas(8) TriggerEffectParamsRef
	{
		::System::UInt32 UniqueEffectID; // 0x10
		::RPG::Client::TriggerEffectParams* InstanceParamsRef; // 0x18

		::System::Void _ctor(::System::UInt32 pUniqueEffectID, ::RPG::Client::TriggerEffectParams* pTriggerEffectParams)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMSREF__CTOR_OFFSET))(this, pUniqueEffectID, pTriggerEffectParams);
		}

		::System::Void _ctor_1(::RPG::Client::TriggerEffectParams* pTriggerEffectParams)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMSREF__CTOR_1_OFFSET))(this, pTriggerEffectParams);
		}

		::System::Void Reset(::RPG::Client::TriggerEffectParams* pTriggerEffectParams)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMSREF_RESET_OFFSET))(this, pTriggerEffectParams);
		}

		::System::Boolean GetIsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMSREF_GETISVALID_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMSREF_CLEAR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMSREF_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* builder)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMSREF_PRINTMEMBERS_OFFSET))(this, builder);
		}

		static ::System::Boolean op_Inequality(::RPG::Client::TriggerEffectParamsRef left, ::RPG::Client::TriggerEffectParamsRef right)
		{
			return ((::System::Boolean(*)(::RPG::Client::TriggerEffectParamsRef, ::RPG::Client::TriggerEffectParamsRef))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMSREF_OP_INEQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Equality(::RPG::Client::TriggerEffectParamsRef left, ::RPG::Client::TriggerEffectParamsRef right)
		{
			return ((::System::Boolean(*)(::RPG::Client::TriggerEffectParamsRef, ::RPG::Client::TriggerEffectParamsRef))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMSREF_OP_EQUALITY_OFFSET))(left, right);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMSREF_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMSREF_EQUALS_OFFSET))(this, obj);
		}

		::System::Boolean Equals_1(::RPG::Client::TriggerEffectParamsRef other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TriggerEffectParamsRef))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMSREF_EQUALS_1_OFFSET))(this, other);
		}
	};
}
