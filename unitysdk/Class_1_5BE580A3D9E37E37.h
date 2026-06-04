#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/ChapterRecordUiData.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5BE580A3D9E37E37_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1449B5B0)
#define CLASS_1_5BE580A3D9E37E37_METHOD_1_3DA8CCF1E3141248_OFFSET UNITYSDK_OFFSET(0x1449C290)
#define CLASS_1_5BE580A3D9E37E37_METHOD_1_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0x1449D0E0)
#define CLASS_1_5BE580A3D9E37E37_METHOD_1_4DFC671A734A6182_OFFSET UNITYSDK_OFFSET(0x1449B670)
#define CLASS_1_5BE580A3D9E37E37_METHOD_1_71007C9221A664CD_OFFSET UNITYSDK_OFFSET(0x1449D190)
#define CLASS_1_5BE580A3D9E37E37_METHOD_1_C086ECC08DF87ED7_OFFSET UNITYSDK_OFFSET(0x1449BA40)
#define CLASS_1_5BE580A3D9E37E37_METHOD_1_E14732238C1129B6_OFFSET UNITYSDK_OFFSET(0x1449B7D0)
#define CLASS_1_5BE580A3D9E37E37_METHOD_1_EB34BC3A82494D17_OFFSET UNITYSDK_OFFSET(0x1449CA50)
#define CLASS_1_5BE580A3D9E37E37__CTOR_OFFSET UNITYSDK_OFFSET(0x1449B520)
#define CLASS_1_5BE580A3D9E37E37___ASYNCREQUESTGETMOSTPARTICIPATEDAVATARS_B__8_0_OFFSET UNITYSDK_OFFSET(0x1449D2F0)

inline static constexpr unsigned int Class_1_5BE580A3D9E37E37_TypeDefinitionIndex = 70190;

class Class_1_5BE580A3D9E37E37 : public ::System::Object
{
public:
	::RPG::Client::Promises::Promise_1<::System::Collections::Generic::List_1<::System::UInt32>*>* Field_1_0; // 0x10

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

	::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::ChapterRecordUiData>* Method_1_C086ECC08DF87ED7(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::ChapterRecordUiData>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_5BE580A3D9E37E37_METHOD_1_C086ECC08DF87ED7_OFFSET))(this, a1);
	}

	::System::Void Method_1_3DA8CCF1E3141248(::System::Boolean a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::ChapterRecordUiData>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::ChapterRecordUiData>*))((::PBYTE)hIl2Cpp + CLASS_1_5BE580A3D9E37E37_METHOD_1_3DA8CCF1E3141248_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5BE580A3D9E37E37_METHOD_1_4DA6D4A624E42CAB_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>* Method_1_EB34BC3A82494D17(::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::ChapterRecordUiData>* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::ChapterRecordUiData>*))((::PBYTE)hIl2Cpp + CLASS_1_5BE580A3D9E37E37_METHOD_1_EB34BC3A82494D17_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::System::UInt32>*>* Method_1_E14732238C1129B6()
	{
		return ((::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::System::UInt32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5BE580A3D9E37E37_METHOD_1_E14732238C1129B6_OFFSET))(this);
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
