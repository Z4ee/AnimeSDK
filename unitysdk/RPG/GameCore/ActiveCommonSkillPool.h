#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVECOMMONSKILLPOOL_METHOD_3_2F0F649A86112778_OFFSET UNITYSDK_OFFSET(0x1CD754F0)
#define RPG_GAMECORE_ACTIVECOMMONSKILLPOOL_METHOD_3_A76C74E0E0D2401B_OFFSET UNITYSDK_OFFSET(0x1CD754B0)
#define RPG_GAMECORE_ACTIVECOMMONSKILLPOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD754E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActiveCommonSkillPool_TypeDefinitionIndex = 23010;

	class ActiveCommonSkillPool : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::String*>* PoolNames; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVECOMMONSKILLPOOL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A76C74E0E0D2401B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActiveCommonSkillPool*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActiveCommonSkillPool*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVECOMMONSKILLPOOL_METHOD_3_A76C74E0E0D2401B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2F0F649A86112778(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActiveCommonSkillPool* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActiveCommonSkillPool*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVECOMMONSKILLPOOL_METHOD_3_2F0F649A86112778_OFFSET))(a1, a2);
		}
	};
}
