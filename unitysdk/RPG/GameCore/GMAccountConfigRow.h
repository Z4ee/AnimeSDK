#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3745C69C00F04B7D_6;
class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GMACCOUNTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x197ABF60)
#define RPG_GAMECORE_GMACCOUNTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x197AC320)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GMAccountConfigRow_TypeDefinitionIndex = 12704;

	class GMAccountConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::Class_1_3745C69C00F04B7D_6*>* AvatarList; // 0x10
		::System::String* Name; // 0x18
		::Il2CppArray<::System::UInt32>* ItemGroupIDList; // 0x20
		::Il2CppArray<::System::UInt32>* RelicGroupIDList; // 0x28
		::Il2CppArray<::System::UInt32>* EquipmentGroupIDList; // 0x30
		::Il2CppArray<::System::UInt32>* FinishMainMissionList; // 0x38
		::System::UInt32 PlayerLevel; // 0x40
		::System::Boolean IsFinishTutorial; // 0x44
		::System::UInt32 FinishMainMissionUntil; // 0x48
		::System::UInt32 ID; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GMACCOUNTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GMAccountConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GMAccountConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GMACCOUNTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
