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

#define CLASS_1_C111985823ED1A98_DISPOSE_OFFSET UNITYSDK_OFFSET(0x145A8D60)
#define CLASS_1_C111985823ED1A98_METHOD_1_0A33F82BD72BC622_OFFSET UNITYSDK_OFFSET(0x145A9030)
#define CLASS_1_C111985823ED1A98_METHOD_1_0F30679B05E70FC1_OFFSET UNITYSDK_OFFSET(0x145A9490)
#define CLASS_1_C111985823ED1A98_METHOD_1_242E861C22A24AF8_OFFSET UNITYSDK_OFFSET(0x145A9970)
#define CLASS_1_C111985823ED1A98_METHOD_1_460F8AE6EF9687FD_OFFSET UNITYSDK_OFFSET(0x145A9550)
#define CLASS_1_C111985823ED1A98_METHOD_1_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0x145A96C0)
#define CLASS_1_C111985823ED1A98_METHOD_1_7B7D6BD6F55BCF32_OFFSET UNITYSDK_OFFSET(0x145A9CC0)
#define CLASS_1_C111985823ED1A98_METHOD_1_7C41A79FCDF3C4D8_OFFSET UNITYSDK_OFFSET(0x145AA1D0)
#define CLASS_1_C111985823ED1A98_METHOD_1_858867D5D29B5F72_OFFSET UNITYSDK_OFFSET(0x145A9400)
#define CLASS_1_C111985823ED1A98_METHOD_1_96BDC4B57CCFE000_OFFSET UNITYSDK_OFFSET(0x145AA030)
#define CLASS_1_C111985823ED1A98_METHOD_1_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x145A9190)
#define CLASS_1_C111985823ED1A98_METHOD_1_DAE67D4DC8B67113_OFFSET UNITYSDK_OFFSET(0x145A9E80)
#define CLASS_1_C111985823ED1A98_METHOD_1_F390A81E071CC72C_OFFSET UNITYSDK_OFFSET(0x145A98F0)
#define CLASS_1_C111985823ED1A98_METHOD_1_F3DC69CDF2DF8EF5_OFFSET UNITYSDK_OFFSET(0x145A9130)
#define CLASS_1_C111985823ED1A98_TICK_OFFSET UNITYSDK_OFFSET(0x145A8FC0)
#define CLASS_1_C111985823ED1A98__CTOR_OFFSET UNITYSDK_OFFSET(0x145A8CD0)

inline static constexpr unsigned int Class_1_C111985823ED1A98_TypeDefinitionIndex = 56726;

class Class_1_C111985823ED1A98 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_1; // 0x0
	::RPG::GameCore::TaskContext* Field_1_2; // 0x10
	::System::Collections::Generic::List_1<::RPG::GameCore::OptionTalkInfo*>* Field_1_3; // 0x18
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_4; // 0x20
	::RPG::GameCore::SelectMissionItem* Field_1_5; // 0x28
	::Class_1_059915F1CFEF189E* Field_1_6; // 0x30
	::RPG::Client::TalkDebateUIControlData* Field_1_7; // 0x38
	::Class_1_F3391C70DC37088D* Field_1_8; // 0x40
	::RPG::GameCore::DebateTestimonySetting* Field_1_9; // 0x48
	::System::Boolean Field_1_10; // 0x50

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

	::System::Void Method_1_0A33F82BD72BC622()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C111985823ED1A98_METHOD_1_0A33F82BD72BC622_OFFSET))(this);
	}

	::System::Void Method_1_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C111985823ED1A98_METHOD_1_AAD864A9DF964170_OFFSET))(this);
	}

	::System::Boolean Method_1_0F30679B05E70FC1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C111985823ED1A98_METHOD_1_0F30679B05E70FC1_OFFSET))(this);
	}

	::System::Void Method_1_460F8AE6EF9687FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C111985823ED1A98_METHOD_1_460F8AE6EF9687FD_OFFSET))(this);
	}

	::System::Void Method_1_4EA6B1791DACA9CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C111985823ED1A98_METHOD_1_4EA6B1791DACA9CC_OFFSET))(this);
	}

	::System::Void Method_1_7B7D6BD6F55BCF32(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C111985823ED1A98_METHOD_1_7B7D6BD6F55BCF32_OFFSET))(this, a1);
	}

	::System::Void Method_1_DAE67D4DC8B67113(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C111985823ED1A98_METHOD_1_DAE67D4DC8B67113_OFFSET))(this, a1);
	}

	::System::Void Method_1_96BDC4B57CCFE000(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C111985823ED1A98_METHOD_1_96BDC4B57CCFE000_OFFSET))(this, a1);
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
