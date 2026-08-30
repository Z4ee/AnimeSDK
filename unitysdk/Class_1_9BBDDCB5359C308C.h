#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_925886ED8B0F22DC;
namespace RPG::GameCore { class AnimParamRangeEntry; }
namespace System { class String; }

#define CLASS_1_9BBDDCB5359C308C_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC44CAA0)
#define CLASS_1_9BBDDCB5359C308C__CTOR_OFFSET UNITYSDK_OFFSET(0xC44CAF0)

inline static constexpr unsigned int Class_1_9BBDDCB5359C308C_TypeDefinitionIndex = 56055;

class Class_1_9BBDDCB5359C308C : public ::System::Object
{
public:
	::RPG::GameCore::AnimParamRangeEntry* OPNIHKDKFAB; // 0x10
	::Class_3_925886ED8B0F22DC* NGEALADFOOA; // 0x18
	::System::String* AOFHKOFDKDP; // 0x20
	::System::Boolean LBKPCHOICLE; // 0x28
	::System::Boolean LKEOOOCDJOK; // 0x29
	::System::Single GFCFHLJEHMC; // 0x2C
	::System::Int32 IFLMLBNGHHE; // 0x30
	::System::Boolean IOBJFEJFLJP; // 0x34
	::System::Boolean ACIFMOBGGBF; // 0x35
	::System::Boolean ANGACHKEMLG; // 0x36
	::System::Boolean FMCDBCBAAEF; // 0x37

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BBDDCB5359C308C__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BBDDCB5359C308C_DISPOSE_OFFSET))(this);
	}
};
