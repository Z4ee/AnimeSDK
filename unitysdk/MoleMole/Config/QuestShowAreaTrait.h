#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_44D83C5A6A243C17.h"
#include "unitysdk/Enum_3_F5486EF13585A6C7_1.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/Config/QuestShowAreaData.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_0_16E4307DCC419505_175;
class Class_1_236FD73ABC492E3F;
class Class_1_53842913455A8556;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x157CE330)
#define MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x157CE490)
#define MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x157CE2E0)
#define MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x157CF000)
#define MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x157CE5E0)
#define MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x157CF640)
#define MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x157CE420)
#define MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_GET_AREASHAPETYPE_OFFSET UNITYSDK_OFFSET(0x157CF7F0)
#define MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_GET_BINDEFFECTNAME_OFFSET UNITYSDK_OFFSET(0x157CF840)
#define MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_GET_CIRCLEAREARADIUS_OFFSET UNITYSDK_OFFSET(0x157CF860)
#define MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_GET_DECALHEIGHTBOTTOM_OFFSET UNITYSDK_OFFSET(0x157CF810)
#define MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_GET_DECALHEIGHTTOP_OFFSET UNITYSDK_OFFSET(0x157CF800)
#define MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_GET_RADARHEIGHTBOTTOM_OFFSET UNITYSDK_OFFSET(0x157CF830)
#define MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_GET_RADARHEIGHTTOP_OFFSET UNITYSDK_OFFSET(0x157CF820)
#define MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_GET_RECTAREALENGTH_OFFSET UNITYSDK_OFFSET(0x157CF870)
#define MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_GET_RECTAREAWIDTH_OFFSET UNITYSDK_OFFSET(0x157CF880)
#define MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_GET_SHOWEFFECT_OFFSET UNITYSDK_OFFSET(0x157CF850)
#define MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x157CF060)
#define MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x157CE660)
#define MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x157CF4A0)
#define MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x157CEEC0)
#define MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_POSTPROCESSENTITY_OFFSET UNITYSDK_OFFSET(0x157CF890)
#define MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x157CF9C0)
#define MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x157CF9D0)
#define MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x157CF9E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int QuestShowAreaTrait_TypeDefinitionIndex = 40393;

	class QuestShowAreaTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Int32 PresetID; // 0x18
		::System::String* BattleRegionName; // 0x20
		::MoleMole::Config::QuestShowAreaData QuestShowAreaData; // 0x28
		::Enum_3_44D83C5A6A243C17 BindType; // 0x58
		::System::Boolean CheckRemoveTrackOverride; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_175* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::QuestShowAreaTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::QuestShowAreaTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::QuestShowAreaTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::QuestShowAreaTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::Class_1_53842913455A8556* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_53842913455A8556*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void PostProcessEntity(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_POSTPROCESSENTITY_OFFSET))(this, entityHandle);
		}

		::Enum_3_F5486EF13585A6C7_1 get_AreaShapeType()
		{
			return ((::Enum_3_F5486EF13585A6C7_1(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_GET_AREASHAPETYPE_OFFSET))(this);
		}

		::System::Single get_CircleAreaRadius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_GET_CIRCLEAREARADIUS_OFFSET))(this);
		}

		::System::Single get_RectAreaLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_GET_RECTAREALENGTH_OFFSET))(this);
		}

		::System::Single get_RectAreaWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_GET_RECTAREAWIDTH_OFFSET))(this);
		}

		::System::Single get_DecalHeightTop()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_GET_DECALHEIGHTTOP_OFFSET))(this);
		}

		::System::Single get_DecalHeightBottom()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_GET_DECALHEIGHTBOTTOM_OFFSET))(this);
		}

		::System::Single get_RadarHeightTop()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_GET_RADARHEIGHTTOP_OFFSET))(this);
		}

		::System::Single get_RadarHeightBottom()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_GET_RADARHEIGHTBOTTOM_OFFSET))(this);
		}

		::System::String* get_BindEffectName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_GET_BINDEFFECTNAME_OFFSET))(this);
		}

		::System::Boolean get_ShowEffect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_GET_SHOWEFFECT_OFFSET))(this);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_175* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::Class_1_53842913455A8556* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_53842913455A8556*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
