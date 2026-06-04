#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_019938BC9C50B169.h"
#include "unitysdk/Struct_2_A7F79D5B9A1D55E7.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

class Class_0_16E4307DCC419505_43;
class Class_1_BB022F959632208C;
namespace RPG::Client::LittleGameShare { template <typename T> class RpcObjectPool_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_384338DD03F999FE_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18AA8910)
#define CLASS_1_384338DD03F999FE_METHOD_1_F8FB09F15C0808EF_OFFSET UNITYSDK_OFFSET(0x18A9BA60)
#define CLASS_1_384338DD03F999FE_METHOD_1_FB51F3B3DA5AD6D0_OFFSET UNITYSDK_OFFSET(0x18AA8950)
#define CLASS_1_384338DD03F999FE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18AA8E40)
#define CLASS_1_384338DD03F999FE__CTOR_OFFSET UNITYSDK_OFFSET(0x18A9B440)

inline static constexpr unsigned int Class_1_384338DD03F999FE_TypeDefinitionIndex = 34682;

class Class_1_384338DD03F999FE : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::Struct_2_019938BC9C50B169, ::System::RuntimeTypeHandle>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::Struct_2_019938BC9C50B169, ::System::RuntimeTypeHandle>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_384338DD03F999FE_TypeDefinitionIndex)->GetStaticField(0x51750);
	}
	static ::RPG::Client::LittleGameShare::RpcObjectPool_1<::Class_1_BB022F959632208C*>** StaticGet_Field_1_1()
	{
		return (::RPG::Client::LittleGameShare::RpcObjectPool_1<::Class_1_BB022F959632208C*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_384338DD03F999FE_TypeDefinitionIndex)->GetStaticField(0x51758);
	}
	// static const ::System::Boolean Field_1_2; // 0x0
	::Class_0_16E4307DCC419505_43* Field_1_3; // 0x10

	::System::Void _ctor(::Class_0_16E4307DCC419505_43* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_43*))((::PBYTE)hIl2Cpp + CLASS_1_384338DD03F999FE__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_384338DD03F999FE__CCTOR_OFFSET))();
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_384338DD03F999FE_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_1_F8FB09F15C0808EF(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_384338DD03F999FE_METHOD_1_F8FB09F15C0808EF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_FB51F3B3DA5AD6D0(::Struct_2_A7F79D5B9A1D55E7 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_A7F79D5B9A1D55E7, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_384338DD03F999FE_METHOD_1_FB51F3B3DA5AD6D0_OFFSET))(this, a1, a2);
	}
};
