#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_955;
class Class_1_A7A4B83BB51BED0E;
namespace RPG::GameCore { class FiveDimMapFaceConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B224D8D429173940_GET_FACEID_OFFSET UNITYSDK_OFFSET(0xEA85DB0)
#define CLASS_1_B224D8D429173940_GET_FOGOFWARCONFIG_OFFSET UNITYSDK_OFFSET(0xEA85E90)
#define CLASS_1_B224D8D429173940_GET_ISSHOWEMPTYMAP_OFFSET UNITYSDK_OFFSET(0xEA85E50)
#define CLASS_1_B224D8D429173940_GET_PATH_OFFSET UNITYSDK_OFFSET(0xEA85DF0)
#define CLASS_1_B224D8D429173940_GET_SHOWLEVELVARNAME_OFFSET UNITYSDK_OFFSET(0xEA85E10)
#define CLASS_1_B224D8D429173940_GET_SHOWLEVELVARVALUES_OFFSET UNITYSDK_OFFSET(0xEA85E30)
#define CLASS_1_B224D8D429173940_GET_SIZE_OFFSET UNITYSDK_OFFSET(0xEA85DD0)
#define CLASS_1_B224D8D429173940_GET_SURFACELIST_OFFSET UNITYSDK_OFFSET(0xEA85E70)
#define CLASS_1_B224D8D429173940_METHOD_1_3BB10D8AFBD077A1_OFFSET UNITYSDK_OFFSET(0xEA85AA0)
#define CLASS_1_B224D8D429173940_METHOD_1_87C596CDD22516C5_OFFSET UNITYSDK_OFFSET(0xEA85D10)
#define CLASS_1_B224D8D429173940_METHOD_1_8E6F790317C6F21C_OFFSET UNITYSDK_OFFSET(0xEA855A0)
#define CLASS_1_B224D8D429173940_METHOD_1_C8FAB59C3EE3846E_OFFSET UNITYSDK_OFFSET(0xEA85EB0)
#define CLASS_1_B224D8D429173940_METHOD_1_F0B313FE8ADD51CF_OFFSET UNITYSDK_OFFSET(0xEA85A10)
#define CLASS_1_B224D8D429173940_METHOD_1_F72BBD82B554E5AA_OFFSET UNITYSDK_OFFSET(0xEA85830)
#define CLASS_1_B224D8D429173940_SET_FACEID_OFFSET UNITYSDK_OFFSET(0xEA85DC0)
#define CLASS_1_B224D8D429173940_SET_FOGOFWARCONFIG_OFFSET UNITYSDK_OFFSET(0xEA85EA0)
#define CLASS_1_B224D8D429173940_SET_ISSHOWEMPTYMAP_OFFSET UNITYSDK_OFFSET(0xEA85E60)
#define CLASS_1_B224D8D429173940_SET_PATH_OFFSET UNITYSDK_OFFSET(0xEA85E00)
#define CLASS_1_B224D8D429173940_SET_SHOWLEVELVARNAME_OFFSET UNITYSDK_OFFSET(0xEA85E20)
#define CLASS_1_B224D8D429173940_SET_SHOWLEVELVARVALUES_OFFSET UNITYSDK_OFFSET(0xEA85E40)
#define CLASS_1_B224D8D429173940_SET_SIZE_OFFSET UNITYSDK_OFFSET(0xEA85DE0)
#define CLASS_1_B224D8D429173940_SET_SURFACELIST_OFFSET UNITYSDK_OFFSET(0xEA85E80)
#define CLASS_1_B224D8D429173940__CTOR_OFFSET UNITYSDK_OFFSET(0xEA85820)

inline static constexpr unsigned int Class_1_B224D8D429173940_TypeDefinitionIndex = 61388;

class Class_1_B224D8D429173940 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_955*>* _SurfaceList_k__BackingField; // 0x10
	::Il2CppArray<::System::Int16>* _ShowLevelVarValues_k__BackingField; // 0x18
	::System::String* _ShowLevelVarName_k__BackingField; // 0x20
	::System::String* _Path_k__BackingField; // 0x28
	::Class_1_A7A4B83BB51BED0E* _FogOfWarConfig_k__BackingField; // 0x30
	::System::Boolean _IsShowEmptyMap_k__BackingField; // 0x38
	::RPG::MVector2 _Size_k__BackingField; // 0x3C
	::System::UInt32 _FaceID_k__BackingField; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B224D8D429173940__CTOR_OFFSET))(this);
	}

	static ::Class_1_B224D8D429173940* Method_1_8E6F790317C6F21C(::RPG::GameCore::FiveDimMapFaceConfig* a1)
	{
		return ((::Class_1_B224D8D429173940*(*)(::RPG::GameCore::FiveDimMapFaceConfig*))((::PBYTE)hIl2Cpp + CLASS_1_B224D8D429173940_METHOD_1_8E6F790317C6F21C_OFFSET))(a1);
	}

	::System::Nullable_1<::System::UInt32> Method_1_F72BBD82B554E5AA(::UnityEngine::Vector3 a1)
	{
		return ((::System::Nullable_1<::System::UInt32>(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_B224D8D429173940_METHOD_1_F72BBD82B554E5AA_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0B313FE8ADD51CF(::RPG::MVector2 a1, ::Il2CppArray<::RPG::MVector2>* a2, ::Il2CppArray<::System::UInt32>* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::MVector2, ::Il2CppArray<::RPG::MVector2>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_B224D8D429173940_METHOD_1_F0B313FE8ADD51CF_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_3BB10D8AFBD077A1(::RPG::MVector2 a1, ::Il2CppArray<::RPG::MVector2>* a2, ::Il2CppArray<::System::UInt32>* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::MVector2, ::Il2CppArray<::RPG::MVector2>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_B224D8D429173940_METHOD_1_3BB10D8AFBD077A1_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_1_87C596CDD22516C5(::RPG::MVector2 a1, ::RPG::MVector2 a2, ::RPG::MVector2 a3)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::MVector2, ::RPG::MVector2, ::RPG::MVector2))((::PBYTE)hIl2Cpp + CLASS_1_B224D8D429173940_METHOD_1_87C596CDD22516C5_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 get_FaceID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B224D8D429173940_GET_FACEID_OFFSET))(this);
	}

	::System::Void set_FaceID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B224D8D429173940_SET_FACEID_OFFSET))(this, value);
	}

	::RPG::MVector2 get_Size()
	{
		return ((::RPG::MVector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B224D8D429173940_GET_SIZE_OFFSET))(this);
	}

	::System::Void set_Size(::RPG::MVector2 value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + CLASS_1_B224D8D429173940_SET_SIZE_OFFSET))(this, value);
	}

	::System::String* get_Path()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B224D8D429173940_GET_PATH_OFFSET))(this);
	}

	::System::Void set_Path(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B224D8D429173940_SET_PATH_OFFSET))(this, value);
	}

	::System::String* get_ShowLevelVarName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B224D8D429173940_GET_SHOWLEVELVARNAME_OFFSET))(this);
	}

	::System::Void set_ShowLevelVarName(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B224D8D429173940_SET_SHOWLEVELVARNAME_OFFSET))(this, value);
	}

	::Il2CppArray<::System::Int16>* get_ShowLevelVarValues()
	{
		return ((::Il2CppArray<::System::Int16>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B224D8D429173940_GET_SHOWLEVELVARVALUES_OFFSET))(this);
	}

	::System::Void set_ShowLevelVarValues(::Il2CppArray<::System::Int16>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int16>*))((::PBYTE)hIl2Cpp + CLASS_1_B224D8D429173940_SET_SHOWLEVELVARVALUES_OFFSET))(this, value);
	}

	::System::Boolean get_IsShowEmptyMap()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B224D8D429173940_GET_ISSHOWEMPTYMAP_OFFSET))(this);
	}

	::System::Void set_IsShowEmptyMap(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B224D8D429173940_SET_ISSHOWEMPTYMAP_OFFSET))(this, value);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_955*>* get_SurfaceList()
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_955*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B224D8D429173940_GET_SURFACELIST_OFFSET))(this);
	}

	::System::Void set_SurfaceList(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_955*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_955*>*))((::PBYTE)hIl2Cpp + CLASS_1_B224D8D429173940_SET_SURFACELIST_OFFSET))(this, value);
	}

	::Class_1_A7A4B83BB51BED0E* get_FogOfWarConfig()
	{
		return ((::Class_1_A7A4B83BB51BED0E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B224D8D429173940_GET_FOGOFWARCONFIG_OFFSET))(this);
	}

	::System::Void set_FogOfWarConfig(::Class_1_A7A4B83BB51BED0E* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A7A4B83BB51BED0E*))((::PBYTE)hIl2Cpp + CLASS_1_B224D8D429173940_SET_FOGOFWARCONFIG_OFFSET))(this, value);
	}

	::UnityEngine::Vector3 Method_1_C8FAB59C3EE3846E(::Class_0_16E4307DCC419505_955* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Int16 a4)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_0_16E4307DCC419505_955*, ::UnityEngine::Vector3, ::System::Single, ::System::Int16))((::PBYTE)hIl2Cpp + CLASS_1_B224D8D429173940_METHOD_1_C8FAB59C3EE3846E_OFFSET))(this, a1, a2, a3, a4);
	}
};
