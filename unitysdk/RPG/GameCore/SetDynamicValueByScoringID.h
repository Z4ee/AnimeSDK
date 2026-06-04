#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYSCORINGID_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x19C448D0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYSCORINGID_METHOD_4_1CAAED88B50660F7_OFFSET UNITYSDK_OFFSET(0x19C44700)
#define RPG_GAMECORE_SETDYNAMICVALUEBYSCORINGID_METHOD_4_1FF5429ACCD5AEAF_OFFSET UNITYSDK_OFFSET(0x19C44630)
#define RPG_GAMECORE_SETDYNAMICVALUEBYSCORINGID__CTOR_OFFSET UNITYSDK_OFFSET(0x19C446B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByScoringID_TypeDefinitionIndex = 21838;

	class SetDynamicValueByScoringID : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::RPG::GameCore::DynamicFloat* ScoringID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSCORINGID__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1FF5429ACCD5AEAF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByScoringID*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByScoringID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSCORINGID_METHOD_4_1FF5429ACCD5AEAF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1CAAED88B50660F7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByScoringID* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByScoringID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSCORINGID_METHOD_4_1CAAED88B50660F7_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSCORINGID_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}
