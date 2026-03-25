#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_524E625AF890459D;
namespace RPG::GameCore { class FunctionHudConfigRow; }
namespace RPG::GameCore { class FunctionHudSpecialConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_FUNCENTRANCEDATA_CHECKISINACTIVITY_OFFSET UNITYSDK_OFFSET(0x9749990)
#define RPG_CLIENT_FUNCENTRANCEDATA_CHECKNEEDHIDE_OFFSET UNITYSDK_OFFSET(0x9749F40)
#define RPG_CLIENT_FUNCENTRANCEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9749E50)
#define RPG_CLIENT_FUNCENTRANCEDATA_GET_FIRSTWORLDTEXT_OFFSET UNITYSDK_OFFSET(0x9749CE0)
#define RPG_CLIENT_FUNCENTRANCEDATA_GET_FUNCHUDICONPATH_OFFSET UNITYSDK_OFFSET(0x9749B40)
#define RPG_CLIENT_FUNCENTRANCEDATA_GET_FUNCICONPATH_OFFSET UNITYSDK_OFFSET(0x9749900)
#define RPG_CLIENT_FUNCENTRANCEDATA_GET_FUNCNAME_OFFSET UNITYSDK_OFFSET(0x97498D0)
#define RPG_CLIENT_FUNCENTRANCEDATA_GET_FUNCTION_OFFSET UNITYSDK_OFFSET(0x9749760)
#define RPG_CLIENT_FUNCENTRANCEDATA_GET_GOTOID_OFFSET UNITYSDK_OFFSET(0x9749BB0)
#define RPG_CLIENT_FUNCENTRANCEDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x97498B0)
#define RPG_CLIENT_FUNCENTRANCEDATA_GET_ISCANSHOW_OFFSET UNITYSDK_OFFSET(0x9749D40)
#define RPG_CLIENT_FUNCENTRANCEDATA_GET_ISCONTROLRIGHTHUDBYACTIVITY_OFFSET UNITYSDK_OFFSET(0x9749DE0)
#define RPG_CLIENT_FUNCENTRANCEDATA_GET_ISLARGEBTN_OFFSET UNITYSDK_OFFSET(0x9749C80)
#define RPG_CLIENT_FUNCENTRANCEDATA_GET_ISOPEN_OFFSET UNITYSDK_OFFSET(0x9749780)
#define RPG_CLIENT_FUNCENTRANCEDATA_GET_ISSHOWACTIVITYMARK_OFFSET UNITYSDK_OFFSET(0x9749E40)
#define RPG_CLIENT_FUNCENTRANCEDATA_GET_NOTINSCHEDULETOAST_OFFSET UNITYSDK_OFFSET(0x9749C00)
#define RPG_CLIENT_FUNCENTRANCEDATA_GET_REDDOTHUD_OFFSET UNITYSDK_OFFSET(0x9749B20)
#define RPG_CLIENT_FUNCENTRANCEDATA_GET_REDDOT_OFFSET UNITYSDK_OFFSET(0x9749B00)
#define RPG_CLIENT_FUNCENTRANCEDATA_GET_UNLOCKID_OFFSET UNITYSDK_OFFSET(0x9749860)
#define RPG_CLIENT_FUNCENTRANCEDATA_SET_FUNCTION_OFFSET UNITYSDK_OFFSET(0x9749770)
#define RPG_CLIENT_FUNCENTRANCEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9749EF0)

namespace RPG::Client
{
	inline static constexpr unsigned int FuncEntranceData_TypeDefinitionIndex = 55508;

	class FuncEntranceData : public ::System::Object
	{
	public:
		::RPG::GameCore::FunctionHudConfigRow* _Meta; // 0x10
		::RPG::GameCore::FunctionHudSpecialConfigRow* _SpecialMeta; // 0x18
		::Class_1_524E625AF890459D* _Function_k__BackingField; // 0x20

		::System::Void _ctor(::RPG::GameCore::FunctionHudConfigRow* meta, ::Class_1_524E625AF890459D* function)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FunctionHudConfigRow*, ::Class_1_524E625AF890459D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCENTRANCEDATA__CTOR_OFFSET))(this, meta, function);
		}

		::Class_1_524E625AF890459D* get_Function()
		{
			return ((::Class_1_524E625AF890459D*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCENTRANCEDATA_GET_FUNCTION_OFFSET))(this);
		}

		::System::Void set_Function(::Class_1_524E625AF890459D* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_524E625AF890459D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCENTRANCEDATA_SET_FUNCTION_OFFSET))(this, value);
		}

		::System::Boolean get_IsOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCENTRANCEDATA_GET_ISOPEN_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCENTRANCEDATA_GET_ID_OFFSET))(this);
		}

		::RPG::Client::TextID get_FuncName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCENTRANCEDATA_GET_FUNCNAME_OFFSET))(this);
		}

		::System::String* get_FuncIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCENTRANCEDATA_GET_FUNCICONPATH_OFFSET))(this);
		}

		::System::String* get_RedDot()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCENTRANCEDATA_GET_REDDOT_OFFSET))(this);
		}

		::System::String* get_RedDotHud()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCENTRANCEDATA_GET_REDDOTHUD_OFFSET))(this);
		}

		::System::String* get_FuncHudIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCENTRANCEDATA_GET_FUNCHUDICONPATH_OFFSET))(this);
		}

		::System::UInt32 get_GotoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCENTRANCEDATA_GET_GOTOID_OFFSET))(this);
		}

		::System::UInt32 get_UnlockID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCENTRANCEDATA_GET_UNLOCKID_OFFSET))(this);
		}

		::RPG::Client::TextID get_NotInScheduleToast()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCENTRANCEDATA_GET_NOTINSCHEDULETOAST_OFFSET))(this);
		}

		::System::Boolean get_IsLargeBtn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCENTRANCEDATA_GET_ISLARGEBTN_OFFSET))(this);
		}

		::System::String* get_FirstWorldText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCENTRANCEDATA_GET_FIRSTWORLDTEXT_OFFSET))(this);
		}

		::System::Boolean get_IsCanShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCENTRANCEDATA_GET_ISCANSHOW_OFFSET))(this);
		}

		::System::Boolean get_IsControlRightHudByActivity()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCENTRANCEDATA_GET_ISCONTROLRIGHTHUDBYACTIVITY_OFFSET))(this);
		}

		::System::Boolean get_IsShowActivityMark()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCENTRANCEDATA_GET_ISSHOWACTIVITYMARK_OFFSET))(this);
		}

		static ::RPG::Client::FuncEntranceData* Create(::RPG::GameCore::FunctionHudConfigRow* meta, ::Class_1_524E625AF890459D* function)
		{
			return ((::RPG::Client::FuncEntranceData*(*)(::RPG::GameCore::FunctionHudConfigRow*, ::Class_1_524E625AF890459D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCENTRANCEDATA_CREATE_OFFSET))(meta, function);
		}

		::System::Boolean CheckNeedHide()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCENTRANCEDATA_CHECKNEEDHIDE_OFFSET))(this);
		}

		::System::Boolean CheckIsInActivity()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCENTRANCEDATA_CHECKISINACTIVITY_OFFSET))(this);
		}
	};
}
