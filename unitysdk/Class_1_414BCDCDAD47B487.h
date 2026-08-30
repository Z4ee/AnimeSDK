#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/LodTemplateSourceType.h"
#include "unitysdk/RPG/GameCore/StreamingLayerType.h"
#include "unitysdk/System/Object.h"

class Class_1_F756B10AB29D1235;
namespace RPG::GameCore { class LodDetail; }
namespace RPG::GameCore { class LodTemplate; }
namespace RPG::GameCore { class NormDistanceLodTemplate; }
namespace System { class String; }

#define CLASS_1_414BCDCDAD47B487_GET_DISTANCE_OFFSET UNITYSDK_OFFSET(0x189856F0)
#define CLASS_1_414BCDCDAD47B487_GET_DITHERSWITCH_OFFSET UNITYSDK_OFFSET(0x18985750)
#define CLASS_1_414BCDCDAD47B487_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x189856D0)
#define CLASS_1_414BCDCDAD47B487_GET_ISAUTOGEN_OFFSET UNITYSDK_OFFSET(0x18985770)
#define CLASS_1_414BCDCDAD47B487_GET_ISPERSISTENT_OFFSET UNITYSDK_OFFSET(0x189856E0)
#define CLASS_1_414BCDCDAD47B487_GET_LAYERTYPE_OFFSET UNITYSDK_OFFSET(0x18985740)
#define CLASS_1_414BCDCDAD47B487_GET_LAYER_OFFSET UNITYSDK_OFFSET(0x18985730)
#define CLASS_1_414BCDCDAD47B487_GET_LODDETAILLIST_OFFSET UNITYSDK_OFFSET(0x18985720)
#define CLASS_1_414BCDCDAD47B487_GET_NAME_OFFSET UNITYSDK_OFFSET(0x189856C0)
#define CLASS_1_414BCDCDAD47B487_GET_NORMDISTANCE_OFFSET UNITYSDK_OFFSET(0x18985700)
#define CLASS_1_414BCDCDAD47B487_GET_OBJECTSIZE_OFFSET UNITYSDK_OFFSET(0x18985710)
#define CLASS_1_414BCDCDAD47B487_GET_SOURCELODTEMPLATE_OFFSET UNITYSDK_OFFSET(0x18985790)
#define CLASS_1_414BCDCDAD47B487_GET_SOURCENORMDISTANCETEMPLATE_OFFSET UNITYSDK_OFFSET(0x189857A0)
#define CLASS_1_414BCDCDAD47B487_GET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0x18985780)
#define CLASS_1_414BCDCDAD47B487_GET_USEAABBDIST_OFFSET UNITYSDK_OFFSET(0x18985760)
#define CLASS_1_414BCDCDAD47B487_METHOD_1_2A2D5F8C97A46780_OFFSET UNITYSDK_OFFSET(0x189855A0)
#define CLASS_1_414BCDCDAD47B487_METHOD_1_ADE7EC82E13C7741_OFFSET UNITYSDK_OFFSET(0x18985470)
#define CLASS_1_414BCDCDAD47B487_METHOD_1_CFE6FB160FFF5938_OFFSET UNITYSDK_OFFSET(0x18985500)
#define CLASS_1_414BCDCDAD47B487_METHOD_1_F026F9F94BAA5E1F_OFFSET UNITYSDK_OFFSET(0x18985870)
#define CLASS_1_414BCDCDAD47B487_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x189858D0)
#define CLASS_1_414BCDCDAD47B487_METHOD_1_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0x189857B0)
#define CLASS_1_414BCDCDAD47B487_METHOD_1_FD97D7184557CB1A_1_OFFSET UNITYSDK_OFFSET(0x189857D0)
#define CLASS_1_414BCDCDAD47B487_METHOD_1_FD97D7184557CB1A_2_OFFSET UNITYSDK_OFFSET(0x18985820)
#define CLASS_1_414BCDCDAD47B487_METHOD_1_FD97D7184557CB1A_OFFSET UNITYSDK_OFFSET(0x18985660)
#define CLASS_1_414BCDCDAD47B487__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18985220)
#define CLASS_1_414BCDCDAD47B487__CTOR_OFFSET UNITYSDK_OFFSET(0x18985120)

inline static constexpr unsigned int Class_1_414BCDCDAD47B487_TypeDefinitionIndex = 73792;

class Class_1_414BCDCDAD47B487 : public ::System::Object
{
public:
	::RPG::GameCore::LodTemplate* _SourceLodTemplate_k__BackingField; // 0x10
	::System::String* _Name_k__BackingField; // 0x18
	::RPG::GameCore::NormDistanceLodTemplate* _SourceNormDistanceTemplate_k__BackingField; // 0x20
	::Il2CppArray<::RPG::GameCore::LodDetail*>* _LodDetailList_k__BackingField; // 0x28
	::Class_1_F756B10AB29D1235* CNIIOMHNACP; // 0x30
	::System::String* _Layer_k__BackingField; // 0x38
	::System::Single _ObjectSize_k__BackingField; // 0x40
	::System::Single _NormDistance_k__BackingField; // 0x44
	::System::Int32 _Index_k__BackingField; // 0x48
	::RPG::Client::OpenWorld::LodTemplateSourceType _SourceType_k__BackingField; // 0x4C
	::System::Single _Distance_k__BackingField; // 0x50
	::System::Boolean _IsAutoGen_k__BackingField; // 0x54
	::System::Boolean _DitherSwitch_k__BackingField; // 0x55
	::System::Boolean _IsPersistent_k__BackingField; // 0x56
	::System::Boolean _UseAABBDist_k__BackingField; // 0x57
	::RPG::GameCore::StreamingLayerType _LayerType_k__BackingField; // 0x58

