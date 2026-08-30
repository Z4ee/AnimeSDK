#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/ChapterRecordUiData.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5BE580A3D9E37E37_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16B968A0)
#define CLASS_1_5BE580A3D9E37E37_METHOD_1_3DA8CCF1E3141248_OFFSET UNITYSDK_OFFSET(0x16B976F0)
#define CLASS_1_5BE580A3D9E37E37_METHOD_1_4DFC671A734A6182_OFFSET UNITYSDK_OFFSET(0x16B96960)
#define CLASS_1_5BE580A3D9E37E37_METHOD_1_52877D3601BD0D02_OFFSET UNITYSDK_OFFSET(0x16B96AC0)
#define CLASS_1_5BE580A3D9E37E37_METHOD_1_71007C9221A664CD_OFFSET UNITYSDK_OFFSET(0x16B98630)
#define CLASS_1_5BE580A3D9E37E37_METHOD_1_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0x16B98550)
#define CLASS_1_5BE580A3D9E37E37_METHOD_1_EB34BC3A82494D17_OFFSET UNITYSDK_OFFSET(0x16B97EB0)
#define CLASS_1_5BE580A3D9E37E37_METHOD_1_F0755EB0BA58F290_OFFSET UNITYSDK_OFFSET(0x16B96D00)
#define CLASS_1_5BE580A3D9E37E37__CTOR_OFFSET UNITYSDK_OFFSET(0x16B96810)
#define CLASS_1_5BE580A3D9E37E37___ASYNCREQUESTGETMOSTPARTICIPATEDAVATARS_B__8_0_OFFSET UNITYSDK_OFFSET(0x16B98790)

inline static constexpr unsigned int Class_1_5BE580A3D9E37E37_TypeDefinitionIndex = 75019;

class Class_1_5BE580A3D9E37E37 : public ::System::Object
{
public:
	::RPG::Client::Promises::Promise_1<::System::Collections::Generic::List_1<::System::UInt32>*>* HMBCMFGJNIM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5BE580A3D9E37E37__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5BE580A3D9E37E37_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_4DFC671A734A6182(::System::Boolean a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5BE580A3D9E37E37_METHOD_1_4DFC671A734A6182_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::ChapterRecordUiData>* Method_1_F0755EB0BA58F290(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::ChapterRecordUiData>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_5BE580A3D9E37E37_METHOD_1_F0755EB0BA58F290_OFFSET))(this, a1);
	}

	::System::Void Method_1_3DA8CCF1E3141248(::System::Boolean a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::ChapterRecordUiData>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::ChapterRecordUiData>*))((::PBYTE)hIl2Cpp + CLASS_1_5BE580A3D9E37E37_METHOD_1_3DA8CCF1E3141248_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_83DA3EC57FF907F4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5BE580A3D9E37E37_METHOD_1_83DA3EC57FF907F4_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>* Method_1_EB34BC3A82494D17(::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::ChapterRecordUiData>* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::ChapterRecordUiData>*))((::PBYTE)hIl2Cpp + CLASS_1_5BE580A3D9E37E37_METHOD_1_EB34BC3A82494D17_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::System::UInt32>*>* Method_1_52877D3601BD0D02()
	{
		return ((::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::System::UInt32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5BE580A3D9E37E37_METHOD_1_52877D3601BD0D02_OFFSET))(this);
	}

	::System::Void Method_1_71007C9221A664CD(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5BE580A3D9E37E37_METHOD_1_71007C9221A664CD_OFFSET))(this, a1, a2);
	}

	::System::Void __AsyncRequestGetMostParticipatedAvatars_b__8_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5BE580A3D9E37E37___ASYNCREQUESTGETMOSTPARTICIPATEDAVATARS_B__8_0_OFFSET))(this);
	}
};
