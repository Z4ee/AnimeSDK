#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveDanmuContentData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveImageContentData; }
namespace RPG::GameCore { class IdleLiveImgDanmuRow; }

#define CLASS_1_7B630EA0921A5074_GET_INTERVAL_OFFSET UNITYSDK_OFFSET(0x9147BC0)
#define CLASS_1_7B630EA0921A5074_GET_ISENDED_OFFSET UNITYSDK_OFFSET(0x9147BE0)
#define CLASS_1_7B630EA0921A5074_METHOD_1_426B9594CB3A4D9F_OFFSET UNITYSDK_OFFSET(0x9147E90)
#define CLASS_1_7B630EA0921A5074_METHOD_1_A631C7EB7F64062E_OFFSET UNITYSDK_OFFSET(0x9147DB0)
#define CLASS_1_7B630EA0921A5074_METHOD_1_FDB878EE730B6AA4_OFFSET UNITYSDK_OFFSET(0x9147C00)
#define CLASS_1_7B630EA0921A5074_SET_INTERVAL_OFFSET UNITYSDK_OFFSET(0x9147BD0)
#define CLASS_1_7B630EA0921A5074_SET_ISENDED_OFFSET UNITYSDK_OFFSET(0x9147BF0)
#define CLASS_1_7B630EA0921A5074__CTOR_OFFSET UNITYSDK_OFFSET(0x9147D50)

inline static constexpr unsigned int Class_1_7B630EA0921A5074_TypeDefinitionIndex = 69407;

class Class_1_7B630EA0921A5074 : public ::System::Object
{
public:
	::RPG::Client::ActivityIdleLive::IdleLiveImageContentData* Field_1_2; // 0x10
	::System::Single Field_1_5; // 0x18
	::System::Boolean _IsEnded_k__BackingField; // 0x1C
	::System::UInt32 Field_1_7; // 0x20
	::System::Single Field_1_4; // 0x24
	::System::UInt32 Field_1_6; // 0x28
	::System::UInt32 Field_1_3; // 0x2C
	::System::Single _Interval_k__BackingField; // 0x30

	::System::Void _ctor(::RPG::GameCore::IdleLiveImgDanmuRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveImgDanmuRow*))((::PBYTE)hIl2Cpp + CLASS_1_7B630EA0921A5074__CTOR_OFFSET))(this, a1);
	}

	::System::Single get_Interval()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B630EA0921A5074_GET_INTERVAL_OFFSET))(this);
	}

	::System::Void set_Interval(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7B630EA0921A5074_SET_INTERVAL_OFFSET))(this, value);
	}

	::System::Boolean get_IsEnded()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B630EA0921A5074_GET_ISENDED_OFFSET))(this);
	}

	::System::Void set_IsEnded(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7B630EA0921A5074_SET_ISENDED_OFFSET))(this, value);
	}

	static ::Class_1_7B630EA0921A5074* Method_1_FDB878EE730B6AA4(::System::UInt32 a1)
	{
		return ((::Class_1_7B630EA0921A5074*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7B630EA0921A5074_METHOD_1_FDB878EE730B6AA4_OFFSET))(a1);
	}

	::RPG::Client::ActivityIdleLive::IdleLiveDanmuContentData* Method_1_426B9594CB3A4D9F()
	{
		return ((::RPG::Client::ActivityIdleLive::IdleLiveDanmuContentData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B630EA0921A5074_METHOD_1_426B9594CB3A4D9F_OFFSET))(this);
	}

	::System::Void Method_1_A631C7EB7F64062E(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7B630EA0921A5074_METHOD_1_A631C7EB7F64062E_OFFSET))(this, a1);
	}
};
