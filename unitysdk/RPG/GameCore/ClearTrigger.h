#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CLEARTRIGGER_METHOD_3_12C05A93804B67A9_OFFSET UNITYSDK_OFFSET(0x18812F40)
#define RPG_GAMECORE_CLEARTRIGGER_METHOD_3_973D118C31940970_OFFSET UNITYSDK_OFFSET(0x18812EC0)
#define RPG_GAMECORE_CLEARTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x18812F10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClearTrigger_TypeDefinitionIndex = 18945;

	class ClearTrigger : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::String*>* TriggerList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARTRIGGER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_973D118C31940970(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClearTrigger*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClearTrigger*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARTRIGGER_METHOD_3_973D118C31940970_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_12C05A93804B67A9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClearTrigger* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClearTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARTRIGGER_METHOD_3_12C05A93804B67A9_OFFSET))(a1, a2);
		}
	};
}
