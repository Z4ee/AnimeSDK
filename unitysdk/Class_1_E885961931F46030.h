#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_5BC4A642501E33BD.h"
#include "unitysdk/Enum_3_86D58C2A2996E647.h"
#include "unitysdk/System/Object.h"

class Class_1_2BEAA93324417DF4;
class Class_1_2EF69FD7F867E7F6;
namespace System { class EventArgs; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E885961931F46030_METHOD_1_74B363C221936ED7_OFFSET UNITYSDK_OFFSET(0xB7C5030)
#define CLASS_1_E885961931F46030_METHOD_1_B4B14845111E88EF_OFFSET UNITYSDK_OFFSET(0xB7C4ED0)
#define CLASS_1_E885961931F46030_METHOD_1_E6FA84ECDEF620CE_OFFSET UNITYSDK_OFFSET(0xB7C4E20)
#define CLASS_1_E885961931F46030_METHOD_1_E9A575D18A0748D9_1_OFFSET UNITYSDK_OFFSET(0xB7C4E70)
#define CLASS_1_E885961931F46030_METHOD_1_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0xB7C4DD0)
#define CLASS_1_E885961931F46030__CTOR_OFFSET UNITYSDK_OFFSET(0xB7C4EC0)

inline static constexpr unsigned int Class_1_E885961931F46030_TypeDefinitionIndex = 53480;

class Class_1_E885961931F46030 : public ::System::Object
{
public:
	::Class_1_2BEAA93324417DF4* Field_1_0; // 0x10
	::Enum_3_5BC4A642501E33BD Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E885961931F46030__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E9A575D18A0748D9(::Class_1_2EF69FD7F867E7F6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2EF69FD7F867E7F6*))((::PBYTE)hIl2Cpp + CLASS_1_E885961931F46030_METHOD_1_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_1_E6FA84ECDEF620CE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E885961931F46030_METHOD_1_E6FA84ECDEF620CE_OFFSET))(this);
	}

	::System::Void Method_1_E9A575D18A0748D9_1(::Class_1_2EF69FD7F867E7F6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2EF69FD7F867E7F6*))((::PBYTE)hIl2Cpp + CLASS_1_E885961931F46030_METHOD_1_E9A575D18A0748D9_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_B4B14845111E88EF(::Enum_3_86D58C2A2996E647 a1, ::System::Action_1<::System::EventArgs*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_86D58C2A2996E647, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + CLASS_1_E885961931F46030_METHOD_1_B4B14845111E88EF_OFFSET))(this, a1, a2);
	}

	static ::System::Collections::Generic::List_1<::Class_1_E885961931F46030*>* Method_1_74B363C221936ED7()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_E885961931F46030*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_E885961931F46030_METHOD_1_74B363C221936ED7_OFFSET))();
	}
};
