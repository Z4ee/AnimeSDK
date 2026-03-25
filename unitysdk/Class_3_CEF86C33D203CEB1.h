#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_1DF845F074911800.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_303D5A33D1401D59;
class Class_1_56FF45D7B2C55655;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::Client::OpenWorld { class StreamingLayerDetail; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_3_CEF86C33D203CEB1_METHOD_3_465C7AF349834498_OFFSET UNITYSDK_OFFSET(0x8CC8770)
#define CLASS_3_CEF86C33D203CEB1_METHOD_3_5AFFA079DA8B20AA_1_OFFSET UNITYSDK_OFFSET(0x8CC9170)
#define CLASS_3_CEF86C33D203CEB1_METHOD_3_5AFFA079DA8B20AA_OFFSET UNITYSDK_OFFSET(0x8CC8700)
#define CLASS_3_CEF86C33D203CEB1_METHOD_3_AAB5A7DDC33052E4_OFFSET UNITYSDK_OFFSET(0x8CC91F0)
#define CLASS_3_CEF86C33D203CEB1_METHOD_3_B08D8A5BA821D464_OFFSET UNITYSDK_OFFSET(0x8CC8B70)
#define CLASS_3_CEF86C33D203CEB1_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8CC86C0)
#define CLASS_3_CEF86C33D203CEB1_METHOD_3_E5C5912D2533B97D_OFFSET UNITYSDK_OFFSET(0x8CC9200)
#define CLASS_3_CEF86C33D203CEB1_METHOD_3_E8240251ECA9866D_OFFSET UNITYSDK_OFFSET(0x8CC8870)
#define CLASS_3_CEF86C33D203CEB1__CTOR_OFFSET UNITYSDK_OFFSET(0x8CC8630)
#define CLASS_3_CEF86C33D203CEB1___N__0_OFFSET UNITYSDK_OFFSET(0x8CC90F0)

inline static constexpr unsigned int Class_3_CEF86C33D203CEB1_TypeDefinitionIndex = 60567;

class Class_3_CEF86C33D203CEB1 : public ::Class_2_1DF845F074911800
{
public:
	::System::Nullable_1<::UnityEngine::Vector3> Field_3_2; // 0x260
	::System::Int32 Field_3_0; // 0x270
	::System::Int32 Field_3_1; // 0x274

	::System::Void _ctor(::RPG::Client::OpenWorld::StreamingLayerDetail* a1, ::Class_1_56FF45D7B2C55655* a2, ::Class_1_303D5A33D1401D59* a3, ::UnityEngine::GameObject* a4, ::UnityEngine::GameObject* a5, ::System::Nullable_1<::UnityEngine::Vector3> a6)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLayerDetail*, ::Class_1_56FF45D7B2C55655*, ::Class_1_303D5A33D1401D59*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::System::Nullable_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + CLASS_3_CEF86C33D203CEB1__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
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

	::System::Void Method_3_E8240251ECA9866D(::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>*))((::PBYTE)hIl2Cpp + CLASS_3_CEF86C33D203CEB1_METHOD_3_E8240251ECA9866D_OFFSET))(this, a1);
	}

	::System::Void Method_3_B08D8A5BA821D464(::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>*))((::PBYTE)hIl2Cpp + CLASS_3_CEF86C33D203CEB1_METHOD_3_B08D8A5BA821D464_OFFSET))(this, a1);
	}

	::System::Collections::IEnumerator* __n__0()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CEF86C33D203CEB1___N__0_OFFSET))(this);
	}

	::System::Collections::IEnumerator* Method_3_5AFFA079DA8B20AA_1()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CEF86C33D203CEB1_METHOD_3_5AFFA079DA8B20AA_1_OFFSET))(this);
	}

	::System::Void Method_3_AAB5A7DDC33052E4(::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>*))((::PBYTE)hIl2Cpp + CLASS_3_CEF86C33D203CEB1_METHOD_3_AAB5A7DDC33052E4_OFFSET))(this, P0);
	}

	::System::Void Method_3_E5C5912D2533B97D(::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>*))((::PBYTE)hIl2Cpp + CLASS_3_CEF86C33D203CEB1_METHOD_3_E5C5912D2533B97D_OFFSET))(this, P0);
	}
};
