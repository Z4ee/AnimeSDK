#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5B228A4605C15E47.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_303D5A33D1401D59;
class Class_1_3F28033F34305C46;
class Class_1_56FF45D7B2C55655;
class Class_1_8A6989C352B0F0F0;
class Class_1_DE4C6B309308A230;
class Class_2_F24B53D247D206A7_Class_5_152E4A0EFF02F810;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::Client::OpenWorld { class StreamingLayerDetail; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_F24B53D247D206A7_CHECKSTREAMINGLOD_OFFSET UNITYSDK_OFFSET(0x11A999D0)
#define CLASS_2_F24B53D247D206A7_GETITEMLODLEVEL_OFFSET UNITYSDK_OFFSET(0x11A98DE0)
#define CLASS_2_F24B53D247D206A7_METHOD_2_1626D6FA8E8D11C7_OFFSET UNITYSDK_OFFSET(0x11A99BD0)
#define CLASS_2_F24B53D247D206A7_METHOD_2_2658A1BA84098413_OFFSET UNITYSDK_OFFSET(0x11A98A70)
#define CLASS_2_F24B53D247D206A7_METHOD_2_35D43088D0F8FC21_OFFSET UNITYSDK_OFFSET(0x11A99BE0)
#define CLASS_2_F24B53D247D206A7_METHOD_2_37D4A49951A1616C_OFFSET UNITYSDK_OFFSET(0x11A99BB0)
#define CLASS_2_F24B53D247D206A7_METHOD_2_3F3693110F25FD62_OFFSET UNITYSDK_OFFSET(0x11A99070)
#define CLASS_2_F24B53D247D206A7_METHOD_2_AA790612D6E37AA8_OFFSET UNITYSDK_OFFSET(0x11A99530)
#define CLASS_2_F24B53D247D206A7_METHOD_2_AC93DF002F6DC3A3_OFFSET UNITYSDK_OFFSET(0x11A992C0)
#define CLASS_2_F24B53D247D206A7_METHOD_2_B9A9BCA508476E78_OFFSET UNITYSDK_OFFSET(0x11A99A60)
#define CLASS_2_F24B53D247D206A7_METHOD_2_BF7F293AEAA5E93F_OFFSET UNITYSDK_OFFSET(0x11A99BA0)
#define CLASS_2_F24B53D247D206A7_METHOD_2_C08E3EAEBE6A3AFB_OFFSET UNITYSDK_OFFSET(0x11A98BC0)
#define CLASS_2_F24B53D247D206A7_METHOD_2_D09E445D5507753D_OFFSET UNITYSDK_OFFSET(0x11A99C50)
#define CLASS_2_F24B53D247D206A7_METHOD_2_DF3BFDD329DE92DE_OFFSET UNITYSDK_OFFSET(0x11A99AD0)
#define CLASS_2_F24B53D247D206A7_METHOD_2_EEE345B1068956FE_OFFSET UNITYSDK_OFFSET(0x11A996D0)
#define CLASS_2_F24B53D247D206A7__CTOR_OFFSET UNITYSDK_OFFSET(0x11A98A00)
#define CLASS_2_F24B53D247D206A7___IFIXBASEPROXY_CHECKSTREAMINGLOD_OFFSET UNITYSDK_OFFSET(0x11A99C20)
#define CLASS_2_F24B53D247D206A7___IFIXBASEPROXY_GETITEMLODLEVEL_OFFSET UNITYSDK_OFFSET(0x11A99BC0)

inline static constexpr unsigned int Class_2_F24B53D247D206A7_TypeDefinitionIndex = 67924;

class Class_2_F24B53D247D206A7 : public ::Class_1_5B228A4605C15E47
{
public:
	static ::Class_2_F24B53D247D206A7_Class_5_152E4A0EFF02F810** StaticGet_Field_2_0()
	{
		return (::Class_2_F24B53D247D206A7_Class_5_152E4A0EFF02F810**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F24B53D247D206A7_TypeDefinitionIndex)->GetStaticField(0x406A0);
	}

	::System::Void _ctor(::RPG::Client::OpenWorld::StreamingLayerDetail* a1, ::Class_1_56FF45D7B2C55655* a2, ::Class_1_303D5A33D1401D59* a3, ::UnityEngine::GameObject* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLayerDetail*, ::Class_1_56FF45D7B2C55655*, ::Class_1_303D5A33D1401D59*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_F24B53D247D206A7__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_1_8A6989C352B0F0F0* Method_2_2658A1BA84098413(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::Class_1_8A6989C352B0F0F0*(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_F24B53D247D206A7_METHOD_2_2658A1BA84098413_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_C08E3EAEBE6A3AFB(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F24B53D247D206A7_METHOD_2_C08E3EAEBE6A3AFB_OFFSET))(this, a1, a2);
	}

	::System::Int32 GetItemLodLevel(::Class_1_3F28033F34305C46* a1, ::Class_1_DE4C6B309308A230* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3, ::RPG::Client::OpenWorld::StreamingItemData* a4, ::System::Int32 a5, ::System::Boolean a6)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F24B53D247D206A7_GETITEMLODLEVEL_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_3F3693110F25FD62(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_F24B53D247D206A7_METHOD_2_3F3693110F25FD62_OFFSET))(this, a1);
	}

