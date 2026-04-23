#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_019938BC9C50B169.h"
#include "unitysdk/Struct_2_C983EE158040EDC8.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

class Class_0_16E4307DCC419505_44;
class Class_1_EC326A3215DF194D;
namespace RPG::Client::LittleGameShare { template <typename T> class RpcObjectPool_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_298CB0A85460240D_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17D10E80)
#define CLASS_1_298CB0A85460240D_METHOD_1_E76027C4C9F4D79F_OFFSET UNITYSDK_OFFSET(0x17D10F40)
#define CLASS_1_298CB0A85460240D_METHOD_1_F8FB09F15C0808EF_OFFSET UNITYSDK_OFFSET(0x17D10EC0)
#define CLASS_1_298CB0A85460240D__CCTOR_OFFSET UNITYSDK_OFFSET(0x17D114B0)
#define CLASS_1_298CB0A85460240D__CTOR_OFFSET UNITYSDK_OFFSET(0x17D10E70)

inline static constexpr unsigned int Class_1_298CB0A85460240D_TypeDefinitionIndex = 34400;

class Class_1_298CB0A85460240D : public ::System::Object
{
public:
	static ::RPG::Client::LittleGameShare::RpcObjectPool_1<::Class_1_EC326A3215DF194D*>** StaticGet_Field_1_2()
	{
		return (::RPG::Client::LittleGameShare::RpcObjectPool_1<::Class_1_EC326A3215DF194D*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_298CB0A85460240D_TypeDefinitionIndex)->GetStaticField(0x5E340);
	}
	static ::System::Collections::Generic::Dictionary_2<::Struct_2_019938BC9C50B169, ::System::RuntimeTypeHandle>** StaticGet_Field_1_3()
	{
		return (::System::Collections::Generic::Dictionary_2<::Struct_2_019938BC9C50B169, ::System::RuntimeTypeHandle>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_298CB0A85460240D_TypeDefinitionIndex)->GetStaticField(0x5E348);
	}
	// static const ::System::Boolean Field_1_1; // 0x0
	::Class_0_16E4307DCC419505_44* Field_1_0; // 0x10

	::System::Void _ctor(::Class_0_16E4307DCC419505_44* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_44*))((::PBYTE)hIl2Cpp + CLASS_1_298CB0A85460240D__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_298CB0A85460240D__CCTOR_OFFSET))();
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_298CB0A85460240D_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_1_F8FB09F15C0808EF(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_298CB0A85460240D_METHOD_1_F8FB09F15C0808EF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E76027C4C9F4D79F(::Struct_2_C983EE158040EDC8 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_C983EE158040EDC8, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_298CB0A85460240D_METHOD_1_E76027C4C9F4D79F_OFFSET))(this, a1, a2);
	}
};
