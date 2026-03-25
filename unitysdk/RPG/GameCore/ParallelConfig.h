#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompositeConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_PARALLELCONFIG_METHOD_4_66389981FB5DCE1B_OFFSET UNITYSDK_OFFSET(0x17487F10)
#define RPG_GAMECORE_PARALLELCONFIG_METHOD_4_F6859C3893A4E872_OFFSET UNITYSDK_OFFSET(0x17487F90)
#define RPG_GAMECORE_PARALLELCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17487F60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ParallelConfig_TypeDefinitionIndex = 22054;

	class ParallelConfig : public ::RPG::GameCore::CompositeConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TaskList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARALLELCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_66389981FB5DCE1B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ParallelConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ParallelConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARALLELCONFIG_METHOD_4_66389981FB5DCE1B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F6859C3893A4E872(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ParallelConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ParallelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARALLELCONFIG_METHOD_4_F6859C3893A4E872_OFFSET))(a1, a2);
		}
	};
}
