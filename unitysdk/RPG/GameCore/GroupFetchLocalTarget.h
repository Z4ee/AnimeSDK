#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GroupLocalTargetType.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GROUPFETCHLOCALTARGET_METHOD_4_1E2052D63AB8A012_OFFSET UNITYSDK_OFFSET(0x189E0570)
#define RPG_GAMECORE_GROUPFETCHLOCALTARGET_METHOD_4_2E55DDAD0AC699DE_OFFSET UNITYSDK_OFFSET(0x189E0630)
#define RPG_GAMECORE_GROUPFETCHLOCALTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x189E05E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GroupFetchLocalTarget_TypeDefinitionIndex = 20130;

	class GroupFetchLocalTarget : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::RPG::GameCore::GroupLocalTargetType TargetType; // 0x10
		::Il2CppArray<::System::UInt32>* Targets; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPFETCHLOCALTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1E2052D63AB8A012(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GroupFetchLocalTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GroupFetchLocalTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPFETCHLOCALTARGET_METHOD_4_1E2052D63AB8A012_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2E55DDAD0AC699DE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GroupFetchLocalTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GroupFetchLocalTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPFETCHLOCALTARGET_METHOD_4_2E55DDAD0AC699DE_OFFSET))(a1, a2);
		}
	};
}
