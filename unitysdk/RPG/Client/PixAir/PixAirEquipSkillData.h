#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_8EA080ED22DB7857;
namespace RPG::GameCore { class PixAirSkillRow; }
namespace System { class String; }

#define RPG_CLIENT_PIXAIR_PIXAIREQUIPSKILLDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xDAF9030)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPSKILLDATA_GETDESC_OFFSET UNITYSDK_OFFSET(0xDAF8EE0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPSKILLDATA_GET_SKILLDESCTEXTID_OFFSET UNITYSDK_OFFSET(0xDAF8E70)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPSKILLDATA_GET_SKILLID_OFFSET UNITYSDK_OFFSET(0xDAFDD90)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPSKILLDATA_SET_SKILLID_OFFSET UNITYSDK_OFFSET(0xDAFDDA0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPSKILLDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xDAFDD10)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPSKILLDATA__INIT_OFFSET UNITYSDK_OFFSET(0xDAFDD20)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirEquipSkillData_TypeDefinitionIndex = 78824;

	class PixAirEquipSkillData : public ::System::Object
	{
	public:
		::RPG::GameCore::PixAirSkillRow* _Row; // 0x10
		::System::UInt32 _SkillID_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPSKILLDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PixAir::PixAirEquipSkillData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::PixAir::PixAirEquipSkillData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPSKILLDATA_CREATE_OFFSET))(a1);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPSKILLDATA__INIT_OFFSET))(this);
		}

		::System::String* GetDesc(::Class_1_8EA080ED22DB7857* a1)
		{
			return ((::System::String*(*)(::PVOID, ::Class_1_8EA080ED22DB7857*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPSKILLDATA_GETDESC_OFFSET))(this, a1);
		}

		::System::UInt32 get_SkillID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPSKILLDATA_GET_SKILLID_OFFSET))(this);
		}

		::System::Void set_SkillID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPSKILLDATA_SET_SKILLID_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_SkillDescTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPSKILLDATA_GET_SKILLDESCTEXTID_OFFSET))(this);
		}
	};
}
