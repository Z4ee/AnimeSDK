#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CeilingCharacterInfoRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CEILINGCHARACTERINFOEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x17054620)
#define RPG_GAMECORE_CEILINGCHARACTERINFOEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17054470)
#define RPG_GAMECORE_CEILINGCHARACTERINFOEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x17054140)
#define RPG_GAMECORE_CEILINGCHARACTERINFOEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x17054410)
#define RPG_GAMECORE_CEILINGCHARACTERINFOEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x170547F0)
#define RPG_GAMECORE_CEILINGCHARACTERINFOEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x170541C0)
#define RPG_GAMECORE_CEILINGCHARACTERINFOEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x17054830)
#define RPG_GAMECORE_CEILINGCHARACTERINFOEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x17054A10)
#define RPG_GAMECORE_CEILINGCHARACTERINFOEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x17054BE0)
#define RPG_GAMECORE_CEILINGCHARACTERINFOEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17054F40)
#define RPG_GAMECORE_CEILINGCHARACTERINFOEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x17054970)
#define RPG_GAMECORE_CEILINGCHARACTERINFOEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x170548D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CeilingCharacterInfoExcelTable_TypeDefinitionIndex = 12200;

	class CeilingCharacterInfoExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CeilingCharacterInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0x25930);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CeilingCharacterInfoRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CeilingCharacterInfoRow*>**)Il2CppClass::FromTypeDefinitionIndex(CeilingCharacterInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0x25938);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(CeilingCharacterInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0x25940);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(CeilingCharacterInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0xC200);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CeilingCharacterInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0xC201);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CEILINGCHARACTERINFOEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CeilingCharacterInfoRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CeilingCharacterInfoRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CEILINGCHARACTERINFOEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CEILINGCHARACTERINFOEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CeilingCharacterInfoRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CeilingCharacterInfoRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CEILINGCHARACTERINFOEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::CeilingCharacterInfoRow* GetData(::System::UInt32 CharacterID)
		{
			return ((::RPG::GameCore::CeilingCharacterInfoRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CEILINGCHARACTERINFOEXCELTABLE_GETDATA_OFFSET))(CharacterID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CEILINGCHARACTERINFOEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CEILINGCHARACTERINFOEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CEILINGCHARACTERINFOEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CEILINGCHARACTERINFOEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CEILINGCHARACTERINFOEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CEILINGCHARACTERINFOEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::CeilingCharacterInfoRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::CeilingCharacterInfoRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CEILINGCHARACTERINFOEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
