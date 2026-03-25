#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DateTimePro.h"
#include "unitysdk/System/Object.h"

class Class_1_0C037D6A61EBBE9D;
class Class_1_4172F4030D1E5435;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_DE147B6E78BA2BC2_GETDATETIME_OFFSET UNITYSDK_OFFSET(0x8D00030)
#define CLASS_1_DE147B6E78BA2BC2_GETITEMLIST_OFFSET UNITYSDK_OFFSET(0x8CFFF80)
#define CLASS_1_DE147B6E78BA2BC2_GETTIME_OFFSET UNITYSDK_OFFSET(0x8CFFFC0)
#define CLASS_1_DE147B6E78BA2BC2_GETUSERNAME_OFFSET UNITYSDK_OFFSET(0x8D00070)
#define CLASS_1_DE147B6E78BA2BC2_GET_PRESENTPIECELIST_OFFSET UNITYSDK_OFFSET(0x8D00410)
#define CLASS_1_DE147B6E78BA2BC2_GET_PRESENTTIME_OFFSET UNITYSDK_OFFSET(0x8D003F0)
#define CLASS_1_DE147B6E78BA2BC2_GET_USERID_OFFSET UNITYSDK_OFFSET(0x8D003D0)
#define CLASS_1_DE147B6E78BA2BC2_ISHISTORYVALID_OFFSET UNITYSDK_OFFSET(0x8D00120)
#define CLASS_1_DE147B6E78BA2BC2_ISITEMVALID_OFFSET UNITYSDK_OFFSET(0x8D00160)
#define CLASS_1_DE147B6E78BA2BC2_METHOD_1_A6EB043AED5D5D84_1_OFFSET UNITYSDK_OFFSET(0x8CFFE50)
#define CLASS_1_DE147B6E78BA2BC2_METHOD_1_A6EB043AED5D5D84_OFFSET UNITYSDK_OFFSET(0x8CFFD10)
#define CLASS_1_DE147B6E78BA2BC2_SET_PRESENTPIECELIST_OFFSET UNITYSDK_OFFSET(0x8D00420)
#define CLASS_1_DE147B6E78BA2BC2_SET_PRESENTTIME_OFFSET UNITYSDK_OFFSET(0x8D00400)
#define CLASS_1_DE147B6E78BA2BC2_SET_USERID_OFFSET UNITYSDK_OFFSET(0x8D003E0)
#define CLASS_1_DE147B6E78BA2BC2__CTOR_OFFSET UNITYSDK_OFFSET(0x8CFFE40)

inline static constexpr unsigned int Class_1_DE147B6E78BA2BC2_TypeDefinitionIndex = 54176;

class Class_1_DE147B6E78BA2BC2 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* _PresentPieceList_k__BackingField; // 0x10
	::RPG::Client::DateTimePro _PresentTime_k__BackingField; // 0x18
	::System::UInt32 _UserID_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE147B6E78BA2BC2__CTOR_OFFSET))(this);
	}

	static ::Class_1_DE147B6E78BA2BC2* Method_1_A6EB043AED5D5D84(::Class_1_4172F4030D1E5435* a1)
	{
		return ((::Class_1_DE147B6E78BA2BC2*(*)(::Class_1_4172F4030D1E5435*))((::PBYTE)hIl2Cpp + CLASS_1_DE147B6E78BA2BC2_METHOD_1_A6EB043AED5D5D84_OFFSET))(a1);
	}

	static ::Class_1_DE147B6E78BA2BC2* Method_1_A6EB043AED5D5D84_1(::Class_1_0C037D6A61EBBE9D* a1)
	{
		return ((::Class_1_DE147B6E78BA2BC2*(*)(::Class_1_0C037D6A61EBBE9D*))((::PBYTE)hIl2Cpp + CLASS_1_DE147B6E78BA2BC2_METHOD_1_A6EB043AED5D5D84_1_OFFSET))(a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* GetItemList()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE147B6E78BA2BC2_GETITEMLIST_OFFSET))(this);
	}

	::System::String* GetTime()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE147B6E78BA2BC2_GETTIME_OFFSET))(this);
	}

	::RPG::Client::DateTimePro GetDateTime()
	{
		return ((::RPG::Client::DateTimePro(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE147B6E78BA2BC2_GETDATETIME_OFFSET))(this);
	}

	::System::String* GetUserName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE147B6E78BA2BC2_GETUSERNAME_OFFSET))(this);
	}

	::System::Boolean IsHistoryValid()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE147B6E78BA2BC2_ISHISTORYVALID_OFFSET))(this);
	}

	::System::Boolean IsItemValid()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE147B6E78BA2BC2_ISITEMVALID_OFFSET))(this);
	}

	::System::UInt32 get_UserID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE147B6E78BA2BC2_GET_USERID_OFFSET))(this);
	}

	::System::Void set_UserID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DE147B6E78BA2BC2_SET_USERID_OFFSET))(this, value);
	}

	::RPG::Client::DateTimePro get_PresentTime()
	{
		return ((::RPG::Client::DateTimePro(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE147B6E78BA2BC2_GET_PRESENTTIME_OFFSET))(this);
	}

	::System::Void set_PresentTime(::RPG::Client::DateTimePro value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DateTimePro))((::PBYTE)hIl2Cpp + CLASS_1_DE147B6E78BA2BC2_SET_PRESENTTIME_OFFSET))(this, value);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* get_PresentPieceList()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE147B6E78BA2BC2_GET_PRESENTPIECELIST_OFFSET))(this);
	}

	::System::Void set_PresentPieceList(::System::Collections::Generic::List_1<::System::UInt32>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_DE147B6E78BA2BC2_SET_PRESENTPIECELIST_OFFSET))(this, value);
	}
};
