#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ClockParkProgressRewardRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CLOCKPARKPROGRESSREWARDEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1881A450)
#define RPG_GAMECORE_CLOCKPARKPROGRESSREWARDEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1881A2D0)
#define RPG_GAMECORE_CLOCKPARKPROGRESSREWARDEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18819FA0)
#define RPG_GAMECORE_CLOCKPARKPROGRESSREWARDEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1881A270)
#define RPG_GAMECORE_CLOCKPARKPROGRESSREWARDEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1881A620)
#define RPG_GAMECORE_CLOCKPARKPROGRESSREWARDEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1881A020)
#define RPG_GAMECORE_CLOCKPARKPROGRESSREWARDEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1881A660)
#define RPG_GAMECORE_CLOCKPARKPROGRESSREWARDEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1881A840)
#define RPG_GAMECORE_CLOCKPARKPROGRESSREWARDEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1881A980)
#define RPG_GAMECORE_CLOCKPARKPROGRESSREWARDEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1881AC90)
#define RPG_GAMECORE_CLOCKPARKPROGRESSREWARDEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1881A7A0)
#define RPG_GAMECORE_CLOCKPARKPROGRESSREWARDEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1881A700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkProgressRewardExcelTable_TypeDefinitionIndex = 10700;

	class ClockParkProgressRewardExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkProgressRewardRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkProgressRewardRow*>**)Il2CppClass::FromTypeDefinitionIndex(ClockParkProgressRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x2F780);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ClockParkProgressRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x2F788);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ClockParkProgressRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x2F790);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ClockParkProgressRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0xBE00);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ClockParkProgressRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0xBE01);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKPROGRESSREWARDEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkProgressRewardRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkProgressRewardRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKPROGRESSREWARDEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKPROGRESSREWARDEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkProgressRewardRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkProgressRewardRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKPROGRESSREWARDEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ClockParkProgressRewardRow* GetData(::System::UInt32 QuestID)
		{
			return ((::RPG::GameCore::ClockParkProgressRewardRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKPROGRESSREWARDEXCELTABLE_GETDATA_OFFSET))(QuestID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKPROGRESSREWARDEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKPROGRESSREWARDEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKPROGRESSREWARDEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKPROGRESSREWARDEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKPROGRESSREWARDEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKPROGRESSREWARDEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ClockParkProgressRewardRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::ClockParkProgressRewardRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKPROGRESSREWARDEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
