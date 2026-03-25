#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MonsterDropRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MONSTERDROPEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1744B040)
#define RPG_GAMECORE_MONSTERDROPEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1744AE90)
#define RPG_GAMECORE_MONSTERDROPEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1744AB60)
#define RPG_GAMECORE_MONSTERDROPEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1744AE30)
#define RPG_GAMECORE_MONSTERDROPEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1744B250)
#define RPG_GAMECORE_MONSTERDROPEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1744ABE0)
#define RPG_GAMECORE_MONSTERDROPEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1744B290)
#define RPG_GAMECORE_MONSTERDROPEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1744B470)
#define RPG_GAMECORE_MONSTERDROPEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1744B690)
#define RPG_GAMECORE_MONSTERDROPEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1744BA40)
#define RPG_GAMECORE_MONSTERDROPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1744B3D0)
#define RPG_GAMECORE_MONSTERDROPEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1744B330)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterDropExcelTable_TypeDefinitionIndex = 12990;

	class MonsterDropExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MonsterDropExcelTable_TypeDefinitionIndex)->GetStaticField(0x2C650);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterDropRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterDropRow*>**)Il2CppClass::FromTypeDefinitionIndex(MonsterDropExcelTable_TypeDefinitionIndex)->GetStaticField(0x2C658);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MonsterDropExcelTable_TypeDefinitionIndex)->GetStaticField(0x2C660);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonsterDropExcelTable_TypeDefinitionIndex)->GetStaticField(0xEC30);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MonsterDropExcelTable_TypeDefinitionIndex)->GetStaticField(0xEC31);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDROPEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterDropRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterDropRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDROPEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDROPEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterDropRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterDropRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDROPEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MonsterDropRow* GetData(::System::UInt32 MonsterTemplateID, ::System::UInt32 WorldLevel)
		{
			return ((::RPG::GameCore::MonsterDropRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDROPEXCELTABLE_GETDATA_OFFSET))(MonsterTemplateID, WorldLevel);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDROPEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDROPEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDROPEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDROPEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDROPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDROPEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MonsterDropRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::MonsterDropRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDROPEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
