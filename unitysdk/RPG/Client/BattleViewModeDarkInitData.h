#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BattleViewModeDarkInitData_TabType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_BATTLEVIEWMODEDARKINITDATA_CREATEDEFAULT_OFFSET UNITYSDK_OFFSET(0x1BD78D20)
#define RPG_CLIENT_BATTLEVIEWMODEDARKINITDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1BD78C90)
#define RPG_CLIENT_BATTLEVIEWMODEDARKINITDATA_GET_INITTABTYPE_OFFSET UNITYSDK_OFFSET(0x1BD78E20)
#define RPG_CLIENT_BATTLEVIEWMODEDARKINITDATA_SET_INITTABTYPE_OFFSET UNITYSDK_OFFSET(0x1BD78E30)
#define RPG_CLIENT_BATTLEVIEWMODEDARKINITDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BD78E40)
#define RPG_CLIENT_BATTLEVIEWMODEDARKINITDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD78D10)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleViewModeDarkInitData_TypeDefinitionIndex = 72018;

	class BattleViewModeDarkInitData : public ::System::Object
	{
	public:
		static ::RPG::Client::BattleViewModeDarkInitData_TabType* StaticGet_DefaultTabType()
		{
			return (::RPG::Client::BattleViewModeDarkInitData_TabType*)Il2CppClass::FromTypeDefinitionIndex(BattleViewModeDarkInitData_TypeDefinitionIndex)->GetStaticField(0x4850);
		}
		::RPG::Client::BattleViewModeDarkInitData_TabType _InitTabType_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEVIEWMODEDARKINITDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEVIEWMODEDARKINITDATA__CCTOR_OFFSET))();
		}

		static ::RPG::Client::BattleViewModeDarkInitData* Create(::RPG::Client::BattleViewModeDarkInitData_TabType a1)
		{
			return ((::RPG::Client::BattleViewModeDarkInitData*(*)(::RPG::Client::BattleViewModeDarkInitData_TabType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEVIEWMODEDARKINITDATA_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::BattleViewModeDarkInitData* CreateDefault()
		{
			return ((::RPG::Client::BattleViewModeDarkInitData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEVIEWMODEDARKINITDATA_CREATEDEFAULT_OFFSET))();
		}

		::RPG::Client::BattleViewModeDarkInitData_TabType get_InitTabType()
		{
			return ((::RPG::Client::BattleViewModeDarkInitData_TabType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEVIEWMODEDARKINITDATA_GET_INITTABTYPE_OFFSET))(this);
		}

		::System::Void set_InitTabType(::RPG::Client::BattleViewModeDarkInitData_TabType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleViewModeDarkInitData_TabType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEVIEWMODEDARKINITDATA_SET_INITTABTYPE_OFFSET))(this, a1);
		}
	};
}
