#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_827373C1CEDFE355;
class Class_1_EB1F0EB26D816EA6;
namespace RPG::Client { class ReplayCustomData; }

#define CLASS_1_F054DDB3F8523D76_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13A45B40)
#define CLASS_1_F054DDB3F8523D76_METHOD_1_397F41E9070CC18C_OFFSET UNITYSDK_OFFSET(0x13A45690)
#define CLASS_1_F054DDB3F8523D76_METHOD_1_49700BE50E3E6EAA_OFFSET UNITYSDK_OFFSET(0x13A458F0)
#define CLASS_1_F054DDB3F8523D76_METHOD_1_72A8068D2AF9B485_OFFSET UNITYSDK_OFFSET(0x13A45630)
#define CLASS_1_F054DDB3F8523D76_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x13A45710)
#define CLASS_1_F054DDB3F8523D76_METHOD_1_CE36A0F5BF366D85_OFFSET UNITYSDK_OFFSET(0x13A45790)
#define CLASS_1_F054DDB3F8523D76_METHOD_1_E05EA7FF0EBACC9A_OFFSET UNITYSDK_OFFSET(0x13A459B0)
#define CLASS_1_F054DDB3F8523D76__CTOR_OFFSET UNITYSDK_OFFSET(0x13A454C0)

inline static constexpr unsigned int Class_1_F054DDB3F8523D76_TypeDefinitionIndex = 52312;

class Class_1_F054DDB3F8523D76 : public ::System::Object
{
public:
	::Class_1_827373C1CEDFE355* Field_1_0; // 0x10
	::Class_1_EB1F0EB26D816EA6* Field_1_1; // 0x18
	::Class_1_EB1F0EB26D816EA6* Field_1_2; // 0x20
	::System::Boolean Field_1_3; // 0x28
	::System::Nullable_1<::System::UInt32> Field_1_4; // 0x2C
	::System::Nullable_1<::System::UInt32> Field_1_5; // 0x34

	::System::Void _ctor(::Class_1_827373C1CEDFE355* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_827373C1CEDFE355*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F054DDB3F8523D76__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_72A8068D2AF9B485()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F054DDB3F8523D76_METHOD_1_72A8068D2AF9B485_OFFSET))(this);
	}

	::System::Void Method_1_397F41E9070CC18C(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F054DDB3F8523D76_METHOD_1_397F41E9070CC18C_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F054DDB3F8523D76_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::System::Void Method_1_CE36A0F5BF366D85(::System::UInt32& a1, ::System::UInt32& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_F054DDB3F8523D76_METHOD_1_CE36A0F5BF366D85_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E05EA7FF0EBACC9A(::RPG::Client::ReplayCustomData*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ReplayCustomData*&))((::PBYTE)hIl2Cpp + CLASS_1_F054DDB3F8523D76_METHOD_1_E05EA7FF0EBACC9A_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F054DDB3F8523D76_DISPOSE_OFFSET))(this);
	}

	::System::UInt32 Method_1_49700BE50E3E6EAA(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F054DDB3F8523D76_METHOD_1_49700BE50E3E6EAA_OFFSET))(this, a1);
	}
};
