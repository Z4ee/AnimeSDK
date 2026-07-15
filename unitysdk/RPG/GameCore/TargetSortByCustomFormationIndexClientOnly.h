#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_TARGETSORTBYCUSTOMFORMATIONINDEXCLIENTONLY_METHOD_3_20C31E427EEAB18A_OFFSET UNITYSDK_OFFSET(0x1D0C66F0)
#define RPG_GAMECORE_TARGETSORTBYCUSTOMFORMATIONINDEXCLIENTONLY_METHOD_3_2EEF1B09F6F137DE_OFFSET UNITYSDK_OFFSET(0x1D0C6860)
#define RPG_GAMECORE_TARGETSORTBYCUSTOMFORMATIONINDEXCLIENTONLY_METHOD_3_951E33194107454D_OFFSET UNITYSDK_OFFSET(0x1D0C6730)
#define RPG_GAMECORE_TARGETSORTBYCUSTOMFORMATIONINDEXCLIENTONLY_METHOD_3_FEBC7A05FE2D8230_OFFSET UNITYSDK_OFFSET(0x1D0C6830)
#define RPG_GAMECORE_TARGETSORTBYCUSTOMFORMATIONINDEXCLIENTONLY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0C6720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetSortByCustomFormationIndexClientOnly_TypeDefinitionIndex = 23128;

	class TargetSortByCustomFormationIndexClientOnly : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::String* CustomFormationName; // 0x10
		::Il2CppArray<::System::UInt32>* SortIndexList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYCUSTOMFORMATIONINDEXCLIENTONLY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_20C31E427EEAB18A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortByCustomFormationIndexClientOnly*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortByCustomFormationIndexClientOnly*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYCUSTOMFORMATIONINDEXCLIENTONLY_METHOD_3_20C31E427EEAB18A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_951E33194107454D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortByCustomFormationIndexClientOnly* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortByCustomFormationIndexClientOnly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYCUSTOMFORMATIONINDEXCLIENTONLY_METHOD_3_951E33194107454D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FEBC7A05FE2D8230(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByCustomFormationIndexClientOnly*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByCustomFormationIndexClientOnly*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYCUSTOMFORMATIONINDEXCLIENTONLY_METHOD_3_FEBC7A05FE2D8230_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2EEF1B09F6F137DE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByCustomFormationIndexClientOnly* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByCustomFormationIndexClientOnly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYCUSTOMFORMATIONINDEXCLIENTONLY_METHOD_3_2EEF1B09F6F137DE_OFFSET))(a1, a2);
		}
	};
}
