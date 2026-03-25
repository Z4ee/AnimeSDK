#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7256E7A2FB36A46D.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_303D5A33D1401D59;
class Class_1_56FF45D7B2C55655;
class Class_1_8A6989C352B0F0F0;
class Class_1_AB0848A1DBCB597F;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::GameCore { class DriftComponentData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_2_7F6CFFD73D5F7F39_METHOD_2_01C417D27D338B5B_OFFSET UNITYSDK_OFFSET(0x8AC19A0)
#define CLASS_2_7F6CFFD73D5F7F39_METHOD_2_0A7A170096EAEF58_OFFSET UNITYSDK_OFFSET(0x8ABFDF0)
#define CLASS_2_7F6CFFD73D5F7F39_METHOD_2_22AF81E4920E74F1_OFFSET UNITYSDK_OFFSET(0x8AC0590)
#define CLASS_2_7F6CFFD73D5F7F39_METHOD_2_2D4EF40E42C39240_OFFSET UNITYSDK_OFFSET(0x8AC1D60)
#define CLASS_2_7F6CFFD73D5F7F39_METHOD_2_32ADCFD3C944058C_OFFSET UNITYSDK_OFFSET(0x8AC1A60)
#define CLASS_2_7F6CFFD73D5F7F39_METHOD_2_4A63C0A7EEA81CCC_OFFSET UNITYSDK_OFFSET(0x8ABFA20)
#define CLASS_2_7F6CFFD73D5F7F39_METHOD_2_4AFDAF3AFA948DA4_OFFSET UNITYSDK_OFFSET(0x8ABFAE0)
#define CLASS_2_7F6CFFD73D5F7F39_METHOD_2_4E28CED68D3FE865_OFFSET UNITYSDK_OFFSET(0x8AC1BE0)
#define CLASS_2_7F6CFFD73D5F7F39_METHOD_2_683F35A5670243E8_OFFSET UNITYSDK_OFFSET(0x8AC0520)
#define CLASS_2_7F6CFFD73D5F7F39_METHOD_2_8E8EFFA5CA7BF4EE_OFFSET UNITYSDK_OFFSET(0x8AC08C0)
#define CLASS_2_7F6CFFD73D5F7F39_METHOD_2_AC39A69E40689FBE_OFFSET UNITYSDK_OFFSET(0x8AC01A0)
#define CLASS_2_7F6CFFD73D5F7F39_METHOD_2_B2C0ADBFEA309440_OFFSET UNITYSDK_OFFSET(0x8AC0920)
#define CLASS_2_7F6CFFD73D5F7F39_METHOD_2_BC15CFBA835F1881_OFFSET UNITYSDK_OFFSET(0x8ABFC00)
#define CLASS_2_7F6CFFD73D5F7F39_METHOD_2_D7B57D4A6E55D8F9_OFFSET UNITYSDK_OFFSET(0x8AC0080)
#define CLASS_2_7F6CFFD73D5F7F39_METHOD_2_DEEF602E4E0BE9ED_OFFSET UNITYSDK_OFFSET(0x8AC18E0)
#define CLASS_2_7F6CFFD73D5F7F39_METHOD_2_E31D016687E990DD_OFFSET UNITYSDK_OFFSET(0x8AC03A0)
#define CLASS_2_7F6CFFD73D5F7F39_METHOD_2_EC2B405D0723571D_OFFSET UNITYSDK_OFFSET(0x8ABEDD0)
#define CLASS_2_7F6CFFD73D5F7F39_METHOD_2_F5D0DE62B372C4C0_OFFSET UNITYSDK_OFFSET(0x8ABF1C0)
#define CLASS_2_7F6CFFD73D5F7F39_METHOD_2_FB5CDCFD1D0099FA_1_OFFSET UNITYSDK_OFFSET(0x8AC21D0)
#define CLASS_2_7F6CFFD73D5F7F39_METHOD_2_FB5CDCFD1D0099FA_OFFSET UNITYSDK_OFFSET(0x8AC1E60)
#define CLASS_2_7F6CFFD73D5F7F39__CTOR_OFFSET UNITYSDK_OFFSET(0x8ABE890)

inline static constexpr unsigned int Class_2_7F6CFFD73D5F7F39_TypeDefinitionIndex = 60485;

class Class_2_7F6CFFD73D5F7F39 : public ::Class_1_7256E7A2FB36A46D
{
public:
	::System::Collections::Generic::Dictionary_2<::Class_1_303D5A33D1401D59*, ::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>*>* Field_2_7; // 0x18
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_AB0848A1DBCB597F*>* Field_2_4; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_2; // 0x28
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::Transform*>* Field_2_8; // 0x30
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_1_8A6989C352B0F0F0*>*>* Field_2_1; // 0x38
	::System::Collections::Generic::Dictionary_2<::Class_1_8A6989C352B0F0F0*, ::System::Int32>* Field_2_5; // 0x40
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_3; // 0x48
	::System::Collections::Generic::Dictionary_2<::Class_1_8A6989C352B0F0F0*, ::System::Int32>* Field_2_6; // 0x50
	::System::Single Field_2_0; // 0x58

