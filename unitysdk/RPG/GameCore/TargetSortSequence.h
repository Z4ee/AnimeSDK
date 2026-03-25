#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETSORTSEQUENCE_METHOD_3_D04F6136AE7A02F3_OFFSET UNITYSDK_OFFSET(0x177D2D00)
#define RPG_GAMECORE_TARGETSORTSEQUENCE_METHOD_3_E8B3164CF7C064BF_OFFSET UNITYSDK_OFFSET(0x177D3A00)
#define RPG_GAMECORE_TARGETSORTSEQUENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x177D2CE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetSortSequence_TypeDefinitionIndex = 22256;

	class TargetSortSequence : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::Il2CppArray<::RPG::GameCore::TargetSeqOperation*>* SortSequence; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTSEQUENCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E8B3164CF7C064BF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortSequence*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortSequence*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTSEQUENCE_METHOD_3_E8B3164CF7C064BF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D04F6136AE7A02F3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortSequence* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortSequence*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTSEQUENCE_METHOD_3_D04F6136AE7A02F3_OFFSET))(a1, a2);
		}
	};
}
