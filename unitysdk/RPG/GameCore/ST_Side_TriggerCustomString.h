#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ST_SIDE_TRIGGERCUSTOMSTRING_METHOD_4_25E01ECC6A8198D3_OFFSET UNITYSDK_OFFSET(0x17690570)
#define RPG_GAMECORE_ST_SIDE_TRIGGERCUSTOMSTRING_METHOD_4_B1CD86B2E0B49BD4_OFFSET UNITYSDK_OFFSET(0x1769A0B0)
#define RPG_GAMECORE_ST_SIDE_TRIGGERCUSTOMSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x17690510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_TriggerCustomString_TypeDefinitionIndex = 18430;

	class ST_Side_TriggerCustomString : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Boolean TriggerOnEnter; // 0x18
		::System::Boolean TriggerOnExit; // 0x19
		::System::String* TriggerString; // 0x20
		::System::Boolean UseVariable; // 0x28
		::System::String* VariableName; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_TRIGGERCUSTOMSTRING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B1CD86B2E0B49BD4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_TriggerCustomString*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_TriggerCustomString*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_TRIGGERCUSTOMSTRING_METHOD_4_B1CD86B2E0B49BD4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_25E01ECC6A8198D3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_TriggerCustomString* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_TriggerCustomString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_TRIGGERCUSTOMSTRING_METHOD_4_25E01ECC6A8198D3_OFFSET))(a1, a2);
		}
	};
}
