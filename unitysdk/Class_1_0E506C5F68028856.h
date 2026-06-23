#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0E506C5F68028856_Struct_2_D81A7478E25D994D_1.h"
#include "unitysdk/Struct_2_31CE9F74ED7EF316_2.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Span_1.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Color32.h"

class Class_1_273278230A48923F;
namespace PipelineCamera { template <typename T> class CircularBuffer_1; }
namespace System { class String; }

#define CLASS_1_0E506C5F68028856_METHOD_1_13B7A8170F860F68_OFFSET UNITYSDK_OFFSET(0x12FC7110)
#define CLASS_1_0E506C5F68028856_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x12FC7090)
#define CLASS_1_0E506C5F68028856_METHOD_1_2D4DFB99EB1E1DBF_OFFSET UNITYSDK_OFFSET(0x12FC8480)
#define CLASS_1_0E506C5F68028856_METHOD_1_53898BC8CD31F230_OFFSET UNITYSDK_OFFSET(0x12FC88D0)
#define CLASS_1_0E506C5F68028856_METHOD_1_68D95C6B2A34D6B7_OFFSET UNITYSDK_OFFSET(0x12FC8F40)
#define CLASS_1_0E506C5F68028856_METHOD_1_6F923902D583280F_OFFSET UNITYSDK_OFFSET(0x12FC8950)
#define CLASS_1_0E506C5F68028856_METHOD_1_72180CEDBAD98877_OFFSET UNITYSDK_OFFSET(0x12FC8030)
#define CLASS_1_0E506C5F68028856_METHOD_1_BBA7B48D3918837D_OFFSET UNITYSDK_OFFSET(0x12FC8A10)
#define CLASS_1_0E506C5F68028856_METHOD_1_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x12FC7FC0)
#define CLASS_1_0E506C5F68028856_METHOD_1_EE730C6E5D59E0BF_OFFSET UNITYSDK_OFFSET(0x12FC8AA0)
#define CLASS_1_0E506C5F68028856__CCTOR_OFFSET UNITYSDK_OFFSET(0x12FC88C0)
#define CLASS_1_0E506C5F68028856__CTOR_OFFSET UNITYSDK_OFFSET(0x12FC8870)

inline static constexpr unsigned int Class_1_0E506C5F68028856_TypeDefinitionIndex = 65076;

class Class_1_0E506C5F68028856 : public ::System::Object
{
public:
	static ::UnityEngine::Color32* StaticGet_Field_1_0()
	{
		return (::UnityEngine::Color32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0E506C5F68028856_TypeDefinitionIndex)->GetStaticField(0xE1D0);
	}
	::PipelineCamera::CircularBuffer_1<::Class_1_0E506C5F68028856_Struct_2_D81A7478E25D994D_1>* Field_1_1; // 0x10
	::System::Single Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E506C5F68028856__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0E506C5F68028856__CCTOR_OFFSET))();
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0E506C5F68028856_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_13B7A8170F860F68(::Class_1_273278230A48923F* a1, ::System::Int32 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Nullable_1<::System::ValueTuple_2<::System::Single, ::System::Single>> a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_273278230A48923F*, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Nullable_1<::System::ValueTuple_2<::System::Single, ::System::Single>>))((::PBYTE)hIl2Cpp + CLASS_1_0E506C5F68028856_METHOD_1_13B7A8170F860F68_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Single Method_1_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E506C5F68028856_METHOD_1_D64FD9A228A1C4E0_OFFSET))(this);
	}

	::System::Void Method_1_72180CEDBAD98877(::System::Single& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_0E506C5F68028856_METHOD_1_72180CEDBAD98877_OFFSET))(this, a1);
	}

	::System::Void Method_1_2D4DFB99EB1E1DBF(::System::Single a1, ::System::Single& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_0E506C5F68028856_METHOD_1_2D4DFB99EB1E1DBF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_53898BC8CD31F230(::System::Single& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_0E506C5F68028856_METHOD_1_53898BC8CD31F230_OFFSET))(this, a1);
	}

	static ::System::String* Method_1_6F923902D583280F(::System::Single a1)
	{
		return ((::System::String*(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0E506C5F68028856_METHOD_1_6F923902D583280F_OFFSET))(a1);
	}

	static ::System::Void Method_1_BBA7B48D3918837D(::System::Single& a1, ::System::Single& a2)
	{
		return ((::System::Void(*)(::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_0E506C5F68028856_METHOD_1_BBA7B48D3918837D_OFFSET))(a1, a2);
	}

	::System::Int32 Method_1_EE730C6E5D59E0BF(::System::Span_1<::Struct_2_31CE9F74ED7EF316_2> a1, ::System::Single a2, ::System::Single a3, ::System::Single& a4, ::System::Single& a5)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Span_1<::Struct_2_31CE9F74ED7EF316_2>, ::System::Single, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_0E506C5F68028856_METHOD_1_EE730C6E5D59E0BF_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_68D95C6B2A34D6B7(::System::Single a1, ::System::Single& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_0E506C5F68028856_METHOD_1_68D95C6B2A34D6B7_OFFSET))(this, a1, a2);
	}
};
