#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHECKMONSTERSTANCE_METHOD_3_1DE3C1202F104BD4_OFFSET UNITYSDK_OFFSET(0x1E0038A0)
#define RPG_GAMECORE_CHECKMONSTERSTANCE_METHOD_3_5FC358F117DF09D3_OFFSET UNITYSDK_OFFSET(0x1E003850)
#define RPG_GAMECORE_CHECKMONSTERSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E003890)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CheckMonsterStance_TypeDefinitionIndex = 22712;

	class CheckMonsterStance : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* MonsterTag; // 0x18
		::System::Boolean IsEmpty; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKMONSTERSTANCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5FC358F117DF09D3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CheckMonsterStance*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CheckMonsterStance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKMONSTERSTANCE_METHOD_3_5FC358F117DF09D3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1DE3C1202F104BD4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CheckMonsterStance* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CheckMonsterStance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKMONSTERSTANCE_METHOD_3_1DE3C1202F104BD4_OFFSET))(a1, a2);
		}
	};
}
