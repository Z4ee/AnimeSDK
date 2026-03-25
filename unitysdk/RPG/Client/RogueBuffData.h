#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueBuffCategory.h"
#include "unitysdk/Struct_2_276321B6B122C69C.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_718;
class Class_1_FA4F4A67B1C04320_186;
class Class_1_FA4F4A67B1C04320_716;
namespace RPG::Client { class RogueFormulaInfo; }
namespace RPG::GameCore { class MazeBuffRow; }
namespace RPG::GameCore { class RogueBuffTypeRow; }
namespace System { class String; }

#define RPG_CLIENT_ROGUEBUFFDATA_CHECKBUFFSTATEIFDROP_1_OFFSET UNITYSDK_OFFSET(0xA2EF040)
#define RPG_CLIENT_ROGUEBUFFDATA_CHECKBUFFSTATEIFDROP_OFFSET UNITYSDK_OFFSET(0xA2EEF90)
#define RPG_CLIENT_ROGUEBUFFDATA_CHECKBUFFSTATEIFGET_1_OFFSET UNITYSDK_OFFSET(0xA2EEA50)
#define RPG_CLIENT_ROGUEBUFFDATA_CHECKBUFFSTATEIFGET_OFFSET UNITYSDK_OFFSET(0xA2EE9A0)
#define RPG_CLIENT_ROGUEBUFFDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0xA2ED800)
#define RPG_CLIENT_ROGUEBUFFDATA_CREATE_2_OFFSET UNITYSDK_OFFSET(0xA2ED8A0)
#define RPG_CLIENT_ROGUEBUFFDATA_CREATE_3_OFFSET UNITYSDK_OFFSET(0xA2ED940)
#define RPG_CLIENT_ROGUEBUFFDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xA2ED760)
#define RPG_CLIENT_ROGUEBUFFDATA_GETBUFFCATEGORY_OFFSET UNITYSDK_OFFSET(0xA2EE8B0)
#define RPG_CLIENT_ROGUEBUFFDATA_GETEXTRAEFFECTROWIDS_OFFSET UNITYSDK_OFFSET(0xA2EE110)
#define RPG_CLIENT_ROGUEBUFFDATA_GETMAZEBUFFROW_OFFSET UNITYSDK_OFFSET(0xA2EE760)
#define RPG_CLIENT_ROGUEBUFFDATA_GETROGUEAEONID_OFFSET UNITYSDK_OFFSET(0xA2EE3A0)
#define RPG_CLIENT_ROGUEBUFFDATA_GETROGUEBUFFRARITY_OFFSET UNITYSDK_OFFSET(0xA2EE020)
#define RPG_CLIENT_ROGUEBUFFDATA_GETROGUEBUFFTAG_OFFSET UNITYSDK_OFFSET(0xA2EE490)
#define RPG_CLIENT_ROGUEBUFFDATA_GETROGUEBUFFTYPEROW_OFFSET UNITYSDK_OFFSET(0xA2EDE00)
#define RPG_CLIENT_ROGUEBUFFDATA_GETROGUEBUFFTYPE_OFFSET UNITYSDK_OFFSET(0xA2EDD10)
#define RPG_CLIENT_ROGUEBUFFDATA_GET_AEONCROSSICON_OFFSET UNITYSDK_OFFSET(0xA2EFA70)
#define RPG_CLIENT_ROGUEBUFFDATA_GET_BUFFID_OFFSET UNITYSDK_OFFSET(0xA2EF9B0)
#define RPG_CLIENT_ROGUEBUFFDATA_GET_ISINSUFFICIENTBUFF_OFFSET UNITYSDK_OFFSET(0xA2EF9F0)
#define RPG_CLIENT_ROGUEBUFFDATA_GET_ISNECESSARYBUFF_OFFSET UNITYSDK_OFFSET(0xA2EFA30)
#define RPG_CLIENT_ROGUEBUFFDATA_GET_ISVERYINSUFFICIENTBUFF_OFFSET UNITYSDK_OFFSET(0xA2EFA10)
#define RPG_CLIENT_ROGUEBUFFDATA_GET_ISVERYNECESSARYBUFF_OFFSET UNITYSDK_OFFSET(0xA2EFA50)
#define RPG_CLIENT_ROGUEBUFFDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xA2EF9D0)
#define RPG_CLIENT_ROGUEBUFFDATA_ISBATTLEEVENTBUFFCROSS_OFFSET UNITYSDK_OFFSET(0xA2EE580)
#define RPG_CLIENT_ROGUEBUFFDATA_ISLEVELMAX_OFFSET UNITYSDK_OFFSET(0xA2EE850)
#define RPG_CLIENT_ROGUEBUFFDATA_ISNORMALBUFF_OFFSET UNITYSDK_OFFSET(0xA2EE670)
#define RPG_CLIENT_ROGUEBUFFDATA_REFRESHLEVEL_OFFSET UNITYSDK_OFFSET(0xA2ED9E0)
#define RPG_CLIENT_ROGUEBUFFDATA_SET_BUFFID_OFFSET UNITYSDK_OFFSET(0xA2EF9C0)
#define RPG_CLIENT_ROGUEBUFFDATA_SET_ISINSUFFICIENTBUFF_OFFSET UNITYSDK_OFFSET(0xA2EFA00)
#define RPG_CLIENT_ROGUEBUFFDATA_SET_ISNECESSARYBUFF_OFFSET UNITYSDK_OFFSET(0xA2EFA40)
#define RPG_CLIENT_ROGUEBUFFDATA_SET_ISVERYINSUFFICIENTBUFF_OFFSET UNITYSDK_OFFSET(0xA2EFA20)
#define RPG_CLIENT_ROGUEBUFFDATA_SET_ISVERYNECESSARYBUFF_OFFSET UNITYSDK_OFFSET(0xA2EFA60)
#define RPG_CLIENT_ROGUEBUFFDATA_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xA2EF9E0)
#define RPG_CLIENT_ROGUEBUFFDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA2EDA30)
#define RPG_CLIENT_ROGUEBUFFDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA2EAFC0)
#define RPG_CLIENT_ROGUEBUFFDATA__TRYINITROGUEBUFFROW_OFFSET UNITYSDK_OFFSET(0xA2EDB10)
#define RPG_CLIENT_ROGUEBUFFDATA___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA2EFB60)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueBuffData_TypeDefinitionIndex = 54709;

	class RogueBuffData : public ::System::Object
	{
	public:
		::RPG::GameCore::MazeBuffRow* _MazeBuffRow; // 0x10
		::Class_0_16E4307DCC419505_718* _RowData; // 0x18
		::System::UInt32 _Level_k__BackingField; // 0x20
		::System::Boolean _IsNecessaryBuff_k__BackingField; // 0x24
		::System::Boolean _IsVeryInsufficientBuff_k__BackingField; // 0x25
		::System::Boolean _IsInsufficientBuff_k__BackingField; // 0x26
		::System::Boolean _IsVeryNecessaryBuff_k__BackingField; // 0x27
		::System::UInt32 _BuffID_k__BackingField; // 0x28

		::System::Void _ctor(::System::UInt32 rogueBuffID, ::System::UInt32 level)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA__CTOR_OFFSET))(this, rogueBuffID, level);
		}

		static ::RPG::Client::RogueBuffData* Create(::System::UInt32 rogueBuffID, ::System::UInt32 buffLevel)
		{
			return ((::RPG::Client::RogueBuffData*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_CREATE_OFFSET))(rogueBuffID, buffLevel);
		}

		static ::RPG::Client::RogueBuffData* Create_1(::Struct_2_276321B6B122C69C identifier)
		{
			return ((::RPG::Client::RogueBuffData*(*)(::Struct_2_276321B6B122C69C))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_CREATE_1_OFFSET))(identifier);
		}

		static ::RPG::Client::RogueBuffData* Create_2(::Class_1_FA4F4A67B1C04320_716* rogueBuff)
		{
			return ((::RPG::Client::RogueBuffData*(*)(::Class_1_FA4F4A67B1C04320_716*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_CREATE_2_OFFSET))(rogueBuff);
		}

		static ::RPG::Client::RogueBuffData* Create_3(::Class_1_FA4F4A67B1C04320_186* rogueBuff)
		{
			return ((::RPG::Client::RogueBuffData*(*)(::Class_1_FA4F4A67B1C04320_186*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_CREATE_3_OFFSET))(rogueBuff);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_TOSTRING_OFFSET))(this);
		}

		::System::Void RefreshLevel(::System::UInt32 buffLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_REFRESHLEVEL_OFFSET))(this, buffLevel);
		}

		::System::UInt32 GetRogueBuffType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_GETROGUEBUFFTYPE_OFFSET))(this);
		}

		::RPG::GameCore::RogueBuffTypeRow* GetRogueBuffTypeRow()
		{
			return ((::RPG::GameCore::RogueBuffTypeRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_GETROGUEBUFFTYPEROW_OFFSET))(this);
		}

		::System::UInt32 GetRogueBuffRarity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_GETROGUEBUFFRARITY_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* GetExtraEffectRowIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_GETEXTRAEFFECTROWIDS_OFFSET))(this);
		}

		::System::UInt32 GetRogueAeonID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_GETROGUEAEONID_OFFSET))(this);
		}

		::System::UInt32 GetRogueBuffTag()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_GETROGUEBUFFTAG_OFFSET))(this);
		}

		::System::Boolean IsBattleEventBuffCross()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_ISBATTLEEVENTBUFFCROSS_OFFSET))(this);
		}

		::System::Boolean IsNormalBuff()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_ISNORMALBUFF_OFFSET))(this);
		}

		::RPG::GameCore::MazeBuffRow* GetMazeBuffRow()
		{
			return ((::RPG::GameCore::MazeBuffRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_GETMAZEBUFFROW_OFFSET))(this);
		}

		::System::Boolean IsLevelMax()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_ISLEVELMAX_OFFSET))(this);
		}

		::RPG::GameCore::RogueBuffCategory GetBuffCategory()
		{
			return ((::RPG::GameCore::RogueBuffCategory(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_GETBUFFCATEGORY_OFFSET))(this);
		}

		::System::Void CheckBuffStateIfGet()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_CHECKBUFFSTATEIFGET_OFFSET))(this);
		}

		::System::Void CheckBuffStateIfGet_1(::RPG::Client::RogueFormulaInfo* formulaInfo)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueFormulaInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_CHECKBUFFSTATEIFGET_1_OFFSET))(this, formulaInfo);
		}

		::System::Void CheckBuffStateIfDrop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_CHECKBUFFSTATEIFDROP_OFFSET))(this);
		}

		::System::Void CheckBuffStateIfDrop_1(::RPG::Client::RogueFormulaInfo* formulaInfo)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueFormulaInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_CHECKBUFFSTATEIFDROP_1_OFFSET))(this, formulaInfo);
		}

		::System::Void _TryInitRogueBuffRow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA__TRYINITROGUEBUFFROW_OFFSET))(this);
		}

		::System::UInt32 get_BuffID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_GET_BUFFID_OFFSET))(this);
		}

		::System::Void set_BuffID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_SET_BUFFID_OFFSET))(this, value);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_SET_LEVEL_OFFSET))(this, value);
		}

		::System::Boolean get_IsInsufficientBuff()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_GET_ISINSUFFICIENTBUFF_OFFSET))(this);
		}

		::System::Void set_IsInsufficientBuff(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_SET_ISINSUFFICIENTBUFF_OFFSET))(this, value);
		}

		::System::Boolean get_IsVeryInsufficientBuff()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_GET_ISVERYINSUFFICIENTBUFF_OFFSET))(this);
		}

		::System::Void set_IsVeryInsufficientBuff(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_SET_ISVERYINSUFFICIENTBUFF_OFFSET))(this, value);
		}

		::System::Boolean get_IsNecessaryBuff()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_GET_ISNECESSARYBUFF_OFFSET))(this);
		}

		::System::Void set_IsNecessaryBuff(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_SET_ISNECESSARYBUFF_OFFSET))(this, value);
		}

		::System::Boolean get_IsVeryNecessaryBuff()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_GET_ISVERYNECESSARYBUFF_OFFSET))(this);
		}

		::System::Void set_IsVeryNecessaryBuff(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_SET_ISVERYNECESSARYBUFF_OFFSET))(this, value);
		}

		::System::String* get_AeonCrossIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_GET_AEONCROSSICON_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
		}
	};
}
