#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5B228A4605C15E47.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_303D5A33D1401D59;
class Class_1_3F28033F34305C46;
class Class_1_56FF45D7B2C55655;
class Class_1_8A6989C352B0F0F0;
class Class_1_DE4C6B309308A230;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::Client::OpenWorld { class StreamingLayerDetail; }
namespace RPG::GameCore { class HoyoTag; }
namespace RPG::GameCore { class LodTemplate; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_A746B8E37A1305CB_CHECKSTREAMINGLOD_OFFSET UNITYSDK_OFFSET(0x10B21A20)
#define CLASS_2_A746B8E37A1305CB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10B20940)
#define CLASS_2_A746B8E37A1305CB_GETITEMLODLEVEL_OFFSET UNITYSDK_OFFSET(0x10B20CF0)
#define CLASS_2_A746B8E37A1305CB_INSERTTOAOI_OFFSET UNITYSDK_OFFSET(0x10B214A0)
#define CLASS_2_A746B8E37A1305CB_METHOD_2_1FFB392329DBE0D7_OFFSET UNITYSDK_OFFSET(0x10B21F50)
#define CLASS_2_A746B8E37A1305CB_METHOD_2_2658A1BA84098413_OFFSET UNITYSDK_OFFSET(0x10B218E0)
#define CLASS_2_A746B8E37A1305CB_METHOD_2_32274F151B7AB84C_OFFSET UNITYSDK_OFFSET(0x10B20B00)
#define CLASS_2_A746B8E37A1305CB_METHOD_2_7D13C8E628CA4EDC_OFFSET UNITYSDK_OFFSET(0x10B21AD0)
#define CLASS_2_A746B8E37A1305CB_METHOD_2_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x10B21EA0)
#define CLASS_2_A746B8E37A1305CB_METHOD_2_7F5CA8E7BEEFA729_OFFSET UNITYSDK_OFFSET(0x10B21F80)
#define CLASS_2_A746B8E37A1305CB_METHOD_2_93348C4111A75C2E_OFFSET UNITYSDK_OFFSET(0x10B21400)
#define CLASS_2_A746B8E37A1305CB_METHOD_2_9FE41AF81A550560_OFFSET UNITYSDK_OFFSET(0x10B20F70)
#define CLASS_2_A746B8E37A1305CB_METHOD_2_A75AAEDCC09314BD_OFFSET UNITYSDK_OFFSET(0x10B21350)
#define CLASS_2_A746B8E37A1305CB_METHOD_2_A7D97CAC6C19C9FA_OFFSET UNITYSDK_OFFSET(0x10B21830)
#define CLASS_2_A746B8E37A1305CB_METHOD_2_B25AE6CE3CCE4CC9_OFFSET UNITYSDK_OFFSET(0x10B220A0)
#define CLASS_2_A746B8E37A1305CB_METHOD_2_BF7F293AEAA5E93F_OFFSET UNITYSDK_OFFSET(0x10B21F90)
#define CLASS_2_A746B8E37A1305CB_METHOD_2_D09E445D5507753D_OFFSET UNITYSDK_OFFSET(0x10B21FD0)
#define CLASS_2_A746B8E37A1305CB_METHOD_2_DCF93F6D70149715_OFFSET UNITYSDK_OFFSET(0x10B20C10)
#define CLASS_2_A746B8E37A1305CB_METHOD_2_E71D5041CAF874B1_OFFSET UNITYSDK_OFFSET(0x10B21BD0)
#define CLASS_2_A746B8E37A1305CB_REMOVEFROMAOI_OFFSET UNITYSDK_OFFSET(0x10B21690)
#define CLASS_2_A746B8E37A1305CB__CCTOR_OFFSET UNITYSDK_OFFSET(0x10B21EF0)
#define CLASS_2_A746B8E37A1305CB__CTOR_OFFSET UNITYSDK_OFFSET(0x10B206F0)
#define CLASS_2_A746B8E37A1305CB___IFIXBASEPROXY_CHECKSTREAMINGLOD_OFFSET UNITYSDK_OFFSET(0x10B21FA0)
#define CLASS_2_A746B8E37A1305CB___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10B21F30)
#define CLASS_2_A746B8E37A1305CB___IFIXBASEPROXY_GETITEMLODLEVEL_OFFSET UNITYSDK_OFFSET(0x10B21F40)
#define CLASS_2_A746B8E37A1305CB___IFIXBASEPROXY_INSERTTOAOI_OFFSET UNITYSDK_OFFSET(0x10B21F60)
#define CLASS_2_A746B8E37A1305CB___IFIXBASEPROXY_REMOVEFROMAOI_OFFSET UNITYSDK_OFFSET(0x10B21F70)

inline static constexpr unsigned int Class_2_A746B8E37A1305CB_TypeDefinitionIndex = 60513;

class Class_2_A746B8E37A1305CB : public ::Class_1_5B228A4605C15E47
{
public:
	static ::RPG::GameCore::LodTemplate** StaticGet_Field_2_3()
	{
		return (::RPG::GameCore::LodTemplate**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A746B8E37A1305CB_TypeDefinitionIndex)->GetStaticField(0x47410);
	}
	::System::Collections::Generic::HashSet_1<::RPG::Client::OpenWorld::StreamingItemData*>* Field_2_0; // 0x168
	::System::Collections::Generic::List_1<::System::String*>* Field_2_2; // 0x170
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::OpenWorld::StreamingItemData*>* Field_2_1; // 0x178

