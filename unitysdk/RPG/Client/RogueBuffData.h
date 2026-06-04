#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueBuffCategory.h"
#include "unitysdk/Struct_2_276321B6B122C69C_3.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_869;
class Class_1_D17272E82AE804C2_207;
class Class_1_D17272E82AE804C2_791;
namespace RPG::Client { class RogueFormulaInfo; }
namespace RPG::GameCore { class MazeBuffRow; }
namespace RPG::GameCore { class RogueBuffTypeRow; }
namespace System { class String; }

#define RPG_CLIENT_ROGUEBUFFDATA_CHECKBUFFSTATEIFDROP_1_OFFSET UNITYSDK_OFFSET(0xC770F30)
#define RPG_CLIENT_ROGUEBUFFDATA_CHECKBUFFSTATEIFDROP_OFFSET UNITYSDK_OFFSET(0xC770E80)
#define RPG_CLIENT_ROGUEBUFFDATA_CHECKBUFFSTATEIFGET_1_OFFSET UNITYSDK_OFFSET(0xC7708E0)
#define RPG_CLIENT_ROGUEBUFFDATA_CHECKBUFFSTATEIFGET_OFFSET UNITYSDK_OFFSET(0xC770830)
#define RPG_CLIENT_ROGUEBUFFDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0xC76F620)
#define RPG_CLIENT_ROGUEBUFFDATA_CREATE_2_OFFSET UNITYSDK_OFFSET(0xC76F6C0)
#define RPG_CLIENT_ROGUEBUFFDATA_CREATE_3_OFFSET UNITYSDK_OFFSET(0xC76F760)
#define RPG_CLIENT_ROGUEBUFFDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC76F580)
#define RPG_CLIENT_ROGUEBUFFDATA_GETBUFFCATEGORY_OFFSET UNITYSDK_OFFSET(0xC770740)
#define RPG_CLIENT_ROGUEBUFFDATA_GETEXTRAEFFECTROWIDS_OFFSET UNITYSDK_OFFSET(0xC76FF20)
#define RPG_CLIENT_ROGUEBUFFDATA_GETMAZEBUFFROW_OFFSET UNITYSDK_OFFSET(0xC7705F0)
#define RPG_CLIENT_ROGUEBUFFDATA_GETROGUEAEONID_OFFSET UNITYSDK_OFFSET(0xC770230)
#define RPG_CLIENT_ROGUEBUFFDATA_GETROGUEBUFFRARITY_OFFSET UNITYSDK_OFFSET(0xC76FE30)
#define RPG_CLIENT_ROGUEBUFFDATA_GETROGUEBUFFTAG_OFFSET UNITYSDK_OFFSET(0xC770320)
#define RPG_CLIENT_ROGUEBUFFDATA_GETROGUEBUFFTYPEROW_OFFSET UNITYSDK_OFFSET(0xC76FC10)
#define RPG_CLIENT_ROGUEBUFFDATA_GETROGUEBUFFTYPE_OFFSET UNITYSDK_OFFSET(0xC76FB20)
#define RPG_CLIENT_ROGUEBUFFDATA_GET_AEONCROSSICON_OFFSET UNITYSDK_OFFSET(0xC7719B0)
#define RPG_CLIENT_ROGUEBUFFDATA_GET_BUFFID_OFFSET UNITYSDK_OFFSET(0xC7718F0)
#define RPG_CLIENT_ROGUEBUFFDATA_GET_ISINSUFFICIENTBUFF_OFFSET UNITYSDK_OFFSET(0xC771930)
#define RPG_CLIENT_ROGUEBUFFDATA_GET_ISNECESSARYBUFF_OFFSET UNITYSDK_OFFSET(0xC771970)
#define RPG_CLIENT_ROGUEBUFFDATA_GET_ISVERYINSUFFICIENTBUFF_OFFSET UNITYSDK_OFFSET(0xC771950)
#define RPG_CLIENT_ROGUEBUFFDATA_GET_ISVERYNECESSARYBUFF_OFFSET UNITYSDK_OFFSET(0xC771990)
#define RPG_CLIENT_ROGUEBUFFDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xC771910)
#define RPG_CLIENT_ROGUEBUFFDATA_ISBATTLEEVENTBUFFCROSS_OFFSET UNITYSDK_OFFSET(0xC770410)
#define RPG_CLIENT_ROGUEBUFFDATA_ISLEVELMAX_OFFSET UNITYSDK_OFFSET(0xC7706E0)
#define RPG_CLIENT_ROGUEBUFFDATA_ISNORMALBUFF_OFFSET UNITYSDK_OFFSET(0xC770500)
#define RPG_CLIENT_ROGUEBUFFDATA_REFRESHLEVEL_OFFSET UNITYSDK_OFFSET(0xC76F800)
#define RPG_CLIENT_ROGUEBUFFDATA_SET_BUFFID_OFFSET UNITYSDK_OFFSET(0xC771900)
#define RPG_CLIENT_ROGUEBUFFDATA_SET_ISINSUFFICIENTBUFF_OFFSET UNITYSDK_OFFSET(0xC771940)
#define RPG_CLIENT_ROGUEBUFFDATA_SET_ISNECESSARYBUFF_OFFSET UNITYSDK_OFFSET(0xC771980)
#define RPG_CLIENT_ROGUEBUFFDATA_SET_ISVERYINSUFFICIENTBUFF_OFFSET UNITYSDK_OFFSET(0xC771960)
#define RPG_CLIENT_ROGUEBUFFDATA_SET_ISVERYNECESSARYBUFF_OFFSET UNITYSDK_OFFSET(0xC7719A0)
#define RPG_CLIENT_ROGUEBUFFDATA_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xC771920)
#define RPG_CLIENT_ROGUEBUFFDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0xC76F850)
#define RPG_CLIENT_ROGUEBUFFDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC76C9C0)
#define RPG_CLIENT_ROGUEBUFFDATA__TRYINITROGUEBUFFROW_OFFSET UNITYSDK_OFFSET(0xC76F930)
#define RPG_CLIENT_ROGUEBUFFDATA___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xC771AA0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueBuffData_TypeDefinitionIndex = 62830;

	class RogueBuffData : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_869* _RowData; // 0x10
		::RPG::GameCore::MazeBuffRow* _MazeBuffRow; // 0x18
		::System::UInt32 _Level_k__BackingField; // 0x20
		::System::Boolean _IsVeryNecessaryBuff_k__BackingField; // 0x24
		::System::Boolean _IsNecessaryBuff_k__BackingField; // 0x25
		::System::Boolean _IsVeryInsufficientBuff_k__BackingField; // 0x26
		::System::Boolean _IsInsufficientBuff_k__BackingField; // 0x27
		::System::UInt32 _BuffID_k__BackingField; // 0x28

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA__CTOR_OFFSET))(this, a1, a2);
		}

		static ::RPG::Client::RogueBuffData* Create(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::RogueBuffData*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_CREATE_OFFSET))(a1, a2);
		}

		static ::RPG::Client::RogueBuffData* Create_1(::Struct_2_276321B6B122C69C_3 a1)
		{
			return ((::RPG::Client::RogueBuffData*(*)(::Struct_2_276321B6B122C69C_3))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_CREATE_1_OFFSET))(a1);
		}

		static ::RPG::Client::RogueBuffData* Create_2(::Class_1_D17272E82AE804C2_791* a1)
		{
			return ((::RPG::Client::RogueBuffData*(*)(::Class_1_D17272E82AE804C2_791*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_CREATE_2_OFFSET))(a1);
		}

		static ::RPG::Client::RogueBuffData* Create_3(::Class_1_D17272E82AE804C2_207* a1)
		{
			return ((::RPG::Client::RogueBuffData*(*)(::Class_1_D17272E82AE804C2_207*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_CREATE_3_OFFSET))(a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_TOSTRING_OFFSET))(this);
		}

		::System::Void RefreshLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_REFRESHLEVEL_OFFSET))(this, a1);
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

		::System::Void CheckBuffStateIfGet_1(::RPG::Client::RogueFormulaInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueFormulaInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_CHECKBUFFSTATEIFGET_1_OFFSET))(this, a1);
		}

		::System::Void CheckBuffStateIfDrop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_CHECKBUFFSTATEIFDROP_OFFSET))(this);
		}

		::System::Void CheckBuffStateIfDrop_1(::RPG::Client::RogueFormulaInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueFormulaInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_CHECKBUFFSTATEIFDROP_1_OFFSET))(this, a1);
		}

		::System::Void _TryInitRogueBuffRow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA__TRYINITROGUEBUFFROW_OFFSET))(this);
		}

		::System::UInt32 get_BuffID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_GET_BUFFID_OFFSET))(this);
		}

		::System::Void set_BuffID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_SET_BUFFID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_SET_LEVEL_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInsufficientBuff()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_GET_ISINSUFFICIENTBUFF_OFFSET))(this);
		}

		::System::Void set_IsInsufficientBuff(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_SET_ISINSUFFICIENTBUFF_OFFSET))(this, a1);
		}

		::System::Boolean get_IsVeryInsufficientBuff()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_GET_ISVERYINSUFFICIENTBUFF_OFFSET))(this);
		}

		::System::Void set_IsVeryInsufficientBuff(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_SET_ISVERYINSUFFICIENTBUFF_OFFSET))(this, a1);
		}

		::System::Boolean get_IsNecessaryBuff()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_GET_ISNECESSARYBUFF_OFFSET))(this);
		}

		::System::Void set_IsNecessaryBuff(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_SET_ISNECESSARYBUFF_OFFSET))(this, a1);
		}

		::System::Boolean get_IsVeryNecessaryBuff()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_GET_ISVERYNECESSARYBUFF_OFFSET))(this);
		}

		::System::Void set_IsVeryNecessaryBuff(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_SET_ISVERYNECESSARYBUFF_OFFSET))(this, a1);
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
