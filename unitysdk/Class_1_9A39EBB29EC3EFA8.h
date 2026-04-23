#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8F355422BD450641;
class Class_1_F3EDFB7664C753E1;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_9A39EBB29EC3EFA8_METHOD_1_03A81715BD2AFEF3_OFFSET UNITYSDK_OFFSET(0x1240D160)
#define CLASS_1_9A39EBB29EC3EFA8_METHOD_1_1A8D14D8A3D8DD4C_OFFSET UNITYSDK_OFFSET(0x1240D050)
#define CLASS_1_9A39EBB29EC3EFA8_METHOD_1_252C6B30C5B591C3_OFFSET UNITYSDK_OFFSET(0x1240D4B0)
#define CLASS_1_9A39EBB29EC3EFA8_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1240D5E0)
#define CLASS_1_9A39EBB29EC3EFA8_METHOD_1_5C00367CEE393898_OFFSET UNITYSDK_OFFSET(0x1240D510)
#define CLASS_1_9A39EBB29EC3EFA8_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1240D470)
#define CLASS_1_9A39EBB29EC3EFA8__CCTOR_OFFSET UNITYSDK_OFFSET(0x1240D680)
#define CLASS_1_9A39EBB29EC3EFA8__CTOR_OFFSET UNITYSDK_OFFSET(0x1240CF20)

inline static constexpr unsigned int Class_1_9A39EBB29EC3EFA8_TypeDefinitionIndex = 68156;

class Class_1_9A39EBB29EC3EFA8 : public ::System::Object
{
public:
	static ::System::UInt32* StaticGet_Field_1_0()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9A39EBB29EC3EFA8_TypeDefinitionIndex)->GetStaticField(0x2C50);
	}
	::Class_1_F3EDFB7664C753E1* Field_1_3; // 0x10
	::Class_1_F3EDFB7664C753E1* Field_1_4; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_8F355422BD450641*>* Field_1_7; // 0x20
	::Class_1_F3EDFB7664C753E1* Field_1_2; // 0x28
	::Class_1_F3EDFB7664C753E1* Field_1_1; // 0x30
	::System::Boolean Field_1_5; // 0x38
	::System::Double Field_1_6; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A39EBB29EC3EFA8__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9A39EBB29EC3EFA8__CCTOR_OFFSET))();
	}

	::System::Void Method_1_03A81715BD2AFEF3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A39EBB29EC3EFA8_METHOD_1_03A81715BD2AFEF3_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A39EBB29EC3EFA8_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::Class_1_F3EDFB7664C753E1* Method_1_1A8D14D8A3D8DD4C(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6)
	{
		return ((::Class_1_F3EDFB7664C753E1*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9A39EBB29EC3EFA8_METHOD_1_1A8D14D8A3D8DD4C_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_252C6B30C5B591C3(::Class_1_F3EDFB7664C753E1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F3EDFB7664C753E1*))((::PBYTE)hIl2Cpp + CLASS_1_9A39EBB29EC3EFA8_METHOD_1_252C6B30C5B591C3_OFFSET))(this, a1);
	}

	::System::Double Method_1_5C00367CEE393898()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A39EBB29EC3EFA8_METHOD_1_5C00367CEE393898_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A39EBB29EC3EFA8_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}
};
