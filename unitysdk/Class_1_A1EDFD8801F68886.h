#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_EAC1BB0F093534A5.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FiveDimCustomLoadConfig; }
namespace RPG::GameCore { class FiveDimCustomVisibilityConfig; }
namespace RPG::GameCore { class FiveDimEntityVarConfig; }
namespace RPG::GameCore { class FiveDimNavMapSurfaceConnectConfig; }
namespace RPG::GameCore { class FiveDimPipePortalConfig; }
namespace RPG::GameCore { class FiveDimPortalConfig; }
namespace RPG::GameCore { class FiveDimSurfaceConfig; }
namespace RPG::GameCore { class LittleGameAttachPointConfig; }
namespace RPG::GameCore { class LittleGameEntityConfig; }
namespace RPG::GameCore { class LittleGameNavMapIconConfig; }
namespace RPG::GameCore { class LittleGameTagConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A1EDFD8801F68886_GET_ATTACHPOINTCONFIG_OFFSET UNITYSDK_OFFSET(0x15208AE0)
#define CLASS_1_A1EDFD8801F68886_GET_ATTACHPOINTS_OFFSET UNITYSDK_OFFSET(0x15208BE0)
#define CLASS_1_A1EDFD8801F68886_GET_CHILDRENIDS_OFFSET UNITYSDK_OFFSET(0x152089A0)
#define CLASS_1_A1EDFD8801F68886_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x15208C00)
#define CLASS_1_A1EDFD8801F68886_GET_CUSTOMLOADCONFIG_OFFSET UNITYSDK_OFFSET(0x15208B40)
#define CLASS_1_A1EDFD8801F68886_GET_CUSTOMVISIBILITYCONFIG_OFFSET UNITYSDK_OFFSET(0x15208B60)
#define CLASS_1_A1EDFD8801F68886_GET_ENTITYVARCONFIG_OFFSET UNITYSDK_OFFSET(0x15208B80)
#define CLASS_1_A1EDFD8801F68886_GET_ICONCONFIG_OFFSET UNITYSDK_OFFSET(0x15208AA0)
#define CLASS_1_A1EDFD8801F68886_GET_ISLOADEDINNAV_OFFSET UNITYSDK_OFFSET(0x152089E0)
#define CLASS_1_A1EDFD8801F68886_GET_ISLOADED_OFFSET UNITYSDK_OFFSET(0x152089C0)
#define CLASS_1_A1EDFD8801F68886_GET_ISLOCKED_OFFSET UNITYSDK_OFFSET(0x15208A20)
#define CLASS_1_A1EDFD8801F68886_GET_ISSURFACE_OFFSET UNITYSDK_OFFSET(0x15208910)
#define CLASS_1_A1EDFD8801F68886_GET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x15208A00)
#define CLASS_1_A1EDFD8801F68886_GET_LITTLEGAMETAGCONFIG_OFFSET UNITYSDK_OFFSET(0x15208BA0)
#define CLASS_1_A1EDFD8801F68886_GET_LOCALTRANSFORM_OFFSET UNITYSDK_OFFSET(0x15208710)
#define CLASS_1_A1EDFD8801F68886_GET_MAPFACECONNECTCONFIG_OFFSET UNITYSDK_OFFSET(0x15208AC0)
#define CLASS_1_A1EDFD8801F68886_GET_PARENTID_OFFSET UNITYSDK_OFFSET(0x15208980)
#define CLASS_1_A1EDFD8801F68886_GET_PIPEPORTALCONFIG_OFFSET UNITYSDK_OFFSET(0x15208B00)
#define CLASS_1_A1EDFD8801F68886_GET_PORTALCONFIG_OFFSET UNITYSDK_OFFSET(0x15208B20)
#define CLASS_1_A1EDFD8801F68886_GET_SURFACECONFIG_OFFSET UNITYSDK_OFFSET(0x15208BC0)
#define CLASS_1_A1EDFD8801F68886_GET_SURFACEID_OFFSET UNITYSDK_OFFSET(0x152088F0)
#define CLASS_1_A1EDFD8801F68886_GET_SURFACERELATIVETRANSFORM_OFFSET UNITYSDK_OFFSET(0x15208850)
#define CLASS_1_A1EDFD8801F68886_GET_WORLDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x152087B0)
#define CLASS_1_A1EDFD8801F68886_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x15208A40)
#define CLASS_1_A1EDFD8801F68886_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x15208930)
#define CLASS_1_A1EDFD8801F68886_SET_ATTACHPOINTCONFIG_OFFSET UNITYSDK_OFFSET(0x15208AF0)
#define CLASS_1_A1EDFD8801F68886_SET_ATTACHPOINTS_OFFSET UNITYSDK_OFFSET(0x15208BF0)
#define CLASS_1_A1EDFD8801F68886_SET_CHILDRENIDS_OFFSET UNITYSDK_OFFSET(0x152089B0)
#define CLASS_1_A1EDFD8801F68886_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x15208C10)
#define CLASS_1_A1EDFD8801F68886_SET_CUSTOMLOADCONFIG_OFFSET UNITYSDK_OFFSET(0x15208B50)
#define CLASS_1_A1EDFD8801F68886_SET_CUSTOMVISIBILITYCONFIG_OFFSET UNITYSDK_OFFSET(0x15208B70)
#define CLASS_1_A1EDFD8801F68886_SET_ENTITYVARCONFIG_OFFSET UNITYSDK_OFFSET(0x15208B90)
#define CLASS_1_A1EDFD8801F68886_SET_ICONCONFIG_OFFSET UNITYSDK_OFFSET(0x15208AB0)
#define CLASS_1_A1EDFD8801F68886_SET_ISLOADEDINNAV_OFFSET UNITYSDK_OFFSET(0x152089F0)
#define CLASS_1_A1EDFD8801F68886_SET_ISLOADED_OFFSET UNITYSDK_OFFSET(0x152089D0)
#define CLASS_1_A1EDFD8801F68886_SET_ISLOCKED_OFFSET UNITYSDK_OFFSET(0x15208A30)
#define CLASS_1_A1EDFD8801F68886_SET_ISSURFACE_OFFSET UNITYSDK_OFFSET(0x15208920)
#define CLASS_1_A1EDFD8801F68886_SET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x15208A10)
#define CLASS_1_A1EDFD8801F68886_SET_LITTLEGAMETAGCONFIG_OFFSET UNITYSDK_OFFSET(0x15208BB0)
#define CLASS_1_A1EDFD8801F68886_SET_LOCALTRANSFORM_OFFSET UNITYSDK_OFFSET(0x15208760)
#define CLASS_1_A1EDFD8801F68886_SET_MAPFACECONNECTCONFIG_OFFSET UNITYSDK_OFFSET(0x15208AD0)
#define CLASS_1_A1EDFD8801F68886_SET_PARENTID_OFFSET UNITYSDK_OFFSET(0x15208990)
#define CLASS_1_A1EDFD8801F68886_SET_PIPEPORTALCONFIG_OFFSET UNITYSDK_OFFSET(0x15208B10)
#define CLASS_1_A1EDFD8801F68886_SET_PORTALCONFIG_OFFSET UNITYSDK_OFFSET(0x15208B30)
#define CLASS_1_A1EDFD8801F68886_SET_SURFACECONFIG_OFFSET UNITYSDK_OFFSET(0x15208BD0)
#define CLASS_1_A1EDFD8801F68886_SET_SURFACEID_OFFSET UNITYSDK_OFFSET(0x15208900)
#define CLASS_1_A1EDFD8801F68886_SET_SURFACERELATIVETRANSFORM_OFFSET UNITYSDK_OFFSET(0x152088A0)
#define CLASS_1_A1EDFD8801F68886_SET_WORLDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x15208800)
#define CLASS_1_A1EDFD8801F68886__CTOR_OFFSET UNITYSDK_OFFSET(0x15208C20)

inline static constexpr unsigned int Class_1_A1EDFD8801F68886_TypeDefinitionIndex = 62283;

class Class_1_A1EDFD8801F68886 : public ::System::Object
{
public:
	::RPG::GameCore::LittleGameTagConfig* _LittleGameTagConfig_k__BackingField; // 0x10
	::RPG::GameCore::FiveDimPortalConfig* _PortalConfig_k__BackingField; // 0x18
	::RPG::GameCore::FiveDimCustomLoadConfig* _CustomLoadConfig_k__BackingField; // 0x20
	::RPG::GameCore::LittleGameEntityConfig* _Config_k__BackingField; // 0x28
	::RPG::GameCore::FiveDimNavMapSurfaceConnectConfig* _MapFaceConnectConfig_k__BackingField; // 0x30
	::RPG::GameCore::FiveDimCustomVisibilityConfig* _CustomVisibilityConfig_k__BackingField; // 0x38
	::RPG::GameCore::FiveDimPipePortalConfig* _PipePortalConfig_k__BackingField; // 0x40
	::RPG::GameCore::LittleGameAttachPointConfig* _AttachPointConfig_k__BackingField; // 0x48
	::System::Collections::Generic::List_1<::System::UInt32>* _ChildrenIDs_k__BackingField; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_EAC1BB0F093534A5>* _AttachPoints_k__BackingField; // 0x58
	::RPG::GameCore::LittleGameNavMapIconConfig* _IconConfig_k__BackingField; // 0x60
	::RPG::GameCore::FiveDimSurfaceConfig* _SurfaceConfig_k__BackingField; // 0x68
	::RPG::GameCore::FiveDimEntityVarConfig* _EntityVarConfig_k__BackingField; // 0x70
	::System::UInt32 _SurfaceID_k__BackingField; // 0x78
	::Struct_2_EAC1BB0F093534A5 _WorldTransform_k__BackingField; // 0x7C
	::Struct_2_EAC1BB0F093534A5 _LocalTransform_k__BackingField; // 0xE4
	::System::Boolean _IsVisible_k__BackingField; // 0x14C
	::System::Boolean _IsSurface_k__BackingField; // 0x14D
	::System::Boolean _IsLoadedInNav_k__BackingField; // 0x14E
	::System::Boolean _IsLocked_k__BackingField; // 0x14F
	::System::Boolean _IsLoaded_k__BackingField; // 0x150
	::Struct_2_EAC1BB0F093534A5 _SurfaceRelativeTransform_k__BackingField; // 0x154
	::System::UInt32 _ParentID_k__BackingField; // 0x1BC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886__CTOR_OFFSET))(this);
	}

