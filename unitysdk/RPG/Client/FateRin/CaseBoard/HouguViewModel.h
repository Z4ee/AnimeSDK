#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_5C8F237BF51192A7;
class Class_1_C85C4DAB350DD5FC_2;
namespace RPG::GameCore { class FateRinCaseBoardHouguInfo; }
namespace System { class String; }

#define RPG_CLIENT_FATERIN_CASEBOARD_HOUGUVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0x1A37F5B0)
#define RPG_CLIENT_FATERIN_CASEBOARD_HOUGUVIEWMODEL_GET_HOUGUID_OFFSET UNITYSDK_OFFSET(0x1A37FD50)
#define RPG_CLIENT_FATERIN_CASEBOARD_HOUGUVIEWMODEL_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1A37FE60)
#define RPG_CLIENT_FATERIN_CASEBOARD_HOUGUVIEWMODEL_GET_ISCOLLECTED_OFFSET UNITYSDK_OFFSET(0x1A37FD90)
#define RPG_CLIENT_FATERIN_CASEBOARD_HOUGUVIEWMODEL_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x1A37FD70)
#define RPG_CLIENT_FATERIN_CASEBOARD_HOUGUVIEWMODEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1A37FDE0)
#define RPG_CLIENT_FATERIN_CASEBOARD_HOUGUVIEWMODEL_SET_HOUGUID_OFFSET UNITYSDK_OFFSET(0x1A37FD60)
#define RPG_CLIENT_FATERIN_CASEBOARD_HOUGUVIEWMODEL_SET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x1A37FD80)
#define RPG_CLIENT_FATERIN_CASEBOARD_HOUGUVIEWMODEL_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A37F840)
#define RPG_CLIENT_FATERIN_CASEBOARD_HOUGUVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A37FF80)
#define RPG_CLIENT_FATERIN_CASEBOARD_HOUGUVIEWMODEL__INIT_OFFSET UNITYSDK_OFFSET(0x1A380000)

namespace RPG::Client::FateRin::CaseBoard
{
	inline static constexpr unsigned int HouguViewModel_TypeDefinitionIndex = 75843;

	class HouguViewModel : public ::System::Object
	{
	public:
		::Class_1_5C8F237BF51192A7* _CaseBoardService; // 0x10
		::Class_1_C85C4DAB350DD5FC_2* _Card; // 0x18
		::System::UInt32 _HouguID_k__BackingField; // 0x20
		::System::Boolean _IsShow_k__BackingField; // 0x24

		::System::Void _ctor(::Class_1_5C8F237BF51192A7* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5C8F237BF51192A7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_HOUGUVIEWMODEL__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_HouguID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_HOUGUVIEWMODEL_GET_HOUGUID_OFFSET))(this);
		}

		::System::Void set_HouguID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_HOUGUVIEWMODEL_SET_HOUGUID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_HOUGUVIEWMODEL_GET_ISSHOW_OFFSET))(this);
		}

		::System::Void set_IsShow(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_HOUGUVIEWMODEL_SET_ISSHOW_OFFSET))(this, a1);
		}

		::System::Boolean get_IsCollected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_HOUGUVIEWMODEL_GET_ISCOLLECTED_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_HOUGUVIEWMODEL_GET_NAME_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_HOUGUVIEWMODEL_GET_ICONPATH_OFFSET))(this);
		}

		static ::RPG::Client::FateRin::CaseBoard::HouguViewModel* Create(::RPG::GameCore::FateRinCaseBoardHouguInfo* a1, ::Class_1_5C8F237BF51192A7* a2)
		{
			return ((::RPG::Client::FateRin::CaseBoard::HouguViewModel*(*)(::RPG::GameCore::FateRinCaseBoardHouguInfo*, ::Class_1_5C8F237BF51192A7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_HOUGUVIEWMODEL_CREATE_OFFSET))(a1, a2);
		}

		::System::Void _Init(::RPG::GameCore::FateRinCaseBoardHouguInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinCaseBoardHouguInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_HOUGUVIEWMODEL__INIT_OFFSET))(this, a1);
		}

		::System::Void Update(::RPG::GameCore::FateRinCaseBoardHouguInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinCaseBoardHouguInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_HOUGUVIEWMODEL_UPDATE_OFFSET))(this, a1);
		}
	};
}
