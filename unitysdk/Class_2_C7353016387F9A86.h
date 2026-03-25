#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5B228A4605C15E47.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_811;
class Class_1_303D5A33D1401D59;
class Class_1_3F28033F34305C46;
class Class_1_56FF45D7B2C55655;
class Class_1_8A6989C352B0F0F0;
class Class_1_DE4C6B309308A230;
class Class_2_38412AC2D626BEE3;
namespace Collections::Pooled { template <typename T1, typename T2> class PooledDictionary_2; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::Client::OpenWorld { class StreamingLayerDetail; }
namespace RPG::Client::OpenWorld { template <typename T> class AOIBase_1; }
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_C7353016387F9A86_CHECKSTREAMING_OFFSET UNITYSDK_OFFSET(0x8D55B80)
#define CLASS_2_C7353016387F9A86_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8D53F30)
#define CLASS_2_C7353016387F9A86_INACTIVEINSTANCE_OFFSET UNITYSDK_OFFSET(0x8D55A20)
#define CLASS_2_C7353016387F9A86_METHOD_2_031C5A23422D4BE8_OFFSET UNITYSDK_OFFSET(0x8D547A0)
#define CLASS_2_C7353016387F9A86_METHOD_2_0BB5DE3BEB963948_OFFSET UNITYSDK_OFFSET(0x8D56190)
#define CLASS_2_C7353016387F9A86_METHOD_2_1626D6FA8E8D11C7_OFFSET UNITYSDK_OFFSET(0x8D56170)
#define CLASS_2_C7353016387F9A86_METHOD_2_1DCD0EB57F2B3CF9_OFFSET UNITYSDK_OFFSET(0x8D55C40)
#define CLASS_2_C7353016387F9A86_METHOD_2_24072A22CD1AF7AD_OFFSET UNITYSDK_OFFSET(0x8D56180)
#define CLASS_2_C7353016387F9A86_METHOD_2_2618A2405B570796_OFFSET UNITYSDK_OFFSET(0x8D563C0)
#define CLASS_2_C7353016387F9A86_METHOD_2_26BE450038393AC5_OFFSET UNITYSDK_OFFSET(0x8D54990)
#define CLASS_2_C7353016387F9A86_METHOD_2_32FFE2990C0CD521_OFFSET UNITYSDK_OFFSET(0x8D555A0)
#define CLASS_2_C7353016387F9A86_METHOD_2_37D4A49951A1616C_OFFSET UNITYSDK_OFFSET(0x8D56490)
#define CLASS_2_C7353016387F9A86_METHOD_2_41AA181104E03F2C_OFFSET UNITYSDK_OFFSET(0x8D56500)
#define CLASS_2_C7353016387F9A86_METHOD_2_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x8D55D60)
#define CLASS_2_C7353016387F9A86_METHOD_2_5271545E19753C49_OFFSET UNITYSDK_OFFSET(0x8D54D30)
#define CLASS_2_C7353016387F9A86_METHOD_2_53EE3217A30FF6BA_OFFSET UNITYSDK_OFFSET(0x8D558D0)
#define CLASS_2_C7353016387F9A86_METHOD_2_5AE65BC66F5834C0_OFFSET UNITYSDK_OFFSET(0x8D55E60)
#define CLASS_2_C7353016387F9A86_METHOD_2_5AFFA079DA8B20AA_OFFSET UNITYSDK_OFFSET(0x8D55420)
#define CLASS_2_C7353016387F9A86_METHOD_2_610CC44B5A1B9AE0_OFFSET UNITYSDK_OFFSET(0x8D543D0)
#define CLASS_2_C7353016387F9A86_METHOD_2_627C7524E98F4AC5_OFFSET UNITYSDK_OFFSET(0x8D56320)
#define CLASS_2_C7353016387F9A86_METHOD_2_7D491329FA7D7B73_OFFSET UNITYSDK_OFFSET(0x8D561A0)
#define CLASS_2_C7353016387F9A86_METHOD_2_81E2470A68E3D80B_OFFSET UNITYSDK_OFFSET(0x8D54E80)
#define CLASS_2_C7353016387F9A86_METHOD_2_98B06FDAFABC6F47_OFFSET UNITYSDK_OFFSET(0x8D564D0)
#define CLASS_2_C7353016387F9A86_METHOD_2_9B927A110DDAD797_OFFSET UNITYSDK_OFFSET(0x8D561B0)
#define CLASS_2_C7353016387F9A86_METHOD_2_9E9C8BD1128A2E9D_OFFSET UNITYSDK_OFFSET(0x8D56140)
#define CLASS_2_C7353016387F9A86_METHOD_2_A7297CA88DE22D58_OFFSET UNITYSDK_OFFSET(0x8D562E0)
#define CLASS_2_C7353016387F9A86_METHOD_2_A7D97CAC6C19C9FA_OFFSET UNITYSDK_OFFSET(0x8D54010)
#define CLASS_2_C7353016387F9A86_METHOD_2_B25AE6CE3CCE4CC9_OFFSET UNITYSDK_OFFSET(0x8D561C0)
#define CLASS_2_C7353016387F9A86_METHOD_2_B97CDACD9370E783_OFFSET UNITYSDK_OFFSET(0x8D56300)
#define CLASS_2_C7353016387F9A86_METHOD_2_BFA195F09950C507_OFFSET UNITYSDK_OFFSET(0x8D55490)
#define CLASS_2_C7353016387F9A86_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8D54A50)
#define CLASS_2_C7353016387F9A86_METHOD_2_D0CDA78E2BE72F85_OFFSET UNITYSDK_OFFSET(0x8D54820)
#define CLASS_2_C7353016387F9A86_METHOD_2_D32A5475BAED534D_OFFSET UNITYSDK_OFFSET(0x8D55250)
#define CLASS_2_C7353016387F9A86_METHOD_2_E38EEC5A37671AAD_OFFSET UNITYSDK_OFFSET(0x8D54AA0)
#define CLASS_2_C7353016387F9A86_METHOD_2_E8077BB5F63D9F47_OFFSET UNITYSDK_OFFSET(0x8D56150)
#define CLASS_2_C7353016387F9A86_QUADTREEOP_OFFSET UNITYSDK_OFFSET(0x8D553D0)
#define CLASS_2_C7353016387F9A86__CTOR_OFFSET UNITYSDK_OFFSET(0x8D53D90)
#define CLASS_2_C7353016387F9A86__SOLVEINSTANCELODCALC_OFFSET UNITYSDK_OFFSET(0x8D55010)
#define CLASS_2_C7353016387F9A86___IFIXBASEPROXY_CHECKSTREAMING_OFFSET UNITYSDK_OFFSET(0x8D564A0)
#define CLASS_2_C7353016387F9A86___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8D56160)
#define CLASS_2_C7353016387F9A86___IFIXBASEPROXY_QUADTREEOP_OFFSET UNITYSDK_OFFSET(0x8D56310)
#define CLASS_2_C7353016387F9A86___IFIXBASEPROXY__SOLVEINSTANCELODCALC_OFFSET UNITYSDK_OFFSET(0x8D562F0)

inline static constexpr unsigned int Class_2_C7353016387F9A86_TypeDefinitionIndex = 60536;

class Class_2_C7353016387F9A86 : public ::Class_1_5B228A4605C15E47
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* Field_2_1; // 0x168
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*>* Field_2_0; // 0x170

