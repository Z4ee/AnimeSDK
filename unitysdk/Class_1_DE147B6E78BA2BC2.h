#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DateTimePro.h"
#include "unitysdk/System/Object.h"

class Class_1_72C6D937BA5A992C;
class Class_1_A2967FAA88DD8F73;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_DE147B6E78BA2BC2_GETDATETIME_OFFSET UNITYSDK_OFFSET(0x927A810)
#define CLASS_1_DE147B6E78BA2BC2_GETITEMLIST_OFFSET UNITYSDK_OFFSET(0x927A760)
#define CLASS_1_DE147B6E78BA2BC2_GETTIME_OFFSET UNITYSDK_OFFSET(0x927A7A0)
#define CLASS_1_DE147B6E78BA2BC2_GETUSERNAME_OFFSET UNITYSDK_OFFSET(0x927A850)
#define CLASS_1_DE147B6E78BA2BC2_GET_PRESENTPIECELIST_OFFSET UNITYSDK_OFFSET(0x927ABF0)
#define CLASS_1_DE147B6E78BA2BC2_GET_PRESENTTIME_OFFSET UNITYSDK_OFFSET(0x927ABD0)
#define CLASS_1_DE147B6E78BA2BC2_GET_USERID_OFFSET UNITYSDK_OFFSET(0x927ABB0)
#define CLASS_1_DE147B6E78BA2BC2_ISHISTORYVALID_OFFSET UNITYSDK_OFFSET(0x927A900)
#define CLASS_1_DE147B6E78BA2BC2_ISITEMVALID_OFFSET UNITYSDK_OFFSET(0x927A940)
#define CLASS_1_DE147B6E78BA2BC2_METHOD_1_A6EB043AED5D5D84_1_OFFSET UNITYSDK_OFFSET(0x927A630)
#define CLASS_1_DE147B6E78BA2BC2_METHOD_1_A6EB043AED5D5D84_OFFSET UNITYSDK_OFFSET(0x927A4F0)
#define CLASS_1_DE147B6E78BA2BC2_SET_PRESENTPIECELIST_OFFSET UNITYSDK_OFFSET(0x927AC00)
#define CLASS_1_DE147B6E78BA2BC2_SET_PRESENTTIME_OFFSET UNITYSDK_OFFSET(0x927ABE0)
#define CLASS_1_DE147B6E78BA2BC2_SET_USERID_OFFSET UNITYSDK_OFFSET(0x927ABC0)
#define CLASS_1_DE147B6E78BA2BC2__CTOR_OFFSET UNITYSDK_OFFSET(0x927A620)

inline static constexpr unsigned int Class_1_DE147B6E78BA2BC2_TypeDefinitionIndex = 61339;

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

	static ::Class_1_DE147B6E78BA2BC2* Method_1_A6EB043AED5D5D84(::Class_1_A2967FAA88DD8F73* a1)
	{
		return ((::Class_1_DE147B6E78BA2BC2*(*)(::Class_1_A2967FAA88DD8F73*))((::PBYTE)hIl2Cpp + CLASS_1_DE147B6E78BA2BC2_METHOD_1_A6EB043AED5D5D84_OFFSET))(a1);
	}

	static ::Class_1_DE147B6E78BA2BC2* Method_1_A6EB043AED5D5D84_1(::Class_1_72C6D937BA5A992C* a1)
	{
		return ((::Class_1_DE147B6E78BA2BC2*(*)(::Class_1_72C6D937BA5A992C*))((::PBYTE)hIl2Cpp + CLASS_1_DE147B6E78BA2BC2_METHOD_1_A6EB043AED5D5D84_1_OFFSET))(a1);
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
