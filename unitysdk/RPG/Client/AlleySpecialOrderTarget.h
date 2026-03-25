#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/SpecialOrderFinishTypeEnum.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AlleySpecialOrderCheckParam; }
namespace RPG::GameCore { class AlleySpecialOrderFinishRow; }

#define RPG_CLIENT_ALLEYSPECIALORDERTARGET_DOCHECK_OFFSET UNITYSDK_OFFSET(0x90BCAC0)
#define RPG_CLIENT_ALLEYSPECIALORDERTARGET_GET_CURPROGRESS_OFFSET UNITYSDK_OFFSET(0x90BCCE0)
#define RPG_CLIENT_ALLEYSPECIALORDERTARGET_GET_FINISHTYPE_OFFSET UNITYSDK_OFFSET(0x90BCC90)
#define RPG_CLIENT_ALLEYSPECIALORDERTARGET_GET_SPECIALORDERFINISHDESC_OFFSET UNITYSDK_OFFSET(0x90BCCB0)
#define RPG_CLIENT_ALLEYSPECIALORDERTARGET_GET_TOTALPROGRESS_OFFSET UNITYSDK_OFFSET(0x90BCD00)
#define RPG_CLIENT_ALLEYSPECIALORDERTARGET_SET_CURPROGRESS_OFFSET UNITYSDK_OFFSET(0x90BCCF0)
#define RPG_CLIENT_ALLEYSPECIALORDERTARGET_SET_TOTALPROGRESS_OFFSET UNITYSDK_OFFSET(0x90BCD10)
#define RPG_CLIENT_ALLEYSPECIALORDERTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x90BCA30)

namespace RPG::Client
{
	inline static constexpr unsigned int AlleySpecialOrderTarget_TypeDefinitionIndex = 50574;

	class AlleySpecialOrderTarget : public ::System::Object
	{
	public:
		::RPG::GameCore::AlleySpecialOrderFinishRow* Row; // 0x10
		::System::Int32 _CurProgress_k__BackingField; // 0x18
		::System::Int32 _TotalProgress_k__BackingField; // 0x1C

		::System::Void _ctor(::System::UInt32 specialOrderFinishID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYSPECIALORDERTARGET__CTOR_OFFSET))(this, specialOrderFinishID);
		}

		::System::Boolean DoCheck(::RPG::Client::AlleySpecialOrderCheckParam* checkParam)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AlleySpecialOrderCheckParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYSPECIALORDERTARGET_DOCHECK_OFFSET))(this, checkParam);
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

		::System::Void set_CurProgress(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYSPECIALORDERTARGET_SET_CURPROGRESS_OFFSET))(this, value);
		}

		::System::Int32 get_TotalProgress()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYSPECIALORDERTARGET_GET_TOTALPROGRESS_OFFSET))(this);
		}

		::System::Void set_TotalProgress(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYSPECIALORDERTARGET_SET_TOTALPROGRESS_OFFSET))(this, value);
		}
	};
}
