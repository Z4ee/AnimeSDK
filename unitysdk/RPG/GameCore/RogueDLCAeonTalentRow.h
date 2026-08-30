#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUEDLCAEONTALENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3D2220)
#define RPG_GAMECORE_ROGUEDLCAEONTALENTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3D2A50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCAeonTalentRow_TypeDefinitionIndex = 14584;

	class RogueDLCAeonTalentRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* GamePlayEffectList; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* EffectDescParamList; // 0x18
		::System::String* TalentIcon; // 0x20
		::System::UInt32 UnlockAeonDimensionPoint; // 0x28
		::System::UInt32 AeonDimensionID; // 0x2C
		::System::Boolean IsImportant; // 0x30
		::System::UInt32 AeonTalentID; // 0x34
		::RPG::Client::TextID EffectDesc; // 0x38
		::RPG::Client::TextID EffectTitle; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONTALENTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueDLCAeonTalentRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDLCAeonTalentRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONTALENTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
