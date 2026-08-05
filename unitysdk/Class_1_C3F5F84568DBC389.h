#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C3F5F84568DBC389_Struct_2_D81A7478E25D994D_1.h"
#include "unitysdk/Struct_2_31CE9F74ED7EF316_1.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Span_1.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Color32.h"

class Class_1_D3B7D4BDDD2DA34D;
namespace PipelineCamera { template <typename T> class CircularBuffer_1; }
namespace System { class String; }

#define CLASS_1_C3F5F84568DBC389_METHOD_1_0FAD8E83B4258F94_OFFSET UNITYSDK_OFFSET(0x14E07AD0)
#define CLASS_1_C3F5F84568DBC389_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x14E06720)
#define CLASS_1_C3F5F84568DBC389_METHOD_1_2E3C71AD8E78BD37_OFFSET UNITYSDK_OFFSET(0x14E08080)
#define CLASS_1_C3F5F84568DBC389_METHOD_1_54447D5255EFEC30_OFFSET UNITYSDK_OFFSET(0x14E08580)
#define CLASS_1_C3F5F84568DBC389_METHOD_1_60DEF8D9EE8F0CF0_OFFSET UNITYSDK_OFFSET(0x14E07670)
#define CLASS_1_C3F5F84568DBC389_METHOD_1_6F923902D583280F_OFFSET UNITYSDK_OFFSET(0x14E07F30)
#define CLASS_1_C3F5F84568DBC389_METHOD_1_8E5F788FA88D181F_OFFSET UNITYSDK_OFFSET(0x14E08100)
#define CLASS_1_C3F5F84568DBC389_METHOD_1_BBA7B48D3918837D_OFFSET UNITYSDK_OFFSET(0x14E07FF0)
#define CLASS_1_C3F5F84568DBC389_METHOD_1_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x14E07600)
#define CLASS_1_C3F5F84568DBC389_METHOD_1_DA8CBB36AB7F4F26_OFFSET UNITYSDK_OFFSET(0x14E067A0)
#define CLASS_1_C3F5F84568DBC389__CCTOR_OFFSET UNITYSDK_OFFSET(0x14E07F20)
#define CLASS_1_C3F5F84568DBC389__CTOR_OFFSET UNITYSDK_OFFSET(0x14E07ED0)

inline static constexpr unsigned int Class_1_C3F5F84568DBC389_TypeDefinitionIndex = 88721;

class Class_1_C3F5F84568DBC389 : public ::System::Object
{
public:
	static ::UnityEngine::Color32* StaticGet_Field_1_0()
	{
		return (::UnityEngine::Color32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C3F5F84568DBC389_TypeDefinitionIndex)->GetStaticField(0xF370);
	}
	::PipelineCamera::CircularBuffer_1<::Class_1_C3F5F84568DBC389_Struct_2_D81A7478E25D994D_1>* Field_1_7; // 0x10
	::System::Single Field_1_6; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3F5F84568DBC389__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C3F5F84568DBC389__CCTOR_OFFSET))();
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C3F5F84568DBC389_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_DA8CBB36AB7F4F26(::Class_1_D3B7D4BDDD2DA34D* a1, ::System::Int32 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Nullable_1<::System::ValueTuple_2<::System::Single, ::System::Single>> a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D3B7D4BDDD2DA34D*, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Nullable_1<::System::ValueTuple_2<::System::Single, ::System::Single>>))((::PBYTE)hIl2Cpp + CLASS_1_C3F5F84568DBC389_METHOD_1_DA8CBB36AB7F4F26_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Single Method_1_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3F5F84568DBC389_METHOD_1_D64FD9A228A1C4E0_OFFSET))(this);
	}

	::System::Void Method_1_60DEF8D9EE8F0CF0(::System::Single& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_C3F5F84568DBC389_METHOD_1_60DEF8D9EE8F0CF0_OFFSET))(this, a1);
	}

	::System::Void Method_1_0FAD8E83B4258F94(::System::Single a1, ::System::Single& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_C3F5F84568DBC389_METHOD_1_0FAD8E83B4258F94_OFFSET))(this, a1, a2);
	}

	static ::System::String* Method_1_6F923902D583280F(::System::Single a1)
	{
		return ((::System::String*(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C3F5F84568DBC389_METHOD_1_6F923902D583280F_OFFSET))(a1);
	}

	static ::System::Void Method_1_BBA7B48D3918837D(::System::Single& a1, ::System::Single& a2)
	{
		return ((::System::Void(*)(::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_C3F5F84568DBC389_METHOD_1_BBA7B48D3918837D_OFFSET))(a1, a2);
	}

	::System::Void Method_1_2E3C71AD8E78BD37(::System::Single& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_C3F5F84568DBC389_METHOD_1_2E3C71AD8E78BD37_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_8E5F788FA88D181F(::System::Span_1<::Struct_2_31CE9F74ED7EF316_1> a1, ::System::Single a2, ::System::Single a3, ::System::Single& a4, ::System::Single& a5)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Span_1<::Struct_2_31CE9F74ED7EF316_1>, ::System::Single, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_C3F5F84568DBC389_METHOD_1_8E5F788FA88D181F_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_54447D5255EFEC30(::System::Single a1, ::System::Single& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_C3F5F84568DBC389_METHOD_1_54447D5255EFEC30_OFFSET))(this, a1, a2);
	}
};