	::Struct_2_EAC1BB0F093534A5 get_LocalTransform()
	{
		return ((::Struct_2_EAC1BB0F093534A5(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_GET_LOCALTRANSFORM_OFFSET))(this);
	}

	::System::Void set_LocalTransform(::Struct_2_EAC1BB0F093534A5 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_EAC1BB0F093534A5))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_SET_LOCALTRANSFORM_OFFSET))(this, a1);
	}

	::Struct_2_EAC1BB0F093534A5 get_WorldTransform()
	{
		return ((::Struct_2_EAC1BB0F093534A5(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_GET_WORLDTRANSFORM_OFFSET))(this);
	}

	::System::Void set_WorldTransform(::Struct_2_EAC1BB0F093534A5 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_EAC1BB0F093534A5))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_SET_WORLDTRANSFORM_OFFSET))(this, a1);
	}

	::Struct_2_EAC1BB0F093534A5 get_SurfaceRelativeTransform()
	{
		return ((::Struct_2_EAC1BB0F093534A5(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_GET_SURFACERELATIVETRANSFORM_OFFSET))(this);
	}

	::System::Void set_SurfaceRelativeTransform(::Struct_2_EAC1BB0F093534A5 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_EAC1BB0F093534A5))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_SET_SURFACERELATIVETRANSFORM_OFFSET))(this, a1);
	}

	::System::UInt32 get_SurfaceID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_GET_SURFACEID_OFFSET))(this);
	}

	::System::Void set_SurfaceID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_SET_SURFACEID_OFFSET))(this, a1);
	}

	::System::Boolean get_IsSurface()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_GET_ISSURFACE_OFFSET))(this);
	}

	::System::Void set_IsSurface(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_SET_ISSURFACE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::System::UInt32 get_ParentID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_GET_PARENTID_OFFSET))(this);
	}

	::System::Void set_ParentID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_SET_PARENTID_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* get_ChildrenIDs()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_GET_CHILDRENIDS_OFFSET))(this);
	}

	::System::Void set_ChildrenIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_SET_CHILDRENIDS_OFFSET))(this, a1);
	}

	::System::Boolean get_IsLoaded()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_GET_ISLOADED_OFFSET))(this);
	}

	::System::Void set_IsLoaded(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_SET_ISLOADED_OFFSET))(this, a1);
	}

	::System::Boolean get_IsLoadedInNav()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_GET_ISLOADEDINNAV_OFFSET))(this);
	}

	::System::Void set_IsLoadedInNav(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_SET_ISLOADEDINNAV_OFFSET))(this, a1);
	}

	::System::Boolean get_IsVisible()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_GET_ISVISIBLE_OFFSET))(this);
	}

	::System::Void set_IsVisible(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_SET_ISVISIBLE_OFFSET))(this, a1);
	}

	::System::Boolean get_IsLocked()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_GET_ISLOCKED_OFFSET))(this);
	}

	::System::Void set_IsLocked(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_SET_ISLOCKED_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::RPG::GameCore::LittleGameNavMapIconConfig* get_IconConfig()
	{
		return ((::RPG::GameCore::LittleGameNavMapIconConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_GET_ICONCONFIG_OFFSET))(this);
	}

	::System::Void set_IconConfig(::RPG::GameCore::LittleGameNavMapIconConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameNavMapIconConfig*))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_SET_ICONCONFIG_OFFSET))(this, a1);
	}

	::RPG::GameCore::FiveDimNavMapSurfaceConnectConfig* get_MapFaceConnectConfig()
	{
		return ((::RPG::GameCore::FiveDimNavMapSurfaceConnectConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_GET_MAPFACECONNECTCONFIG_OFFSET))(this);
	}

	::System::Void set_MapFaceConnectConfig(::RPG::GameCore::FiveDimNavMapSurfaceConnectConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimNavMapSurfaceConnectConfig*))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_SET_MAPFACECONNECTCONFIG_OFFSET))(this, a1);
	}

	::RPG::GameCore::LittleGameAttachPointConfig* get_AttachPointConfig()
	{
		return ((::RPG::GameCore::LittleGameAttachPointConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_GET_ATTACHPOINTCONFIG_OFFSET))(this);
	}

	::System::Void set_AttachPointConfig(::RPG::GameCore::LittleGameAttachPointConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameAttachPointConfig*))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_SET_ATTACHPOINTCONFIG_OFFSET))(this, a1);
	}

	::RPG::GameCore::FiveDimPipePortalConfig* get_PipePortalConfig()
	{
		return ((::RPG::GameCore::FiveDimPipePortalConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_GET_PIPEPORTALCONFIG_OFFSET))(this);
	}

	::System::Void set_PipePortalConfig(::RPG::GameCore::FiveDimPipePortalConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimPipePortalConfig*))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_SET_PIPEPORTALCONFIG_OFFSET))(this, a1);
	}

	::RPG::GameCore::FiveDimPortalConfig* get_PortalConfig()
	{
		return ((::RPG::GameCore::FiveDimPortalConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_GET_PORTALCONFIG_OFFSET))(this);
	}

	::System::Void set_PortalConfig(::RPG::GameCore::FiveDimPortalConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimPortalConfig*))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_SET_PORTALCONFIG_OFFSET))(this, a1);
	}

	::RPG::GameCore::FiveDimCustomLoadConfig* get_CustomLoadConfig()
	{
		return ((::RPG::GameCore::FiveDimCustomLoadConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_GET_CUSTOMLOADCONFIG_OFFSET))(this);
	}

	::System::Void set_CustomLoadConfig(::RPG::GameCore::FiveDimCustomLoadConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimCustomLoadConfig*))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_SET_CUSTOMLOADCONFIG_OFFSET))(this, a1);
	}

	::RPG::GameCore::FiveDimCustomVisibilityConfig* get_CustomVisibilityConfig()
	{
		return ((::RPG::GameCore::FiveDimCustomVisibilityConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_GET_CUSTOMVISIBILITYCONFIG_OFFSET))(this);
	}

	::System::Void set_CustomVisibilityConfig(::RPG::GameCore::FiveDimCustomVisibilityConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimCustomVisibilityConfig*))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_SET_CUSTOMVISIBILITYCONFIG_OFFSET))(this, a1);
	}

	::RPG::GameCore::FiveDimEntityVarConfig* get_EntityVarConfig()
	{
		return ((::RPG::GameCore::FiveDimEntityVarConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_GET_ENTITYVARCONFIG_OFFSET))(this);
	}

	::System::Void set_EntityVarConfig(::RPG::GameCore::FiveDimEntityVarConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimEntityVarConfig*))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_SET_ENTITYVARCONFIG_OFFSET))(this, a1);
	}

	::RPG::GameCore::LittleGameTagConfig* get_LittleGameTagConfig()
	{
		return ((::RPG::GameCore::LittleGameTagConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_GET_LITTLEGAMETAGCONFIG_OFFSET))(this);
	}

	::System::Void set_LittleGameTagConfig(::RPG::GameCore::LittleGameTagConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameTagConfig*))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_SET_LITTLEGAMETAGCONFIG_OFFSET))(this, a1);
	}

	::RPG::GameCore::FiveDimSurfaceConfig* get_SurfaceConfig()
	{
		return ((::RPG::GameCore::FiveDimSurfaceConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_GET_SURFACECONFIG_OFFSET))(this);
	}

	::System::Void set_SurfaceConfig(::RPG::GameCore::FiveDimSurfaceConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimSurfaceConfig*))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_SET_SURFACECONFIG_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_EAC1BB0F093534A5>* get_AttachPoints()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_EAC1BB0F093534A5>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_GET_ATTACHPOINTS_OFFSET))(this);
	}

	::System::Void set_AttachPoints(::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_EAC1BB0F093534A5>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_EAC1BB0F093534A5>*))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_SET_ATTACHPOINTS_OFFSET))(this, a1);
	}

	::RPG::GameCore::LittleGameEntityConfig* get_Config()
	{
		return ((::RPG::GameCore::LittleGameEntityConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::RPG::GameCore::LittleGameEntityConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_SET_CONFIG_OFFSET))(this, a1);
	}
};
