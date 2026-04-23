#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingItemData.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_494BD190B553B399;
class Class_1_563415D37D4EDE07;
namespace RPG::GameCore { class BlockNodeConfig; }
namespace RPG::GameCore { class StagePrefabInfo; }
namespace System { class String; }

#define CLASS_2_CBDF63BA2C3715C3_ALIASMARK_OFFSET UNITYSDK_OFFSET(0x907A1A0)
#define CLASS_2_CBDF63BA2C3715C3_GETAPPLYSTREAMINGLAYER_OFFSET UNITYSDK_OFFSET(0x9079E70)
#define CLASS_2_CBDF63BA2C3715C3_GETASSETPATH_OFFSET UNITYSDK_OFFSET(0x907A250)
#define CLASS_2_CBDF63BA2C3715C3_GETBOUNDCENTER_OFFSET UNITYSDK_OFFSET(0x9079D20)
#define CLASS_2_CBDF63BA2C3715C3_GETBOUNDSIZE_OFFSET UNITYSDK_OFFSET(0x9079D90)
#define CLASS_2_CBDF63BA2C3715C3_GETRECT_OFFSET UNITYSDK_OFFSET(0x9079E10)
#define CLASS_2_CBDF63BA2C3715C3_GET_ALIAS_OFFSET UNITYSDK_OFFSET(0x907A490)
#define CLASS_2_CBDF63BA2C3715C3_METHOD_2_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x907A200)
#define CLASS_2_CBDF63BA2C3715C3_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x907A4B0)
#define CLASS_2_CBDF63BA2C3715C3_METHOD_2_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x907A6F0)
#define CLASS_2_CBDF63BA2C3715C3_METHOD_2_1D4018D4200358D0_2_OFFSET UNITYSDK_OFFSET(0x907A810)
#define CLASS_2_CBDF63BA2C3715C3_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x907A5D0)
#define CLASS_2_CBDF63BA2C3715C3_METHOD_2_5AEC8C9EE262F230_OFFSET UNITYSDK_OFFSET(0x907A570)
#define CLASS_2_CBDF63BA2C3715C3_METHOD_2_5C549BF7442375BC_1_OFFSET UNITYSDK_OFFSET(0x907A770)
#define CLASS_2_CBDF63BA2C3715C3_METHOD_2_5C549BF7442375BC_2_OFFSET UNITYSDK_OFFSET(0x907A890)
#define CLASS_2_CBDF63BA2C3715C3_METHOD_2_5C549BF7442375BC_OFFSET UNITYSDK_OFFSET(0x907A650)
#define CLASS_2_CBDF63BA2C3715C3_METHOD_2_CA986D13693BCA0B_OFFSET UNITYSDK_OFFSET(0x90794C0)
#define CLASS_2_CBDF63BA2C3715C3_SET_ALIAS_OFFSET UNITYSDK_OFFSET(0x907A4A0)
#define CLASS_2_CBDF63BA2C3715C3__CTOR_OFFSET UNITYSDK_OFFSET(0x9079530)
#define CLASS_2_CBDF63BA2C3715C3___IFIXBASEPROXY_ALIASMARK_OFFSET UNITYSDK_OFFSET(0x907A9A0)
#define CLASS_2_CBDF63BA2C3715C3___IFIXBASEPROXY_GETASSETPATH_OFFSET UNITYSDK_OFFSET(0x907A930)

inline static constexpr unsigned int Class_2_CBDF63BA2C3715C3_TypeDefinitionIndex = 68015;

class Class_2_CBDF63BA2C3715C3 : public ::RPG::Client::OpenWorld::StreamingItemData
{
public:
	::Class_1_563415D37D4EDE07* Field_2_1; // 0xA8
	::System::String* _Alias_k__BackingField; // 0xB0
	::UnityEngine::Rect Field_2_0; // 0xB8

	::System::Void _ctor(::RPG::GameCore::BlockNodeConfig* a1, ::RPG::GameCore::StagePrefabInfo* a2, ::Class_1_494BD190B553B399* a3, ::Class_1_563415D37D4EDE07* a4, ::System::String* a5, ::RPG::Client::OpenWorld::StreamingItemData* a6)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BlockNodeConfig*, ::RPG::GameCore::StagePrefabInfo*, ::Class_1_494BD190B553B399*, ::Class_1_563415D37D4EDE07*, ::System::String*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_CBDF63BA2C3715C3__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	static ::System::Int32 Method_2_CA986D13693BCA0B(::RPG::GameCore::BlockNodeConfig* a1, ::RPG::GameCore::StagePrefabInfo* a2)
	{
		return ((::System::Int32(*)(::RPG::GameCore::BlockNodeConfig*, ::RPG::GameCore::StagePrefabInfo*))((::PBYTE)hIl2Cpp + CLASS_2_CBDF63BA2C3715C3_METHOD_2_CA986D13693BCA0B_OFFSET))(a1, a2);
	}

	::UnityEngine::Vector3 GetBoundCenter()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CBDF63BA2C3715C3_GETBOUNDCENTER_OFFSET))(this);
	}

	::UnityEngine::Vector3 GetBoundSize()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CBDF63BA2C3715C3_GETBOUNDSIZE_OFFSET))(this);
	}

	::UnityEngine::Rect GetRect()
	{
		return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CBDF63BA2C3715C3_GETRECT_OFFSET))(this);
	}

	::System::String* GetApplyStreamingLayer()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CBDF63BA2C3715C3_GETAPPLYSTREAMINGLAYER_OFFSET))(this);
	}

	::System::Boolean AliasMark()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CBDF63BA2C3715C3_ALIASMARK_OFFSET))(this);
	}

	::System::Void Method_2_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_CBDF63BA2C3715C3_METHOD_2_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::String* GetAssetPath(::System::Int32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_CBDF63BA2C3715C3_GETASSETPATH_OFFSET))(this, a1);
	}

	::System::String* get_Alias()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CBDF63BA2C3715C3_GET_ALIAS_OFFSET))(this);
	}

	::System::Void set_Alias(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_CBDF63BA2C3715C3_SET_ALIAS_OFFSET))(this, value);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CBDF63BA2C3715C3_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	static ::System::Boolean Method_2_5AEC8C9EE262F230(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_CBDF63BA2C3715C3_METHOD_2_5AEC8C9EE262F230_OFFSET))(a1);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CBDF63BA2C3715C3_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_2_5C549BF7442375BC(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CBDF63BA2C3715C3_METHOD_2_5C549BF7442375BC_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CBDF63BA2C3715C3_METHOD_2_1D4018D4200358D0_1_OFFSET))(this);
	}

	::System::Void Method_2_5C549BF7442375BC_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CBDF63BA2C3715C3_METHOD_2_5C549BF7442375BC_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1D4018D4200358D0_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CBDF63BA2C3715C3_METHOD_2_1D4018D4200358D0_2_OFFSET))(this);
	}

	::System::Void Method_2_5C549BF7442375BC_2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CBDF63BA2C3715C3_METHOD_2_5C549BF7442375BC_2_OFFSET))(this, a1);
	}

	::System::String* __iFixBaseProxy_GetAssetPath(::System::Int32 P0)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_CBDF63BA2C3715C3___IFIXBASEPROXY_GETASSETPATH_OFFSET))(this, P0);
	}

	::System::Boolean __iFixBaseProxy_AliasMark()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CBDF63BA2C3715C3___IFIXBASEPROXY_ALIASMARK_OFFSET))(this);
	}
};
