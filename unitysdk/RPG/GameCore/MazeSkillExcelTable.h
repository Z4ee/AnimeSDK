#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MazeSkillRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MAZESKILLEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18ADB1B0)
#define RPG_GAMECORE_MAZESKILLEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18ADB000)
#define RPG_GAMECORE_MAZESKILLEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18ADACD0)
#define RPG_GAMECORE_MAZESKILLEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18ADAFA0)
#define RPG_GAMECORE_MAZESKILLEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18ADB330)
#define RPG_GAMECORE_MAZESKILLEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18ADAD50)
#define RPG_GAMECORE_MAZESKILLEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18ADB370)
#define RPG_GAMECORE_MAZESKILLEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18ADB550)
#define RPG_GAMECORE_MAZESKILLEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18ADB8D0)
#define RPG_GAMECORE_MAZESKILLEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18ADBBE0)
#define RPG_GAMECORE_MAZESKILLEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18ADB4B0)
#define RPG_GAMECORE_MAZESKILLEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18ADB410)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazeSkillExcelTable_TypeDefinitionIndex = 11886;

	class MazeSkillExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazeSkillRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazeSkillRow*>**)Il2CppClass::FromTypeDefinitionIndex(MazeSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x35390);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MazeSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x35398);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MazeSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x353A0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MazeSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0xD1A0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MazeSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0xD1A1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZESKILLEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazeSkillRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazeSkillRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZESKILLEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZESKILLEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazeSkillRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazeSkillRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZESKILLEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MazeSkillRow* GetData(::System::UInt32 MazeSkillId)
		{
			return ((::RPG::GameCore::MazeSkillRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZESKILLEXCELTABLE_GETDATA_OFFSET))(MazeSkillId);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZESKILLEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZESKILLEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZESKILLEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZESKILLEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZESKILLEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZESKILLEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MazeSkillRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::MazeSkillRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZESKILLEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
