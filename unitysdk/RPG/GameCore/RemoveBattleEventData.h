#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_REMOVEBATTLEEVENTDATA_METHOD_3_194C2DE62E201E11_OFFSET UNITYSDK_OFFSET(0x1DB8C3B0)
#define RPG_GAMECORE_REMOVEBATTLEEVENTDATA_METHOD_3_8D6EAEFCF637E8AD_OFFSET UNITYSDK_OFFSET(0x1DB8C360)
#define RPG_GAMECORE_REMOVEBATTLEEVENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB8C3A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RemoveBattleEventData_TypeDefinitionIndex = 21430;

	class RemoveBattleEventData : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEBATTLEEVENTDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8D6EAEFCF637E8AD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveBattleEventData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveBattleEventData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEBATTLEEVENTDATA_METHOD_3_8D6EAEFCF637E8AD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_194C2DE62E201E11(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveBattleEventData* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveBattleEventData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEBATTLEEVENTDATA_METHOD_3_194C2DE62E201E11_OFFSET))(a1, a2);
		}
	};
}
