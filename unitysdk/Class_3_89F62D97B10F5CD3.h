#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_CBDF63BA2C3715C3.h"

class Class_1_494BD190B553B399;
class Class_1_563415D37D4EDE07;
class Class_1_DA7373FBD5F460E0;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::GameCore { class BlockNodeConfig; }
namespace RPG::GameCore { class StagePrefabInfo; }
namespace System { class String; }

#define CLASS_3_89F62D97B10F5CD3_GETAPPLYSTREAMINGLAYER_OFFSET UNITYSDK_OFFSET(0x8CD47D0)
#define CLASS_3_89F62D97B10F5CD3_GETASSETPATH_OFFSET UNITYSDK_OFFSET(0x8CD4670)
#define CLASS_3_89F62D97B10F5CD3__CTOR_OFFSET UNITYSDK_OFFSET(0x8CD4660)
#define CLASS_3_89F62D97B10F5CD3___IFIXBASEPROXY_GETAPPLYSTREAMINGLAYER_OFFSET UNITYSDK_OFFSET(0x8CD4830)
#define CLASS_3_89F62D97B10F5CD3___IFIXBASEPROXY_GETASSETPATH_OFFSET UNITYSDK_OFFSET(0x8CD4820)

inline static constexpr unsigned int Class_3_89F62D97B10F5CD3_TypeDefinitionIndex = 60502;

class Class_3_89F62D97B10F5CD3 : public ::Class_2_CBDF63BA2C3715C3
{
public:
	::Class_1_DA7373FBD5F460E0* Field_3_1; // 0xC0
	::Class_1_DA7373FBD5F460E0* Field_3_0; // 0xC8

	::System::Void _ctor(::RPG::GameCore::BlockNodeConfig* a1, ::RPG::GameCore::StagePrefabInfo* a2, ::Class_1_494BD190B553B399* a3, ::Class_1_563415D37D4EDE07* a4, ::System::String* a5, ::RPG::Client::OpenWorld::StreamingItemData* a6)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BlockNodeConfig*, ::RPG::GameCore::StagePrefabInfo*, ::Class_1_494BD190B553B399*, ::Class_1_563415D37D4EDE07*, ::System::String*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_3_89F62D97B10F5CD3__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::String* GetAssetPath(::System::Int32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_89F62D97B10F5CD3_GETASSETPATH_OFFSET))(this, a1);
	}

	::System::String* GetApplyStreamingLayer()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_89F62D97B10F5CD3_GETAPPLYSTREAMINGLAYER_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_GetAssetPath(::System::Int32 P0)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_89F62D97B10F5CD3___IFIXBASEPROXY_GETASSETPATH_OFFSET))(this, P0);
	}

	::System::String* __iFixBaseProxy_GetApplyStreamingLayer()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_89F62D97B10F5CD3___IFIXBASEPROXY_GETAPPLYSTREAMINGLAYER_OFFSET))(this);
	}
};
