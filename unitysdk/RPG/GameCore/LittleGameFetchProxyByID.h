#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LITTLEGAMEFETCHPROXYBYID_METHOD_4_468F6C384AB4FD9D_OFFSET UNITYSDK_OFFSET(0x1735D820)
#define RPG_GAMECORE_LITTLEGAMEFETCHPROXYBYID_METHOD_4_BB0577FF57290970_OFFSET UNITYSDK_OFFSET(0x1735D900)
#define RPG_GAMECORE_LITTLEGAMEFETCHPROXYBYID__CTOR_OFFSET UNITYSDK_OFFSET(0x1735D8B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameFetchProxyByID_TypeDefinitionIndex = 19634;

	class LittleGameFetchProxyByID : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::Il2CppArray<::System::UInt32>* Targets; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEFETCHPROXYBYID__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_468F6C384AB4FD9D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameFetchProxyByID*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameFetchProxyByID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEFETCHPROXYBYID_METHOD_4_468F6C384AB4FD9D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BB0577FF57290970(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameFetchProxyByID* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameFetchProxyByID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEFETCHPROXYBYID_METHOD_4_BB0577FF57290970_OFFSET))(a1, a2);
		}
	};
}
