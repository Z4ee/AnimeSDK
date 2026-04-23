#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class JsonEnum; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTCUSTOMPROPERTY_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x18E20EE0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTCUSTOMPROPERTY_METHOD_4_97ECE9EEE5B4D097_OFFSET UNITYSDK_OFFSET(0x18E20C40)
#define RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTCUSTOMPROPERTY_METHOD_4_AE28C9AAB91E5DBF_OFFSET UNITYSDK_OFFSET(0x18E20D10)
#define RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTCUSTOMPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x18E20CC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByGridFightCustomProperty_TypeDefinitionIndex = 21423;

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

		static ::System::Void Method_4_97ECE9EEE5B4D097(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByGridFightCustomProperty*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByGridFightCustomProperty*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTCUSTOMPROPERTY_METHOD_4_97ECE9EEE5B4D097_OFFSET))(a1, a2);
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
