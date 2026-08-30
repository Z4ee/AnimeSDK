#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_REGISTERLITTLEGAMESEQUENCES_METHOD_3_75BA56BD80EC0E32_OFFSET UNITYSDK_OFFSET(0x1D390E20)
#define RPG_GAMECORE_REGISTERLITTLEGAMESEQUENCES_METHOD_3_A6A96F3E9EFD567B_OFFSET UNITYSDK_OFFSET(0x1D390DE0)
#define RPG_GAMECORE_REGISTERLITTLEGAMESEQUENCES__CTOR_OFFSET UNITYSDK_OFFSET(0x1D390E10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RegisterLittleGameSequences_TypeDefinitionIndex = 21177;

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

		static ::System::Void Method_3_A6A96F3E9EFD567B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RegisterLittleGameSequences*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RegisterLittleGameSequences*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REGISTERLITTLEGAMESEQUENCES_METHOD_3_A6A96F3E9EFD567B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_75BA56BD80EC0E32(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RegisterLittleGameSequences* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RegisterLittleGameSequences*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REGISTERLITTLEGAMESEQUENCES_METHOD_3_75BA56BD80EC0E32_OFFSET))(a1, a2);
		}
	};
}
