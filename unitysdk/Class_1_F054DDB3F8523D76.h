#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_43B0AF86156D9901;
class Class_1_EB1F0EB26D816EA6;
namespace RPG::Client { class ReplayCustomData; }

#define CLASS_1_F054DDB3F8523D76_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1652D770)
#define CLASS_1_F054DDB3F8523D76_METHOD_1_01109DD29CB4D216_OFFSET UNITYSDK_OFFSET(0x1652D260)
#define CLASS_1_F054DDB3F8523D76_METHOD_1_49700BE50E3E6EAA_OFFSET UNITYSDK_OFFSET(0x1652D520)
#define CLASS_1_F054DDB3F8523D76_METHOD_1_9B5BAA4B8281DB0F_OFFSET UNITYSDK_OFFSET(0x1652D2C0)
#define CLASS_1_F054DDB3F8523D76_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x1652D340)
#define CLASS_1_F054DDB3F8523D76_METHOD_1_CE36A0F5BF366D85_OFFSET UNITYSDK_OFFSET(0x1652D3C0)
#define CLASS_1_F054DDB3F8523D76_METHOD_1_E05EA7FF0EBACC9A_OFFSET UNITYSDK_OFFSET(0x1652D5E0)
#define CLASS_1_F054DDB3F8523D76__CTOR_OFFSET UNITYSDK_OFFSET(0x1652D0F0)

inline static constexpr unsigned int Class_1_F054DDB3F8523D76_TypeDefinitionIndex = 53516;

class Class_1_F054DDB3F8523D76 : public ::System::Object
{
public:
	::Class_1_EB1F0EB26D816EA6* Field_1_0; // 0x10
	::Class_1_43B0AF86156D9901* Field_1_1; // 0x18
	::Class_1_EB1F0EB26D816EA6* Field_1_2; // 0x20
	::System::Nullable_1<::System::UInt32> Field_1_3; // 0x28
	::System::Nullable_1<::System::UInt32> Field_1_4; // 0x30
	::System::Boolean Field_1_5; // 0x38

	::System::Void _ctor(::Class_1_43B0AF86156D9901* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43B0AF86156D9901*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F054DDB3F8523D76__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_01109DD29CB4D216()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F054DDB3F8523D76_METHOD_1_01109DD29CB4D216_OFFSET))(this);
	}

	::System::Void Method_1_9B5BAA4B8281DB0F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F054DDB3F8523D76_METHOD_1_9B5BAA4B8281DB0F_OFFSET))(this, a1);
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
