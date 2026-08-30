#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SETUPPROPANCHORINRADIUS_METHOD_3_0BCB85C8E4E12D5E_OFFSET UNITYSDK_OFFSET(0x1E099640)
#define RPG_GAMECORE_SETUPPROPANCHORINRADIUS_METHOD_3_F48EC860D7F7258E_OFFSET UNITYSDK_OFFSET(0x1E0996A0)
#define RPG_GAMECORE_SETUPPROPANCHORINRADIUS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E099680)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetupPropAnchorInRadius_TypeDefinitionIndex = 20110;

	class SetupPropAnchorInRadius : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* AnchorName; // 0x18
		::System::UInt32 ID; // 0x20
		::System::UInt32 GroupID; // 0x24
		::System::Single AnchorRotOffset; // 0x28
		::System::String* CentreAnchorArea; // 0x30
		::System::String* CentreAnchorName; // 0x38
		::System::Single RadiusMin; // 0x40
		::System::Single RadiusMax; // 0x44
		::System::Single AngleMin; // 0x48
		::System::Single AngleMax; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPPROPANCHORINRADIUS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0BCB85C8E4E12D5E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetupPropAnchorInRadius*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetupPropAnchorInRadius*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPPROPANCHORINRADIUS_METHOD_3_0BCB85C8E4E12D5E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F48EC860D7F7258E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetupPropAnchorInRadius* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetupPropAnchorInRadius*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPPROPANCHORINRADIUS_METHOD_3_F48EC860D7F7258E_OFFSET))(a1, a2);
		}
	};
}
