#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LOD.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class LODGroup; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture2D; }

#define CLASS_1_8A43CC995889687F_METHOD_1_05903074FA8D7D0E_OFFSET UNITYSDK_OFFSET(0x134FD790)
#define CLASS_1_8A43CC995889687F_METHOD_1_0CD816D9ABC8368A_OFFSET UNITYSDK_OFFSET(0x134FD030)
#define CLASS_1_8A43CC995889687F_METHOD_1_2A73302F5D8B0BA6_OFFSET UNITYSDK_OFFSET(0x134FD0A0)
#define CLASS_1_8A43CC995889687F_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x134FD320)
#define CLASS_1_8A43CC995889687F_METHOD_1_4B16404ED490414F_OFFSET UNITYSDK_OFFSET(0x134FD380)
#define CLASS_1_8A43CC995889687F_METHOD_1_64629612F3646911_OFFSET UNITYSDK_OFFSET(0x134FD2A0)
#define CLASS_1_8A43CC995889687F_METHOD_1_D632BCCC272D40EA_OFFSET UNITYSDK_OFFSET(0x134FD590)
#define CLASS_1_8A43CC995889687F__CTOR_OFFSET UNITYSDK_OFFSET(0x134FCE60)

inline static constexpr unsigned int Class_1_8A43CC995889687F_TypeDefinitionIndex = 58919;

class Class_1_8A43CC995889687F : public ::System::Object
{
public:
	::UnityEngine::MaterialPropertyBlock* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* Field_1_1; // 0x18
	::UnityEngine::LOD Field_1_2; // 0x20
	::System::Int32 Field_1_5; // 0x38
	::System::Boolean Field_1_3; // 0x3C
	::System::Int32 Field_1_4; // 0x40

	::System::Void _ctor(::UnityEngine::LODGroup* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::LODGroup*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8A43CC995889687F__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_0CD816D9ABC8368A(::System::Int32 a1, ::UnityEngine::Texture2D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + CLASS_1_8A43CC995889687F_METHOD_1_0CD816D9ABC8368A_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_2A73302F5D8B0BA6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A43CC995889687F_METHOD_1_2A73302F5D8B0BA6_OFFSET))(this);
	}

	::System::Void Method_1_64629612F3646911(::System::Int32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8A43CC995889687F_METHOD_1_64629612F3646911_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A43CC995889687F_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_4B16404ED490414F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A43CC995889687F_METHOD_1_4B16404ED490414F_OFFSET))(this);
	}

	::System::Void Method_1_D632BCCC272D40EA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A43CC995889687F_METHOD_1_D632BCCC272D40EA_OFFSET))(this);
	}

	::System::Void Method_1_05903074FA8D7D0E(::System::Int32 a1, ::UnityEngine::Vector4 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + CLASS_1_8A43CC995889687F_METHOD_1_05903074FA8D7D0E_OFFSET))(this, a1, a2);
	}
};
