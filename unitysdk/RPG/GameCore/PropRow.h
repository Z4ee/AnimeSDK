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

#define RPG_GAMECORE_PROPROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x19A8DC90)
#define RPG_GAMECORE_PROPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19A8E2F0)
#define RPG_GAMECORE_PROPROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x19A96050)
#define RPG_GAMECORE_PROPROW_RESET_OFFSET UNITYSDK_OFFSET(0x19A960B0)
#define RPG_GAMECORE_PROPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19A960E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropRow_TypeDefinitionIndex = 13399;

	class PropRow : public ::System::Object
	{
	public:
		::System::String* JsonPath; // 0x10
		::Il2CppArray<::System::Int32>* BoardShowList; // 0x18
		::System::String* ConfigEntityPath; // 0x20
		::Il2CppArray<::RPG::GameCore::PropState>* PropStateList; // 0x28
		::System::String* PerformanceType; // 0x30
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* DamageTypeList; // 0x38
		::System::String* PropIconPath; // 0x40
		::Il2CppArray<::RPG::GameCore::PropStateIcon*>* MiniMapStateIcons; // 0x48
		::System::UInt32 PropParam; // 0x50
		::System::UInt32 MiniMapIconType; // 0x54
		::RPG::Client::TextID PropTitle; // 0x58
		::RPG::Client::TextID PropName; // 0x68
		::RPG::GameCore::PropType PropType; // 0x78
		::System::UInt32 ID; // 0x7C
		::System::SByte LodPriority; // 0x80
		::System::Boolean IsMapContent; // 0x81
		::System::Boolean HasRendererComponent; // 0x82

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPROW__CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPROW_FROMTABLEOFFSET_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropRow* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPROW_FROMBINARYWITHOUTNEW_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
