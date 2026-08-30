#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MenuItemExtraInfoCondition.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MENUITEMEXTRAINFOROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D285A90)
#define RPG_GAMECORE_MENUITEMEXTRAINFOROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D286130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MenuItemExtraInfoRow_TypeDefinitionIndex = 13032;

	class MenuItemExtraInfoRow : public ::System::Object
	{
	public:
		::System::String* ExtraInfoParam; // 0x10
		::Il2CppArray<::System::UInt32>* ExtraInfoType; // 0x18
		::System::UInt32 ID; // 0x20
		::RPG::GameCore::MenuItemExtraInfoCondition Condition; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MENUITEMEXTRAINFOROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MenuItemExtraInfoRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MenuItemExtraInfoRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MENUITEMEXTRAINFOROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
