#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/B51RacingContentType.h"
#include "unitysdk/System/Object.h"

class Class_1_115297B50AB60A5D_3;
class Class_1_97E659ED8D5D259C_24;

#define CLASS_1_A952181C6CF1F2FF_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0xB404F80)
#define CLASS_1_A952181C6CF1F2FF_GET_DAY_OFFSET UNITYSDK_OFFSET(0xB404F60)
#define CLASS_1_A952181C6CF1F2FF_GET_DEVELOPMENT_OFFSET UNITYSDK_OFFSET(0xB404FC0)
#define CLASS_1_A952181C6CF1F2FF_GET_MATCH_OFFSET UNITYSDK_OFFSET(0xB404FA0)
#define CLASS_1_A952181C6CF1F2FF_SET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0xB404F90)
#define CLASS_1_A952181C6CF1F2FF_SET_DAY_OFFSET UNITYSDK_OFFSET(0xB404F70)
#define CLASS_1_A952181C6CF1F2FF_SET_DEVELOPMENT_OFFSET UNITYSDK_OFFSET(0xB404FD0)
#define CLASS_1_A952181C6CF1F2FF_SET_MATCH_OFFSET UNITYSDK_OFFSET(0xB404FB0)
#define CLASS_1_A952181C6CF1F2FF__CTOR_OFFSET UNITYSDK_OFFSET(0xB404FE0)

inline static constexpr unsigned int Class_1_A952181C6CF1F2FF_TypeDefinitionIndex = 81662;

class Class_1_A952181C6CF1F2FF : public ::System::Object
{
public:
	::Class_1_97E659ED8D5D259C_24* _Match_k__BackingField; // 0x10
	::Class_1_115297B50AB60A5D_3* _Development_k__BackingField; // 0x18
	::System::UInt32 _Day_k__BackingField; // 0x20
	::RPG::GameCore::B51RacingContentType _ContentType_k__BackingField; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A952181C6CF1F2FF__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_Day()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A952181C6CF1F2FF_GET_DAY_OFFSET))(this);
	}

	::System::Void set_Day(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A952181C6CF1F2FF_SET_DAY_OFFSET))(this, a1);
	}

	::RPG::GameCore::B51RacingContentType get_ContentType()
	{
		return ((::RPG::GameCore::B51RacingContentType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A952181C6CF1F2FF_GET_CONTENTTYPE_OFFSET))(this);
	}

	::System::Void set_ContentType(::RPG::GameCore::B51RacingContentType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::B51RacingContentType))((::PBYTE)hIl2Cpp + CLASS_1_A952181C6CF1F2FF_SET_CONTENTTYPE_OFFSET))(this, a1);
	}

	::Class_1_97E659ED8D5D259C_24* get_Match()
	{
		return ((::Class_1_97E659ED8D5D259C_24*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A952181C6CF1F2FF_GET_MATCH_OFFSET))(this);
	}

	::System::Void set_Match(::Class_1_97E659ED8D5D259C_24* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_97E659ED8D5D259C_24*))((::PBYTE)hIl2Cpp + CLASS_1_A952181C6CF1F2FF_SET_MATCH_OFFSET))(this, a1);
	}

	::Class_1_115297B50AB60A5D_3* get_Development()
	{
		return ((::Class_1_115297B50AB60A5D_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A952181C6CF1F2FF_GET_DEVELOPMENT_OFFSET))(this);
	}

	::System::Void set_Development(::Class_1_115297B50AB60A5D_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_115297B50AB60A5D_3*))((::PBYTE)hIl2Cpp + CLASS_1_A952181C6CF1F2FF_SET_DEVELOPMENT_OFFSET))(this, a1);
	}
};
