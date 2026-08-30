#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MONSTERBEHAVIOUR_METHOD_3_0739ADF5CE49F1F4_OFFSET UNITYSDK_OFFSET(0x1D1D2B10)
#define RPG_GAMECORE_MONSTERBEHAVIOUR_METHOD_3_5B2A2A25EFBE868F_OFFSET UNITYSDK_OFFSET(0x1D1D2AD0)
#define RPG_GAMECORE_MONSTERBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1D2B00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterBehaviour_TypeDefinitionIndex = 23791;

	class MonsterBehaviour : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 InvokeRate; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TaskList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERBEHAVIOUR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5B2A2A25EFBE868F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonsterBehaviour*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonsterBehaviour*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERBEHAVIOUR_METHOD_3_5B2A2A25EFBE868F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0739ADF5CE49F1F4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonsterBehaviour* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonsterBehaviour*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERBEHAVIOUR_METHOD_3_0739ADF5CE49F1F4_OFFSET))(a1, a2);
		}
	};
}
