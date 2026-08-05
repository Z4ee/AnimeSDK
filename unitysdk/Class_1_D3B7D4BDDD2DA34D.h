#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/Struct_2_31CE9F74ED7EF316_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Span_1.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Color32.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Action_5; }
namespace UnityEngine { class Texture2D; }

#define CLASS_1_D3B7D4BDDD2DA34D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11CB56F0)
#define CLASS_1_D3B7D4BDDD2DA34D_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x11CB5C20)
#define CLASS_1_D3B7D4BDDD2DA34D_METHOD_1_1195F22F5DEBA427_OFFSET UNITYSDK_OFFSET(0x11CB5F00)
#define CLASS_1_D3B7D4BDDD2DA34D_METHOD_1_32B80E26A71064CC_OFFSET UNITYSDK_OFFSET(0x11CB6170)
#define CLASS_1_D3B7D4BDDD2DA34D_METHOD_1_7B59DB7BD8C83AD6_OFFSET UNITYSDK_OFFSET(0x11CB59C0)
#define CLASS_1_D3B7D4BDDD2DA34D_METHOD_1_80C9A7432F63B896_OFFSET UNITYSDK_OFFSET(0x11CB5C70)
#define CLASS_1_D3B7D4BDDD2DA34D_METHOD_1_958AFE4D09BE62E6_OFFSET UNITYSDK_OFFSET(0x11CB6B70)
#define CLASS_1_D3B7D4BDDD2DA34D_METHOD_1_A539F3D57156D2C9_OFFSET UNITYSDK_OFFSET(0x11CB5D20)
#define CLASS_1_D3B7D4BDDD2DA34D_METHOD_1_BBE2D28D8A6AFB06_OFFSET UNITYSDK_OFFSET(0x11CB6110)
#define CLASS_1_D3B7D4BDDD2DA34D_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11CB5960)
#define CLASS_1_D3B7D4BDDD2DA34D__CTOR_OFFSET UNITYSDK_OFFSET(0x11CB55A0)

inline static constexpr unsigned int Class_1_D3B7D4BDDD2DA34D_TypeDefinitionIndex = 48207;

class Class_1_D3B7D4BDDD2DA34D : public ::System::Object
{
public:
	::System::String* Field_1_8; // 0x10
	::System::String* Field_1_9; // 0x18
	::System::Action_5<::System::Single, ::System::Single, ::System::String*, ::System::String*, ::System::String*>* Field_1_15; // 0x20
	::UnityEngine::Texture2D* Field_1_1; // 0x28
	::System::String* Field_1_10; // 0x30
	::System::Single Field_1_5; // 0x38
	::System::Single Field_1_6; // 0x3C
	::System::Int32 Field_1_0; // 0x40
	::System::Single Field_1_4; // 0x44
	::Unity::Collections::NativeArray_1<::UnityEngine::Color32> Field_1_2; // 0x48
	::System::Single Field_1_11; // 0x58
	::System::Int32 Field_1_7; // 0x5C

	::System::Void _ctor(::UnityEngine::Texture2D* a1, ::System::Action_5<::System::Single, ::System::Single, ::System::String*, ::System::String*, ::System::String*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*, ::System::Action_5<::System::Single, ::System::Single, ::System::String*, ::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_D3B7D4BDDD2DA34D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3B7D4BDDD2DA34D_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3B7D4BDDD2DA34D_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_7B59DB7BD8C83AD6(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D3B7D4BDDD2DA34D_METHOD_1_7B59DB7BD8C83AD6_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D3B7D4BDDD2DA34D_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Void Method_1_80C9A7432F63B896(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Color32 a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Color32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D3B7D4BDDD2DA34D_METHOD_1_80C9A7432F63B896_OFFSET))(this, a1, a2, a3, a4);
	}

	::MoleMole::Vector2Int Method_1_A539F3D57156D2C9(::System::Single a1, ::System::Single a2)
	{
		return ((::MoleMole::Vector2Int(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D3B7D4BDDD2DA34D_METHOD_1_A539F3D57156D2C9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1195F22F5DEBA427(::System::Span_1<::Struct_2_31CE9F74ED7EF316_1> a1, ::System::Single a2, ::UnityEngine::Color32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Span_1<::Struct_2_31CE9F74ED7EF316_1>, ::System::Single, ::UnityEngine::Color32))((::PBYTE)hIl2Cpp + CLASS_1_D3B7D4BDDD2DA34D_METHOD_1_1195F22F5DEBA427_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_BBE2D28D8A6AFB06(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D3B7D4BDDD2DA34D_METHOD_1_BBE2D28D8A6AFB06_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_32B80E26A71064CC(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Single a5, ::UnityEngine::Color32 a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Single, ::UnityEngine::Color32))((::PBYTE)hIl2Cpp + CLASS_1_D3B7D4BDDD2DA34D_METHOD_1_32B80E26A71064CC_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_958AFE4D09BE62E6(::Struct_2_31CE9F74ED7EF316_1 a1, ::Struct_2_31CE9F74ED7EF316_1 a2, ::System::Single a3, ::UnityEngine::Color32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_31CE9F74ED7EF316_1, ::Struct_2_31CE9F74ED7EF316_1, ::System::Single, ::UnityEngine::Color32))((::PBYTE)hIl2Cpp + CLASS_1_D3B7D4BDDD2DA34D_METHOD_1_958AFE4D09BE62E6_OFFSET))(this, a1, a2, a3, a4);
	}
};
