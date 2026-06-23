#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_58DF5669875F2C66_207.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_7;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A3FA4B0)
#define MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE_GET_AREA1_OFFSET UNITYSDK_OFFSET(0x1A3F8A90)
#define MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE_GET_AREA2_OFFSET UNITYSDK_OFFSET(0x1A3F8BB0)
#define MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE_GET_AREA3_OFFSET UNITYSDK_OFFSET(0x1A3F8CD0)
#define MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE_GET_BORNPOS_OFFSET UNITYSDK_OFFSET(0x1A3F8DF0)
#define MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE_GET_CORRESPONDAREANUM_OFFSET UNITYSDK_OFFSET(0x1A3F8F10)
#define MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x1A3F8920)
#define MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE_GET_ISLOADALL_OFFSET UNITYSDK_OFFSET(0x1A3F88F0)
#define MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE_GET_ONAREA1CLEAREDDOORUNACTIVATELIST_OFFSET UNITYSDK_OFFSET(0x1A3F9080)
#define MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE_GET_ONAREA2CLEAREDDOORUNACTIVATELIST_OFFSET UNITYSDK_OFFSET(0x1A3F92E0)
#define MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE_GET_ONAREA3CLEAREDDOORUNACTIVATELIST_OFFSET UNITYSDK_OFFSET(0x1A3F9540)
#define MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE_GET_ONINITDOORACTIVATELIST_OFFSET UNITYSDK_OFFSET(0x1A3F97A0)
#define MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE_GET_ONINITDYNAMICOBJECTACTIVATELIST_OFFSET UNITYSDK_OFFSET(0x1A3F9A00)
#define MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE_GET_ONINITDYNAMICOBJECTUNACTIVATELIST_OFFSET UNITYSDK_OFFSET(0x1A3F9C60)
#define MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE_GET_SCENETAGLIST_OFFSET UNITYSDK_OFFSET(0x1A3F9EC0)
#define MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE_GET_STAGENAME_OFFSET UNITYSDK_OFFSET(0x1A3FA120)
#define MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE_GET_WEIGHT_OFFSET UNITYSDK_OFFSET(0x1A3FA240)
#define MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE_LOADANDCHECK_OFFSET UNITYSDK_OFFSET(0x1A3FA3B0)
#define MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE_SET_ISLOADALL_OFFSET UNITYSDK_OFFSET(0x1A3F8900)
#define MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3F8910)

namespace MoleMole::FlatBuffers::Config
{
	inline static constexpr unsigned int AbyssS2SceneTemplate_TypeDefinitionIndex = 15480;

	class AbyssS2SceneTemplate : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* m_OnInitDoorActivateList; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* m_OnArea1ClearedDoorUnactivateList; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* m_OnArea3ClearedDoorUnactivateList; // 0x20
		::Class_0_16E4307DCC419505_7* m_Notify; // 0x28
		::System::String* m_Area2; // 0x30
		::Struct_2_58DF5669875F2C66_207 m_Data; // 0x38
		::System::Collections::Generic::List_1<::System::String*>* m_OnInitDynamicObjectUnactivateList; // 0x48
		::System::String* m_StageName; // 0x50
		::System::Collections::Generic::List_1<::System::String*>* m_SceneTagList; // 0x58
		::System::String* m_BornPos; // 0x60
		::System::Collections::Generic::List_1<::System::String*>* m_OnArea2ClearedDoorUnactivateList; // 0x68
		::System::String* m_Area1; // 0x70
		::System::Collections::Generic::List_1<::System::String*>* m_OnInitDynamicObjectActivateList; // 0x78
		::System::String* m_Area3; // 0x80
		::System::Int32 m_CorrespondAreaNum; // 0x88
		::System::Int32 m_Index; // 0x8C
		::System::Int32 m_Weight; // 0x90
		::System::Boolean _IsLoadAll_k__BackingField; // 0x94
		::System::Byte m_Mask0; // 0x95
		::System::Byte m_VarLoadedCount; // 0x96
		::System::Byte m_Mask1; // 0x97

		::System::Void _ctor(::Struct_2_58DF5669875F2C66_207 data, ::Class_0_16E4307DCC419505_7* notify)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_58DF5669875F2C66_207, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE__CTOR_OFFSET))(this, data, notify);
		}

		::System::Boolean get_IsLoadAll()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE_GET_ISLOADALL_OFFSET))(this);
		}

		::System::Void set_IsLoadAll(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE_SET_ISLOADALL_OFFSET))(this, value);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE_GET_INDEX_OFFSET))(this);
		}

		::System::String* get_Area1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE_GET_AREA1_OFFSET))(this);
		}

		::System::String* get_Area2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE_GET_AREA2_OFFSET))(this);
		}

		::System::String* get_Area3()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE_GET_AREA3_OFFSET))(this);
		}

		::System::String* get_BornPos()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE_GET_BORNPOS_OFFSET))(this);
		}

		::System::Int32 get_CorrespondAreaNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE_GET_CORRESPONDAREANUM_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* get_OnArea1ClearedDoorUnactivateList()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE_GET_ONAREA1CLEAREDDOORUNACTIVATELIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* get_OnArea2ClearedDoorUnactivateList()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE_GET_ONAREA2CLEAREDDOORUNACTIVATELIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* get_OnArea3ClearedDoorUnactivateList()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE_GET_ONAREA3CLEAREDDOORUNACTIVATELIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* get_OnInitDoorActivateList()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE_GET_ONINITDOORACTIVATELIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* get_OnInitDynamicObjectActivateList()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE_GET_ONINITDYNAMICOBJECTACTIVATELIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* get_OnInitDynamicObjectUnactivateList()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE_GET_ONINITDYNAMICOBJECTUNACTIVATELIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* get_SceneTagList()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE_GET_SCENETAGLIST_OFFSET))(this);
		}

		::System::String* get_StageName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE_GET_STAGENAME_OFFSET))(this);
		}

		::System::Int32 get_Weight()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE_GET_WEIGHT_OFFSET))(this);
		}

		::System::Void LoadAndCheck()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE_LOADANDCHECK_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_ABYSSS2SCENETEMPLATE_CLEAR_OFFSET))(this);
		}
	};
}
