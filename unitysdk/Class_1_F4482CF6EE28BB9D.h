#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/Enum_3_073D57188FA1FF17.h"
#include "unitysdk/Enum_3_E5CB5EEA5E0DD1C0.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/Struct_2_9580C887252E6869.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class AkCallbackInfo;
class Class_1_D43702405C026A47;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F4482CF6EE28BB9D_METHOD_1_062DBF725D4C8AB0_OFFSET UNITYSDK_OFFSET(0x12B0E2E0)
#define CLASS_1_F4482CF6EE28BB9D_METHOD_1_3371184B4748D63F_OFFSET UNITYSDK_OFFSET(0x12B0E430)
#define CLASS_1_F4482CF6EE28BB9D_METHOD_1_45AA2F5085C2C40D_OFFSET UNITYSDK_OFFSET(0x12B0DAD0)
#define CLASS_1_F4482CF6EE28BB9D_METHOD_1_4EAC90433F8D078E_OFFSET UNITYSDK_OFFSET(0x12B0D860)
#define CLASS_1_F4482CF6EE28BB9D_METHOD_1_51BBA01F511E6107_OFFSET UNITYSDK_OFFSET(0x12B0D290)
#define CLASS_1_F4482CF6EE28BB9D_METHOD_1_6A0EBEECA245A27C_OFFSET UNITYSDK_OFFSET(0x12B0DA80)
#define CLASS_1_F4482CF6EE28BB9D_METHOD_1_755870B55A8B3AFF_OFFSET UNITYSDK_OFFSET(0x12B0D990)
#define CLASS_1_F4482CF6EE28BB9D_METHOD_1_B562285321DF108D_OFFSET UNITYSDK_OFFSET(0x12B0DEF0)
#define CLASS_1_F4482CF6EE28BB9D_METHOD_1_BE18C04CD91E0748_OFFSET UNITYSDK_OFFSET(0x12B0D810)
#define CLASS_1_F4482CF6EE28BB9D_METHOD_1_C02DA64E0439F3AB_OFFSET UNITYSDK_OFFSET(0x12B0E060)
#define CLASS_1_F4482CF6EE28BB9D_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12B0E290)
#define CLASS_1_F4482CF6EE28BB9D_METHOD_1_E77375DA4E5A31C6_OFFSET UNITYSDK_OFFSET(0x12B0DD90)
#define CLASS_1_F4482CF6EE28BB9D__CTOR_OFFSET UNITYSDK_OFFSET(0x12B0D1B0)

inline static constexpr unsigned int Class_1_F4482CF6EE28BB9D_TypeDefinitionIndex = 55422;

class Class_1_F4482CF6EE28BB9D : public ::System::Object
{
public:
	::Class_1_D43702405C026A47* Field_1_5; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::Enum_3_073D57188FA1FF17, ::Enum_3_E5CB5EEA5E0DD1C0>, ::System::Collections::Generic::List_1<::Struct_2_9580C887252E6869>*>* Field_1_3; // 0x18
	::System::Action* Field_1_2; // 0x20
	::System::UInt32 Field_1_1; // 0x28
	::System::Int32 Field_1_7; // 0x2C
	::Foundation::Coroutine::CoroutineHandle Field_1_6; // 0x30
	::System::UInt32 Field_1_0; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4482CF6EE28BB9D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_BE18C04CD91E0748(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F4482CF6EE28BB9D_METHOD_1_BE18C04CD91E0748_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4EAC90433F8D078E(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F4482CF6EE28BB9D_METHOD_1_4EAC90433F8D078E_OFFSET))(this, a1);
	}

	::System::Void Method_1_6A0EBEECA245A27C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4482CF6EE28BB9D_METHOD_1_6A0EBEECA245A27C_OFFSET))(this);
	}

	::Struct_2_9580C887252E6869 Method_1_E77375DA4E5A31C6(::Enum_3_073D57188FA1FF17 a1, ::System::Int32 a2)
	{
		return ((::Struct_2_9580C887252E6869(*)(::PVOID, ::Enum_3_073D57188FA1FF17, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F4482CF6EE28BB9D_METHOD_1_E77375DA4E5A31C6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_45AA2F5085C2C40D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4482CF6EE28BB9D_METHOD_1_45AA2F5085C2C40D_OFFSET))(this);
	}

	::System::Void Method_1_C02DA64E0439F3AB(::System::Object* a1, ::AkCallbackType a2, ::AkCallbackInfo* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + CLASS_1_F4482CF6EE28BB9D_METHOD_1_C02DA64E0439F3AB_OFFSET))(this, a1, a2, a3);
	}

	::Struct_2_9580C887252E6869 Method_1_B562285321DF108D(::Enum_3_073D57188FA1FF17 a1, ::Enum_3_E5CB5EEA5E0DD1C0 a2, ::System::Int32 a3)
	{
		return ((::Struct_2_9580C887252E6869(*)(::PVOID, ::Enum_3_073D57188FA1FF17, ::Enum_3_E5CB5EEA5E0DD1C0, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F4482CF6EE28BB9D_METHOD_1_B562285321DF108D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_51BBA01F511E6107()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4482CF6EE28BB9D_METHOD_1_51BBA01F511E6107_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4482CF6EE28BB9D_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_062DBF725D4C8AB0(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F4482CF6EE28BB9D_METHOD_1_062DBF725D4C8AB0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_755870B55A8B3AFF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4482CF6EE28BB9D_METHOD_1_755870B55A8B3AFF_OFFSET))(this);
	}

	::System::UInt32 Method_1_3371184B4748D63F(::Enum_3_073D57188FA1FF17 a1, ::System::Int32 a2, ::System::Action* a3)
	{
		return ((::System::UInt32(*)(::PVOID, ::Enum_3_073D57188FA1FF17, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_F4482CF6EE28BB9D_METHOD_1_3371184B4748D63F_OFFSET))(this, a1, a2, a3);
	}
};
