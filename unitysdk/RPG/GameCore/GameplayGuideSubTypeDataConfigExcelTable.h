#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GameplayGuideSubTypeDataConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_GAMEPLAYGUIDESUBTYPEDATACONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18994630)
#define RPG_GAMECORE_GAMEPLAYGUIDESUBTYPEDATACONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18994480)
#define RPG_GAMECORE_GAMEPLAYGUIDESUBTYPEDATACONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18994150)
#define RPG_GAMECORE_GAMEPLAYGUIDESUBTYPEDATACONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18994420)
#define RPG_GAMECORE_GAMEPLAYGUIDESUBTYPEDATACONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18994800)
#define RPG_GAMECORE_GAMEPLAYGUIDESUBTYPEDATACONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x189941D0)
#define RPG_GAMECORE_GAMEPLAYGUIDESUBTYPEDATACONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18994840)
#define RPG_GAMECORE_GAMEPLAYGUIDESUBTYPEDATACONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18994A20)
#define RPG_GAMECORE_GAMEPLAYGUIDESUBTYPEDATACONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18994C90)
#define RPG_GAMECORE_GAMEPLAYGUIDESUBTYPEDATACONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18994FF0)
#define RPG_GAMECORE_GAMEPLAYGUIDESUBTYPEDATACONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18994980)
#define RPG_GAMECORE_GAMEPLAYGUIDESUBTYPEDATACONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x189948E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameplayGuideSubTypeDataConfigExcelTable_TypeDefinitionIndex = 12653;

	class GameplayGuideSubTypeDataConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GameplayGuideSubTypeDataConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GameplayGuideSubTypeDataConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(GameplayGuideSubTypeDataConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x344E0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(GameplayGuideSubTypeDataConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x344E8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(GameplayGuideSubTypeDataConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x344F0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(GameplayGuideSubTypeDataConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xCE00);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GameplayGuideSubTypeDataConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xCE01);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDESUBTYPEDATACONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GameplayGuideSubTypeDataConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GameplayGuideSubTypeDataConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDESUBTYPEDATACONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDESUBTYPEDATACONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GameplayGuideSubTypeDataConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GameplayGuideSubTypeDataConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDESUBTYPEDATACONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::GameplayGuideSubTypeDataConfigRow* GetData(::System::UInt32 SubTypeID)
		{
			return ((::RPG::GameCore::GameplayGuideSubTypeDataConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDESUBTYPEDATACONFIGEXCELTABLE_GETDATA_OFFSET))(SubTypeID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDESUBTYPEDATACONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDESUBTYPEDATACONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDESUBTYPEDATACONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDESUBTYPEDATACONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDESUBTYPEDATACONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDESUBTYPEDATACONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::GameplayGuideSubTypeDataConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameplayGuideSubTypeDataConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDESUBTYPEDATACONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
