#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RANDOMTASK_METHOD_3_DC0D7926B87552C9_OFFSET UNITYSDK_OFFSET(0x19AB00E0)
#define RPG_GAMECORE_RANDOMTASK_METHOD_3_F5C4800831608FD9_OFFSET UNITYSDK_OFFSET(0x19AB0170)
#define RPG_GAMECORE_RANDOMTASK__CTOR_OFFSET UNITYSDK_OFFSET(0x19AB0140)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RandomTask_TypeDefinitionIndex = 20109;

	class RandomTask : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANDOMTASK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DC0D7926B87552C9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RandomTask*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RandomTask*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANDOMTASK_METHOD_3_DC0D7926B87552C9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F5C4800831608FD9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RandomTask* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RandomTask*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANDOMTASK_METHOD_3_F5C4800831608FD9_OFFSET))(a1, a2);
		}
	};
}
