#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7256E7A2FB36A46D.h"
#include "unitysdk/Struct_2_E31305FAF4D542A3.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_303D5A33D1401D59;
class Class_1_8A6989C352B0F0F0;
class Class_1_D5302483370BD7FF;
class Class_1_D70A30D666F20D90;
namespace RPG::Client { class SceneTransformAnim; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::GameCore { class DriftComponentData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_2_7F6CFFD73D5F7F39_METHOD_2_01C417D27D338B5B_OFFSET UNITYSDK_OFFSET(0x13A7AE50)
#define CLASS_2_7F6CFFD73D5F7F39_METHOD_2_032334B8C88491A3_OFFSET UNITYSDK_OFFSET(0x13A79CB0)
#define CLASS_2_7F6CFFD73D5F7F39_METHOD_2_0A7A170096EAEF58_OFFSET UNITYSDK_OFFSET(0x13A79010)
#define CLASS_2_7F6CFFD73D5F7F39_METHOD_2_2D4EF40E42C39240_OFFSET UNITYSDK_OFFSET(0x13A7B210)
#define CLASS_2_7F6CFFD73D5F7F39_METHOD_2_32ADCFD3C944058C_OFFSET UNITYSDK_OFFSET(0x13A7AF10)
#define CLASS_2_7F6CFFD73D5F7F39_METHOD_2_352B61CD747EF90A_OFFSET UNITYSDK_OFFSET(0x13A786F0)
#define CLASS_2_7F6CFFD73D5F7F39_METHOD_2_35D5D3D386462F03_OFFSET UNITYSDK_OFFSET(0x13A794A0)
#define CLASS_2_7F6CFFD73D5F7F39_METHOD_2_4A63C0A7EEA81CCC_OFFSET UNITYSDK_OFFSET(0x13A78C00)
#define CLASS_2_7F6CFFD73D5F7F39_METHOD_2_4AFDAF3AFA948DA4_OFFSET UNITYSDK_OFFSET(0x13A78CC0)
#define CLASS_2_7F6CFFD73D5F7F39_METHOD_2_4E28CED68D3FE865_OFFSET UNITYSDK_OFFSET(0x13A7B090)
#define CLASS_2_7F6CFFD73D5F7F39_METHOD_2_602F77CD7A647441_OFFSET UNITYSDK_OFFSET(0x13A78DE0)
#define CLASS_2_7F6CFFD73D5F7F39_METHOD_2_7E22A3051E6062BF_OFFSET UNITYSDK_OFFSET(0x13A792A0)
#define CLASS_2_7F6CFFD73D5F7F39_METHOD_2_815E1C3A5EADAF61_OFFSET UNITYSDK_OFFSET(0x13A79FF0)
#define CLASS_2_7F6CFFD73D5F7F39_METHOD_2_A3C4B7F46FA871E3_OFFSET UNITYSDK_OFFSET(0x13A79640)
#define CLASS_2_7F6CFFD73D5F7F39_METHOD_2_CEBFF096B4C9D46B_OFFSET UNITYSDK_OFFSET(0x13A782F0)
#define CLASS_2_7F6CFFD73D5F7F39_METHOD_2_D3B6A2C04C1A2515_OFFSET UNITYSDK_OFFSET(0x13A79A80)
#define CLASS_2_7F6CFFD73D5F7F39_METHOD_2_DEEF602E4E0BE9ED_OFFSET UNITYSDK_OFFSET(0x13A7AD90)
#define CLASS_2_7F6CFFD73D5F7F39_METHOD_2_E658A310A9CE19AC_OFFSET UNITYSDK_OFFSET(0x13A797F0)
#define CLASS_2_7F6CFFD73D5F7F39_METHOD_2_EAD10B3E55E2C4C5_OFFSET UNITYSDK_OFFSET(0x13A7A050)
#define CLASS_2_7F6CFFD73D5F7F39_METHOD_2_F2F08395C02A5CC3_OFFSET UNITYSDK_OFFSET(0x13A79C40)
#define CLASS_2_7F6CFFD73D5F7F39_METHOD_2_FB5CDCFD1D0099FA_1_OFFSET UNITYSDK_OFFSET(0x13A7B680)
#define CLASS_2_7F6CFFD73D5F7F39_METHOD_2_FB5CDCFD1D0099FA_OFFSET UNITYSDK_OFFSET(0x13A7B310)
#define CLASS_2_7F6CFFD73D5F7F39__CTOR_OFFSET UNITYSDK_OFFSET(0x13A77A40)

inline static constexpr unsigned int Class_2_7F6CFFD73D5F7F39_TypeDefinitionIndex = 70403;

class Class_2_7F6CFFD73D5F7F39 : public ::Class_1_7256E7A2FB36A46D
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::Transform*>* Field_2_0; // 0x18
	::System::Collections::Generic::Dictionary_2<::Class_1_303D5A33D1401D59*, ::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>*>* Field_2_1; // 0x20
	::System::Collections::Generic::Dictionary_2<::Class_1_8A6989C352B0F0F0*, ::System::Int32>* Field_2_2; // 0x28
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_D5302483370BD7FF*>* Field_2_3; // 0x30
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_4; // 0x38
	::System::Collections::Generic::Dictionary_2<::Class_1_8A6989C352B0F0F0*, ::System::Int32>* Field_2_5; // 0x40
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_1_8A6989C352B0F0F0*>*>* Field_2_6; // 0x48
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_7; // 0x50
	::System::Single Field_2_8; // 0x58