	::System::Void _ctor(::Class_1_56FF45D7B2C55655* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_56FF45D7B2C55655*))((::PBYTE)hIl2Cpp + CLASS_2_7F6CFFD73D5F7F39__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_EC2B405D0723571D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7F6CFFD73D5F7F39_METHOD_2_EC2B405D0723571D_OFFSET))(this);
	}

	::System::Void Method_2_F5D0DE62B372C4C0(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7F6CFFD73D5F7F39_METHOD_2_F5D0DE62B372C4C0_OFFSET))(this, a1);
	}

	::System::Void Method_2_4A63C0A7EEA81CCC(::RPG::Client::OpenWorld::StreamingItemData* a1, ::RPG::GameCore::DriftComponentData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::GameCore::DriftComponentData*))((::PBYTE)hIl2Cpp + CLASS_2_7F6CFFD73D5F7F39_METHOD_2_4A63C0A7EEA81CCC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4AFDAF3AFA948DA4(::Class_1_303D5A33D1401D59* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2, ::UnityEngine::GameObject* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_7F6CFFD73D5F7F39_METHOD_2_4AFDAF3AFA948DA4_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void Method_2_0A7A170096EAEF58(::UnityEngine::Transform* a1, ::Class_1_AB0848A1DBCB597F* a2)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::Class_1_AB0848A1DBCB597F*))((::PBYTE)hIl2Cpp + CLASS_2_7F6CFFD73D5F7F39_METHOD_2_0A7A170096EAEF58_OFFSET))(a1, a2);
	}

	::System::Void Method_2_D7B57D4A6E55D8F9(::Class_1_8A6989C352B0F0F0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*))((::PBYTE)hIl2Cpp + CLASS_2_7F6CFFD73D5F7F39_METHOD_2_D7B57D4A6E55D8F9_OFFSET))(this, a1);
	}

	::System::Void Method_2_AC39A69E40689FBE(::Class_1_8A6989C352B0F0F0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*))((::PBYTE)hIl2Cpp + CLASS_2_7F6CFFD73D5F7F39_METHOD_2_AC39A69E40689FBE_OFFSET))(this, a1);
	}

	::System::Void Method_2_BC15CFBA835F1881(::Class_1_303D5A33D1401D59* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2, ::UnityEngine::Transform* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_7F6CFFD73D5F7F39_METHOD_2_BC15CFBA835F1881_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_E31D016687E990DD(::Class_1_303D5A33D1401D59* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*))((::PBYTE)hIl2Cpp + CLASS_2_7F6CFFD73D5F7F39_METHOD_2_E31D016687E990DD_OFFSET))(this, a1);
	}

	::System::Void Method_2_683F35A5670243E8(::Class_1_8A6989C352B0F0F0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*))((::PBYTE)hIl2Cpp + CLASS_2_7F6CFFD73D5F7F39_METHOD_2_683F35A5670243E8_OFFSET))(this, a1);
	}

	::System::Void Method_2_22AF81E4920E74F1(::Class_1_8A6989C352B0F0F0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*))((::PBYTE)hIl2Cpp + CLASS_2_7F6CFFD73D5F7F39_METHOD_2_22AF81E4920E74F1_OFFSET))(this, a1);
	}

	::System::Void Method_2_8E8EFFA5CA7BF4EE(::Class_1_8A6989C352B0F0F0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*))((::PBYTE)hIl2Cpp + CLASS_2_7F6CFFD73D5F7F39_METHOD_2_8E8EFFA5CA7BF4EE_OFFSET))(this, a1);
	}

	::System::Void Method_2_B2C0ADBFEA309440()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7F6CFFD73D5F7F39_METHOD_2_B2C0ADBFEA309440_OFFSET))(this);
	}

	static ::System::Void Method_2_01C417D27D338B5B(::System::Single a1, ::Class_1_AB0848A1DBCB597F* a2, ::UnityEngine::Transform* a3)
	{
		return ((::System::Void(*)(::System::Single, ::Class_1_AB0848A1DBCB597F*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_7F6CFFD73D5F7F39_METHOD_2_01C417D27D338B5B_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_2_32ADCFD3C944058C(::System::Single a1, ::Class_1_AB0848A1DBCB597F* a2, ::UnityEngine::Transform* a3)
	{
		return ((::System::Void(*)(::System::Single, ::Class_1_AB0848A1DBCB597F*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_7F6CFFD73D5F7F39_METHOD_2_32ADCFD3C944058C_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_2_4E28CED68D3FE865(::System::Single a1, ::Class_1_AB0848A1DBCB597F* a2, ::UnityEngine::Transform* a3)
	{
		return ((::System::Void(*)(::System::Single, ::Class_1_AB0848A1DBCB597F*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_7F6CFFD73D5F7F39_METHOD_2_4E28CED68D3FE865_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_2_DEEF602E4E0BE9ED(::System::Single a1, ::Class_1_AB0848A1DBCB597F* a2, ::UnityEngine::Transform* a3)
	{
		return ((::System::Void(*)(::System::Single, ::Class_1_AB0848A1DBCB597F*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_7F6CFFD73D5F7F39_METHOD_2_DEEF602E4E0BE9ED_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_2_FB5CDCFD1D0099FA(::System::Single a1, ::Class_1_AB0848A1DBCB597F* a2, ::UnityEngine::Transform* a3)
	{
		return ((::System::Void(*)(::System::Single, ::Class_1_AB0848A1DBCB597F*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_7F6CFFD73D5F7F39_METHOD_2_FB5CDCFD1D0099FA_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_2_FB5CDCFD1D0099FA_1(::System::Single a1, ::Class_1_AB0848A1DBCB597F* a2, ::UnityEngine::Transform* a3)
	{
		return ((::System::Void(*)(::System::Single, ::Class_1_AB0848A1DBCB597F*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_7F6CFFD73D5F7F39_METHOD_2_FB5CDCFD1D0099FA_1_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Vector3 Method_2_2D4EF40E42C39240(::System::Single a1, ::System::Single a2, ::Class_1_AB0848A1DBCB597F* a3, ::UnityEngine::Transform* a4)
	{
		return ((::UnityEngine::Vector3(*)(::System::Single, ::System::Single, ::Class_1_AB0848A1DBCB597F*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_7F6CFFD73D5F7F39_METHOD_2_2D4EF40E42C39240_OFFSET))(a1, a2, a3, a4);
	}
};
