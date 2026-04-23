#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_SETCLIENTGROUPPROPERTY_METHOD_3_23929BE0BB4AB4FD_OFFSET UNITYSDK_OFFSET(0x18E12220)
#define RPG_GAMECORE_SETCLIENTGROUPPROPERTY_METHOD_3_94377F4940052DB6_OFFSET UNITYSDK_OFFSET(0x18E121A0)
#define RPG_GAMECORE_SETCLIENTGROUPPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x18E121F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetClientGroupProperty_TypeDefinitionIndex = 19705;

	class SetClientGroupProperty : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 GroupID; // 0x18
		::RPG::GameCore::DynamicString* DynamicName; // 0x20
		::System::Int16 Value; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCLIENTGROUPPROPERTY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_94377F4940052DB6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetClientGroupProperty*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetClientGroupProperty*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCLIENTGROUPPROPERTY_METHOD_3_94377F4940052DB6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_23929BE0BB4AB4FD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetClientGroupProperty* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetClientGroupProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCLIENTGROUPPROPERTY_METHOD_3_23929BE0BB4AB4FD_OFFSET))(a1, a2);
		}
	};
}
