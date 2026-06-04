#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_RECOMMENDCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19AB61A0)
#define RPG_GAMECORE_RECOMMENDCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19AB69E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RecommendConfigRow_TypeDefinitionIndex = 13883;

	class RecommendConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* GoodsID; // 0x10
		::System::String* ImagePath; // 0x18
		::System::String* NameText; // 0x20
		::System::UInt32 ShopID; // 0x28
		::System::UInt32 ActivityModuleID; // 0x2C
		::System::UInt32 Type; // 0x30
		::System::UInt32 Order; // 0x34
		::System::UInt32 Schedule; // 0x38
		::System::Boolean HideAfterSell; // 0x3C
		::System::UInt32 ItemID; // 0x40
		::System::UInt32 ID; // 0x44
		::System::UInt32 OrderAfterSell; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECOMMENDCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RecommendConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RecommendConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECOMMENDCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
