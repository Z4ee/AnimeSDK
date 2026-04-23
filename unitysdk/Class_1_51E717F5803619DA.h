#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/ChapterRecordUiData.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_51E717F5803619DA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11A3F660)
#define CLASS_1_51E717F5803619DA_METHOD_1_42503661EFA7258E_OFFSET UNITYSDK_OFFSET(0x11A409A0)
#define CLASS_1_51E717F5803619DA_METHOD_1_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0x11A40F50)
#define CLASS_1_51E717F5803619DA_METHOD_1_4DFC671A734A6182_OFFSET UNITYSDK_OFFSET(0x11A3F6F0)
#define CLASS_1_51E717F5803619DA_METHOD_1_52877D3601BD0D02_OFFSET UNITYSDK_OFFSET(0x11A3F830)
#define CLASS_1_51E717F5803619DA_METHOD_1_71007C9221A664CD_OFFSET UNITYSDK_OFFSET(0x11A41000)
#define CLASS_1_51E717F5803619DA_METHOD_1_D1E947906C1C3A1C_OFFSET UNITYSDK_OFFSET(0x11A40120)
#define CLASS_1_51E717F5803619DA_METHOD_1_D90CF441A613C3B9_OFFSET UNITYSDK_OFFSET(0x11A3FA70)
#define CLASS_1_51E717F5803619DA__CTOR_OFFSET UNITYSDK_OFFSET(0x11A3F600)
#define CLASS_1_51E717F5803619DA___ASYNCREQUESTGETMOSTPARTICIPATEDAVATARS_B__8_0_OFFSET UNITYSDK_OFFSET(0x11A41160)

inline static constexpr unsigned int Class_1_51E717F5803619DA_TypeDefinitionIndex = 69378;

class Class_1_51E717F5803619DA : public ::System::Object
{
public:
	::RPG::Client::Promises::Promise_1<::System::Collections::Generic::List_1<::System::UInt32>*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51E717F5803619DA__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51E717F5803619DA_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_4DFC671A734A6182(::System::Boolean a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_51E717F5803619DA_METHOD_1_4DFC671A734A6182_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::ChapterRecordUiData>* Method_1_D90CF441A613C3B9(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::ChapterRecordUiData>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_51E717F5803619DA_METHOD_1_D90CF441A613C3B9_OFFSET))(this, a1);
	}

	::System::Void Method_1_D1E947906C1C3A1C(::System::Boolean a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::ChapterRecordUiData>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::ChapterRecordUiData>*))((::PBYTE)hIl2Cpp + CLASS_1_51E717F5803619DA_METHOD_1_D1E947906C1C3A1C_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51E717F5803619DA_METHOD_1_4DA6D4A624E42CAB_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>* Method_1_42503661EFA7258E(::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::ChapterRecordUiData>* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::ChapterRecordUiData>*))((::PBYTE)hIl2Cpp + CLASS_1_51E717F5803619DA_METHOD_1_42503661EFA7258E_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::System::UInt32>*>* Method_1_52877D3601BD0D02()
	{
		return ((::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::System::UInt32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51E717F5803619DA_METHOD_1_52877D3601BD0D02_OFFSET))(this);
	}

	::System::Void Method_1_71007C9221A664CD(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_51E717F5803619DA_METHOD_1_71007C9221A664CD_OFFSET))(this, a1, a2);
	}

	::System::Void __AsyncRequestGetMostParticipatedAvatars_b__8_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51E717F5803619DA___ASYNCREQUESTGETMOSTPARTICIPATEDAVATARS_B__8_0_OFFSET))(this);
	}
};
