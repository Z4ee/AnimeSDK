#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_318;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define CLASS_1_6680B389A28C1730_METHOD_1_3C1D883B34112560_OFFSET UNITYSDK_OFFSET(0x111E4F30)
#define CLASS_1_6680B389A28C1730_METHOD_1_6F5BC4753AB975F3_OFFSET UNITYSDK_OFFSET(0x111E4CE0)
#define CLASS_1_6680B389A28C1730_METHOD_1_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x111E53F0)
#define CLASS_1_6680B389A28C1730_METHOD_1_AFE8A031D1451F03_OFFSET UNITYSDK_OFFSET(0x111E5000)
#define CLASS_1_6680B389A28C1730__CCTOR_OFFSET UNITYSDK_OFFSET(0x111E54D0)
#define CLASS_1_6680B389A28C1730__CTOR_OFFSET UNITYSDK_OFFSET(0x111E4EF0)

inline static constexpr unsigned int Class_1_6680B389A28C1730_TypeDefinitionIndex = 40037;

class Class_1_6680B389A28C1730 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Stack_1<::Class_1_6680B389A28C1730*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Stack_1<::Class_1_6680B389A28C1730*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6680B389A28C1730_TypeDefinitionIndex)->GetStaticField(0x1FF0);
	}
	::System::Action* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_318*>* Field_1_4; // 0x18
	::System::Single Field_1_3; // 0x20
	::System::Single Field_1_2; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6680B389A28C1730__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6680B389A28C1730__CCTOR_OFFSET))();
	}

	static ::Class_1_6680B389A28C1730* Method_1_6F5BC4753AB975F3(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_318*>* a1, ::System::Single a2, ::System::Single a3, ::System::Action* a4)
	{
		return ((::Class_1_6680B389A28C1730*(*)(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_318*>*, ::System::Single, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_6680B389A28C1730_METHOD_1_6F5BC4753AB975F3_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_1_3C1D883B34112560(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_318*>* a1, ::System::Single a2, ::System::Single a3, ::System::Action* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_318*>*, ::System::Single, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_6680B389A28C1730_METHOD_1_3C1D883B34112560_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_AFE8A031D1451F03()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6680B389A28C1730_METHOD_1_AFE8A031D1451F03_OFFSET))(this);
	}

	::System::Void Method_1_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6680B389A28C1730_METHOD_1_77EA5BCD93BD96AE_OFFSET))(this);
	}
};
