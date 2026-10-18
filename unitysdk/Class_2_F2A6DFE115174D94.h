#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingItemData.h"
#include "unitysdk/Struct_2_A77148D52D516E55.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_303D5A33D1401D59;
namespace RPG::GameCore { class BlockNodeConfig; }
namespace RPG::GameCore { class GrassData; }
namespace RPG::GameCore { class LodTemplate; }
namespace System { class String; }

#define CLASS_2_F2A6DFE115174D94_GETAPPLYSTREAMINGLAYER_OFFSET UNITYSDK_OFFSET(0xB64ABB0)
#define CLASS_2_F2A6DFE115174D94_GETBOUNDCENTER_OFFSET UNITYSDK_OFFSET(0xB64AA50)
#define CLASS_2_F2A6DFE115174D94_GETBOUNDSIZE_OFFSET UNITYSDK_OFFSET(0xB64AAD0)
#define CLASS_2_F2A6DFE115174D94_GETPERSISTENTASSETPATH_OFFSET UNITYSDK_OFFSET(0xB64AD50)
#define CLASS_2_F2A6DFE115174D94_GETRECT_OFFSET UNITYSDK_OFFSET(0xB64AB50)
#define CLASS_2_F2A6DFE115174D94_METHOD_2_18193BE05A4121FF_OFFSET UNITYSDK_OFFSET(0xB64A9E0)
#define CLASS_2_F2A6DFE115174D94_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB64AD10)
#define CLASS_2_F2A6DFE115174D94__CTOR_OFFSET UNITYSDK_OFFSET(0xB64A320)

inline static constexpr unsigned int Class_2_F2A6DFE115174D94_TypeDefinitionIndex = 73790;

class Class_2_F2A6DFE115174D94 : public ::RPG::Client::OpenWorld::StreamingItemData
{
public:
	static ::System::Boolean* StaticGet_MMADKOEOKOC()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_F2A6DFE115174D94_TypeDefinitionIndex)->GetStaticField(0xCF30);
	}
	::RPG::GameCore::GrassData* NFEKIEANHJI; // 0xB8
	::Class_1_303D5A33D1401D59* NCEAKEDDIIF; // 0xC0
	::UnityEngine::Rect OELFHMCCBBD; // 0xC8
	::System::Single KNHBFMOFBFC; // 0xD8
	::System::Single LBJEHIBFAJL; // 0xDC
	::System::Byte CKNIIAHDNHC; // 0xE0
	::System::Boolean HLJINKCCGON; // 0xE1
	::System::Single FHDIAHDOFFC; // 0xE4

	::System::Void _ctor(::RPG::GameCore::BlockNodeConfig* a1, ::Struct_2_A77148D52D516E55 a2, ::RPG::GameCore::LodTemplate* a3, ::RPG::GameCore::GrassData* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BlockNodeConfig*, ::Struct_2_A77148D52D516E55, ::RPG::GameCore::LodTemplate*, ::RPG::GameCore::GrassData*))((::PBYTE)hIl2Cpp + CLASS_2_F2A6DFE115174D94__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void Method_2_18193BE05A4121FF(::UnityEngine::Bounds a1, ::UnityEngine::Color a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::UnityEngine::Bounds, ::UnityEngine::Color, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F2A6DFE115174D94_METHOD_2_18193BE05A4121FF_OFFSET))(a1, a2, a3);
	}

	::UnityEngine::Vector3 GetBoundCenter()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2A6DFE115174D94_GETBOUNDCENTER_OFFSET))(this);
	}

	::UnityEngine::Vector3 GetBoundSize()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2A6DFE115174D94_GETBOUNDSIZE_OFFSET))(this);
	}

	::UnityEngine::Rect GetRect()
	{
		return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2A6DFE115174D94_GETRECT_OFFSET))(this);
	}

	::System::String* GetApplyStreamingLayer()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2A6DFE115174D94_GETAPPLYSTREAMINGLAYER_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2A6DFE115174D94_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::String* GetPersistentAssetPath(::System::Int32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F2A6DFE115174D94_GETPERSISTENTASSETPATH_OFFSET))(this, a1);
	}
};
