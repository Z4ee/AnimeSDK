#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueDLCMainStoryRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEDLCMAINSTORYEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18D0DEE0)
#define RPG_GAMECORE_ROGUEDLCMAINSTORYEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18D0DD30)
#define RPG_GAMECORE_ROGUEDLCMAINSTORYEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18D0DA00)
#define RPG_GAMECORE_ROGUEDLCMAINSTORYEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18D0DCD0)
#define RPG_GAMECORE_ROGUEDLCMAINSTORYEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18D0E0B0)
#define RPG_GAMECORE_ROGUEDLCMAINSTORYEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18D0DA80)
#define RPG_GAMECORE_ROGUEDLCMAINSTORYEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18D0E0F0)
#define RPG_GAMECORE_ROGUEDLCMAINSTORYEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D0E2D0)
#define RPG_GAMECORE_ROGUEDLCMAINSTORYEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18D0E6F0)
#define RPG_GAMECORE_ROGUEDLCMAINSTORYEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18D0EA50)
#define RPG_GAMECORE_ROGUEDLCMAINSTORYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18D0E230)
#define RPG_GAMECORE_ROGUEDLCMAINSTORYEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18D0E190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCMainStoryExcelTable_TypeDefinitionIndex = 13995;

	class RogueDLCMainStoryExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCMainStoryRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCMainStoryRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCMainStoryExcelTable_TypeDefinitionIndex)->GetStaticField(0x6320);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCMainStoryExcelTable_TypeDefinitionIndex)->GetStaticField(0x6328);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCMainStoryExcelTable_TypeDefinitionIndex)->GetStaticField(0x6330);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueDLCMainStoryExcelTable_TypeDefinitionIndex)->GetStaticField(0x2F30);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueDLCMainStoryExcelTable_TypeDefinitionIndex)->GetStaticField(0x2F31);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMAINSTORYEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCMainStoryRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCMainStoryRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMAINSTORYEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMAINSTORYEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCMainStoryRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCMainStoryRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMAINSTORYEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueDLCMainStoryRow* GetData(::System::UInt32 MainStoryID)
		{
			return ((::RPG::GameCore::RogueDLCMainStoryRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMAINSTORYEXCELTABLE_GETDATA_OFFSET))(MainStoryID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMAINSTORYEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMAINSTORYEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMAINSTORYEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMAINSTORYEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMAINSTORYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMAINSTORYEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueDLCMainStoryRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueDLCMainStoryRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMAINSTORYEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
