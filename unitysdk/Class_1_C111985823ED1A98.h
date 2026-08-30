#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_059915F1CFEF189E;
class Class_1_F3391C70DC37088D;
namespace RPG::Client { class TalkDebateUIControlData; }
namespace RPG::GameCore { class DebateTestimonySetting; }
namespace RPG::GameCore { class OptionTalkInfo; }
namespace RPG::GameCore { class SelectMissionItem; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C111985823ED1A98_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB62FEE0)
#define CLASS_1_C111985823ED1A98_METHOD_1_0F30679B05E70FC1_OFFSET UNITYSDK_OFFSET(0xB630630)
#define CLASS_1_C111985823ED1A98_METHOD_1_218124418542E081_OFFSET UNITYSDK_OFFSET(0xB6306F0)
#define CLASS_1_C111985823ED1A98_METHOD_1_242E861C22A24AF8_OFFSET UNITYSDK_OFFSET(0xB630B80)
#define CLASS_1_C111985823ED1A98_METHOD_1_3CAD92CFB876DBF6_OFFSET UNITYSDK_OFFSET(0xB630160)
#define CLASS_1_C111985823ED1A98_METHOD_1_5176DC743E478510_OFFSET UNITYSDK_OFFSET(0xB630860)
#define CLASS_1_C111985823ED1A98_METHOD_1_66746A96792CE392_OFFSET UNITYSDK_OFFSET(0xB631240)
#define CLASS_1_C111985823ED1A98_METHOD_1_7B7D6BD6F55BCF32_OFFSET UNITYSDK_OFFSET(0xB630ED0)
#define CLASS_1_C111985823ED1A98_METHOD_1_7C41A79FCDF3C4D8_OFFSET UNITYSDK_OFFSET(0xB631460)
#define CLASS_1_C111985823ED1A98_METHOD_1_858867D5D29B5F72_OFFSET UNITYSDK_OFFSET(0xB6305A0)
#define CLASS_1_C111985823ED1A98_METHOD_1_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0xB630330)
#define CLASS_1_C111985823ED1A98_METHOD_1_DAE67D4DC8B67113_OFFSET UNITYSDK_OFFSET(0xB631090)
#define CLASS_1_C111985823ED1A98_METHOD_1_F390A81E071CC72C_OFFSET UNITYSDK_OFFSET(0xB630B00)
#define CLASS_1_C111985823ED1A98_METHOD_1_F3DC69CDF2DF8EF5_OFFSET UNITYSDK_OFFSET(0xB6302D0)
#define CLASS_1_C111985823ED1A98_TICK_OFFSET UNITYSDK_OFFSET(0xB6300F0)
#define CLASS_1_C111985823ED1A98__CTOR_OFFSET UNITYSDK_OFFSET(0xB62FE50)

inline static constexpr unsigned int Class_1_C111985823ED1A98_TypeDefinitionIndex = 60793;

class Class_1_C111985823ED1A98 : public ::System::Object
{
public:
	// static const ::System::String* NDODDFDNBOO; // 0x0
	// static const ::System::String* FJBLBIIPDJK; // 0x0
	::RPG::Client::TalkDebateUIControlData* JPCPACEEIIA; // 0x10
	::RPG::GameCore::SelectMissionItem* MKMOICHFCGH; // 0x18
	::RPG::GameCore::DebateTestimonySetting* IGHAHBNLIJA; // 0x20
	::System::Collections::Generic::HashSet_1<::System::UInt32>* HNMOJBHHDCB; // 0x28
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
	::System::Collections::Generic::List_1<::RPG::GameCore::OptionTalkInfo*>* ODCFPDHDKNB; // 0x38
	::Class_1_F3391C70DC37088D* DDDLPDOKLMO; // 0x40
	::Class_1_059915F1CFEF189E* POMDJKCJGON; // 0x48
	::System::Boolean JAFJBPGEJAF; // 0x50

	::System::Void _ctor(::RPG::GameCore::DebateTestimonySetting* a1, ::RPG::GameCore::TaskContext* a2, ::Class_1_059915F1CFEF189E* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DebateTestimonySetting*, ::RPG::GameCore::TaskContext*, ::Class_1_059915F1CFEF189E*))((::PBYTE)hIl2Cpp + CLASS_1_C111985823ED1A98__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C111985823ED1A98_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C111985823ED1A98_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_1_3CAD92CFB876DBF6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C111985823ED1A98_METHOD_1_3CAD92CFB876DBF6_OFFSET))(this);
	}

	::System::Void Method_1_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C111985823ED1A98_METHOD_1_AAD864A9DF964170_OFFSET))(this);
	}

	::System::Boolean Method_1_0F30679B05E70FC1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C111985823ED1A98_METHOD_1_0F30679B05E70FC1_OFFSET))(this);
	}

	::System::Void Method_1_218124418542E081()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C111985823ED1A98_METHOD_1_218124418542E081_OFFSET))(this);
	}

	::System::Void Method_1_5176DC743E478510()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C111985823ED1A98_METHOD_1_5176DC743E478510_OFFSET))(this);
	}

	::System::Void Method_1_7B7D6BD6F55BCF32(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C111985823ED1A98_METHOD_1_7B7D6BD6F55BCF32_OFFSET))(this, a1);
	}

	::System::Void Method_1_DAE67D4DC8B67113(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C111985823ED1A98_METHOD_1_DAE67D4DC8B67113_OFFSET))(this, a1);
	}

	::System::Void Method_1_66746A96792CE392(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C111985823ED1A98_METHOD_1_66746A96792CE392_OFFSET))(this, a1);
	}

	::RPG::GameCore::SelectMissionItem* Method_1_858867D5D29B5F72()
	{
		return ((::RPG::GameCore::SelectMissionItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C111985823ED1A98_METHOD_1_858867D5D29B5F72_OFFSET))(this);
	}

	::RPG::GameCore::SelectMissionItem* Method_1_7C41A79FCDF3C4D8()
	{
		return ((::RPG::GameCore::SelectMissionItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C111985823ED1A98_METHOD_1_7C41A79FCDF3C4D8_OFFSET))(this);
	}

	::RPG::Client::TalkDebateUIControlData* Method_1_F390A81E071CC72C()
	{
		return ((::RPG::Client::TalkDebateUIControlData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C111985823ED1A98_METHOD_1_F390A81E071CC72C_OFFSET))(this);
	}

	::RPG::Client::TalkDebateUIControlData* Method_1_F3DC69CDF2DF8EF5()
	{
		return ((::RPG::Client::TalkDebateUIControlData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C111985823ED1A98_METHOD_1_F3DC69CDF2DF8EF5_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::OptionTalkInfo*>* Method_1_242E861C22A24AF8()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::OptionTalkInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C111985823ED1A98_METHOD_1_242E861C22A24AF8_OFFSET))(this);
	}
};
