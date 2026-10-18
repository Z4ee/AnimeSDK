#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_642E7BE5523E6A3C;

#define CLASS_1_4C016A402AC989BA_GET_VALIDITYTRACKER_OFFSET UNITYSDK_OFFSET(0x1C50DCF0)
#define CLASS_1_4C016A402AC989BA_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x1C50DD00)
#define CLASS_1_4C016A402AC989BA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C50DF20)

inline static constexpr unsigned int Class_1_4C016A402AC989BA_TypeDefinitionIndex = 41839;

class Class_1_4C016A402AC989BA : public ::System::Object
{
public:
	::Class_2_642E7BE5523E6A3C* _ValidityTracker_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C016A402AC989BA__CTOR_OFFSET))(this);
	}

	::Class_2_642E7BE5523E6A3C* get_ValidityTracker()
	{
		return ((::Class_2_642E7BE5523E6A3C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C016A402AC989BA_GET_VALIDITYTRACKER_OFFSET))(this);
	}

	::System::Boolean Method_1_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C016A402AC989BA_METHOD_1_A3FAE12D7B6ACD62_OFFSET))(this);
	}
};