	::System::Void _ctor(::RPG::Client::OpenWorld::StreamingLayerDetail* a1, ::Class_1_56FF45D7B2C55655* a2, ::Class_1_303D5A33D1401D59* a3, ::UnityEngine::GameObject* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLayerDetail*, ::Class_1_56FF45D7B2C55655*, ::Class_1_303D5A33D1401D59*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_A7D97CAC6C19C9FA(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86_METHOD_2_A7D97CAC6C19C9FA_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_610CC44B5A1B9AE0(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86_METHOD_2_610CC44B5A1B9AE0_OFFSET))(this, a1);
	}

	::System::Void Method_2_031C5A23422D4BE8(::Class_1_8A6989C352B0F0F0* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86_METHOD_2_031C5A23422D4BE8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D0CDA78E2BE72F85(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86_METHOD_2_D0CDA78E2BE72F85_OFFSET))(this, a1);
	}

	::System::Void Method_2_26BE450038393AC5(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86_METHOD_2_26BE450038393AC5_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_2_E38EEC5A37671AAD(::Class_0_16E4307DCC419505_811* a1, ::System::Boolean a2, ::Class_1_3F28033F34305C46* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_811*, ::System::Boolean, ::Class_1_3F28033F34305C46*))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86_METHOD_2_E38EEC5A37671AAD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_5271545E19753C49(::Class_1_3F28033F34305C46* a1, ::Class_1_DE4C6B309308A230* a2, ::System::Boolean a3, ::System::Single a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86_METHOD_2_5271545E19753C49_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_81E2470A68E3D80B(::Class_1_DE4C6B309308A230* a1, ::System::Boolean a2, ::System::Single a3, ::Class_1_3F28033F34305C46* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Boolean, ::System::Single, ::Class_1_3F28033F34305C46*))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86_METHOD_2_81E2470A68E3D80B_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void _SolveInstanceLodCalc(::Class_1_3F28033F34305C46* a1, ::Class_1_DE4C6B309308A230* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3, ::Class_1_8A6989C352B0F0F0* a4, ::System::Int32 a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86__SOLVEINSTANCELODCALC_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_2_D32A5475BAED534D(::Class_1_8A6989C352B0F0F0* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86_METHOD_2_D32A5475BAED534D_OFFSET))(this, a1, a2);
	}

	::System::Void QuadTreeOp(::RPG::Client::OpenWorld::AOIBase_1<::RPG::Client::OpenWorld::StreamingItemData*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::AOIBase_1<::RPG::Client::OpenWorld::StreamingItemData*>*))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86_QUADTREEOP_OFFSET))(this, a1);
	}

	::System::Collections::IEnumerator* Method_2_5AFFA079DA8B20AA()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86_METHOD_2_5AFFA079DA8B20AA_OFFSET))(this);
	}

	::System::Int32 Method_2_BFA195F09950C507(::Class_1_DE4C6B309308A230* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3, ::System::Int32 a4, ::System::Boolean a5)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86_METHOD_2_BFA195F09950C507_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_2_32FFE2990C0CD521(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86_METHOD_2_32FFE2990C0CD521_OFFSET))(this, a1, a2);
	}

	::System::Boolean InActiveInstance(::Class_1_8A6989C352B0F0F0* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86_INACTIVEINSTANCE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void CheckStreaming(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single& a3, ::System::Single& a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86_CHECKSTREAMING_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_1DCD0EB57F2B3CF9(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86_METHOD_2_1DCD0EB57F2B3CF9_OFFSET))(this, a1, a2, a3);
	}

	::Class_2_38412AC2D626BEE3* Method_2_53EE3217A30FF6BA(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::Class_2_38412AC2D626BEE3*(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86_METHOD_2_53EE3217A30FF6BA_OFFSET))(this, a1);
	}

	::System::Void Method_2_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86_METHOD_2_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_2_5AE65BC66F5834C0(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86_METHOD_2_5AE65BC66F5834C0_OFFSET))(this, a1);
	}

	::Collections::Pooled::PooledDictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*>* Method_2_9E9C8BD1128A2E9D()
	{
		return ((::Collections::Pooled::PooledDictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86_METHOD_2_9E9C8BD1128A2E9D_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*>* Method_2_E8077BB5F63D9F47()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86_METHOD_2_E8077BB5F63D9F47_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_1626D6FA8E8D11C7(::RPG::Client::OpenWorld::StreamingItemData* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86_METHOD_2_1626D6FA8E8D11C7_OFFSET))(this, P0);
	}

	::System::Boolean Method_2_24072A22CD1AF7AD(::RPG::Client::OpenWorld::StreamingItemData* P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86_METHOD_2_24072A22CD1AF7AD_OFFSET))(this, P0);
	}

	::System::Void Method_2_0BB5DE3BEB963948(::Class_1_8A6989C352B0F0F0* P0, ::System::Boolean P1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86_METHOD_2_0BB5DE3BEB963948_OFFSET))(this, P0, P1);
	}

	::System::Void Method_2_7D491329FA7D7B73(::RPG::Client::OpenWorld::StreamingItemData* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86_METHOD_2_7D491329FA7D7B73_OFFSET))(this, P0);
	}

	::System::Boolean Method_2_9B927A110DDAD797(::Class_0_16E4307DCC419505_811* P0, ::System::Boolean P1, ::Class_1_3F28033F34305C46* P2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_811*, ::System::Boolean, ::Class_1_3F28033F34305C46*))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86_METHOD_2_9B927A110DDAD797_OFFSET))(this, P0, P1, P2);
	}

	::System::Void Method_2_B25AE6CE3CCE4CC9(::Class_1_3F28033F34305C46* P0, ::Class_1_DE4C6B309308A230* P1, ::System::Boolean P2, ::System::Single P3, ::System::Boolean P4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86_METHOD_2_B25AE6CE3CCE4CC9_OFFSET))(this, P0, P1, P2, P3, P4);
	}

	::System::Void Method_2_A7297CA88DE22D58(::Class_1_DE4C6B309308A230* P0, ::System::Boolean P1, ::System::Single P2, ::Class_1_3F28033F34305C46* P3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Boolean, ::System::Single, ::Class_1_3F28033F34305C46*))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86_METHOD_2_A7297CA88DE22D58_OFFSET))(this, P0, P1, P2, P3);
	}

	::System::Void __iFixBaseProxy__SolveInstanceLodCalc(::Class_1_3F28033F34305C46* P0, ::Class_1_DE4C6B309308A230* P1, ::RPG::Client::OpenWorld::StreamingItemData* P2, ::Class_1_8A6989C352B0F0F0* P3, ::System::Int32 P4, ::System::Boolean P5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86___IFIXBASEPROXY__SOLVEINSTANCELODCALC_OFFSET))(this, P0, P1, P2, P3, P4, P5);
	}

	::System::Boolean Method_2_B97CDACD9370E783(::Class_1_8A6989C352B0F0F0* P0, ::System::Int32 P1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86_METHOD_2_B97CDACD9370E783_OFFSET))(this, P0, P1);
	}

	::System::Void __iFixBaseProxy_QuadTreeOp(::RPG::Client::OpenWorld::AOIBase_1<::RPG::Client::OpenWorld::StreamingItemData*>* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::AOIBase_1<::RPG::Client::OpenWorld::StreamingItemData*>*))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86___IFIXBASEPROXY_QUADTREEOP_OFFSET))(this, P0);
	}

	::System::Collections::IEnumerator* Method_2_627C7524E98F4AC5()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86_METHOD_2_627C7524E98F4AC5_OFFSET))(this);
	}

	::System::Int32 Method_2_2618A2405B570796(::Class_1_DE4C6B309308A230* P0, ::RPG::Client::OpenWorld::StreamingItemData* P1, ::RPG::Client::OpenWorld::StreamingItemData* P2, ::System::Int32 P3, ::System::Boolean P4)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86_METHOD_2_2618A2405B570796_OFFSET))(this, P0, P1, P2, P3, P4);
	}

	::System::Boolean Method_2_37D4A49951A1616C(::RPG::Client::OpenWorld::StreamingItemData* P0, ::System::Boolean P1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86_METHOD_2_37D4A49951A1616C_OFFSET))(this, P0, P1);
	}

	::System::Void __iFixBaseProxy_CheckStreaming(::UnityEngine::Vector3 P0, ::System::Single P1, ::System::Single& P2, ::System::Single& P3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86___IFIXBASEPROXY_CHECKSTREAMING_OFFSET))(this, P0, P1, P2, P3);
	}

	::System::Boolean Method_2_98B06FDAFABC6F47(::UnityEngine::Vector3 P0, ::System::Boolean P1, ::System::Single P2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86_METHOD_2_98B06FDAFABC6F47_OFFSET))(this, P0, P1, P2);
	}

	::System::Void Method_2_41AA181104E03F2C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86_METHOD_2_41AA181104E03F2C_OFFSET))(this);
	}
};
