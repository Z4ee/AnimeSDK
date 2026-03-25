#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BookContentData_BookContentType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_BOOKCONTENTDATA_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0x91F4C30)
#define RPG_CLIENT_BOOKCONTENTDATA_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x91F4C10)
#define RPG_CLIENT_BOOKCONTENTDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x91F4C50)
#define RPG_CLIENT_BOOKCONTENTDATA_SETIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x91F4BC0)
#define RPG_CLIENT_BOOKCONTENTDATA_SETTEXT_OFFSET UNITYSDK_OFFSET(0x91F4B70)
#define RPG_CLIENT_BOOKCONTENTDATA_SET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0x91F4C40)
#define RPG_CLIENT_BOOKCONTENTDATA_SET_TEXT_OFFSET UNITYSDK_OFFSET(0x91F4C20)
#define RPG_CLIENT_BOOKCONTENTDATA_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x91F4C60)
#define RPG_CLIENT_BOOKCONTENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x91F4C70)

namespace RPG::Client
{
	inline static constexpr unsigned int BookContentData_TypeDefinitionIndex = 53994;

	class BookContentData : public ::System::Object
	{
	public:
		::System::String* _Text_k__BackingField; // 0x10
		::System::String* _ImagePath_k__BackingField; // 0x18
		::RPG::Client::BookContentData_BookContentType _Type_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKCONTENTDATA__CTOR_OFFSET))(this);
		}

		::System::Void SetText(::System::String* textStr)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKCONTENTDATA_SETTEXT_OFFSET))(this, textStr);
		}

		::System::Void SetImagePath(::System::String* imagePath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKCONTENTDATA_SETIMAGEPATH_OFFSET))(this, imagePath);
		}

		::System::String* get_Text()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKCONTENTDATA_GET_TEXT_OFFSET))(this);
		}

		::System::Void set_Text(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKCONTENTDATA_SET_TEXT_OFFSET))(this, value);
		}

		::System::String* get_ImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKCONTENTDATA_GET_IMAGEPATH_OFFSET))(this);
		}

		::System::Void set_ImagePath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKCONTENTDATA_SET_IMAGEPATH_OFFSET))(this, value);
		}

		::RPG::Client::BookContentData_BookContentType get_Type()
		{
			return ((::RPG::Client::BookContentData_BookContentType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKCONTENTDATA_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::RPG::Client::BookContentData_BookContentType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BookContentData_BookContentType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKCONTENTDATA_SET_TYPE_OFFSET))(this, value);
		}
	};
}
