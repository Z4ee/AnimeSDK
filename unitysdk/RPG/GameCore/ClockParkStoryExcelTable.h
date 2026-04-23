#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ClockParkStoryRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CLOCKPARKSTORYEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x188200B0)
#define RPG_GAMECORE_CLOCKPARKSTORYEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1881FF00)
#define RPG_GAMECORE_CLOCKPARKSTORYEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1881FBD0)
#define RPG_GAMECORE_CLOCKPARKSTORYEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1881FEA0)
#define RPG_GAMECORE_CLOCKPARKSTORYEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18820280)
#define RPG_GAMECORE_CLOCKPARKSTORYEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1881FC50)
#define RPG_GAMECORE_CLOCKPARKSTORYEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x188202C0)
#define RPG_GAMECORE_CLOCKPARKSTORYEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x188204A0)
#define RPG_GAMECORE_CLOCKPARKSTORYEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18820790)
#define RPG_GAMECORE_CLOCKPARKSTORYEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18820AF0)
#define RPG_GAMECORE_CLOCKPARKSTORYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18820400)
#define RPG_GAMECORE_CLOCKPARKSTORYEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18820360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkStoryExcelTable_TypeDefinitionIndex = 10682;

	class ClockParkStoryExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ClockParkStoryExcelTable_TypeDefinitionIndex)->GetStaticField(0x2FAE0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkStoryRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkStoryRow*>**)Il2CppClass::FromTypeDefinitionIndex(ClockParkStoryExcelTable_TypeDefinitionIndex)->GetStaticField(0x2FAE8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ClockParkStoryExcelTable_TypeDefinitionIndex)->GetStaticField(0x2FAF0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ClockParkStoryExcelTable_TypeDefinitionIndex)->GetStaticField(0xBF50);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ClockParkStoryExcelTable_TypeDefinitionIndex)->GetStaticField(0xBF51);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSTORYEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkStoryRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkStoryRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSTORYEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSTORYEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkStoryRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkStoryRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSTORYEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ClockParkStoryRow* GetData(::System::UInt32 StoryID)
		{
			return ((::RPG::GameCore::ClockParkStoryRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSTORYEXCELTABLE_GETDATA_OFFSET))(StoryID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSTORYEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSTORYEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSTORYEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSTORYEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSTORYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSTORYEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ClockParkStoryRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::ClockParkStoryRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSTORYEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
