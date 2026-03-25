#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/PropState.h"
#include "unitysdk/RPG/GameCore/PropType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PropStateIcon; }
namespace System { class String; }

#define RPG_GAMECORE_PROPROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1751C450)
#define RPG_GAMECORE_PROPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1751CB40)
#define RPG_GAMECORE_PROPROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x175242A0)
#define RPG_GAMECORE_PROPROW_RESET_OFFSET UNITYSDK_OFFSET(0x17524300)
#define RPG_GAMECORE_PROPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17524330)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropRow_TypeDefinitionIndex = 12862;

	class PropRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* BoardShowList; // 0x10
		::System::String* JsonPath; // 0x18
		::Il2CppArray<::RPG::GameCore::PropStateIcon*>* MiniMapStateIcons; // 0x20
		::System::String* ConfigEntityPath; // 0x28
		::Il2CppArray<::RPG::GameCore::PropState>* PropStateList; // 0x30
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* DamageTypeList; // 0x38
		::System::String* PerformanceType; // 0x40
		::System::String* PropIconPath; // 0x48
		::System::UInt32 MiniMapIconType; // 0x50
		::RPG::GameCore::PropType PropType; // 0x54
		::RPG::Client::TextID PropTitle; // 0x58
		::System::UInt32 ID; // 0x68
		::System::Boolean HasRendererComponent; // 0x6C
		::System::Boolean IsMapContent; // 0x6D
		::System::SByte LodPriority; // 0x6E
		::RPG::Client::TextID PropName; // 0x70
		::System::UInt32 PropParam; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPROW__CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> offsetData)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPROW_FROMTABLEOFFSET_OFFSET))(this, offsetData);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PropRow* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPROW_FROMBINARYWITHOUTNEW_OFFSET))(array, val);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PropRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
