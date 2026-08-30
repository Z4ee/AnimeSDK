#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_888;
class Class_1_AE0CA897D782D638;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class BaseGachaPoolData; }

#define CLASS_1_464399BC11DD56B3_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x164C6AE0)
#define CLASS_1_464399BC11DD56B3_METHOD_1_6ED0447A6B466842_OFFSET UNITYSDK_OFFSET(0x164C67B0)
#define CLASS_1_464399BC11DD56B3_METHOD_1_6FA34D4B666F4A90_OFFSET UNITYSDK_OFFSET(0x164C6820)
#define CLASS_1_464399BC11DD56B3_METHOD_1_8754C33A018B7044_OFFSET UNITYSDK_OFFSET(0x164C6B30)
#define CLASS_1_464399BC11DD56B3__CTOR_OFFSET UNITYSDK_OFFSET(0x164C6CE0)

inline static constexpr unsigned int Class_1_464399BC11DD56B3_TypeDefinitionIndex = 65641;

class Class_1_464399BC11DD56B3 : public ::System::Object
{
public:
	::Class_1_AE0CA897D782D638* JAPKCFJEKCH; // 0x10
	::RPG::Client::BaseGachaPoolData* PDCALMBAIHH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_464399BC11DD56B3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6ED0447A6B466842(::RPG::AvatarSystem::IAvatar* a1, ::Class_1_AE0CA897D782D638* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::Class_1_AE0CA897D782D638*))((::PBYTE)hIl2Cpp + CLASS_1_464399BC11DD56B3_METHOD_1_6ED0447A6B466842_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_464399BC11DD56B3_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_888* Method_1_8754C33A018B7044()
	{
		return ((::Class_0_16E4307DCC419505_888*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_464399BC11DD56B3_METHOD_1_8754C33A018B7044_OFFSET))(this);
	}

	::RPG::Client::BaseGachaPoolData* Method_1_6FA34D4B666F4A90(::System::UInt32 a1)
	{
		return ((::RPG::Client::BaseGachaPoolData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_464399BC11DD56B3_METHOD_1_6FA34D4B666F4A90_OFFSET))(this, a1);
	}
};
