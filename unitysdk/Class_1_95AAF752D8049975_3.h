#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ElationTimeAtmosphereType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_95AAF752D8049975_3_METHOD_1_119F51A7841EE06A_OFFSET UNITYSDK_OFFSET(0x19F8DC40)
#define CLASS_1_95AAF752D8049975_3_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x19F8DD80)
#define CLASS_1_95AAF752D8049975_3_METHOD_1_DA1BF2C227DC3D86_1_OFFSET UNITYSDK_OFFSET(0x19F8DCE0)
#define CLASS_1_95AAF752D8049975_3_METHOD_1_DA1BF2C227DC3D86_2_OFFSET UNITYSDK_OFFSET(0x19F8DD30)
#define CLASS_1_95AAF752D8049975_3_METHOD_1_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x19F8DC90)
#define CLASS_1_95AAF752D8049975_3__CTOR_OFFSET UNITYSDK_OFFSET(0x19F8DDC0)

inline static constexpr unsigned int Class_1_95AAF752D8049975_3_TypeDefinitionIndex = 72125;

class Class_1_95AAF752D8049975_3 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95AAF752D8049975_3__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::ElationTimeAtmosphereType Method_1_119F51A7841EE06A()
	{
		return ((::RPG::GameCore::ElationTimeAtmosphereType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95AAF752D8049975_3_METHOD_1_119F51A7841EE06A_OFFSET))(this);
	}

	::System::String* Method_1_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95AAF752D8049975_3_METHOD_1_DA1BF2C227DC3D86_OFFSET))(this);
	}

	::System::String* Method_1_DA1BF2C227DC3D86_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95AAF752D8049975_3_METHOD_1_DA1BF2C227DC3D86_1_OFFSET))(this);
	}

	::System::String* Method_1_DA1BF2C227DC3D86_2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95AAF752D8049975_3_METHOD_1_DA1BF2C227DC3D86_2_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95AAF752D8049975_3_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}
};
