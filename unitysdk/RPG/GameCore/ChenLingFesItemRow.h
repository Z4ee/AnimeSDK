#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChenLingFesItemRare.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHENLINGFESITEMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C384900)
#define RPG_GAMECORE_CHENLINGFESITEMROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C384E80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingFesItemRow_TypeDefinitionIndex = 10709;

	class ChenLingFesItemRow : public ::System::Object
	{
	public:
		::System::String* ViewJsonPath; // 0x10
		::System::String* LogicJsonPath; // 0x18
		::Il2CppArray<::System::Int32>* ParamList; // 0x20
		::Il2CppArray<::System::UInt32>* EffectItemTypeList; // 0x28
		::System::String* BaseLoopInterval; // 0x30
		::System::String* BaseProbability; // 0x38
		::System::String* IconPath; // 0x40
		::System::String* BaseMaxEffectTriggerNum; // 0x48
		::Il2CppArray<::System::UInt32>* TagList; // 0x50
		::System::String* BaseCoinNum; // 0x58
		::RPG::GameCore::ChenLingFesItemRare Rare; // 0x60
		::System::UInt32 ID; // 0x64
		::System::UInt32 MaxPutDownNum; // 0x68
		::RPG::Client::TextID ItemDesc; // 0x70
		::RPG::Client::TextID ItemName; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESITEMROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingFesItemRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingFesItemRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESITEMROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
