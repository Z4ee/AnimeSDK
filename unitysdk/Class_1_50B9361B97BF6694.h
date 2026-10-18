#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1503;
class Class_0_16E4307DCC419505_397;
class Class_1_1294FEF8E985635C;
class Class_1_7B5BC5F7531D3B01_1;
namespace R3 { template <typename T> class Observable_1; }
namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_50B9361B97BF6694_ADD_HANDLEEXIT_OFFSET UNITYSDK_OFFSET(0xB331640)
#define CLASS_1_50B9361B97BF6694_GET_CMTCOUNT_OFFSET UNITYSDK_OFFSET(0xB331470)
#define CLASS_1_50B9361B97BF6694_GET_CMTS_OFFSET UNITYSDK_OFFSET(0xB331430)
#define CLASS_1_50B9361B97BF6694_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0xB331450)
#define CLASS_1_50B9361B97BF6694_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0xB331440)
#define CLASS_1_50B9361B97BF6694_GET_LIKECOUNT_OFFSET UNITYSDK_OFFSET(0xB331460)
#define CLASS_1_50B9361B97BF6694_GET_REPORTID_OFFSET UNITYSDK_OFFSET(0xB331700)
#define CLASS_1_50B9361B97BF6694_METHOD_1_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0xB3318E0)
#define CLASS_1_50B9361B97BF6694_METHOD_1_0D5375C87D863D2A_OFFSET UNITYSDK_OFFSET(0xB331800)
#define CLASS_1_50B9361B97BF6694_METHOD_1_B213056103887067_1_OFFSET UNITYSDK_OFFSET(0xB331580)
#define CLASS_1_50B9361B97BF6694_METHOD_1_B213056103887067_OFFSET UNITYSDK_OFFSET(0xB3314C0)
#define CLASS_1_50B9361B97BF6694_METHOD_1_FB5550CC734284FC_OFFSET UNITYSDK_OFFSET(0xB331480)
#define CLASS_1_50B9361B97BF6694_REMOVE_HANDLEEXIT_OFFSET UNITYSDK_OFFSET(0xB3316A0)
#define CLASS_1_50B9361B97BF6694__CTOR_OFFSET UNITYSDK_OFFSET(0xB331710)
#define CLASS_1_50B9361B97BF6694___ONEXIT_B__33_0_OFFSET UNITYSDK_OFFSET(0xB331A40)

inline static constexpr unsigned int Class_1_50B9361B97BF6694_TypeDefinitionIndex = 79684;

class Class_1_50B9361B97BF6694 : public ::System::Object
{
public:
	::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_1503*>* _Cmts_k__BackingField; // 0x10
	::Class_1_1294FEF8E985635C* GJALMBBNNOF; // 0x18
	::R3::ReactiveProperty_1<::System::Boolean>* LJJADGBEGGC; // 0x20
	::System::Action* MDHOFBGIMIG; // 0x28
	::System::String* _ImagePath_k__BackingField; // 0x30
	::System::Action* HandleExit; // 0x38
	::Class_1_7B5BC5F7531D3B01_1* IIDIJLNGJNM; // 0x40
	::RPG::Client::TextID _Content_k__BackingField; // 0x48
	::System::UInt32 _ReportID_k__BackingField; // 0x58
	::System::Int32 _CmtCount_k__BackingField; // 0x5C
	::System::Boolean FOFDKHPKNDH; // 0x60
	::System::Single _LikeCount_k__BackingField; // 0x64

	::System::Void _ctor(::Class_1_1294FEF8E985635C* a1, ::Class_1_7B5BC5F7531D3B01_1* a2, ::System::UInt32 a3, ::System::Boolean a4, ::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_1503*>* a5, ::System::String* a6, ::RPG::Client::TextID a7, ::System::Single a8, ::System::Int32 a9, ::System::Action* a10)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1294FEF8E985635C*, ::Class_1_7B5BC5F7531D3B01_1*, ::System::UInt32, ::System::Boolean, ::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_1503*>*, ::System::String*, ::RPG::Client::TextID, ::System::Single, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_50B9361B97BF6694__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_1503*>* get_Cmts()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_1503*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_50B9361B97BF6694_GET_CMTS_OFFSET))(this);
	}

	::System::String* get_ImagePath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_50B9361B97BF6694_GET_IMAGEPATH_OFFSET))(this);
	}

	::RPG::Client::TextID get_Content()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_50B9361B97BF6694_GET_CONTENT_OFFSET))(this);
	}

	::System::Single get_LikeCount()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_50B9361B97BF6694_GET_LIKECOUNT_OFFSET))(this);
	}

	::System::Int32 get_CmtCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_50B9361B97BF6694_GET_CMTCOUNT_OFFSET))(this);
	}

	::R3::Observable_1<::System::Boolean>* Method_1_FB5550CC734284FC()
	{
		return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_50B9361B97BF6694_METHOD_1_FB5550CC734284FC_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_397* Method_1_B213056103887067()
	{
		return ((::Class_0_16E4307DCC419505_397*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_50B9361B97BF6694_METHOD_1_B213056103887067_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_397* Method_1_B213056103887067_1()
	{
		return ((::Class_0_16E4307DCC419505_397*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_50B9361B97BF6694_METHOD_1_B213056103887067_1_OFFSET))(this);
	}

	::System::Void add_HandleExit(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_50B9361B97BF6694_ADD_HANDLEEXIT_OFFSET))(this, a1);
	}

	::System::Void remove_HandleExit(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_50B9361B97BF6694_REMOVE_HANDLEEXIT_OFFSET))(this, a1);
	}

	::System::UInt32 get_ReportID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_50B9361B97BF6694_GET_REPORTID_OFFSET))(this);
	}

	::System::Void Method_1_0D5375C87D863D2A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_50B9361B97BF6694_METHOD_1_0D5375C87D863D2A_OFFSET))(this);
	}

	::System::Void Method_1_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_50B9361B97BF6694_METHOD_1_0865E94460F11643_OFFSET))(this);
	}

	::System::Void __OnExit_b__33_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_50B9361B97BF6694___ONEXIT_B__33_0_OFFSET))(this);
	}
};
