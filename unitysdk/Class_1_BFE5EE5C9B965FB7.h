#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DateTimePro.h"
#include "unitysdk/System/Object.h"

class Class_1_667AAF86D0A761FB;
class Class_1_A2967FAA88DD8F73_2;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_BFE5EE5C9B965FB7_GETDATETIME_OFFSET UNITYSDK_OFFSET(0xBBE5310)
#define CLASS_1_BFE5EE5C9B965FB7_GETITEMLIST_OFFSET UNITYSDK_OFFSET(0xBBE5220)
#define CLASS_1_BFE5EE5C9B965FB7_GETTIME_OFFSET UNITYSDK_OFFSET(0xBBE5260)
#define CLASS_1_BFE5EE5C9B965FB7_GETUSERNAME_OFFSET UNITYSDK_OFFSET(0xBBE5350)
#define CLASS_1_BFE5EE5C9B965FB7_GET_PRESENTPIECELIST_OFFSET UNITYSDK_OFFSET(0xBBE56F0)
#define CLASS_1_BFE5EE5C9B965FB7_GET_PRESENTTIME_OFFSET UNITYSDK_OFFSET(0xBBE56D0)
#define CLASS_1_BFE5EE5C9B965FB7_GET_USERID_OFFSET UNITYSDK_OFFSET(0xBBE56B0)
#define CLASS_1_BFE5EE5C9B965FB7_ISHISTORYVALID_OFFSET UNITYSDK_OFFSET(0xBBE5400)
#define CLASS_1_BFE5EE5C9B965FB7_ISITEMVALID_OFFSET UNITYSDK_OFFSET(0xBBE5440)
#define CLASS_1_BFE5EE5C9B965FB7_METHOD_1_A70784E011AF5C0D_1_OFFSET UNITYSDK_OFFSET(0xBBE50D0)
#define CLASS_1_BFE5EE5C9B965FB7_METHOD_1_A70784E011AF5C0D_OFFSET UNITYSDK_OFFSET(0xBBE4F70)
#define CLASS_1_BFE5EE5C9B965FB7_SET_PRESENTPIECELIST_OFFSET UNITYSDK_OFFSET(0xBBE5700)
#define CLASS_1_BFE5EE5C9B965FB7_SET_PRESENTTIME_OFFSET UNITYSDK_OFFSET(0xBBE56E0)
#define CLASS_1_BFE5EE5C9B965FB7_SET_USERID_OFFSET UNITYSDK_OFFSET(0xBBE56C0)
#define CLASS_1_BFE5EE5C9B965FB7__CTOR_OFFSET UNITYSDK_OFFSET(0xBBE50C0)

inline static constexpr unsigned int Class_1_BFE5EE5C9B965FB7_TypeDefinitionIndex = 66582;

class Class_1_BFE5EE5C9B965FB7 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* _PresentPieceList_k__BackingField; // 0x10
	::RPG::Client::DateTimePro _PresentTime_k__BackingField; // 0x18
	::System::UInt32 _UserID_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BFE5EE5C9B965FB7__CTOR_OFFSET))(this);
	}

	static ::Class_1_BFE5EE5C9B965FB7* Method_1_A70784E011AF5C0D(::Class_1_A2967FAA88DD8F73_2* a1)
	{
		return ((::Class_1_BFE5EE5C9B965FB7*(*)(::Class_1_A2967FAA88DD8F73_2*))((::PBYTE)hIl2Cpp + CLASS_1_BFE5EE5C9B965FB7_METHOD_1_A70784E011AF5C0D_OFFSET))(a1);
	}

	static ::Class_1_BFE5EE5C9B965FB7* Method_1_A70784E011AF5C0D_1(::Class_1_667AAF86D0A761FB* a1)
	{
		return ((::Class_1_BFE5EE5C9B965FB7*(*)(::Class_1_667AAF86D0A761FB*))((::PBYTE)hIl2Cpp + CLASS_1_BFE5EE5C9B965FB7_METHOD_1_A70784E011AF5C0D_1_OFFSET))(a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* GetItemList()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BFE5EE5C9B965FB7_GETITEMLIST_OFFSET))(this);
	}

	::System::String* GetTime()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BFE5EE5C9B965FB7_GETTIME_OFFSET))(this);
	}

	::RPG::Client::DateTimePro GetDateTime()
	{
		return ((::RPG::Client::DateTimePro(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BFE5EE5C9B965FB7_GETDATETIME_OFFSET))(this);
	}

	::System::String* GetUserName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BFE5EE5C9B965FB7_GETUSERNAME_OFFSET))(this);
	}

	::System::Boolean IsHistoryValid()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BFE5EE5C9B965FB7_ISHISTORYVALID_OFFSET))(this);
	}

	::System::Boolean IsItemValid()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BFE5EE5C9B965FB7_ISITEMVALID_OFFSET))(this);
	}

	::System::UInt32 get_UserID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BFE5EE5C9B965FB7_GET_USERID_OFFSET))(this);
	}

	::System::Void set_UserID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BFE5EE5C9B965FB7_SET_USERID_OFFSET))(this, a1);
	}

	::RPG::Client::DateTimePro get_PresentTime()
	{
		return ((::RPG::Client::DateTimePro(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BFE5EE5C9B965FB7_GET_PRESENTTIME_OFFSET))(this);
	}

	::System::Void set_PresentTime(::RPG::Client::DateTimePro a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DateTimePro))((::PBYTE)hIl2Cpp + CLASS_1_BFE5EE5C9B965FB7_SET_PRESENTTIME_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* get_PresentPieceList()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BFE5EE5C9B965FB7_GET_PRESENTPIECELIST_OFFSET))(this);
	}

	::System::Void set_PresentPieceList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_BFE5EE5C9B965FB7_SET_PRESENTPIECELIST_OFFSET))(this, a1);
	}
};
