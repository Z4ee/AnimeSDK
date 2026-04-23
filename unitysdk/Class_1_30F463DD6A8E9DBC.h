#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::OpenWorld { class PVSRuntimeReplayCaseData; }
namespace RPG::Client::OpenWorld { class PVSRuntimeReplayResultData; }
namespace System { class String; }

#define CLASS_1_30F463DD6A8E9DBC_METHOD_1_05E10F4A3388E492_1_OFFSET UNITYSDK_OFFSET(0x12A5ADA0)
#define CLASS_1_30F463DD6A8E9DBC_METHOD_1_05E10F4A3388E492_OFFSET UNITYSDK_OFFSET(0x12A5AC50)
#define CLASS_1_30F463DD6A8E9DBC_METHOD_1_2F996FD8685BA4BF_OFFSET UNITYSDK_OFFSET(0x12A5AE40)
#define CLASS_1_30F463DD6A8E9DBC_METHOD_1_3636AD6AA93C38EE_OFFSET UNITYSDK_OFFSET(0x12A5B200)
#define CLASS_1_30F463DD6A8E9DBC_METHOD_1_5F6B810599209F95_OFFSET UNITYSDK_OFFSET(0x12A5B490)
#define CLASS_1_30F463DD6A8E9DBC_METHOD_1_7C2DB059ED66F5FD_OFFSET UNITYSDK_OFFSET(0x12A5AF90)
#define CLASS_1_30F463DD6A8E9DBC_METHOD_1_EACF710F6ADE4D40_OFFSET UNITYSDK_OFFSET(0x12A5ACF0)

inline static constexpr unsigned int Class_1_30F463DD6A8E9DBC_TypeDefinitionIndex = 67902;

class Class_1_30F463DD6A8E9DBC : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_1; // 0x0

	static ::System::String* Method_1_05E10F4A3388E492(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_30F463DD6A8E9DBC_METHOD_1_05E10F4A3388E492_OFFSET))(a1);
	}

	static ::System::String* Method_1_05E10F4A3388E492_1(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_30F463DD6A8E9DBC_METHOD_1_05E10F4A3388E492_1_OFFSET))(a1);
	}

	static ::System::String* Method_1_2F996FD8685BA4BF(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_30F463DD6A8E9DBC_METHOD_1_2F996FD8685BA4BF_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_7C2DB059ED66F5FD(::System::String* a1, ::RPG::Client::OpenWorld::PVSRuntimeReplayCaseData*& a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::RPG::Client::OpenWorld::PVSRuntimeReplayCaseData*&))((::PBYTE)hIl2Cpp + CLASS_1_30F463DD6A8E9DBC_METHOD_1_7C2DB059ED66F5FD_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_3636AD6AA93C38EE(::RPG::Client::OpenWorld::PVSRuntimeReplayCaseData* a1, ::System::String*& a2, ::System::String*& a3)
	{
		return ((::System::Boolean(*)(::RPG::Client::OpenWorld::PVSRuntimeReplayCaseData*, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_30F463DD6A8E9DBC_METHOD_1_3636AD6AA93C38EE_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_5F6B810599209F95(::RPG::Client::OpenWorld::PVSRuntimeReplayResultData* a1, ::System::String*& a2, ::System::String*& a3)
	{
		return ((::System::Boolean(*)(::RPG::Client::OpenWorld::PVSRuntimeReplayResultData*, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_30F463DD6A8E9DBC_METHOD_1_5F6B810599209F95_OFFSET))(a1, a2, a3);
	}

	static ::System::String* Method_1_EACF710F6ADE4D40(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_30F463DD6A8E9DBC_METHOD_1_EACF710F6ADE4D40_OFFSET))(a1);
	}
};
