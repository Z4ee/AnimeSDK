#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define NPCCROWD_LOD_NPCCROWDLODMANAGER_OVERRIDELODPROFILESIGNATURE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x5EE5C0)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_OVERRIDELODPROFILESIGNATURE_EQUALS_OFFSET UNITYSDK_OFFSET(0x5EE510)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_OVERRIDELODPROFILESIGNATURE_FLOATTOBITS_OFFSET UNITYSDK_OFFSET(0xE583170)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_OVERRIDELODPROFILESIGNATURE_FROM_OFFSET UNITYSDK_OFFSET(0xE581430)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_OVERRIDELODPROFILESIGNATURE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x5EE5D0)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_OVERRIDELODPROFILESIGNATURE__CTOR_OFFSET UNITYSDK_OFFSET(0x5EE4E0)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_OVERRIDELODPROFILESIGNATURE___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x5EE640)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_OVERRIDELODPROFILESIGNATURE___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x5EE6B0)

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int NPCCrowdLodManager_OverrideLodProfileSignature_TypeDefinitionIndex = 57941;

	struct alignas(4) NPCCrowdLodManager_OverrideLodProfileSignature
	{
		::System::Int32 _lod0; // 0x10
		::System::Int32 _lod1; // 0x14
		::System::Int32 _lod2; // 0x18
		::System::Int32 _lod3; // 0x1C
		::System::Int32 _lod4; // 0x20
		::System::Int32 _lodBias; // 0x24

		::System::Void _ctor(::System::Int32 lod0, ::System::Int32 lod1, ::System::Int32 lod2, ::System::Int32 lod3, ::System::Int32 lod4, ::System::Int32 lodBias)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_OVERRIDELODPROFILESIGNATURE__CTOR_OFFSET))(this, lod0, lod1, lod2, lod3, lod4, lodBias);
		}

		static ::NPCCrowd::Lod::NPCCrowdLodManager_OverrideLodProfileSignature From(::Il2CppArray<::System::Single>* lodDistancesCm, ::System::Single lodBias)
		{
			return ((::NPCCrowd::Lod::NPCCrowdLodManager_OverrideLodProfileSignature(*)(::Il2CppArray<::System::Single>*, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_OVERRIDELODPROFILESIGNATURE_FROM_OFFSET))(lodDistancesCm, lodBias);
		}

		::System::Boolean Equals(::NPCCrowd::Lod::NPCCrowdLodManager_OverrideLodProfileSignature other)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Lod::NPCCrowdLodManager_OverrideLodProfileSignature))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_OVERRIDELODPROFILESIGNATURE_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_OVERRIDELODPROFILESIGNATURE_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_OVERRIDELODPROFILESIGNATURE_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Int32 FloatToBits(::System::Single value)
		{
			return ((::System::Int32(*)(::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_OVERRIDELODPROFILESIGNATURE_FLOATTOBITS_OFFSET))(value);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_OVERRIDELODPROFILESIGNATURE___BASE_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_OVERRIDELODPROFILESIGNATURE___BASE_GETHASHCODE_OFFSET))(this);
		}
	};
}
