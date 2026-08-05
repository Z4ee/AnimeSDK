#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_588;
class Class_1_AAE19C7012281A1B;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define CLASS_1_5BA1211B460A073E_METHOD_1_09C4428BEAB114EA_OFFSET UNITYSDK_OFFSET(0x1A7C9D60)
#define CLASS_1_5BA1211B460A073E_METHOD_1_24AC420490870C50_OFFSET UNITYSDK_OFFSET(0x1A7C9D00)
#define CLASS_1_5BA1211B460A073E_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1A7CA0E0)
#define CLASS_1_5BA1211B460A073E_METHOD_1_499E04DDEB14CC7B_OFFSET UNITYSDK_OFFSET(0x1A7C9930)
#define CLASS_1_5BA1211B460A073E_METHOD_1_C8E5F05E7AAAFF22_OFFSET UNITYSDK_OFFSET(0x1A7C97A0)
#define CLASS_1_5BA1211B460A073E_METHOD_1_FCB175EE4400634C_OFFSET UNITYSDK_OFFSET(0x1A7C9ED0)
#define CLASS_1_5BA1211B460A073E__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7C96C0)

inline static constexpr unsigned int Class_1_5BA1211B460A073E_TypeDefinitionIndex = 59660;

class Class_1_5BA1211B460A073E : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_588*>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_0_16E4307DCC419505_588*>* Field_1_2; // 0x18
	::System::UInt32 Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5BA1211B460A073E__CTOR_OFFSET))(this);
	}

	::Class_1_AAE19C7012281A1B* Method_1_C8E5F05E7AAAFF22(::UnityEngine::RectTransform* a1)
	{
		return ((::Class_1_AAE19C7012281A1B*(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + CLASS_1_5BA1211B460A073E_METHOD_1_C8E5F05E7AAAFF22_OFFSET))(this, a1);
	}

	::System::Void Method_1_499E04DDEB14CC7B(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5BA1211B460A073E_METHOD_1_499E04DDEB14CC7B_OFFSET))(this, a1);
	}

	::System::Void Method_1_09C4428BEAB114EA(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5BA1211B460A073E_METHOD_1_09C4428BEAB114EA_OFFSET))(this, a1);
	}

	::System::Void Method_1_24AC420490870C50(::Class_0_16E4307DCC419505_588* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_588*))((::PBYTE)hIl2Cpp + CLASS_1_5BA1211B460A073E_METHOD_1_24AC420490870C50_OFFSET))(this, a1);
	}

	::System::Void Method_1_FCB175EE4400634C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5BA1211B460A073E_METHOD_1_FCB175EE4400634C_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5BA1211B460A073E_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}
};
