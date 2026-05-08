#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Random; }

#define CLASS_1_2DDAC2F6C97EB8AD_METHOD_1_2B9D478141E0F891_OFFSET UNITYSDK_OFFSET(0x1652E220)
#define CLASS_1_2DDAC2F6C97EB8AD_METHOD_1_85C746F74910D9C1_OFFSET UNITYSDK_OFFSET(0x1652E1C0)
#define CLASS_1_2DDAC2F6C97EB8AD_METHOD_1_8DE44EEC3E24E5B0_OFFSET UNITYSDK_OFFSET(0x1652E150)
#define CLASS_1_2DDAC2F6C97EB8AD_METHOD_1_AAA08DA9AA6317DB_OFFSET UNITYSDK_OFFSET(0x1652E330)
#define CLASS_1_2DDAC2F6C97EB8AD_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x1652E320)
#define CLASS_1_2DDAC2F6C97EB8AD_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1652E2B0)
#define CLASS_1_2DDAC2F6C97EB8AD_METHOD_1_D4E1804C25B5032C_OFFSET UNITYSDK_OFFSET(0x1652E2C0)
#define CLASS_1_2DDAC2F6C97EB8AD__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1652E100)
#define CLASS_1_2DDAC2F6C97EB8AD__CTOR_OFFSET UNITYSDK_OFFSET(0x1652E0B0)

inline static constexpr unsigned int Class_1_2DDAC2F6C97EB8AD_TypeDefinitionIndex = 53067;

class Class_1_2DDAC2F6C97EB8AD : public ::System::Object
{
public:
	::System::Random* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2DDAC2F6C97EB8AD__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2DDAC2F6C97EB8AD__CTOR_1_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_8DE44EEC3E24E5B0(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2DDAC2F6C97EB8AD_METHOD_1_8DE44EEC3E24E5B0_OFFSET))(this, a1, a2);
	}

	::System::Double Method_1_85C746F74910D9C1()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2DDAC2F6C97EB8AD_METHOD_1_85C746F74910D9C1_OFFSET))(this);
	}

	::System::Void Method_1_2B9D478141E0F891()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2DDAC2F6C97EB8AD_METHOD_1_2B9D478141E0F891_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2DDAC2F6C97EB8AD_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Int32 Method_1_D4E1804C25B5032C(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2DDAC2F6C97EB8AD_METHOD_1_D4E1804C25B5032C_OFFSET))(this, a1);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2DDAC2F6C97EB8AD_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Single Method_1_AAA08DA9AA6317DB(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2DDAC2F6C97EB8AD_METHOD_1_AAA08DA9AA6317DB_OFFSET))(this, a1, a2);
	}
};
