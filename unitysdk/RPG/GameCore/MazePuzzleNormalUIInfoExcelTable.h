#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MazePuzzleNormalUIInfoRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MAZEPUZZLENORMALUIINFOEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x173C8440)
#define RPG_GAMECORE_MAZEPUZZLENORMALUIINFOEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x173C8290)
#define RPG_GAMECORE_MAZEPUZZLENORMALUIINFOEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x173C7F60)
#define RPG_GAMECORE_MAZEPUZZLENORMALUIINFOEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x173C8230)
#define RPG_GAMECORE_MAZEPUZZLENORMALUIINFOEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x173C8610)
#define RPG_GAMECORE_MAZEPUZZLENORMALUIINFOEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x173C7FE0)
#define RPG_GAMECORE_MAZEPUZZLENORMALUIINFOEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x173C8650)
#define RPG_GAMECORE_MAZEPUZZLENORMALUIINFOEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x173C8830)
#define RPG_GAMECORE_MAZEPUZZLENORMALUIINFOEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x173C8A80)
#define RPG_GAMECORE_MAZEPUZZLENORMALUIINFOEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x173C8DE0)
#define RPG_GAMECORE_MAZEPUZZLENORMALUIINFOEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x173C8790)
#define RPG_GAMECORE_MAZEPUZZLENORMALUIINFOEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x173C86F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazePuzzleNormalUIInfoExcelTable_TypeDefinitionIndex = 12823;

	class MazePuzzleNormalUIInfoExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleNormalUIInfoRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleNormalUIInfoRow*>**)Il2CppClass::FromTypeDefinitionIndex(MazePuzzleNormalUIInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0x292E0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MazePuzzleNormalUIInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0x292E8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MazePuzzleNormalUIInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0x292F0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MazePuzzleNormalUIInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0xD8D0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MazePuzzleNormalUIInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0xD8D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLENORMALUIINFOEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleNormalUIInfoRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleNormalUIInfoRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLENORMALUIINFOEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLENORMALUIINFOEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleNormalUIInfoRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleNormalUIInfoRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLENORMALUIINFOEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MazePuzzleNormalUIInfoRow* GetData(::System::UInt32 NormalModeID)
		{
			return ((::RPG::GameCore::MazePuzzleNormalUIInfoRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLENORMALUIINFOEXCELTABLE_GETDATA_OFFSET))(NormalModeID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLENORMALUIINFOEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLENORMALUIINFOEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLENORMALUIINFOEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLENORMALUIINFOEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLENORMALUIINFOEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLENORMALUIINFOEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MazePuzzleNormalUIInfoRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::MazePuzzleNormalUIInfoRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLENORMALUIINFOEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
