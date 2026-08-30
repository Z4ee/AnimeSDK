#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_SETCLIENTGROUPPROPERTY_METHOD_3_23929BE0BB4AB4FD_OFFSET UNITYSDK_OFFSET(0x1E814950)
#define RPG_GAMECORE_SETCLIENTGROUPPROPERTY_METHOD_3_8C16F94ED19BC1E4_OFFSET UNITYSDK_OFFSET(0x1E814910)
#define RPG_GAMECORE_SETCLIENTGROUPPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E814940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetClientGroupProperty_TypeDefinitionIndex = 20491;

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

		static ::System::Void Method_3_8C16F94ED19BC1E4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetClientGroupProperty*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetClientGroupProperty*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCLIENTGROUPPROPERTY_METHOD_3_8C16F94ED19BC1E4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_23929BE0BB4AB4FD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetClientGroupProperty* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetClientGroupProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCLIENTGROUPPROPERTY_METHOD_3_23929BE0BB4AB4FD_OFFSET))(a1, a2);
		}
	};
}