	::System::Void _ctor(::RPG::GameCore::LodTemplate* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LodTemplate*))((::PBYTE)hIl2Cpp + CLASS_1_414BCDCDAD47B487__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::RPG::GameCore::NormDistanceLodTemplate* a1, ::System::Single a2, ::Class_1_F756B10AB29D1235* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NormDistanceLodTemplate*, ::System::Single, ::Class_1_F756B10AB29D1235*))((::PBYTE)hIl2Cpp + CLASS_1_414BCDCDAD47B487__CTOR_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_ADE7EC82E13C7741(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_414BCDCDAD47B487_METHOD_1_ADE7EC82E13C7741_OFFSET))(this, a1);
	}

	::System::Void Method_1_CFE6FB160FFF5938()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_414BCDCDAD47B487_METHOD_1_CFE6FB160FFF5938_OFFSET))(this);
	}

	::System::Int32 Method_1_2A2D5F8C97A46780(::System::Single a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_414BCDCDAD47B487_METHOD_1_2A2D5F8C97A46780_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_1_FD97D7184557CB1A()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_414BCDCDAD47B487_METHOD_1_FD97D7184557CB1A_OFFSET))(this);
	}

	::System::String* get_Name()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_414BCDCDAD47B487_GET_NAME_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_414BCDCDAD47B487_GET_INDEX_OFFSET))(this);
	}

	::System::Boolean get_IsPersistent()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_414BCDCDAD47B487_GET_ISPERSISTENT_OFFSET))(this);
	}

	::System::Single get_Distance()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_414BCDCDAD47B487_GET_DISTANCE_OFFSET))(this);
	}

	::System::Single get_NormDistance()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_414BCDCDAD47B487_GET_NORMDISTANCE_OFFSET))(this);
	}

	::System::Single get_ObjectSize()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_414BCDCDAD47B487_GET_OBJECTSIZE_OFFSET))(this);
	}

	::Il2CppArray<::RPG::GameCore::LodDetail*>* get_LodDetailList()
	{
		return ((::Il2CppArray<::RPG::GameCore::LodDetail*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_414BCDCDAD47B487_GET_LODDETAILLIST_OFFSET))(this);
	}

	::System::String* get_Layer()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_414BCDCDAD47B487_GET_LAYER_OFFSET))(this);
	}

	::RPG::GameCore::StreamingLayerType get_LayerType()
	{
		return ((::RPG::GameCore::StreamingLayerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_414BCDCDAD47B487_GET_LAYERTYPE_OFFSET))(this);
	}

	::System::Boolean get_DitherSwitch()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_414BCDCDAD47B487_GET_DITHERSWITCH_OFFSET))(this);
	}

	::System::Boolean get_UseAABBDist()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_414BCDCDAD47B487_GET_USEAABBDIST_OFFSET))(this);
	}

	::System::Boolean get_IsAutoGen()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_414BCDCDAD47B487_GET_ISAUTOGEN_OFFSET))(this);
	}

	::RPG::Client::OpenWorld::LodTemplateSourceType get_SourceType()
	{
		return ((::RPG::Client::OpenWorld::LodTemplateSourceType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_414BCDCDAD47B487_GET_SOURCETYPE_OFFSET))(this);
	}

	::RPG::GameCore::LodTemplate* get_SourceLodTemplate()
	{
		return ((::RPG::GameCore::LodTemplate*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_414BCDCDAD47B487_GET_SOURCELODTEMPLATE_OFFSET))(this);
	}

	::RPG::GameCore::NormDistanceLodTemplate* get_SourceNormDistanceTemplate()
	{
		return ((::RPG::GameCore::NormDistanceLodTemplate*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_414BCDCDAD47B487_GET_SOURCENORMDISTANCETEMPLATE_OFFSET))(this);
	}

	::System::Single Method_1_FB4BE762B6186C23()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_414BCDCDAD47B487_METHOD_1_FB4BE762B6186C23_OFFSET))(this);
	}

	::System::Int32 Method_1_FD97D7184557CB1A_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_414BCDCDAD47B487_METHOD_1_FD97D7184557CB1A_1_OFFSET))(this);
	}

	::System::Int32 Method_1_FD97D7184557CB1A_2()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_414BCDCDAD47B487_METHOD_1_FD97D7184557CB1A_2_OFFSET))(this);
	}

	::System::Int32 Method_1_F026F9F94BAA5E1F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_414BCDCDAD47B487_METHOD_1_F026F9F94BAA5E1F_OFFSET))(this);
	}

	::Class_1_F756B10AB29D1235* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_F756B10AB29D1235*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_414BCDCDAD47B487_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}
};
