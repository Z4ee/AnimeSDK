#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTPORTALBUFFCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x189CEF60)
#define RPG_GAMECORE_GRIDFIGHTPORTALBUFFCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x189CF500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightPortalBuffConfigRow_TypeDefinitionIndex = 12904;

	class GridFightPortalBuffConfigRow : public ::System::Object
	{
	public:
		::System::String* JsonPath; // 0x10
		::Il2CppArray<::System::UInt32>* PortalGameRefTrait; // 0x18
		::Il2CppArray<::RPG::GameCore::FixPoint>* EffectParamList; // 0x20
		::Il2CppArray<::System::UInt32>* PortalGameRefScore; // 0x28
		::System::String* IconPath; // 0x30
		::Il2CppArray<::System::UInt32>* ShowNpcIDList; // 0x38
		::Il2CppArray<::System::UInt32>* DelayedShowBonus; // 0x40
		::Il2CppArray<::System::UInt32>* ShowBonusIDList; // 0x48
		::System::UInt32 ShowBonusID; // 0x50
		::System::UInt32 IsOCEffective; // 0x54
		::System::UInt32 ID; // 0x58
		::System::Boolean IfInBook; // 0x5C
		::RPG::Client::TextID PortalBuffDesc; // 0x60
		::RPG::Client::TextID PortalBuffTitle; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPORTALBUFFCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GridFightPortalBuffConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightPortalBuffConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPORTALBUFFCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
