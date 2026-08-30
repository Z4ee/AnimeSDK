#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_C89D4C6D15B742C2.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_303D5A33D1401D59;
class Class_1_D70A30D666F20D90;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::Client::OpenWorld { class StreamingLayerDetail; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_3_CEF86C33D203CEB1_METHOD_3_465C7AF349834498_OFFSET UNITYSDK_OFFSET(0x15890360)
#define CLASS_3_CEF86C33D203CEB1_METHOD_3_5AFFA079DA8B20AA_OFFSET UNITYSDK_OFFSET(0x158902F0)
#define CLASS_3_CEF86C33D203CEB1_METHOD_3_A075CF751E1F56A2_OFFSET UNITYSDK_OFFSET(0x15890460)
#define CLASS_3_CEF86C33D203CEB1_METHOD_3_B25D8B00CDE640ED_OFFSET UNITYSDK_OFFSET(0x158909B0)
#define CLASS_3_CEF86C33D203CEB1_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x158902B0)
#define CLASS_3_CEF86C33D203CEB1__CTOR_OFFSET UNITYSDK_OFFSET(0x15890220)
#define CLASS_3_CEF86C33D203CEB1___N__0_OFFSET UNITYSDK_OFFSET(0x15891230)

inline static constexpr unsigned int Class_3_CEF86C33D203CEB1_TypeDefinitionIndex = 73777;

class Class_3_CEF86C33D203CEB1 : public ::Class_2_C89D4C6D15B742C2
{
public:
	::System::Int32 KHBFNMDLILM; // 0x288
	::System::Int32 ENNBKAEMKHD; // 0x28C
	::System::Nullable_1<::UnityEngine::Vector3> ONAFKLJMHIH; // 0x290

	::System::Void _ctor(::RPG::Client::OpenWorld::StreamingLayerDetail* a1, ::Class_1_D70A30D666F20D90* a2, ::Class_1_303D5A33D1401D59* a3, ::UnityEngine::GameObject* a4, ::UnityEngine::GameObject* a5, ::System::Nullable_1<::UnityEngine::Vector3> a6)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLayerDetail*, ::Class_1_D70A30D666F20D90*, ::Class_1_303D5A33D1401D59*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::System::Nullable_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + CLASS_3_CEF86C33D203CEB1__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CEF86C33D203CEB1_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Collections::IEnumerator* Method_3_5AFFA079DA8B20AA()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CEF86C33D203CEB1_METHOD_3_5AFFA079DA8B20AA_OFFSET))(this);
	}

	::System::Int32 Method_3_465C7AF349834498(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_3_CEF86C33D203CEB1_METHOD_3_465C7AF349834498_OFFSET))(this, a1);
	}

	::System::Void Method_3_A075CF751E1F56A2(::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>*))((::PBYTE)hIl2Cpp + CLASS_3_CEF86C33D203CEB1_METHOD_3_A075CF751E1F56A2_OFFSET))(this, a1);
	}

	::System::Void Method_3_B25D8B00CDE640ED(::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>*))((::PBYTE)hIl2Cpp + CLASS_3_CEF86C33D203CEB1_METHOD_3_B25D8B00CDE640ED_OFFSET))(this, a1);
	}

	::System::Collections::IEnumerator* __n__0()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CEF86C33D203CEB1___N__0_OFFSET))(this);
	}
};
