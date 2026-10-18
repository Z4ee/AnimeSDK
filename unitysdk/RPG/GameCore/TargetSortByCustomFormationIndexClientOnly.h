#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_TARGETSORTBYCUSTOMFORMATIONINDEXCLIENTONLY_METHOD_3_2EEF1B09F6F137DE_OFFSET UNITYSDK_OFFSET(0x1DB41CE0)
#define RPG_GAMECORE_TARGETSORTBYCUSTOMFORMATIONINDEXCLIENTONLY_METHOD_3_6C34AD116F4AD972_OFFSET UNITYSDK_OFFSET(0x1DB41C90)
#define RPG_GAMECORE_TARGETSORTBYCUSTOMFORMATIONINDEXCLIENTONLY_METHOD_3_8077F2E8A761C5A5_OFFSET UNITYSDK_OFFSET(0x1DB41B30)
#define RPG_GAMECORE_TARGETSORTBYCUSTOMFORMATIONINDEXCLIENTONLY_METHOD_3_951E33194107454D_OFFSET UNITYSDK_OFFSET(0x1DB41B90)
#define RPG_GAMECORE_TARGETSORTBYCUSTOMFORMATIONINDEXCLIENTONLY__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB41B80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetSortByCustomFormationIndexClientOnly_TypeDefinitionIndex = 23982;

	class TargetSortByCustomFormationIndexClientOnly : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::String* CustomFormationName; // 0x10
		::Il2CppArray<::System::UInt32>* SortIndexList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYCUSTOMFORMATIONINDEXCLIENTONLY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8077F2E8A761C5A5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortByCustomFormationIndexClientOnly*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortByCustomFormationIndexClientOnly*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYCUSTOMFORMATIONINDEXCLIENTONLY_METHOD_3_8077F2E8A761C5A5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_951E33194107454D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortByCustomFormationIndexClientOnly* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortByCustomFormationIndexClientOnly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYCUSTOMFORMATIONINDEXCLIENTONLY_METHOD_3_951E33194107454D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6C34AD116F4AD972(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByCustomFormationIndexClientOnly*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByCustomFormationIndexClientOnly*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYCUSTOMFORMATIONINDEXCLIENTONLY_METHOD_3_6C34AD116F4AD972_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2EEF1B09F6F137DE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByCustomFormationIndexClientOnly* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByCustomFormationIndexClientOnly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYCUSTOMFORMATIONINDEXCLIENTONLY_METHOD_3_2EEF1B09F6F137DE_OFFSET))(a1, a2);
		}
	};
}
