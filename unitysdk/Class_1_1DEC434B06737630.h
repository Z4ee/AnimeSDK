#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::OpenWorld { class PVSRuntimeReplayCaseData; }
namespace RPG::Client::OpenWorld { class PVSRuntimeReplayRawExportCheck; }
namespace RPG::Client::OpenWorld { class PVSRuntimeReplayResultData; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_1DEC434B06737630_GET_ACTIVECASE_OFFSET UNITYSDK_OFFSET(0xAA86DD0)
#define CLASS_1_1DEC434B06737630_GET_ACTIVERESULT_OFFSET UNITYSDK_OFFSET(0xAA86E50)
#define CLASS_1_1DEC434B06737630_METHOD_1_100F2E4AA955C286_OFFSET UNITYSDK_OFFSET(0xAA86F80)
#define CLASS_1_1DEC434B06737630_METHOD_1_84235F28252CD967_OFFSET UNITYSDK_OFFSET(0xAA87880)
#define CLASS_1_1DEC434B06737630_METHOD_1_855845B970DFCAAA_OFFSET UNITYSDK_OFFSET(0xAA873D0)
#define CLASS_1_1DEC434B06737630_METHOD_1_86026B47A3027B67_OFFSET UNITYSDK_OFFSET(0xAA86ED0)
#define CLASS_1_1DEC434B06737630_METHOD_1_D4624AB8B2D51310_OFFSET UNITYSDK_OFFSET(0xAA87560)
#define CLASS_1_1DEC434B06737630_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0xAA87310)
#define CLASS_1_1DEC434B06737630_SET_ACTIVECASE_OFFSET UNITYSDK_OFFSET(0xAA86E10)
#define CLASS_1_1DEC434B06737630_SET_ACTIVERESULT_OFFSET UNITYSDK_OFFSET(0xAA86E90)

inline static constexpr unsigned int Class_1_1DEC434B06737630_TypeDefinitionIndex = 67903;

class Class_1_1DEC434B06737630 : public ::System::Object
{
public:
	static ::RPG::Client::OpenWorld::PVSRuntimeReplayResultData** StaticGet__ActiveResult_k__BackingField()
	{
		return (::RPG::Client::OpenWorld::PVSRuntimeReplayResultData**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1DEC434B06737630_TypeDefinitionIndex)->GetStaticField(0x6B560);
	}
	static ::RPG::Client::OpenWorld::PVSRuntimeReplayCaseData** StaticGet__ActiveCase_k__BackingField()
	{
		return (::RPG::Client::OpenWorld::PVSRuntimeReplayCaseData**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1DEC434B06737630_TypeDefinitionIndex)->GetStaticField(0x6B568);
	}

	static ::RPG::Client::OpenWorld::PVSRuntimeReplayCaseData* get_ActiveCase()
	{
		return ((::RPG::Client::OpenWorld::PVSRuntimeReplayCaseData*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1DEC434B06737630_GET_ACTIVECASE_OFFSET))();
	}

	static ::System::Void set_ActiveCase(::RPG::Client::OpenWorld::PVSRuntimeReplayCaseData* value)
	{
		return ((::System::Void(*)(::RPG::Client::OpenWorld::PVSRuntimeReplayCaseData*))((::PBYTE)hIl2Cpp + CLASS_1_1DEC434B06737630_SET_ACTIVECASE_OFFSET))(value);
	}

	static ::RPG::Client::OpenWorld::PVSRuntimeReplayResultData* get_ActiveResult()
	{
		return ((::RPG::Client::OpenWorld::PVSRuntimeReplayResultData*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1DEC434B06737630_GET_ACTIVERESULT_OFFSET))();
	}

	static ::System::Void set_ActiveResult(::RPG::Client::OpenWorld::PVSRuntimeReplayResultData* value)
	{
		return ((::System::Void(*)(::RPG::Client::OpenWorld::PVSRuntimeReplayResultData*))((::PBYTE)hIl2Cpp + CLASS_1_1DEC434B06737630_SET_ACTIVERESULT_OFFSET))(value);
	}

	static ::System::Boolean Method_1_86026B47A3027B67()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_1DEC434B06737630_METHOD_1_86026B47A3027B67_OFFSET))();
	}

	static ::System::Void Method_1_100F2E4AA955C286(::RPG::Client::OpenWorld::PVSRuntimeReplayCaseData* a1)
	{
		return ((::System::Void(*)(::RPG::Client::OpenWorld::PVSRuntimeReplayCaseData*))((::PBYTE)hIl2Cpp + CLASS_1_1DEC434B06737630_METHOD_1_100F2E4AA955C286_OFFSET))(a1);
	}

	static ::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1DEC434B06737630_METHOD_1_F730968E2645E14B_OFFSET))();
	}

	static ::System::Boolean Method_1_855845B970DFCAAA(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1DEC434B06737630_METHOD_1_855845B970DFCAAA_OFFSET))(a1);
	}

	static ::System::Void Method_1_D4624AB8B2D51310(::System::String* a1, ::System::Boolean a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1DEC434B06737630_METHOD_1_D4624AB8B2D51310_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_84235F28252CD967(::System::Action_1<::RPG::Client::OpenWorld::PVSRuntimeReplayRawExportCheck*>* a1)
	{
		return ((::System::Void(*)(::System::Action_1<::RPG::Client::OpenWorld::PVSRuntimeReplayRawExportCheck*>*))((::PBYTE)hIl2Cpp + CLASS_1_1DEC434B06737630_METHOD_1_84235F28252CD967_OFFSET))(a1);
	}
};
