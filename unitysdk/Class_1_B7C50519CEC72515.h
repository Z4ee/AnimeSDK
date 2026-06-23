#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_12573614267589AB.h"
#include "unitysdk/Enum_3_334CDFF338C5BE84.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_B7C50519CEC72515_METHOD_1_280B1FDB529F8E99_OFFSET UNITYSDK_OFFSET(0x10FDA050)
#define CLASS_1_B7C50519CEC72515_METHOD_1_70662636528151D7_OFFSET UNITYSDK_OFFSET(0x10FDA230)
#define CLASS_1_B7C50519CEC72515_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10FD9FE0)
#define CLASS_1_B7C50519CEC72515_METHOD_1_FCA224C95C8FD78E_OFFSET UNITYSDK_OFFSET(0x10FDA350)
#define CLASS_1_B7C50519CEC72515__CTOR_OFFSET UNITYSDK_OFFSET(0x10FD9FD0)

inline static constexpr unsigned int Class_1_B7C50519CEC72515_TypeDefinitionIndex = 44843;

class Class_1_B7C50519CEC72515 : public ::System::Object
{
public:
	::System::Action* Field_1_5; // 0x10
	::System::Action_1<::UnityEngine::Transform*>* Field_1_4; // 0x18
	::System::Int32 Field_1_1; // 0x20
	::System::Int32 Field_1_8; // 0x24
	::System::Boolean Field_1_2; // 0x28
	::System::Boolean Field_1_6; // 0x29
	::System::Int32 Field_1_7; // 0x2C
	::Enum_3_12573614267589AB Field_1_0; // 0x30
	::Enum_3_334CDFF338C5BE84 Field_1_3; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7C50519CEC72515__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7C50519CEC72515_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_1_280B1FDB529F8E99(::System::Collections::Generic::List_1<::Class_1_B7C50519CEC72515*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Class_1_B7C50519CEC72515*>*))((::PBYTE)hIl2Cpp + CLASS_1_B7C50519CEC72515_METHOD_1_280B1FDB529F8E99_OFFSET))(a1);
	}

	static ::System::Void Method_1_70662636528151D7(::Class_1_B7C50519CEC72515*& a1)
	{
		return ((::System::Void(*)(::Class_1_B7C50519CEC72515*&))((::PBYTE)hIl2Cpp + CLASS_1_B7C50519CEC72515_METHOD_1_70662636528151D7_OFFSET))(a1);
	}

	static ::Class_1_B7C50519CEC72515* Method_1_FCA224C95C8FD78E(::System::Int32 a1, ::Enum_3_12573614267589AB a2)
	{
		return ((::Class_1_B7C50519CEC72515*(*)(::System::Int32, ::Enum_3_12573614267589AB))((::PBYTE)hIl2Cpp + CLASS_1_B7C50519CEC72515_METHOD_1_FCA224C95C8FD78E_OFFSET))(a1, a2);
	}
};
