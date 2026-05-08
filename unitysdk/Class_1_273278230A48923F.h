#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/Struct_2_31CE9F74ED7EF316.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Span_1.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Color32.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Action_5; }
namespace UnityEngine { class Texture2D; }

#define CLASS_1_273278230A48923F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x169E14D0)
#define CLASS_1_273278230A48923F_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x169E24E0)
#define CLASS_1_273278230A48923F_METHOD_1_1195F22F5DEBA427_OFFSET UNITYSDK_OFFSET(0x169E2530)
#define CLASS_1_273278230A48923F_METHOD_1_7B59DB7BD8C83AD6_OFFSET UNITYSDK_OFFSET(0x169E2750)
#define CLASS_1_273278230A48923F_METHOD_1_80C9A7432F63B896_OFFSET UNITYSDK_OFFSET(0x169E1740)
#define CLASS_1_273278230A48923F_METHOD_1_958AFE4D09BE62E6_OFFSET UNITYSDK_OFFSET(0x169E17F0)
#define CLASS_1_273278230A48923F_METHOD_1_A539F3D57156D2C9_OFFSET UNITYSDK_OFFSET(0x169E22A0)
#define CLASS_1_273278230A48923F_METHOD_1_B59900450680D19A_OFFSET UNITYSDK_OFFSET(0x169E18E0)
#define CLASS_1_273278230A48923F_METHOD_1_BBE2D28D8A6AFB06_OFFSET UNITYSDK_OFFSET(0x169E2480)
#define CLASS_1_273278230A48923F_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x169E29B0)
#define CLASS_1_273278230A48923F__CTOR_OFFSET UNITYSDK_OFFSET(0x169E1380)

inline static constexpr unsigned int Class_1_273278230A48923F_TypeDefinitionIndex = 67809;

class Class_1_273278230A48923F : public ::System::Object
{
public:
	::System::Action_5<::System::Single, ::System::Single, ::System::String*, ::System::String*, ::System::String*>* Field_1_11; // 0x10
	::System::String* Field_1_9; // 0x18
	::System::String* Field_1_8; // 0x20
	::System::String* Field_1_10; // 0x28
	::UnityEngine::Texture2D* Field_1_1; // 0x30
	::Unity::Collections::NativeArray_1<::UnityEngine::Color32> Field_1_0; // 0x38
	::System::Single Field_1_4; // 0x48
	::System::Single Field_1_7; // 0x4C
	::System::Single Field_1_6; // 0x50
	::System::Int32 Field_1_3; // 0x54
	::System::Int32 Field_1_2; // 0x58
	::System::Single Field_1_5; // 0x5C

	::System::Void _ctor(::UnityEngine::Texture2D* a1, ::System::Action_5<::System::Single, ::System::Single, ::System::String*, ::System::String*, ::System::String*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*, ::System::Action_5<::System::Single, ::System::Single, ::System::String*, ::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_273278230A48923F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_273278230A48923F_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_80C9A7432F63B896(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Color32 a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Color32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_273278230A48923F_METHOD_1_80C9A7432F63B896_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_958AFE4D09BE62E6(::Struct_2_31CE9F74ED7EF316 a1, ::Struct_2_31CE9F74ED7EF316 a2, ::System::Single a3, ::UnityEngine::Color32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_31CE9F74ED7EF316, ::Struct_2_31CE9F74ED7EF316, ::System::Single, ::UnityEngine::Color32))((::PBYTE)hIl2Cpp + CLASS_1_273278230A48923F_METHOD_1_958AFE4D09BE62E6_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_B59900450680D19A(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Single a5, ::UnityEngine::Color32 a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Single, ::UnityEngine::Color32))((::PBYTE)hIl2Cpp + CLASS_1_273278230A48923F_METHOD_1_B59900450680D19A_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::MoleMole::Vector2Int Method_1_A539F3D57156D2C9(::System::Single a1, ::System::Single a2)
	{
		return ((::MoleMole::Vector2Int(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_273278230A48923F_METHOD_1_A539F3D57156D2C9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BBE2D28D8A6AFB06(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_273278230A48923F_METHOD_1_BBE2D28D8A6AFB06_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_273278230A48923F_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Void Method_1_1195F22F5DEBA427(::System::Span_1<::Struct_2_31CE9F74ED7EF316> a1, ::System::Single a2, ::UnityEngine::Color32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Span_1<::Struct_2_31CE9F74ED7EF316>, ::System::Single, ::UnityEngine::Color32))((::PBYTE)hIl2Cpp + CLASS_1_273278230A48923F_METHOD_1_1195F22F5DEBA427_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_7B59DB7BD8C83AD6(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_273278230A48923F_METHOD_1_7B59DB7BD8C83AD6_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_273278230A48923F_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
