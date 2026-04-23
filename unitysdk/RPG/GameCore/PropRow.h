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

#define RPG_GAMECORE_PROPROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x18C6BE90)
#define RPG_GAMECORE_PROPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18C6C580)
#define RPG_GAMECORE_PROPROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x18C73CE0)
#define RPG_GAMECORE_PROPROW_RESET_OFFSET UNITYSDK_OFFSET(0x18C73D40)
#define RPG_GAMECORE_PROPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18C73D70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropRow_TypeDefinitionIndex = 13324;

	class PropRow : public ::System::Object
	{
	public:
		::System::String* PropIconPath; // 0x10
		::System::String* JsonPath; // 0x18
		::Il2CppArray<::RPG::GameCore::PropStateIcon*>* MiniMapStateIcons; // 0x20
		::System::String* ConfigEntityPath; // 0x28
		::Il2CppArray<::RPG::GameCore::PropState>* PropStateList; // 0x30
		::System::String* PerformanceType; // 0x38
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* DamageTypeList; // 0x40
		::Il2CppArray<::System::Int32>* BoardShowList; // 0x48
		::System::Boolean IsMapContent; // 0x50
		::System::Boolean HasRendererComponent; // 0x51
		::System::SByte LodPriority; // 0x52
		::RPG::Client::TextID PropTitle; // 0x58
		::RPG::Client::TextID PropName; // 0x68
		::System::UInt32 MiniMapIconType; // 0x78
		::System::UInt32 PropParam; // 0x7C
		::RPG::GameCore::PropType PropType; // 0x80
		::System::UInt32 ID; // 0x84

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
