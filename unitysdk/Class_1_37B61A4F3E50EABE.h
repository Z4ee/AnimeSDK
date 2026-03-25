#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class DynamicValueRangeCallback; }

#define CLASS_1_37B61A4F3E50EABE__CTOR_OFFSET UNITYSDK_OFFSET(0xA9AA7F0)

inline static constexpr unsigned int Class_1_37B61A4F3E50EABE_TypeDefinitionIndex = 44750;

class Class_1_37B61A4F3E50EABE : public ::System::Object
{
public:
	::Class_3_5775A4FEC79026BC* Field_1_2; // 0x10
	::RPG::GameCore::DynamicValueRangeCallback* Field_1_0; // 0x18
	::Class_3_5775A4FEC79026BC* Field_1_3; // 0x20
	::Class_3_5775A4FEC79026BC* Field_1_4; // 0x28
	::System::Boolean Field_1_6; // 0x30
	::System::Boolean Field_1_7; // 0x31
	::System::Boolean Field_1_1; // 0x32
	::System::Boolean Field_1_5; // 0x33

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37B61A4F3E50EABE__CTOR_OFFSET))(this);
	}
};
