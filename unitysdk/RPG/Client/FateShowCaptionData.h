#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATESHOWCAPTIONDATA_GET_SHOWTIME_OFFSET UNITYSDK_OFFSET(0xA35B130)
#define RPG_CLIENT_FATESHOWCAPTIONDATA_GET_SPEED_OFFSET UNITYSDK_OFFSET(0xA35B0F0)
#define RPG_CLIENT_FATESHOWCAPTIONDATA_GET_TEXTIDLIST_OFFSET UNITYSDK_OFFSET(0xA35B110)
#define RPG_CLIENT_FATESHOWCAPTIONDATA_PARSESPEED_OFFSET UNITYSDK_OFFSET(0xA35B700)
#define RPG_CLIENT_FATESHOWCAPTIONDATA_PARSETEXTIDLISTFROMPARAM_OFFSET UNITYSDK_OFFSET(0xA35B200)
#define RPG_CLIENT_FATESHOWCAPTIONDATA_SET_SHOWTIME_OFFSET UNITYSDK_OFFSET(0xA35B140)
#define RPG_CLIENT_FATESHOWCAPTIONDATA_SET_SPEED_OFFSET UNITYSDK_OFFSET(0xA35B100)
#define RPG_CLIENT_FATESHOWCAPTIONDATA_SET_TEXTIDLIST_OFFSET UNITYSDK_OFFSET(0xA35B120)
#define RPG_CLIENT_FATESHOWCAPTIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA35B150)

namespace RPG::Client
{
	inline static constexpr unsigned int FateShowCaptionData_TypeDefinitionIndex = 58976;

	class FateShowCaptionData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::TextID>* _TextIdList_k__BackingField; // 0x10
		::System::Single _Speed_k__BackingField; // 0x18
		::System::Single _ShowTime_k__BackingField; // 0x1C

		::System::Void _ctor(::System::String* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESHOWCAPTIONDATA__CTOR_OFFSET))(this, param);
		}

		::System::Single get_Speed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESHOWCAPTIONDATA_GET_SPEED_OFFSET))(this);
		}

		::System::Void set_Speed(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESHOWCAPTIONDATA_SET_SPEED_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TextID>* get_TextIdList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TextID>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESHOWCAPTIONDATA_GET_TEXTIDLIST_OFFSET))(this);
		}

		::System::Void set_TextIdList(::System::Collections::Generic::List_1<::RPG::Client::TextID>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TextID>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESHOWCAPTIONDATA_SET_TEXTIDLIST_OFFSET))(this, value);
		}

		::System::Single get_ShowTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESHOWCAPTIONDATA_GET_SHOWTIME_OFFSET))(this);
		}

		::System::Void set_ShowTime(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESHOWCAPTIONDATA_SET_SHOWTIME_OFFSET))(this, value);
		}

		::System::Single ParseSpeed(::Il2CppArray<::System::String*>* paramArr)
		{
			return ((::System::Single(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESHOWCAPTIONDATA_PARSESPEED_OFFSET))(this, paramArr);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TextID>* ParseTextIdListFromParam(::Il2CppArray<::System::String*>* paramArr)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TextID>*(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESHOWCAPTIONDATA_PARSETEXTIDLISTFROMPARAM_OFFSET))(this, paramArr);
		}
	};
}
