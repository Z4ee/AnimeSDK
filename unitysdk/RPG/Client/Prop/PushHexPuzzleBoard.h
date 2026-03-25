#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/HexDirection.h"
#include "unitysdk/RPG/Client/Prop/HexPuzzleBoardBase.h"
#include "unitysdk/Struct_2_2F8FC043285F98CD.h"

namespace RPG::Client::Prop { class PushHexPuzzleArrow; }
namespace RPG::Client::Prop { class PushHexPuzzleFrame; }
namespace RPG::Client::Prop { class PushHexPuzzleItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_INITITEMSPOSITION_OFFSET UNITYSDK_OFFSET(0xA12C7A0)
#define RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_INITITEMS_OFFSET UNITYSDK_OFFSET(0xA12C0B0)
#define RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_METHOD_8_0BE999401C7B391E_OFFSET UNITYSDK_OFFSET(0xA12D650)
#define RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_METHOD_8_290A3E8A6F71CEC9_OFFSET UNITYSDK_OFFSET(0xA12D580)
#define RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_METHOD_8_55B8349E0B606444_OFFSET UNITYSDK_OFFSET(0xA12D9F0)
#define RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_METHOD_8_56E076CBC69B0772_OFFSET UNITYSDK_OFFSET(0xA12D8F0)
#define RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_METHOD_8_5E0B2F98EE594DCF_OFFSET UNITYSDK_OFFSET(0xA12D4A0)
#define RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_METHOD_8_703AF19EA2713271_OFFSET UNITYSDK_OFFSET(0xA12D860)
#define RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_METHOD_8_72279D6ACE251992_OFFSET UNITYSDK_OFFSET(0xA12D740)
#define RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_METHOD_8_810DD818C57F797D_OFFSET UNITYSDK_OFFSET(0xA12DBE0)
#define RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_MOVEITEM_OFFSET UNITYSDK_OFFSET(0xA12DAF0)
#define RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_RECOVERORIGIN_OFFSET UNITYSDK_OFFSET(0xA12DDD0)
#define RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_REFRESHITEMDIRECTION_OFFSET UNITYSDK_OFFSET(0xA12CE40)
#define RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_REFRESHITEMSPOSITION_OFFSET UNITYSDK_OFFSET(0xA12D1F0)
#define RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_START_OFFSET UNITYSDK_OFFSET(0xA12DB80)
#define RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0xA12DFD0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int PushHexPuzzleBoard_TypeDefinitionIndex = 64067;

	class PushHexPuzzleBoard : public ::RPG::Client::Prop::HexPuzzleBoardBase
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::Prop::PushHexPuzzleItem*>* Items; // 0xE8
		::System::Collections::Generic::List_1<::RPG::Client::Prop::PushHexPuzzleArrow*>* Arrows; // 0xF0
		::System::Collections::Generic::List_1<::RPG::Client::Prop::PushHexPuzzleFrame*>* Frames; // 0xF8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD__CTOR_OFFSET))(this);
		}

		::System::Void InitItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_INITITEMS_OFFSET))(this);
		}

		::System::Void InitItemsPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_INITITEMSPOSITION_OFFSET))(this);
		}

		::System::Void RefreshItemDirection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_REFRESHITEMDIRECTION_OFFSET))(this);
		}

		::System::Void RefreshItemsPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_REFRESHITEMSPOSITION_OFFSET))(this);
		}

		::Struct_2_2F8FC043285F98CD Method_8_5E0B2F98EE594DCF(::RPG::Client::Prop::PushHexPuzzleItem* a1, ::RPG::Client::Prop::HexDirection a2)
		{
			return ((::Struct_2_2F8FC043285F98CD(*)(::PVOID, ::RPG::Client::Prop::PushHexPuzzleItem*, ::RPG::Client::Prop::HexDirection))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_METHOD_8_5E0B2F98EE594DCF_OFFSET))(this, a1, a2);
		}

		::System::Void Method_8_0BE999401C7B391E(::RPG::Client::Prop::PushHexPuzzleItem* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::PushHexPuzzleItem*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_METHOD_8_0BE999401C7B391E_OFFSET))(this, a1, a2);
		}

		::System::Int32 Method_8_72279D6ACE251992(::RPG::Client::Prop::PushHexPuzzleItem* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::Prop::PushHexPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_METHOD_8_72279D6ACE251992_OFFSET))(this, a1);
		}

		::System::Boolean Method_8_56E076CBC69B0772()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_METHOD_8_56E076CBC69B0772_OFFSET))(this);
		}

		::System::Void Method_8_55B8349E0B606444()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_METHOD_8_55B8349E0B606444_OFFSET))(this);
		}

		::System::Boolean Method_8_703AF19EA2713271(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_METHOD_8_703AF19EA2713271_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Prop::PushHexPuzzleItem* Method_8_290A3E8A6F71CEC9(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::Prop::PushHexPuzzleItem*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_METHOD_8_290A3E8A6F71CEC9_OFFSET))(this, a1, a2);
		}

		::System::Void MoveItem(::RPG::Client::Prop::PushHexPuzzleItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::PushHexPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_MOVEITEM_OFFSET))(this, a1);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_START_OFFSET))(this);
		}

		::System::Void Method_8_810DD818C57F797D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_METHOD_8_810DD818C57F797D_OFFSET))(this);
		}

		::System::Void RecoverOrigin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_RECOVERORIGIN_OFFSET))(this);
		}
	};
}
