#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3F1549C2A53A3A5B;
class Class_1_43BD383C98B4C0C5_191;
class Class_1_A92BC063ED2379EB;
class Class_1_F9FBCC956DFCF137_25;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D60F4B646363D969_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0xC1D39D0)
#define CLASS_1_D60F4B646363D969_METHOD_1_189A1787B0797738_OFFSET UNITYSDK_OFFSET(0xC1D3F60)
#define CLASS_1_D60F4B646363D969_METHOD_1_2EEC0C9449DA01B6_OFFSET UNITYSDK_OFFSET(0xC1D3AE0)
#define CLASS_1_D60F4B646363D969_METHOD_1_7227AA54E56523B5_OFFSET UNITYSDK_OFFSET(0xC1D3CA0)
#define CLASS_1_D60F4B646363D969_METHOD_1_A27DC2C5A103933A_OFFSET UNITYSDK_OFFSET(0xC1D3A10)
#define CLASS_1_D60F4B646363D969__CTOR_OFFSET UNITYSDK_OFFSET(0xC1D3C90)

inline static constexpr unsigned int Class_1_D60F4B646363D969_TypeDefinitionIndex = 72181;

class Class_1_D60F4B646363D969 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_191*>* Field_1_0; // 0x10
	::Class_1_3F1549C2A53A3A5B* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D60F4B646363D969__CTOR_OFFSET))(this);
	}

	static ::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D60F4B646363D969_METHOD_1_128774387667156B_OFFSET))();
	}

	static ::System::Void Method_1_A27DC2C5A103933A()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D60F4B646363D969_METHOD_1_A27DC2C5A103933A_OFFSET))();
	}

	static ::Class_1_D60F4B646363D969* Method_1_2EEC0C9449DA01B6(::Class_1_A92BC063ED2379EB* a1)
	{
		return ((::Class_1_D60F4B646363D969*(*)(::Class_1_A92BC063ED2379EB*))((::PBYTE)hIl2Cpp + CLASS_1_D60F4B646363D969_METHOD_1_2EEC0C9449DA01B6_OFFSET))(a1);
	}

	::System::Void Method_1_7227AA54E56523B5(::Class_1_F9FBCC956DFCF137_25* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_25*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_D60F4B646363D969_METHOD_1_7227AA54E56523B5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_189A1787B0797738(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D60F4B646363D969_METHOD_1_189A1787B0797738_OFFSET))(this, a1);
	}
};
