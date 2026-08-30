#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::OpenWorld { class PVSRuntimeReplayCaseData; }
namespace RPG::Client::OpenWorld { class PVSRuntimeReplayRawExportCheck; }
namespace RPG::Client::OpenWorld { class PVSRuntimeReplayResultData; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_70A99889D378ECCA_GET_ACTIVECASE_OFFSET UNITYSDK_OFFSET(0x1A010250)
#define CLASS_1_70A99889D378ECCA_GET_ACTIVERESULT_OFFSET UNITYSDK_OFFSET(0x1A010270)
#define CLASS_1_70A99889D378ECCA_METHOD_1_4DE3CD551E4E5593_OFFSET UNITYSDK_OFFSET(0x1A0109B0)
#define CLASS_1_70A99889D378ECCA_METHOD_1_55F5CE9943F18C6E_OFFSET UNITYSDK_OFFSET(0x1A0106E0)
#define CLASS_1_70A99889D378ECCA_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x1A0105C0)
#define CLASS_1_70A99889D378ECCA_METHOD_1_7EFC5B3052788135_OFFSET UNITYSDK_OFFSET(0x1A0102F0)
#define CLASS_1_70A99889D378ECCA_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1A010290)
#define CLASS_1_70A99889D378ECCA_METHOD_1_CF3FF89BC7293141_OFFSET UNITYSDK_OFFSET(0x1A010610)
#define CLASS_1_70A99889D378ECCA_SET_ACTIVECASE_OFFSET UNITYSDK_OFFSET(0x1A010260)
#define CLASS_1_70A99889D378ECCA_SET_ACTIVERESULT_OFFSET UNITYSDK_OFFSET(0x1A010280)

inline static constexpr unsigned int Class_1_70A99889D378ECCA_TypeDefinitionIndex = 73662;

class Class_1_70A99889D378ECCA : public ::System::Object
{
public:
	static ::RPG::Client::OpenWorld::PVSRuntimeReplayResultData** StaticGet__ActiveResult_k__BackingField()
	{
		return (::RPG::Client::OpenWorld::PVSRuntimeReplayResultData**)Il2CppClass::FromTypeDefinitionIndex(Class_1_70A99889D378ECCA_TypeDefinitionIndex)->GetStaticField(0x659D0);
	}
	static ::RPG::Client::OpenWorld::PVSRuntimeReplayCaseData** StaticGet__ActiveCase_k__BackingField()
	{
		return (::RPG::Client::OpenWorld::PVSRuntimeReplayCaseData**)Il2CppClass::FromTypeDefinitionIndex(Class_1_70A99889D378ECCA_TypeDefinitionIndex)->GetStaticField(0x659D8);
	}

	static ::RPG::Client::OpenWorld::PVSRuntimeReplayCaseData* get_ActiveCase()
	{
		return ((::RPG::Client::OpenWorld::PVSRuntimeReplayCaseData*(*)())((::PBYTE)hIl2Cpp + CLASS_1_70A99889D378ECCA_GET_ACTIVECASE_OFFSET))();
	}

	static ::System::Void set_ActiveCase(::RPG::Client::OpenWorld::PVSRuntimeReplayCaseData* a1)
	{
		return ((::System::Void(*)(::RPG::Client::OpenWorld::PVSRuntimeReplayCaseData*))((::PBYTE)hIl2Cpp + CLASS_1_70A99889D378ECCA_SET_ACTIVECASE_OFFSET))(a1);
	}

	static ::RPG::Client::OpenWorld::PVSRuntimeReplayResultData* get_ActiveResult()
	{
		return ((::RPG::Client::OpenWorld::PVSRuntimeReplayResultData*(*)())((::PBYTE)hIl2Cpp + CLASS_1_70A99889D378ECCA_GET_ACTIVERESULT_OFFSET))();
	}

	static ::System::Void set_ActiveResult(::RPG::Client::OpenWorld::PVSRuntimeReplayResultData* a1)
	{
		return ((::System::Void(*)(::RPG::Client::OpenWorld::PVSRuntimeReplayResultData*))((::PBYTE)hIl2Cpp + CLASS_1_70A99889D378ECCA_SET_ACTIVERESULT_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_70A99889D378ECCA_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::System::Void Method_1_7EFC5B3052788135(::RPG::Client::OpenWorld::PVSRuntimeReplayCaseData* a1)
	{
		return ((::System::Void(*)(::RPG::Client::OpenWorld::PVSRuntimeReplayCaseData*))((::PBYTE)hIl2Cpp + CLASS_1_70A99889D378ECCA_METHOD_1_7EFC5B3052788135_OFFSET))(a1);
	}

	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_70A99889D378ECCA_METHOD_1_5790A55946AA509D_OFFSET))();
	}

	static ::System::Boolean Method_1_CF3FF89BC7293141(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_70A99889D378ECCA_METHOD_1_CF3FF89BC7293141_OFFSET))(a1);
	}

	static ::System::Void Method_1_55F5CE9943F18C6E(::System::String* a1, ::System::Boolean a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_70A99889D378ECCA_METHOD_1_55F5CE9943F18C6E_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_4DE3CD551E4E5593(::System::Action_1<::RPG::Client::OpenWorld::PVSRuntimeReplayRawExportCheck*>* a1)
	{
		return ((::System::Void(*)(::System::Action_1<::RPG::Client::OpenWorld::PVSRuntimeReplayRawExportCheck*>*))((::PBYTE)hIl2Cpp + CLASS_1_70A99889D378ECCA_METHOD_1_4DE3CD551E4E5593_OFFSET))(a1);
	}
};
