#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/HexDirection.h"
#include "unitysdk/RPG/Client/Prop/HexPuzzleBoardBase.h"
#include "unitysdk/Struct_2_32361ACFB28DADC0.h"

namespace RPG::Client::Prop { class PushHexPuzzleArrow; }
namespace RPG::Client::Prop { class PushHexPuzzleFrame; }
namespace RPG::Client::Prop { class PushHexPuzzleItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_INITITEMSPOSITION_OFFSET UNITYSDK_OFFSET(0xDCFCC40)
#define RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_INITITEMS_OFFSET UNITYSDK_OFFSET(0xDCFC5A0)
#define RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_METHOD_8_265045B8E51327D0_OFFSET UNITYSDK_OFFSET(0xDCFDF40)
#define RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_METHOD_8_2C0AE2B203ECAB6A_OFFSET UNITYSDK_OFFSET(0xDCFD910)
#define RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_METHOD_8_5605FB9C073CE2FB_OFFSET UNITYSDK_OFFSET(0xDCFDC70)
#define RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_METHOD_8_5E0B2F98EE594DCF_OFFSET UNITYSDK_OFFSET(0xDCFD840)
#define RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_METHOD_8_6803718BFB5F9D29_OFFSET UNITYSDK_OFFSET(0xDCFD9D0)
#define RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_METHOD_8_703AF19EA2713271_OFFSET UNITYSDK_OFFSET(0xDCFDBE0)
#define RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_METHOD_8_72279D6ACE251992_OFFSET UNITYSDK_OFFSET(0xDCFDAC0)
#define RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_METHOD_8_9B1F2653496E5C47_OFFSET UNITYSDK_OFFSET(0xDCFDD60)
#define RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_MOVEITEM_OFFSET UNITYSDK_OFFSET(0xDCFDE50)
#define RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_RECOVERORIGIN_OFFSET UNITYSDK_OFFSET(0xDCFE120)
#define RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_REFRESHITEMDIRECTION_OFFSET UNITYSDK_OFFSET(0xDCFD210)
#define RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_REFRESHITEMSPOSITION_OFFSET UNITYSDK_OFFSET(0xDCFD590)
#define RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_START_OFFSET UNITYSDK_OFFSET(0xDCFDEE0)
#define RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0xDCFE360)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int PushHexPuzzleBoard_TypeDefinitionIndex = 78147;

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

		::Struct_2_32361ACFB28DADC0 Method_8_5E0B2F98EE594DCF(::RPG::Client::Prop::PushHexPuzzleItem* a1, ::RPG::Client::Prop::HexDirection a2)
		{
			return ((::Struct_2_32361ACFB28DADC0(*)(::PVOID, ::RPG::Client::Prop::PushHexPuzzleItem*, ::RPG::Client::Prop::HexDirection))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_METHOD_8_5E0B2F98EE594DCF_OFFSET))(this, a1, a2);
		}

		::System::Void Method_8_6803718BFB5F9D29(::RPG::Client::Prop::PushHexPuzzleItem* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::PushHexPuzzleItem*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_METHOD_8_6803718BFB5F9D29_OFFSET))(this, a1, a2);
		}

		::System::Int32 Method_8_72279D6ACE251992(::RPG::Client::Prop::PushHexPuzzleItem* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::Prop::PushHexPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_METHOD_8_72279D6ACE251992_OFFSET))(this, a1);
		}

		::System::Boolean Method_8_5605FB9C073CE2FB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_METHOD_8_5605FB9C073CE2FB_OFFSET))(this);
		}

		::System::Void Method_8_9B1F2653496E5C47()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_METHOD_8_9B1F2653496E5C47_OFFSET))(this);
		}

		::System::Boolean Method_8_703AF19EA2713271(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_METHOD_8_703AF19EA2713271_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Prop::PushHexPuzzleItem* Method_8_2C0AE2B203ECAB6A(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::Prop::PushHexPuzzleItem*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_METHOD_8_2C0AE2B203ECAB6A_OFFSET))(this, a1, a2);
		}

		::System::Void MoveItem(::RPG::Client::Prop::PushHexPuzzleItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::PushHexPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_MOVEITEM_OFFSET))(this, a1);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_START_OFFSET))(this);
		}

		::System::Void Method_8_265045B8E51327D0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_METHOD_8_265045B8E51327D0_OFFSET))(this);
		}

		::System::Void RecoverOrigin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUSHHEXPUZZLEBOARD_RECOVERORIGIN_OFFSET))(this);
		}
	};
}
