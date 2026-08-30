#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MaterialSubmissionType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATERIALSUBMITTERGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D2537F0)
#define RPG_GAMECORE_MATERIALSUBMITTERGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D253960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MaterialSubmitterGroupRow_TypeDefinitionIndex = 11938;

	class MaterialSubmitterGroupRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* SubmitterIDList; // 0x10
		::RPG::GameCore::MaterialSubmissionType Type; // 0x18
		::System::UInt32 ActivityID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATERIALSUBMITTERGROUPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MaterialSubmitterGroupRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MaterialSubmitterGroupRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATERIALSUBMITTERGROUPROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
