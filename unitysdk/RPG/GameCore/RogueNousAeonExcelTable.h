#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueNousAeonRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUENOUSAEONEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1763C980)
#define RPG_GAMECORE_ROGUENOUSAEONEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1763C800)
#define RPG_GAMECORE_ROGUENOUSAEONEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1763C4D0)
#define RPG_GAMECORE_ROGUENOUSAEONEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1763C7A0)
#define RPG_GAMECORE_ROGUENOUSAEONEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1763CB50)
#define RPG_GAMECORE_ROGUENOUSAEONEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1763C550)
#define RPG_GAMECORE_ROGUENOUSAEONEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1763CB90)
#define RPG_GAMECORE_ROGUENOUSAEONEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1763CD70)
#define RPG_GAMECORE_ROGUENOUSAEONEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1763D140)
#define RPG_GAMECORE_ROGUENOUSAEONEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1763D450)
#define RPG_GAMECORE_ROGUENOUSAEONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1763CCD0)
#define RPG_GAMECORE_ROGUENOUSAEONEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1763CC30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueNousAeonExcelTable_TypeDefinitionIndex = 13654;

	class RogueNousAeonExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousAeonRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousAeonRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueNousAeonExcelTable_TypeDefinitionIndex)->GetStaticField(0x5DE0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueNousAeonExcelTable_TypeDefinitionIndex)->GetStaticField(0x5DE8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueNousAeonExcelTable_TypeDefinitionIndex)->GetStaticField(0x5DF0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueNousAeonExcelTable_TypeDefinitionIndex)->GetStaticField(0x3900);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueNousAeonExcelTable_TypeDefinitionIndex)->GetStaticField(0x3901);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSAEONEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousAeonRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousAeonRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSAEONEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSAEONEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousAeonRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousAeonRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSAEONEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueNousAeonRow* GetData(::System::UInt32 AeonID)
		{
			return ((::RPG::GameCore::RogueNousAeonRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSAEONEXCELTABLE_GETDATA_OFFSET))(AeonID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSAEONEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSAEONEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSAEONEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSAEONEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSAEONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSAEONEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueNousAeonRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueNousAeonRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSAEONEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
