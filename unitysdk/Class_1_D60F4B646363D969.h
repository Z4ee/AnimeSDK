#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_213;
class Class_1_A92BC063ED2379EB;
class Class_1_E518B582305CCAFF;
class Class_1_F9FBCC956DFCF137_27;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D60F4B646363D969_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x1A0D9580)
#define CLASS_1_D60F4B646363D969_METHOD_1_2EEC0C9449DA01B6_OFFSET UNITYSDK_OFFSET(0x1A0D9690)
#define CLASS_1_D60F4B646363D969_METHOD_1_7227AA54E56523B5_OFFSET UNITYSDK_OFFSET(0x1A0D9850)
#define CLASS_1_D60F4B646363D969_METHOD_1_8E9D073CC678ECF8_OFFSET UNITYSDK_OFFSET(0x1A0D9B10)
#define CLASS_1_D60F4B646363D969_METHOD_1_A27DC2C5A103933A_OFFSET UNITYSDK_OFFSET(0x1A0D95C0)
#define CLASS_1_D60F4B646363D969__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0D9840)

inline static constexpr unsigned int Class_1_D60F4B646363D969_TypeDefinitionIndex = 77190;

class Class_1_D60F4B646363D969 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_213*>* OJFECHILFHG; // 0x10
	::Class_1_E518B582305CCAFF* HFOFIODMFGB; // 0x18

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

	::System::Void Method_1_7227AA54E56523B5(::Class_1_F9FBCC956DFCF137_27* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_27*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_D60F4B646363D969_METHOD_1_7227AA54E56523B5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8E9D073CC678ECF8(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D60F4B646363D969_METHOD_1_8E9D073CC678ECF8_OFFSET))(this, a1);
	}
};
