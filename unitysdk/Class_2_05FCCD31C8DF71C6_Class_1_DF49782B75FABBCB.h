#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"

class Class_0_16E4307DCC419505_1130;
class Class_2_05FCCD31C8DF71C6;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_05FCCD31C8DF71C6_CLASS_1_DF49782B75FABBCB_METHOD_1_2BD2A2E8F5E35FEE_OFFSET UNITYSDK_OFFSET(0x164856E0)
#define CLASS_2_05FCCD31C8DF71C6_CLASS_1_DF49782B75FABBCB_METHOD_1_385E5C596DBCDA93_OFFSET UNITYSDK_OFFSET(0x16485DA0)
#define CLASS_2_05FCCD31C8DF71C6_CLASS_1_DF49782B75FABBCB_METHOD_1_641B0E011994D7E4_OFFSET UNITYSDK_OFFSET(0x16484760)
#define CLASS_2_05FCCD31C8DF71C6_CLASS_1_DF49782B75FABBCB_METHOD_1_E1801F061DC40B5F_OFFSET UNITYSDK_OFFSET(0x16486C00)
#define CLASS_2_05FCCD31C8DF71C6_CLASS_1_DF49782B75FABBCB__CTOR_OFFSET UNITYSDK_OFFSET(0x16484530)

inline static constexpr unsigned int Class_2_05FCCD31C8DF71C6_Class_1_DF49782B75FABBCB_TypeDefinitionIndex = 70468;

class Class_2_05FCCD31C8DF71C6_Class_1_DF49782B75FABBCB : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1130*>*>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::Class_0_16E4307DCC419505_1130*, ::System::Int32>* Field_1_1; // 0x18
	::System::Single Field_1_2; // 0x20
	::System::Single Field_1_3; // 0x24
	::System::Int32 Field_1_4; // 0x28
	::System::Single Field_1_5; // 0x2C
	::System::Single Field_1_6; // 0x30

	::System::Void _ctor(::System::Int32 a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_05FCCD31C8DF71C6_CLASS_1_DF49782B75FABBCB__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_E1801F061DC40B5F(::System::Single a1, ::Class_2_05FCCD31C8DF71C6* a2, ::System::Collections::Generic::HashSet_1<::System::Int32>* a3, ::UnityEngine::GameObject* a4, ::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*>* a5, ::Class_2_05FCCD31C8DF71C6_Class_1_DF49782B75FABBCB* a6, ::Class_2_05FCCD31C8DF71C6_Class_1_DF49782B75FABBCB* a7)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::Class_2_05FCCD31C8DF71C6*, ::System::Collections::Generic::HashSet_1<::System::Int32>*, ::UnityEngine::GameObject*, ::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*>*, ::Class_2_05FCCD31C8DF71C6_Class_1_DF49782B75FABBCB*, ::Class_2_05FCCD31C8DF71C6_Class_1_DF49782B75FABBCB*))((::PBYTE)hIl2Cpp + CLASS_2_05FCCD31C8DF71C6_CLASS_1_DF49782B75FABBCB_METHOD_1_E1801F061DC40B5F_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_1_2BD2A2E8F5E35FEE(::Class_0_16E4307DCC419505_1130* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1130*))((::PBYTE)hIl2Cpp + CLASS_2_05FCCD31C8DF71C6_CLASS_1_DF49782B75FABBCB_METHOD_1_2BD2A2E8F5E35FEE_OFFSET))(this, a1);
	}

	::System::Void Method_1_641B0E011994D7E4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_05FCCD31C8DF71C6_CLASS_1_DF49782B75FABBCB_METHOD_1_641B0E011994D7E4_OFFSET))(this);
	}

	::System::Boolean Method_1_385E5C596DBCDA93(::Class_0_16E4307DCC419505_1130* a1, ::System::Int32 a2, ::System::Nullable_1<::UnityEngine::Rect> a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_1130*, ::System::Int32, ::System::Nullable_1<::UnityEngine::Rect>))((::PBYTE)hIl2Cpp + CLASS_2_05FCCD31C8DF71C6_CLASS_1_DF49782B75FABBCB_METHOD_1_385E5C596DBCDA93_OFFSET))(this, a1, a2, a3);
	}
};
