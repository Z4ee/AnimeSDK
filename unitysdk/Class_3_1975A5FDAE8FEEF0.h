#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_584A6534C6157D2A;
class Class_2_78AF2AD995A1A7F0;
namespace System { class String; }

#define CLASS_3_1975A5FDAE8FEEF0_METHOD_3_2166CB70112347ED_OFFSET UNITYSDK_OFFSET(0x195BA3E0)
#define CLASS_3_1975A5FDAE8FEEF0_METHOD_3_7F22A781A9156478_OFFSET UNITYSDK_OFFSET(0x195BA460)
#define CLASS_3_1975A5FDAE8FEEF0__CTOR_OFFSET UNITYSDK_OFFSET(0x195BA430)

inline static constexpr unsigned int Class_3_1975A5FDAE8FEEF0_TypeDefinitionIndex = 22066;

class Class_3_1975A5FDAE8FEEF0 : public ::RPG::GameCore::TaskConfig
{
public:
	::Class_2_78AF2AD995A1A7F0* Field_3_0; // 0x18
	::Class_2_584A6534C6157D2A* Field_3_1; // 0x20
	::System::String* Field_3_2; // 0x28
	::System::Boolean Field_3_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1975A5FDAE8FEEF0__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2166CB70112347ED(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_1975A5FDAE8FEEF0*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_1975A5FDAE8FEEF0*&))((::PBYTE)hIl2Cpp + CLASS_3_1975A5FDAE8FEEF0_METHOD_3_2166CB70112347ED_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_7F22A781A9156478(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_1975A5FDAE8FEEF0* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_1975A5FDAE8FEEF0*))((::PBYTE)hIl2Cpp + CLASS_3_1975A5FDAE8FEEF0_METHOD_3_7F22A781A9156478_OFFSET))(a1, a2);
	}
};
