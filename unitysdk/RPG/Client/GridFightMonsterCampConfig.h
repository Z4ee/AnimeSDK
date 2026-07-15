#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_424;
namespace RPG::Client { class GridFightMonsterData; }
namespace RPG::GameCore { class GridFightCampConfigRow; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG_CREATE_1_OFFSET UNITYSDK_OFFSET(0x195278D0)
#define RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG_CREATE_OFFSET UNITYSDK_OFFSET(0x19506060)
#define RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG_GETBOSS_OFFSET UNITYSDK_OFFSET(0x19527940)
#define RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG_GETELITE_OFFSET UNITYSDK_OFFSET(0x19527BD0)
#define RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG_GETMINION_OFFSET UNITYSDK_OFFSET(0x19527D20)
#define RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG_GET_DESC_OFFSET UNITYSDK_OFFSET(0x19528040)
#define RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x19527F30)
#define RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG_GET_ID_OFFSET UNITYSDK_OFFSET(0x19527EC0)
#define RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0x19527F80)
#define RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG_GET_ISIGNORE_OFFSET UNITYSDK_OFFSET(0x19506120)
#define RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG_GET_MONSTERLIST_OFFSET UNITYSDK_OFFSET(0x19527E70)
#define RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG_GET_NAME_OFFSET UNITYSDK_OFFSET(0x19527FD0)
#define RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x19527EE0)
#define RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG_SET_ID_OFFSET UNITYSDK_OFFSET(0x19527ED0)
#define RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x195278C0)
#define RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG__GETMONSTERSBYCONDITION_OFFSET UNITYSDK_OFFSET(0x19527A90)
#define RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG___GETMONSTERSBYCONDITION_B__5_0_OFFSET UNITYSDK_OFFSET(0x195280B0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightMonsterCampConfig_TypeDefinitionIndex = 62130;

	class GridFightMonsterCampConfig : public ::System::Object
	{
	public:
		::RPG::GameCore::GridFightCampConfigRow* _row; // 0x10
		::System::UInt32 _ID_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::GridFightMonsterCampConfig* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightMonsterCampConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::GridFightMonsterCampConfig* Create_1(::Class_1_D17272E82AE804C2_424* a1)
		{
			return ((::RPG::Client::GridFightMonsterCampConfig*(*)(::Class_1_D17272E82AE804C2_424*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG_CREATE_1_OFFSET))(a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>* GetBoss()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG_GETBOSS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>* GetElite()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG_GETELITE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>* GetMinion()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG_GETMINION_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>* _GetMonstersByCondition(::System::Func_2<::RPG::Client::GridFightMonsterData*, ::System::Boolean>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>*(*)(::PVOID, ::System::Func_2<::RPG::Client::GridFightMonsterData*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG__GETMONSTERSBYCONDITION_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG_SET_ID_OFFSET))(this, a1);
		}

		::System::UInt32 get_TypeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG_GET_TYPEID_OFFSET))(this);
		}

		::System::Boolean get_IsIgnore()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG_GET_ISIGNORE_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG_GET_ICONPATH_OFFSET))(this);
		}

		::System::String* get_ImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG_GET_IMAGEPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG_GET_DESC_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_MonsterList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG_GET_MONSTERLIST_OFFSET))(this);
		}

		::RPG::Client::GridFightMonsterData* __GetMonstersByCondition_b__5_0(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightMonsterData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG___GETMONSTERSBYCONDITION_B__5_0_OFFSET))(this, a1);
		}
	};
}
