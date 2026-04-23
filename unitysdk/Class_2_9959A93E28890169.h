#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingItemData.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_303D5A33D1401D59;
namespace RPG::GameCore { class BlockNodeConfig; }
namespace RPG::GameCore { class GrassData; }
namespace RPG::GameCore { class LodTemplate; }
namespace RPG::GameCore { class StagePrefabInfo; }
namespace System { class String; }

#define CLASS_2_9959A93E28890169_GETAPPLYSTREAMINGLAYER_OFFSET UNITYSDK_OFFSET(0x11B10810)
#define CLASS_2_9959A93E28890169_GETBOUNDCENTER_OFFSET UNITYSDK_OFFSET(0x11B106C0)
#define CLASS_2_9959A93E28890169_GETBOUNDSIZE_OFFSET UNITYSDK_OFFSET(0x11B10730)
#define CLASS_2_9959A93E28890169_GETPERSISTENTASSETPATH_OFFSET UNITYSDK_OFFSET(0x11B10940)
#define CLASS_2_9959A93E28890169_GETRECT_OFFSET UNITYSDK_OFFSET(0x11B107B0)
#define CLASS_2_9959A93E28890169_METHOD_2_18193BE05A4121FF_OFFSET UNITYSDK_OFFSET(0x11B10650)
#define CLASS_2_9959A93E28890169_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11B10900)
#define CLASS_2_9959A93E28890169__CTOR_OFFSET UNITYSDK_OFFSET(0x11B10020)
#define CLASS_2_9959A93E28890169___IFIXBASEPROXY_GETPERSISTENTASSETPATH_OFFSET UNITYSDK_OFFSET(0x11B109F0)

inline static constexpr unsigned int Class_2_9959A93E28890169_TypeDefinitionIndex = 67922;

class Class_2_9959A93E28890169 : public ::RPG::Client::OpenWorld::StreamingItemData
{
public:
	static ::System::Boolean* StaticGet_Field_2_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_9959A93E28890169_TypeDefinitionIndex)->GetStaticField(0x11B80);
	}
	::Class_1_303D5A33D1401D59* Field_2_8; // 0xA8
	::RPG::GameCore::GrassData* Field_2_2; // 0xB0
	::System::Byte Field_2_7; // 0xB8
	::System::Boolean Field_2_6; // 0xB9
	::UnityEngine::Rect Field_2_1; // 0xBC
	::System::Single Field_2_5; // 0xCC
	::System::Single Field_2_4; // 0xD0
	::System::Single Field_2_3; // 0xD4

	::System::Void _ctor(::RPG::GameCore::BlockNodeConfig* a1, ::RPG::GameCore::StagePrefabInfo* a2, ::RPG::GameCore::LodTemplate* a3, ::RPG::GameCore::GrassData* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BlockNodeConfig*, ::RPG::GameCore::StagePrefabInfo*, ::RPG::GameCore::LodTemplate*, ::RPG::GameCore::GrassData*))((::PBYTE)hIl2Cpp + CLASS_2_9959A93E28890169__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void Method_2_18193BE05A4121FF(::UnityEngine::Bounds a1, ::UnityEngine::Color a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::UnityEngine::Bounds, ::UnityEngine::Color, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_9959A93E28890169_METHOD_2_18193BE05A4121FF_OFFSET))(a1, a2, a3);
	}

	::UnityEngine::Vector3 GetBoundCenter()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9959A93E28890169_GETBOUNDCENTER_OFFSET))(this);
	}

	::UnityEngine::Vector3 GetBoundSize()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9959A93E28890169_GETBOUNDSIZE_OFFSET))(this);
	}

	::UnityEngine::Rect GetRect()
	{
		return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9959A93E28890169_GETRECT_OFFSET))(this);
	}

	::System::String* GetApplyStreamingLayer()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9959A93E28890169_GETAPPLYSTREAMINGLAYER_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9959A93E28890169_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::String* GetPersistentAssetPath(::System::Int32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_9959A93E28890169_GETPERSISTENTASSETPATH_OFFSET))(this, a1);
	}

	::System::String* __iFixBaseProxy_GetPersistentAssetPath(::System::Int32 P0)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_9959A93E28890169___IFIXBASEPROXY_GETPERSISTENTASSETPATH_OFFSET))(this, P0);
	}
};
