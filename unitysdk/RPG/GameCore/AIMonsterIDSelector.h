#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AISelector.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_AIMONSTERIDSELECTOR_METHOD_3_9A2921A8FEE9CC7F_OFFSET UNITYSDK_OFFSET(0x1D323CB0)
#define RPG_GAMECORE_AIMONSTERIDSELECTOR_METHOD_3_D8F18BACA0E8F988_OFFSET UNITYSDK_OFFSET(0x1D323C70)
#define RPG_GAMECORE_AIMONSTERIDSELECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D323CA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AIMonsterIDSelector_TypeDefinitionIndex = 15430;

	class AIMonsterIDSelector : public ::RPG::GameCore::AISelector
	{
	public:
		::Il2CppArray<::System::UInt32>* MonsterIDList; // 0x10
		::System::Boolean InverseResultFlag; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIMONSTERIDSELECTOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D8F18BACA0E8F988(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AIMonsterIDSelector*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AIMonsterIDSelector*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIMONSTERIDSELECTOR_METHOD_3_D8F18BACA0E8F988_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9A2921A8FEE9CC7F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AIMonsterIDSelector* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AIMonsterIDSelector*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIMONSTERIDSELECTOR_METHOD_3_9A2921A8FEE9CC7F_OFFSET))(a1, a2);
		}
	};
}
