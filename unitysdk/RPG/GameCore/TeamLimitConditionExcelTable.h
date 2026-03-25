#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TeamLimitConditionRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_TEAMLIMITCONDITIONEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x178962F0)
#define RPG_GAMECORE_TEAMLIMITCONDITIONEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17896140)
#define RPG_GAMECORE_TEAMLIMITCONDITIONEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x17895E10)
#define RPG_GAMECORE_TEAMLIMITCONDITIONEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x178960E0)
#define RPG_GAMECORE_TEAMLIMITCONDITIONEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x178964C0)
#define RPG_GAMECORE_TEAMLIMITCONDITIONEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x17895E90)
#define RPG_GAMECORE_TEAMLIMITCONDITIONEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x17896500)
#define RPG_GAMECORE_TEAMLIMITCONDITIONEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x178966E0)
#define RPG_GAMECORE_TEAMLIMITCONDITIONEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x178969D0)
#define RPG_GAMECORE_TEAMLIMITCONDITIONEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17896D30)
#define RPG_GAMECORE_TEAMLIMITCONDITIONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x17896640)
#define RPG_GAMECORE_TEAMLIMITCONDITIONEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x178965A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamLimitConditionExcelTable_TypeDefinitionIndex = 14001;

	class TeamLimitConditionExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(TeamLimitConditionExcelTable_TypeDefinitionIndex)->GetStaticField(0x1A350);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeamLimitConditionRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeamLimitConditionRow*>**)Il2CppClass::FromTypeDefinitionIndex(TeamLimitConditionExcelTable_TypeDefinitionIndex)->GetStaticField(0x1A358);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(TeamLimitConditionExcelTable_TypeDefinitionIndex)->GetStaticField(0x1A360);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TeamLimitConditionExcelTable_TypeDefinitionIndex)->GetStaticField(0x7640);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(TeamLimitConditionExcelTable_TypeDefinitionIndex)->GetStaticField(0x7641);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMLIMITCONDITIONEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeamLimitConditionRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeamLimitConditionRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMLIMITCONDITIONEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMLIMITCONDITIONEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeamLimitConditionRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeamLimitConditionRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMLIMITCONDITIONEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::TeamLimitConditionRow* GetData(::System::UInt32 ID)
		{
			return ((::RPG::GameCore::TeamLimitConditionRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMLIMITCONDITIONEXCELTABLE_GETDATA_OFFSET))(ID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMLIMITCONDITIONEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMLIMITCONDITIONEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMLIMITCONDITIONEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMLIMITCONDITIONEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMLIMITCONDITIONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMLIMITCONDITIONEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::TeamLimitConditionRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::TeamLimitConditionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMLIMITCONDITIONEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
