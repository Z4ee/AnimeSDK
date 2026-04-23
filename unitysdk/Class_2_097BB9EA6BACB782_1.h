#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

#define CLASS_2_097BB9EA6BACB782_1_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x111A96D0)
#define CLASS_2_097BB9EA6BACB782_1_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x111A9680)
#define CLASS_2_097BB9EA6BACB782_1_METHOD_2_9E8EF381BFF1D388_OFFSET UNITYSDK_OFFSET(0x111A9620)
#define CLASS_2_097BB9EA6BACB782_1__CTOR_OFFSET UNITYSDK_OFFSET(0x111A9720)

inline static constexpr unsigned int Class_2_097BB9EA6BACB782_1_TypeDefinitionIndex = 52390;

class Class_2_097BB9EA6BACB782_1 : public ::Class_1_9988289E7F8AA214
{
public:
	::RPG::GameCore::FixPoint Field_2_1; // 0x18
	::RPG::GameCore::FixPoint Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_097BB9EA6BACB782_1__CTOR_OFFSET))(this);
	}

	::Class_2_097BB9EA6BACB782_1* Method_2_9E8EF381BFF1D388(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::Class_2_097BB9EA6BACB782_1*(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_097BB9EA6BACB782_1_METHOD_2_9E8EF381BFF1D388_OFFSET))(this, a1, a2);
	}

	::System::UInt32 GetSourceRuntimeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_097BB9EA6BACB782_1_GETSOURCERUNTIMEID_OFFSET))(this);
	}

	::RPG::GameCore::EventType GetEventType()
	{
		return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_097BB9EA6BACB782_1_GETEVENTTYPE_OFFSET))(this);
	}
};
