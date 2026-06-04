#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DateTimePro.h"
#include "unitysdk/System/Object.h"

class Class_1_667AAF86D0A761FB;
class Class_1_A2967FAA88DD8F73;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_BFE5EE5C9B965FB7_GETDATETIME_OFFSET UNITYSDK_OFFSET(0xA9C3000)
#define CLASS_1_BFE5EE5C9B965FB7_GETITEMLIST_OFFSET UNITYSDK_OFFSET(0xA97C1D0)
#define CLASS_1_BFE5EE5C9B965FB7_GETTIME_OFFSET UNITYSDK_OFFSET(0xA9C2F90)
#define CLASS_1_BFE5EE5C9B965FB7_GETUSERNAME_OFFSET UNITYSDK_OFFSET(0xA9C3040)
#define CLASS_1_BFE5EE5C9B965FB7_GET_PRESENTPIECELIST_OFFSET UNITYSDK_OFFSET(0xA9C33E0)
#define CLASS_1_BFE5EE5C9B965FB7_GET_PRESENTTIME_OFFSET UNITYSDK_OFFSET(0xA9C33C0)
#define CLASS_1_BFE5EE5C9B965FB7_GET_USERID_OFFSET UNITYSDK_OFFSET(0xA9C33A0)
#define CLASS_1_BFE5EE5C9B965FB7_ISHISTORYVALID_OFFSET UNITYSDK_OFFSET(0xA9C30F0)
#define CLASS_1_BFE5EE5C9B965FB7_ISITEMVALID_OFFSET UNITYSDK_OFFSET(0xA9C3130)
#define CLASS_1_BFE5EE5C9B965FB7_METHOD_1_A6EB043AED5D5D84_1_OFFSET UNITYSDK_OFFSET(0xA97C0A0)
#define CLASS_1_BFE5EE5C9B965FB7_METHOD_1_A6EB043AED5D5D84_OFFSET UNITYSDK_OFFSET(0xA97BF70)
#define CLASS_1_BFE5EE5C9B965FB7_SET_PRESENTPIECELIST_OFFSET UNITYSDK_OFFSET(0xA9C33F0)
#define CLASS_1_BFE5EE5C9B965FB7_SET_PRESENTTIME_OFFSET UNITYSDK_OFFSET(0xA9C33D0)
#define CLASS_1_BFE5EE5C9B965FB7_SET_USERID_OFFSET UNITYSDK_OFFSET(0xA9C33B0)
#define CLASS_1_BFE5EE5C9B965FB7__CTOR_OFFSET UNITYSDK_OFFSET(0xA9C3400)

inline static constexpr unsigned int Class_1_BFE5EE5C9B965FB7_TypeDefinitionIndex = 62263;

class Class_1_BFE5EE5C9B965FB7 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* _PresentPieceList_k__BackingField; // 0x10
	::System::UInt32 _UserID_k__BackingField; // 0x18
	::RPG::Client::DateTimePro _PresentTime_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BFE5EE5C9B965FB7__CTOR_OFFSET))(this);
	}

	static ::Class_1_BFE5EE5C9B965FB7* Method_1_A6EB043AED5D5D84(::Class_1_A2967FAA88DD8F73* a1)
	{
		return ((::Class_1_BFE5EE5C9B965FB7*(*)(::Class_1_A2967FAA88DD8F73*))((::PBYTE)hIl2Cpp + CLASS_1_BFE5EE5C9B965FB7_METHOD_1_A6EB043AED5D5D84_OFFSET))(a1);
	}

	static ::Class_1_BFE5EE5C9B965FB7* Method_1_A6EB043AED5D5D84_1(::Class_1_667AAF86D0A761FB* a1)
	{
		return ((::Class_1_BFE5EE5C9B965FB7*(*)(::Class_1_667AAF86D0A761FB*))((::PBYTE)hIl2Cpp + CLASS_1_BFE5EE5C9B965FB7_METHOD_1_A6EB043AED5D5D84_1_OFFSET))(a1);
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
