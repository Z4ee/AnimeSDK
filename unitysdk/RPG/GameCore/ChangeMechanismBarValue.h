#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHANGEMECHANISMBARVALUE_METHOD_3_8A3FB8E3153A894F_OFFSET UNITYSDK_OFFSET(0x17063750)
#define RPG_GAMECORE_CHANGEMECHANISMBARVALUE_METHOD_3_FC5651F2DCFA31B8_OFFSET UNITYSDK_OFFSET(0x170636D0)
#define RPG_GAMECORE_CHANGEMECHANISMBARVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x17063720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChangeMechanismBarValue_TypeDefinitionIndex = 18824;

	class ChangeMechanismBarValue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 ID; // 0x18
		::System::Int32 DeltaValue; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEMECHANISMBARVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FC5651F2DCFA31B8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChangeMechanismBarValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChangeMechanismBarValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEMECHANISMBARVALUE_METHOD_3_FC5651F2DCFA31B8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8A3FB8E3153A894F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChangeMechanismBarValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChangeMechanismBarValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEMECHANISMBARVALUE_METHOD_3_8A3FB8E3153A894F_OFFSET))(a1, a2);
		}
	};
}