	::System::Void Method_2_AC93DF002F6DC3A3(::Class_1_3F28033F34305C46* a1, ::Class_1_DE4C6B309308A230* a2, ::System::Boolean a3, ::Class_1_8A6989C352B0F0F0* a4, ::RPG::Client::OpenWorld::StreamingItemData* a5, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*> a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::System::Boolean, ::Class_1_8A6989C352B0F0F0*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*>))((::PBYTE)hIl2Cpp + CLASS_2_F24B53D247D206A7_METHOD_2_AC93DF002F6DC3A3_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Single Method_2_AA790612D6E37AA8()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F24B53D247D206A7_METHOD_2_AA790612D6E37AA8_OFFSET))(this);
	}

	::System::Single Method_2_EEE345B1068956FE()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F24B53D247D206A7_METHOD_2_EEE345B1068956FE_OFFSET))(this);
	}

	::System::Void CheckStreamingLod(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single& a3, ::System::Single& a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_F24B53D247D206A7_CHECKSTREAMINGLOD_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_B9A9BCA508476E78(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F24B53D247D206A7_METHOD_2_B9A9BCA508476E78_OFFSET))(this, a1, a2, a3);
	}

	static ::Class_2_F24B53D247D206A7_Class_5_152E4A0EFF02F810* Method_2_DF3BFDD329DE92DE()
	{
		return ((::Class_2_F24B53D247D206A7_Class_5_152E4A0EFF02F810*(*)())((::PBYTE)hIl2Cpp + CLASS_2_F24B53D247D206A7_METHOD_2_DF3BFDD329DE92DE_OFFSET))();
	}

	::Class_1_8A6989C352B0F0F0* Method_2_BF7F293AEAA5E93F(::RPG::Client::OpenWorld::StreamingItemData* P0)
	{
		return ((::Class_1_8A6989C352B0F0F0*(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_F24B53D247D206A7_METHOD_2_BF7F293AEAA5E93F_OFFSET))(this, P0);
	}

	::System::Boolean Method_2_37D4A49951A1616C(::RPG::Client::OpenWorld::StreamingItemData* P0, ::System::Boolean P1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F24B53D247D206A7_METHOD_2_37D4A49951A1616C_OFFSET))(this, P0, P1);
	}

	::System::Int32 __iFixBaseProxy_GetItemLodLevel(::Class_1_3F28033F34305C46* P0, ::Class_1_DE4C6B309308A230* P1, ::RPG::Client::OpenWorld::StreamingItemData* P2, ::RPG::Client::OpenWorld::StreamingItemData* P3, ::System::Int32 P4, ::System::Boolean P5)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F24B53D247D206A7___IFIXBASEPROXY_GETITEMLODLEVEL_OFFSET))(this, P0, P1, P2, P3, P4, P5);
	}

	::System::Void Method_2_1626D6FA8E8D11C7(::RPG::Client::OpenWorld::StreamingItemData* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_F24B53D247D206A7_METHOD_2_1626D6FA8E8D11C7_OFFSET))(this, P0);
	}

	::System::Void Method_2_35D43088D0F8FC21(::Class_1_3F28033F34305C46* P0, ::Class_1_DE4C6B309308A230* P1, ::System::Boolean P2, ::Class_1_8A6989C352B0F0F0* P3, ::RPG::Client::OpenWorld::StreamingItemData* P4, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*> P5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::System::Boolean, ::Class_1_8A6989C352B0F0F0*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*>))((::PBYTE)hIl2Cpp + CLASS_2_F24B53D247D206A7_METHOD_2_35D43088D0F8FC21_OFFSET))(this, P0, P1, P2, P3, P4, P5);
	}

	::System::Void __iFixBaseProxy_CheckStreamingLod(::UnityEngine::Vector3 P0, ::System::Single P1, ::System::Single& P2, ::System::Single& P3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_F24B53D247D206A7___IFIXBASEPROXY_CHECKSTREAMINGLOD_OFFSET))(this, P0, P1, P2, P3);
	}

	::System::Boolean Method_2_D09E445D5507753D(::UnityEngine::Vector3 P0, ::System::Boolean P1, ::System::Single P2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F24B53D247D206A7_METHOD_2_D09E445D5507753D_OFFSET))(this, P0, P1, P2);
	}
};
