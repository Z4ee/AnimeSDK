#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

#define CLASS_2_097BB9EA6BACB782_1_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x162C48F0)
#define CLASS_2_097BB9EA6BACB782_1_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x162C48A0)
#define CLASS_2_097BB9EA6BACB782_1_METHOD_2_9E8EF381BFF1D388_OFFSET UNITYSDK_OFFSET(0x162C4840)
#define CLASS_2_097BB9EA6BACB782_1__CTOR_OFFSET UNITYSDK_OFFSET(0x162C4940)

inline static constexpr unsigned int Class_2_097BB9EA6BACB782_1_TypeDefinitionIndex = 57022;

class Class_2_097BB9EA6BACB782_1 : public ::Class_1_BF7A075734D15E98
{
public:
	::RPG::GameCore::FixPoint AJHHCOHFIFA; // 0x18
	::RPG::GameCore::FixPoint KHBBNDBJAFK; // 0x20

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
