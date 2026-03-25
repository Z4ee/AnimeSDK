#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_OPENMARBLEMAINPAGE_METHOD_3_4545FD690CA16F0A_OFFSET UNITYSDK_OFFSET(0x1747C440)
#define RPG_GAMECORE_OPENMARBLEMAINPAGE_METHOD_3_58ABAFBC8D103296_OFFSET UNITYSDK_OFFSET(0x1747C4C0)
#define RPG_GAMECORE_OPENMARBLEMAINPAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1747C490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OpenMarbleMainPage_TypeDefinitionIndex = 19572;

	class OpenMarbleMainPage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnUIEnterImmediately; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnUIExitImmediately; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENMARBLEMAINPAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4545FD690CA16F0A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OpenMarbleMainPage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OpenMarbleMainPage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENMARBLEMAINPAGE_METHOD_3_4545FD690CA16F0A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_58ABAFBC8D103296(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OpenMarbleMainPage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OpenMarbleMainPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENMARBLEMAINPAGE_METHOD_3_58ABAFBC8D103296_OFFSET))(a1, a2);
		}
	};
}
