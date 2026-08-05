#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_0A3CE1EE696038B0.h"
#include "unitysdk/Struct_2_E223907A17AC5B62.h"
#include "unitysdk/Struct_2_FC8325CDCE772EFA.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/Jobs/TransformAccess.h"
#include "unitysdk/UnityEngine/Jobs/TransformAccessArray.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_463E8E2D3909DF52_METHOD_1_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x1E759D80)
#define CLASS_1_463E8E2D3909DF52_METHOD_1_14CF37BD4C36184D_OFFSET UNITYSDK_OFFSET(0x1E75A0E0)
#define CLASS_1_463E8E2D3909DF52_METHOD_1_169ACDDF88AD2AC3_OFFSET UNITYSDK_OFFSET(0x1E759FF0)
#define CLASS_1_463E8E2D3909DF52_METHOD_1_357E3ECEDD9B04FA_OFFSET UNITYSDK_OFFSET(0x1E75A4B0)
#define CLASS_1_463E8E2D3909DF52_METHOD_1_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x1E759600)
#define CLASS_1_463E8E2D3909DF52_METHOD_1_67AB4D27061DAF44_OFFSET UNITYSDK_OFFSET(0x1E75A8C0)
#define CLASS_1_463E8E2D3909DF52_METHOD_1_67D41ACFEF39E84E_OFFSET UNITYSDK_OFFSET(0x1E75A540)
#define CLASS_1_463E8E2D3909DF52_METHOD_1_745F93A8744358B2_OFFSET UNITYSDK_OFFSET(0x1E7599D0)
#define CLASS_1_463E8E2D3909DF52_METHOD_1_8F92DA4CF253E8DB_OFFSET UNITYSDK_OFFSET(0x1E7597E0)
#define CLASS_1_463E8E2D3909DF52_METHOD_1_A37F95FE754B38A0_OFFSET UNITYSDK_OFFSET(0x1E75A3B0)
#define CLASS_1_463E8E2D3909DF52_METHOD_1_A9D74EF2996A11F3_OFFSET UNITYSDK_OFFSET(0x1E75A9B0)
#define CLASS_1_463E8E2D3909DF52_METHOD_1_B0351A8151A472A4_OFFSET UNITYSDK_OFFSET(0x1E759F20)
#define CLASS_1_463E8E2D3909DF52_METHOD_1_BEC9FA2C70772E95_OFFSET UNITYSDK_OFFSET(0x1E75AA60)
#define CLASS_1_463E8E2D3909DF52_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1E759FA0)
#define CLASS_1_463E8E2D3909DF52_METHOD_1_D09831639F615812_OFFSET UNITYSDK_OFFSET(0x1E75A4C0)
#define CLASS_1_463E8E2D3909DF52__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E759560)
#define CLASS_1_463E8E2D3909DF52__CTOR_OFFSET UNITYSDK_OFFSET(0x1E759550)

inline static constexpr unsigned int Class_1_463E8E2D3909DF52_TypeDefinitionIndex = 8398;

class Class_1_463E8E2D3909DF52 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_463E8E2D3909DF52*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_463E8E2D3909DF52*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_463E8E2D3909DF52_TypeDefinitionIndex)->GetStaticField(0x73E0);
	}
	static ::System::Int32* StaticGet_Field_1_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_463E8E2D3909DF52_TypeDefinitionIndex)->GetStaticField(0x39D0);
	}
	::System::Collections::Generic::List_1<::Struct_2_E223907A17AC5B62>* Field_1_5; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_4; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_6; // 0x20
	::System::Collections::Generic::List_1<::Struct_2_FC8325CDCE772EFA>* Field_1_7; // 0x28
	::System::Boolean Field_1_8; // 0x30
	::System::Boolean Field_1_9; // 0x31
	::Unity::Jobs::JobHandle Field_1_11; // 0x38
	::UnityEngine::Jobs::TransformAccessArray Field_1_10; // 0x48
	::Struct_2_0A3CE1EE696038B0 Field_1_15; // 0x50
	::System::Int32 Field_1_0; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_463E8E2D3909DF52__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_463E8E2D3909DF52__CCTOR_OFFSET))();
	}

	::System::Void Method_1_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_463E8E2D3909DF52_METHOD_1_508D4DD02D3DB74E_OFFSET))(this);
	}

	::Unity::Jobs::JobHandle Method_1_8F92DA4CF253E8DB()
	{
		return ((::Unity::Jobs::JobHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_463E8E2D3909DF52_METHOD_1_8F92DA4CF253E8DB_OFFSET))(this);
	}

	::System::Void Method_1_B0351A8151A472A4(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_463E8E2D3909DF52_METHOD_1_B0351A8151A472A4_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_463E8E2D3909DF52_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_169ACDDF88AD2AC3(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_463E8E2D3909DF52_METHOD_1_169ACDDF88AD2AC3_OFFSET))(this, a1);
	}

	::System::Void Method_1_745F93A8744358B2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_463E8E2D3909DF52_METHOD_1_745F93A8744358B2_OFFSET))(this);
	}

	::Unity::Jobs::JobHandle Method_1_357E3ECEDD9B04FA()
	{
		return ((::Unity::Jobs::JobHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_463E8E2D3909DF52_METHOD_1_357E3ECEDD9B04FA_OFFSET))(this);
	}

	::System::Void Method_1_D09831639F615812(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_463E8E2D3909DF52_METHOD_1_D09831639F615812_OFFSET))(this, a1);
	}

	::System::Void Method_1_67D41ACFEF39E84E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_463E8E2D3909DF52_METHOD_1_67D41ACFEF39E84E_OFFSET))(this);
	}

	::System::Void Method_1_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_463E8E2D3909DF52_METHOD_1_0865E94460F11643_OFFSET))(this);
	}

	::Struct_2_E223907A17AC5B62 Method_1_67AB4D27061DAF44(::System::Int32 a1)
	{
		return ((::Struct_2_E223907A17AC5B62(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_463E8E2D3909DF52_METHOD_1_67AB4D27061DAF44_OFFSET))(this, a1);
	}

	::System::Void Method_1_14CF37BD4C36184D(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_463E8E2D3909DF52_METHOD_1_14CF37BD4C36184D_OFFSET))(this, a1);
	}

	static ::Class_1_463E8E2D3909DF52* Method_1_A9D74EF2996A11F3(::System::Int32 a1)
	{
		return ((::Class_1_463E8E2D3909DF52*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_463E8E2D3909DF52_METHOD_1_A9D74EF2996A11F3_OFFSET))(a1);
	}

	::System::Void Method_1_A37F95FE754B38A0(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_463E8E2D3909DF52_METHOD_1_A37F95FE754B38A0_OFFSET))(this, a1);
	}

	::System::Void Method_1_BEC9FA2C70772E95(::System::Int32 a1, ::UnityEngine::Jobs::TransformAccess a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Jobs::TransformAccess))((::PBYTE)hIl2Cpp + CLASS_1_463E8E2D3909DF52_METHOD_1_BEC9FA2C70772E95_OFFSET))(this, a1, a2);
	}
};
