#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_REGISTERLITTLEGAMESEQUENCES_METHOD_3_45A0595DB0B2A9B4_OFFSET UNITYSDK_OFFSET(0x18C96080)
#define RPG_GAMECORE_REGISTERLITTLEGAMESEQUENCES_METHOD_3_D110A9F652F005E5_OFFSET UNITYSDK_OFFSET(0x18C96000)
#define RPG_GAMECORE_REGISTERLITTLEGAMESEQUENCES__CTOR_OFFSET UNITYSDK_OFFSET(0x18C96050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RegisterLittleGameSequences_TypeDefinitionIndex = 20313;

	class RegisterLittleGameSequences : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* Init; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* Start; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* Stop; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REGISTERLITTLEGAMESEQUENCES__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D110A9F652F005E5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RegisterLittleGameSequences*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RegisterLittleGameSequences*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REGISTERLITTLEGAMESEQUENCES_METHOD_3_D110A9F652F005E5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_45A0595DB0B2A9B4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RegisterLittleGameSequences* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RegisterLittleGameSequences*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REGISTERLITTLEGAMESEQUENCES_METHOD_3_45A0595DB0B2A9B4_OFFSET))(a1, a2);
		}
	};
}
