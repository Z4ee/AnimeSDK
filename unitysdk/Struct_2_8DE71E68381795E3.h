#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define STRUCT_2_8DE71E68381795E3_EXECUTE_OFFSET UNITYSDK_OFFSET(0x2DF7B00)
#define STRUCT_2_8DE71E68381795E3_METHOD_2_2C6D4994BE977BFA_OFFSET UNITYSDK_OFFSET(0x16321800)

inline static constexpr unsigned int Struct_2_8DE71E68381795E3_TypeDefinitionIndex = 70435;

struct alignas(8) Struct_2_8DE71E68381795E3
{
	::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> MBBBHFDGJPN; // 0x10
	::Unity::Collections::NativeArray_1<::System::Single> CMBDPCJBEJF; // 0x20
	::Unity::Collections::NativeArray_1<::UnityEngine::Vector4> LPDFHNHCKLH; // 0x30
	::System::Single GAFENHHEBPG; // 0x40
	::UnityEngine::Matrix4x4 DMIBMNOINJL; // 0x44
	::System::Single HBAMPJPOOLM; // 0x84
	::System::Single CPBLKCKCLLE; // 0x88
	::UnityEngine::Vector3 ACKEIJLGADO; // 0x8C
	::System::Single OHNIKINAHMJ; // 0x98
	::System::Single IDJGGKOIEMH; // 0x9C
	::System::Single CDHOOPAGGHA; // 0xA0
	::System::Single FGHNGICIFII; // 0xA4
	::Unity::Collections::NativeArray_1<::System::Single> ACJMCMJMLDO; // 0xA8
	::UnityEngine::Matrix4x4 KEGAFKMLEPA; // 0xB8
	::System::Boolean FLMBGIDHIGE; // 0xF8

	static ::System::Single Method_2_2C6D4994BE977BFA(::Unity::Collections::NativeArray_1<::System::Single> a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::Unity::Collections::NativeArray_1<::System::Single>, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_8DE71E68381795E3_METHOD_2_2C6D4994BE977BFA_OFFSET))(a1, a2);
	}

	::System::Void Execute(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_8DE71E68381795E3_EXECUTE_OFFSET))(this, a1);
	}
};
