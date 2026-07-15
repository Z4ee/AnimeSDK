#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class JsonEnum; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTCUSTOMPROPERTY_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1C2E22D0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTCUSTOMPROPERTY_METHOD_4_AE28C9AAB91E5DBF_OFFSET UNITYSDK_OFFSET(0x1C2E2100)
#define RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTCUSTOMPROPERTY_METHOD_4_CA5D8518F29D5D12_OFFSET UNITYSDK_OFFSET(0x1C2E20C0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTCUSTOMPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2E20F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByGridFightCustomProperty_TypeDefinitionIndex = 21722;

	class SetDynamicValueByGridFightCustomProperty : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::RPG::GameCore::JsonEnum* CustomType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTCUSTOMPROPERTY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_CA5D8518F29D5D12(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByGridFightCustomProperty*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByGridFightCustomProperty*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTCUSTOMPROPERTY_METHOD_4_CA5D8518F29D5D12_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_AE28C9AAB91E5DBF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByGridFightCustomProperty* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByGridFightCustomProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTCUSTOMPROPERTY_METHOD_4_AE28C9AAB91E5DBF_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTCUSTOMPROPERTY_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}
