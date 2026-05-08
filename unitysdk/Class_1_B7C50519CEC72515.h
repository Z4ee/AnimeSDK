#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_24C014472A8CBA5E.h"
#include "unitysdk/Enum_3_334CDFF338C5BE84.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_B7C50519CEC72515_METHOD_1_6F2375DB88761C4E_OFFSET UNITYSDK_OFFSET(0x1591D700)
#define CLASS_1_B7C50519CEC72515_METHOD_1_A109F65857837EA0_OFFSET UNITYSDK_OFFSET(0x1591D4C0)
#define CLASS_1_B7C50519CEC72515_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1591D6A0)
#define CLASS_1_B7C50519CEC72515_METHOD_1_FCA224C95C8FD78E_OFFSET UNITYSDK_OFFSET(0x1591D800)
#define CLASS_1_B7C50519CEC72515__CTOR_OFFSET UNITYSDK_OFFSET(0x1591D4B0)

inline static constexpr unsigned int Class_1_B7C50519CEC72515_TypeDefinitionIndex = 56251;

class Class_1_B7C50519CEC72515 : public ::System::Object
{
public:
	::System::Action* Field_1_5; // 0x10
	::System::Action_1<::UnityEngine::Transform*>* Field_1_4; // 0x18
	::Enum_3_24C014472A8CBA5E Field_1_0; // 0x20
	::Enum_3_334CDFF338C5BE84 Field_1_3; // 0x24
	::System::Int32 Field_1_8; // 0x28
	::System::Int32 Field_1_1; // 0x2C
	::System::Boolean Field_1_2; // 0x30
	::System::Boolean Field_1_6; // 0x31
	::System::Int32 Field_1_7; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7C50519CEC72515__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_A109F65857837EA0(::System::Collections::Generic::List_1<::Class_1_B7C50519CEC72515*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Class_1_B7C50519CEC72515*>*))((::PBYTE)hIl2Cpp + CLASS_1_B7C50519CEC72515_METHOD_1_A109F65857837EA0_OFFSET))(a1);
	}

	static ::System::Void Method_1_6F2375DB88761C4E(::Class_1_B7C50519CEC72515*& a1)
	{
		return ((::System::Void(*)(::Class_1_B7C50519CEC72515*&))((::PBYTE)hIl2Cpp + CLASS_1_B7C50519CEC72515_METHOD_1_6F2375DB88761C4E_OFFSET))(a1);
	}

	static ::Class_1_B7C50519CEC72515* Method_1_FCA224C95C8FD78E(::System::Int32 a1, ::Enum_3_24C014472A8CBA5E a2)
	{
		return ((::Class_1_B7C50519CEC72515*(*)(::System::Int32, ::Enum_3_24C014472A8CBA5E))((::PBYTE)hIl2Cpp + CLASS_1_B7C50519CEC72515_METHOD_1_FCA224C95C8FD78E_OFFSET))(a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7C50519CEC72515_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
