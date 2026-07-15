#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHANGEMECHANISMBARVALUE_METHOD_3_59F0D2C66EFE9E4E_OFFSET UNITYSDK_OFFSET(0x1B71A7D0)
#define RPG_GAMECORE_CHANGEMECHANISMBARVALUE_METHOD_3_8A3FB8E3153A894F_OFFSET UNITYSDK_OFFSET(0x1B71A810)
#define RPG_GAMECORE_CHANGEMECHANISMBARVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B71A800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChangeMechanismBarValue_TypeDefinitionIndex = 19741;

	class ChangeMechanismBarValue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 ID; // 0x18
		::System::Int32 DeltaValue; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEMECHANISMBARVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_59F0D2C66EFE9E4E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChangeMechanismBarValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChangeMechanismBarValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEMECHANISMBARVALUE_METHOD_3_59F0D2C66EFE9E4E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8A3FB8E3153A894F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChangeMechanismBarValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChangeMechanismBarValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEMECHANISMBARVALUE_METHOD_3_8A3FB8E3153A894F_OFFSET))(a1, a2);
		}
	};
}
