#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2254CBF47061A452;
class Class_1_71042EEC1CEF9BCA;

#define CLASS_1_508B1A2F4F54A6A6_METHOD_1_5110E061C0DF5692_OFFSET UNITYSDK_OFFSET(0x166ED3F0)
#define CLASS_1_508B1A2F4F54A6A6__CTOR_OFFSET UNITYSDK_OFFSET(0x166ED500)

inline static constexpr unsigned int Class_1_508B1A2F4F54A6A6_TypeDefinitionIndex = 28344;

class Class_1_508B1A2F4F54A6A6 : public ::System::Object
{
public:
	::Class_1_71042EEC1CEF9BCA* Field_1_5; // 0x10
	::Class_1_2254CBF47061A452* Field_1_4; // 0x18
	::System::Boolean Field_1_2; // 0x20
	::System::Boolean Field_1_3; // 0x21
	::System::Boolean Field_1_0; // 0x22
	::System::Boolean Field_1_1; // 0x23

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_508B1A2F4F54A6A6__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5110E061C0DF5692(::Class_1_508B1A2F4F54A6A6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_508B1A2F4F54A6A6*))((::PBYTE)hIl2Cpp + CLASS_1_508B1A2F4F54A6A6_METHOD_1_5110E061C0DF5692_OFFSET))(this, a1);
	}
};
