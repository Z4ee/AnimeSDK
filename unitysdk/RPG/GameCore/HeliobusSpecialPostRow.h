#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_1_A88C3AAF0DD46F4C_11;

#define RPG_GAMECORE_HELIOBUSSPECIALPOSTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B680820)
#define RPG_GAMECORE_HELIOBUSSPECIALPOSTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B680A30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeliobusSpecialPostRow_TypeDefinitionIndex = 13247;

	class HeliobusSpecialPostRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* TemplateIDList; // 0x10
		::Il2CppArray<::Class_1_A88C3AAF0DD46F4C_11*>* Likes; // 0x18
		::Il2CppArray<::System::UInt32>* PostImgIDList; // 0x20
		::System::UInt32 SubMissionID; // 0x28
		::System::UInt32 HeliobusSpecialPostID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSSPECIALPOSTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HeliobusSpecialPostRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HeliobusSpecialPostRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSSPECIALPOSTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