	::System::Void _ctor(::RPG::Client::OpenWorld::StreamingLayerDetail* a1, ::Class_1_56FF45D7B2C55655* a2, ::Class_1_303D5A33D1401D59* a3, ::UnityEngine::GameObject* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLayerDetail*, ::Class_1_56FF45D7B2C55655*, ::Class_1_303D5A33D1401D59*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_A746B8E37A1305CB__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_A746B8E37A1305CB__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A746B8E37A1305CB_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_32274F151B7AB84C(::RPG::GameCore::HoyoTag* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HoyoTag*))((::PBYTE)hIl2Cpp + CLASS_2_A746B8E37A1305CB_METHOD_2_32274F151B7AB84C_OFFSET))(this, a1);
	}

	::System::Void Method_2_DCF93F6D70149715(::RPG::GameCore::HoyoTag* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HoyoTag*))((::PBYTE)hIl2Cpp + CLASS_2_A746B8E37A1305CB_METHOD_2_DCF93F6D70149715_OFFSET))(this, a1);
	}

	::System::Int32 GetItemLodLevel(::Class_1_3F28033F34305C46* a1, ::Class_1_DE4C6B309308A230* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3, ::RPG::Client::OpenWorld::StreamingItemData* a4, ::System::Int32 a5, ::System::Boolean a6)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A746B8E37A1305CB_GETITEMLODLEVEL_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_9FE41AF81A550560(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A746B8E37A1305CB_METHOD_2_9FE41AF81A550560_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A75AAEDCC09314BD(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_A746B8E37A1305CB_METHOD_2_A75AAEDCC09314BD_OFFSET))(this, a1);
	}

	::System::Void InsertToAOI(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_A746B8E37A1305CB_INSERTTOAOI_OFFSET))(this, a1);
	}

	::System::Void RemoveFromAOI(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_A746B8E37A1305CB_REMOVEFROMAOI_OFFSET))(this, a1);
	}

	::System::Void Method_2_A7D97CAC6C19C9FA(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_A746B8E37A1305CB_METHOD_2_A7D97CAC6C19C9FA_OFFSET))(this, a1);
	}

	::Class_1_8A6989C352B0F0F0* Method_2_2658A1BA84098413(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::Class_1_8A6989C352B0F0F0*(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_A746B8E37A1305CB_METHOD_2_2658A1BA84098413_OFFSET))(this, a1);
	}

	::System::Void CheckStreamingLod(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single& a3, ::System::Single& a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_A746B8E37A1305CB_CHECKSTREAMINGLOD_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_7D13C8E628CA4EDC(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A746B8E37A1305CB_METHOD_2_7D13C8E628CA4EDC_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_E71D5041CAF874B1(::Class_1_3F28033F34305C46* a1, ::Class_1_DE4C6B309308A230* a2, ::System::Boolean a3, ::System::Single a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A746B8E37A1305CB_METHOD_2_E71D5041CAF874B1_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A746B8E37A1305CB_METHOD_2_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_93348C4111A75C2E(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_A746B8E37A1305CB_METHOD_2_93348C4111A75C2E_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A746B8E37A1305CB___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Int32 __iFixBaseProxy_GetItemLodLevel(::Class_1_3F28033F34305C46* P0, ::Class_1_DE4C6B309308A230* P1, ::RPG::Client::OpenWorld::StreamingItemData* P2, ::RPG::Client::OpenWorld::StreamingItemData* P3, ::System::Int32 P4, ::System::Boolean P5)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A746B8E37A1305CB___IFIXBASEPROXY_GETITEMLODLEVEL_OFFSET))(this, P0, P1, P2, P3, P4, P5);
	}

	::System::Void Method_2_1FFB392329DBE0D7(::RPG::Client::OpenWorld::StreamingItemData* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_A746B8E37A1305CB_METHOD_2_1FFB392329DBE0D7_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_InsertToAOI(::RPG::Client::OpenWorld::StreamingItemData* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_A746B8E37A1305CB___IFIXBASEPROXY_INSERTTOAOI_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_RemoveFromAOI(::RPG::Client::OpenWorld::StreamingItemData* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_A746B8E37A1305CB___IFIXBASEPROXY_REMOVEFROMAOI_OFFSET))(this, P0);
	}

	::System::Void Method_2_7F5CA8E7BEEFA729(::RPG::Client::OpenWorld::StreamingItemData* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_A746B8E37A1305CB_METHOD_2_7F5CA8E7BEEFA729_OFFSET))(this, P0);
	}

	::Class_1_8A6989C352B0F0F0* Method_2_BF7F293AEAA5E93F(::RPG::Client::OpenWorld::StreamingItemData* P0)
	{
		return ((::Class_1_8A6989C352B0F0F0*(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_A746B8E37A1305CB_METHOD_2_BF7F293AEAA5E93F_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_CheckStreamingLod(::UnityEngine::Vector3 P0, ::System::Single P1, ::System::Single& P2, ::System::Single& P3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_A746B8E37A1305CB___IFIXBASEPROXY_CHECKSTREAMINGLOD_OFFSET))(this, P0, P1, P2, P3);
	}

	::System::Boolean Method_2_D09E445D5507753D(::UnityEngine::Vector3 P0, ::System::Boolean P1, ::System::Single P2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A746B8E37A1305CB_METHOD_2_D09E445D5507753D_OFFSET))(this, P0, P1, P2);
	}

	::System::Void Method_2_B25AE6CE3CCE4CC9(::Class_1_3F28033F34305C46* P0, ::Class_1_DE4C6B309308A230* P1, ::System::Boolean P2, ::System::Single P3, ::System::Boolean P4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A746B8E37A1305CB_METHOD_2_B25AE6CE3CCE4CC9_OFFSET))(this, P0, P1, P2, P3, P4);
	}
};
