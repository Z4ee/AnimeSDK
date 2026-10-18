#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5C8F237BF51192A7;
namespace System { class String; }

#define RPG_CLIENT_FATERIN_CASEBOARD_GRAILVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0xCF91FB0)
#define RPG_CLIENT_FATERIN_CASEBOARD_GRAILVIEWMODEL_GET_ACQUIREPROGRESS_OFFSET UNITYSDK_OFFSET(0xCF91CE0)
#define RPG_CLIENT_FATERIN_CASEBOARD_GRAILVIEWMODEL_GET_CASEBOARDSERVICE_OFFSET UNITYSDK_OFFSET(0xCF91B70)
#define RPG_CLIENT_FATERIN_CASEBOARD_GRAILVIEWMODEL_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0xCF91CC0)
#define RPG_CLIENT_FATERIN_CASEBOARD_GRAILVIEWMODEL_GET_PROGRESSDESC_OFFSET UNITYSDK_OFFSET(0xCF91D60)
#define RPG_CLIENT_FATERIN_CASEBOARD_GRAILVIEWMODEL_GET_TOTALHOUGUCOUNT_OFFSET UNITYSDK_OFFSET(0xCF91F50)
#define RPG_CLIENT_FATERIN_CASEBOARD_GRAILVIEWMODEL_SETSHOW_OFFSET UNITYSDK_OFFSET(0xCF92030)
#define RPG_CLIENT_FATERIN_CASEBOARD_GRAILVIEWMODEL_SET_ISSHOW_OFFSET UNITYSDK_OFFSET(0xCF91CD0)
#define RPG_CLIENT_FATERIN_CASEBOARD_GRAILVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xCF92020)

namespace RPG::Client::FateRin::CaseBoard
{
	inline static constexpr unsigned int GrailViewModel_TypeDefinitionIndex = 80799;

	class GrailViewModel : public ::System::Object
	{
	public:
		::System::Boolean _IsShow_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_GRAILVIEWMODEL__CTOR_OFFSET))(this);
		}

		::Class_1_5C8F237BF51192A7* get_CaseBoardService()
		{
			return ((::Class_1_5C8F237BF51192A7*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_GRAILVIEWMODEL_GET_CASEBOARDSERVICE_OFFSET))(this);
		}

		::System::Boolean get_IsShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_GRAILVIEWMODEL_GET_ISSHOW_OFFSET))(this);
		}

		::System::Void set_IsShow(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_GRAILVIEWMODEL_SET_ISSHOW_OFFSET))(this, a1);
		}

		::System::Single get_AcquireProgress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_GRAILVIEWMODEL_GET_ACQUIREPROGRESS_OFFSET))(this);
		}

		::System::String* get_ProgressDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_GRAILVIEWMODEL_GET_PROGRESSDESC_OFFSET))(this);
		}

		::System::Int32 get_TotalHouguCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_GRAILVIEWMODEL_GET_TOTALHOUGUCOUNT_OFFSET))(this);
		}

		static ::RPG::Client::FateRin::CaseBoard::GrailViewModel* Create()
		{
			return ((::RPG::Client::FateRin::CaseBoard::GrailViewModel*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_GRAILVIEWMODEL_CREATE_OFFSET))();
		}

		::System::Void SetShow(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_GRAILVIEWMODEL_SETSHOW_OFFSET))(this, a1);
		}
	};
}
