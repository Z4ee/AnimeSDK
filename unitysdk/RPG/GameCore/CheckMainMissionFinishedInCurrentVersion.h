#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHECKMAINMISSIONFINISHEDINCURRENTVERSION_METHOD_3_E5CBB24922133035_OFFSET UNITYSDK_OFFSET(0x187DAC10)
#define RPG_GAMECORE_CHECKMAINMISSIONFINISHEDINCURRENTVERSION_METHOD_3_F567AF6FDE3FFE04_OFFSET UNITYSDK_OFFSET(0x187DAC90)
#define RPG_GAMECORE_CHECKMAINMISSIONFINISHEDINCURRENTVERSION__CTOR_OFFSET UNITYSDK_OFFSET(0x187DAC60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CheckMainMissionFinishedInCurrentVersion_TypeDefinitionIndex = 19744;

	class CheckMainMissionFinishedInCurrentVersion : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 MainMissionID; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnCurrentVersionFinishedTask; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnNotCurrentVersionFinishedTask; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKMAINMISSIONFINISHEDINCURRENTVERSION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E5CBB24922133035(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CheckMainMissionFinishedInCurrentVersion*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CheckMainMissionFinishedInCurrentVersion*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKMAINMISSIONFINISHEDINCURRENTVERSION_METHOD_3_E5CBB24922133035_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F567AF6FDE3FFE04(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CheckMainMissionFinishedInCurrentVersion* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CheckMainMissionFinishedInCurrentVersion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKMAINMISSIONFINISHEDINCURRENTVERSION_METHOD_3_F567AF6FDE3FFE04_OFFSET))(a1, a2);
		}
	};
}
