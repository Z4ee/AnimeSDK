#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/FateContentParamType.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYFATECONTENT_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x19C41150)
#define RPG_GAMECORE_SETDYNAMICVALUEBYFATECONTENT_METHOD_4_5A0E313287045A20_OFFSET UNITYSDK_OFFSET(0x19C39AF0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYFATECONTENT_METHOD_4_C9CA1B2B1BEA4888_OFFSET UNITYSDK_OFFSET(0x19C410D0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYFATECONTENT__CTOR_OFFSET UNITYSDK_OFFSET(0x19C39AA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByFateContent_TypeDefinitionIndex = 22014;

	class SetDynamicValueByFateContent : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::RPG::GameCore::FateContentParamType ValueType; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYFATECONTENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_C9CA1B2B1BEA4888(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByFateContent*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByFateContent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYFATECONTENT_METHOD_4_C9CA1B2B1BEA4888_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5A0E313287045A20(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByFateContent* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByFateContent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYFATECONTENT_METHOD_4_5A0E313287045A20_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYFATECONTENT_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}
