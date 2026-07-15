#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_019938BC9C50B169.h"
#include "unitysdk/Struct_2_44EC5CE538089376.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

class Class_0_16E4307DCC419505_53;
class Class_1_E69069233E5E05B8;
namespace RPG::Client::LittleGameShare { template <typename T> class RpcObjectPool_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_970978B79A041885_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x190F32C0)
#define CLASS_1_970978B79A041885_METHOD_1_E00A16BC463774FC_OFFSET UNITYSDK_OFFSET(0x190E54F0)
#define CLASS_1_970978B79A041885_METHOD_1_F8FB09F15C0808EF_OFFSET UNITYSDK_OFFSET(0x190E53B0)
#define CLASS_1_970978B79A041885__CCTOR_OFFSET UNITYSDK_OFFSET(0x190F3300)
#define CLASS_1_970978B79A041885__CTOR_OFFSET UNITYSDK_OFFSET(0x190E4E80)

inline static constexpr unsigned int Class_1_970978B79A041885_TypeDefinitionIndex = 35349;

class Class_1_970978B79A041885 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::Struct_2_019938BC9C50B169, ::System::RuntimeTypeHandle>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::Struct_2_019938BC9C50B169, ::System::RuntimeTypeHandle>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_970978B79A041885_TypeDefinitionIndex)->GetStaticField(0x4F3A0);
	}
	static ::RPG::Client::LittleGameShare::RpcObjectPool_1<::Class_1_E69069233E5E05B8*>** StaticGet_Field_1_1()
	{
		return (::RPG::Client::LittleGameShare::RpcObjectPool_1<::Class_1_E69069233E5E05B8*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_970978B79A041885_TypeDefinitionIndex)->GetStaticField(0x4F3A8);
	}
	// static const ::System::Boolean Field_1_2; // 0x0
	::Class_0_16E4307DCC419505_53* Field_1_3; // 0x10

	::System::Void _ctor(::Class_0_16E4307DCC419505_53* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_53*))((::PBYTE)hIl2Cpp + CLASS_1_970978B79A041885__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_970978B79A041885__CCTOR_OFFSET))();
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_970978B79A041885_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_1_F8FB09F15C0808EF(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_970978B79A041885_METHOD_1_F8FB09F15C0808EF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E00A16BC463774FC(::Struct_2_44EC5CE538089376 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_44EC5CE538089376, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_970978B79A041885_METHOD_1_E00A16BC463774FC_OFFSET))(this, a1, a2);
	}
};
