#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_OPENRAID_METHOD_3_B0BBD85AC5159AD7_OFFSET UNITYSDK_OFFSET(0x199D79F0)
#define RPG_GAMECORE_OPENRAID_METHOD_3_D2E689CC00834CFE_OFFSET UNITYSDK_OFFSET(0x199D7970)
#define RPG_GAMECORE_OPENRAID__CTOR_OFFSET UNITYSDK_OFFSET(0x199D79C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OpenRaid_TypeDefinitionIndex = 20397;

	class OpenRaid : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 RaidID; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnCancel; // 0x20
		::System::Boolean IsSkipUI; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENRAID__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D2E689CC00834CFE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OpenRaid*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OpenRaid*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENRAID_METHOD_3_D2E689CC00834CFE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B0BBD85AC5159AD7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OpenRaid* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OpenRaid*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENRAID_METHOD_3_B0BBD85AC5159AD7_OFFSET))(a1, a2);
		}
	};
}
