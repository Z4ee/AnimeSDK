#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/SpecialOrderFinishTypeEnum.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AlleySpecialOrderCheckParam; }
namespace RPG::GameCore { class AlleySpecialOrderFinishRow; }

#define RPG_CLIENT_ALLEYSPECIALORDERTARGET_DOCHECK_OFFSET UNITYSDK_OFFSET(0xB309A70)
#define RPG_CLIENT_ALLEYSPECIALORDERTARGET_GET_CURPROGRESS_OFFSET UNITYSDK_OFFSET(0xB309C90)
#define RPG_CLIENT_ALLEYSPECIALORDERTARGET_GET_FINISHTYPE_OFFSET UNITYSDK_OFFSET(0xB309C40)
#define RPG_CLIENT_ALLEYSPECIALORDERTARGET_GET_SPECIALORDERFINISHDESC_OFFSET UNITYSDK_OFFSET(0xB309C60)
#define RPG_CLIENT_ALLEYSPECIALORDERTARGET_GET_TOTALPROGRESS_OFFSET UNITYSDK_OFFSET(0xB309CB0)
#define RPG_CLIENT_ALLEYSPECIALORDERTARGET_SET_CURPROGRESS_OFFSET UNITYSDK_OFFSET(0xB309CA0)
#define RPG_CLIENT_ALLEYSPECIALORDERTARGET_SET_TOTALPROGRESS_OFFSET UNITYSDK_OFFSET(0xB309CC0)
#define RPG_CLIENT_ALLEYSPECIALORDERTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0xB3099E0)

namespace RPG::Client
{
	inline static constexpr unsigned int AlleySpecialOrderTarget_TypeDefinitionIndex = 58249;

	class AlleySpecialOrderTarget : public ::System::Object
	{
	public:
		::RPG::GameCore::AlleySpecialOrderFinishRow* Row; // 0x10
		::System::Int32 _CurProgress_k__BackingField; // 0x18
		::System::Int32 _TotalProgress_k__BackingField; // 0x1C

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYSPECIALORDERTARGET__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean DoCheck(::RPG::Client::AlleySpecialOrderCheckParam* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AlleySpecialOrderCheckParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYSPECIALORDERTARGET_DOCHECK_OFFSET))(this, a1);
		}

		::RPG::GameCore::SpecialOrderFinishTypeEnum get_FinishType()
		{
			return ((::RPG::GameCore::SpecialOrderFinishTypeEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYSPECIALORDERTARGET_GET_FINISHTYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get_SpecialOrderFinishDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYSPECIALORDERTARGET_GET_SPECIALORDERFINISHDESC_OFFSET))(this);
		}

		::System::Int32 get_CurProgress()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYSPECIALORDERTARGET_GET_CURPROGRESS_OFFSET))(this);
		}

		::System::Void set_CurProgress(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYSPECIALORDERTARGET_SET_CURPROGRESS_OFFSET))(this, a1);
		}

		::System::Int32 get_TotalProgress()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYSPECIALORDERTARGET_GET_TOTALPROGRESS_OFFSET))(this);
		}

		::System::Void set_TotalProgress(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYSPECIALORDERTARGET_SET_TOTALPROGRESS_OFFSET))(this, a1);
		}
	};
}
