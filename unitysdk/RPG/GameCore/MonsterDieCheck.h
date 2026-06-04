#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MONSTERDIECHECK_METHOD_3_7AA854EE7192CB63_OFFSET UNITYSDK_OFFSET(0x199A62B0)
#define RPG_GAMECORE_MONSTERDIECHECK_METHOD_3_7AD2962B2A4B3A5A_OFFSET UNITYSDK_OFFSET(0x199A6330)
#define RPG_GAMECORE_MONSTERDIECHECK__CTOR_OFFSET UNITYSDK_OFFSET(0x199A6300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterDieCheck_TypeDefinitionIndex = 21708;

	class MonsterDieCheck : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::String*>* MonsterTagList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDIECHECK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7AA854EE7192CB63(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonsterDieCheck*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonsterDieCheck*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDIECHECK_METHOD_3_7AA854EE7192CB63_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7AD2962B2A4B3A5A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonsterDieCheck* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonsterDieCheck*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDIECHECK_METHOD_3_7AD2962B2A4B3A5A_OFFSET))(a1, a2);
		}
	};
}