	::System::Void _ctor(::Class_1_D70A30D666F20D90* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D70A30D666F20D90*))((::PBYTE)hIl2Cpp + CLASS_2_7F6CFFD73D5F7F39__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_CEBFF096B4C9D46B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7F6CFFD73D5F7F39_METHOD_2_CEBFF096B4C9D46B_OFFSET))(this);
	}

	::System::Void Method_2_352B61CD747EF90A(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7F6CFFD73D5F7F39_METHOD_2_352B61CD747EF90A_OFFSET))(this, a1);
	}

	::System::Void Method_2_4A63C0A7EEA81CCC(::RPG::Client::OpenWorld::StreamingItemData* a1, ::RPG::GameCore::DriftComponentData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::GameCore::DriftComponentData*))((::PBYTE)hIl2Cpp + CLASS_2_7F6CFFD73D5F7F39_METHOD_2_4A63C0A7EEA81CCC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4AFDAF3AFA948DA4(::Class_1_303D5A33D1401D59* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2, ::UnityEngine::GameObject* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_7F6CFFD73D5F7F39_METHOD_2_4AFDAF3AFA948DA4_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void Method_2_0A7A170096EAEF58(::UnityEngine::Transform* a1, ::Class_1_D5302483370BD7FF* a2)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::Class_1_D5302483370BD7FF*))((::PBYTE)hIl2Cpp + CLASS_2_7F6CFFD73D5F7F39_METHOD_2_0A7A170096EAEF58_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_7E22A3051E6062BF(::RPG::Client::OpenWorld::StreamingItemData* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_7F6CFFD73D5F7F39_METHOD_2_7E22A3051E6062BF_OFFSET))(this, a1, a2);
	}

	static ::RPG::GameCore::DriftComponentData* Method_2_35D5D3D386462F03(::Struct_2_E31305FAF4D542A3 a1, ::RPG::Client::SceneTransformAnim* a2)
	{
		return ((::RPG::GameCore::DriftComponentData*(*)(::Struct_2_E31305FAF4D542A3, ::RPG::Client::SceneTransformAnim*))((::PBYTE)hIl2Cpp + CLASS_2_7F6CFFD73D5F7F39_METHOD_2_35D5D3D386462F03_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_A3C4B7F46FA871E3(::Class_1_8A6989C352B0F0F0* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*))((::PBYTE)hIl2Cpp + CLASS_2_7F6CFFD73D5F7F39_METHOD_2_A3C4B7F46FA871E3_OFFSET))(this, a1);
	}

	::System::Void Method_2_E658A310A9CE19AC(::Class_1_8A6989C352B0F0F0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*))((::PBYTE)hIl2Cpp + CLASS_2_7F6CFFD73D5F7F39_METHOD_2_E658A310A9CE19AC_OFFSET))(this, a1);
	}

	::System::Void Method_2_602F77CD7A647441(::Class_1_303D5A33D1401D59* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2, ::UnityEngine::Transform* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_7F6CFFD73D5F7F39_METHOD_2_602F77CD7A647441_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_D3B6A2C04C1A2515(::Class_1_303D5A33D1401D59* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*))((::PBYTE)hIl2Cpp + CLASS_2_7F6CFFD73D5F7F39_METHOD_2_D3B6A2C04C1A2515_OFFSET))(this, a1);
	}

	::System::Void Method_2_F2F08395C02A5CC3(::Class_1_8A6989C352B0F0F0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*))((::PBYTE)hIl2Cpp + CLASS_2_7F6CFFD73D5F7F39_METHOD_2_F2F08395C02A5CC3_OFFSET))(this, a1);
	}

	::System::Void Method_2_032334B8C88491A3(::Class_1_8A6989C352B0F0F0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*))((::PBYTE)hIl2Cpp + CLASS_2_7F6CFFD73D5F7F39_METHOD_2_032334B8C88491A3_OFFSET))(this, a1);
	}

	::System::Void Method_2_815E1C3A5EADAF61(::Class_1_8A6989C352B0F0F0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*))((::PBYTE)hIl2Cpp + CLASS_2_7F6CFFD73D5F7F39_METHOD_2_815E1C3A5EADAF61_OFFSET))(this, a1);
	}

	::System::Void Method_2_EAD10B3E55E2C4C5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7F6CFFD73D5F7F39_METHOD_2_EAD10B3E55E2C4C5_OFFSET))(this);
	}

	static ::System::Void Method_2_01C417D27D338B5B(::System::Single a1, ::Class_1_D5302483370BD7FF* a2, ::UnityEngine::Transform* a3)
	{
		return ((::System::Void(*)(::System::Single, ::Class_1_D5302483370BD7FF*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_7F6CFFD73D5F7F39_METHOD_2_01C417D27D338B5B_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_2_32ADCFD3C944058C(::System::Single a1, ::Class_1_D5302483370BD7FF* a2, ::UnityEngine::Transform* a3)
	{
		return ((::System::Void(*)(::System::Single, ::Class_1_D5302483370BD7FF*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_7F6CFFD73D5F7F39_METHOD_2_32ADCFD3C944058C_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_2_4E28CED68D3FE865(::System::Single a1, ::Class_1_D5302483370BD7FF* a2, ::UnityEngine::Transform* a3)
	{
		return ((::System::Void(*)(::System::Single, ::Class_1_D5302483370BD7FF*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_7F6CFFD73D5F7F39_METHOD_2_4E28CED68D3FE865_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_2_DEEF602E4E0BE9ED(::System::Single a1, ::Class_1_D5302483370BD7FF* a2, ::UnityEngine::Transform* a3)
	{
		return ((::System::Void(*)(::System::Single, ::Class_1_D5302483370BD7FF*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_7F6CFFD73D5F7F39_METHOD_2_DEEF602E4E0BE9ED_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_2_FB5CDCFD1D0099FA(::System::Single a1, ::Class_1_D5302483370BD7FF* a2, ::UnityEngine::Transform* a3)
	{
		return ((::System::Void(*)(::System::Single, ::Class_1_D5302483370BD7FF*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_7F6CFFD73D5F7F39_METHOD_2_FB5CDCFD1D0099FA_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_2_FB5CDCFD1D0099FA_1(::System::Single a1, ::Class_1_D5302483370BD7FF* a2, ::UnityEngine::Transform* a3)
	{
		return ((::System::Void(*)(::System::Single, ::Class_1_D5302483370BD7FF*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_7F6CFFD73D5F7F39_METHOD_2_FB5CDCFD1D0099FA_1_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Vector3 Method_2_2D4EF40E42C39240(::System::Single a1, ::System::Single a2, ::Class_1_D5302483370BD7FF* a3, ::UnityEngine::Transform* a4)
	{
		return ((::UnityEngine::Vector3(*)(::System::Single, ::System::Single, ::Class_1_D5302483370BD7FF*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_7F6CFFD73D5F7F39_METHOD_2_2D4EF40E42C39240_OFFSET))(a1, a2, a3, a4);
	}
};
