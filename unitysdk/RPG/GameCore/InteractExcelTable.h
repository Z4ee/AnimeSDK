#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class InteractRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_INTERACTEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x172BD6A0)
#define RPG_GAMECORE_INTERACTEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x172BD4F0)
#define RPG_GAMECORE_INTERACTEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x172BD1C0)
#define RPG_GAMECORE_INTERACTEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x172BD490)
#define RPG_GAMECORE_INTERACTEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x172BD820)
#define RPG_GAMECORE_INTERACTEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x172BD240)
#define RPG_GAMECORE_INTERACTEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x172BD860)
#define RPG_GAMECORE_INTERACTEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x172BDA40)
#define RPG_GAMECORE_INTERACTEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x172BDD80)
#define RPG_GAMECORE_INTERACTEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x172BE090)
#define RPG_GAMECORE_INTERACTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x172BD9A0)
#define RPG_GAMECORE_INTERACTEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x172BD900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int InteractExcelTable_TypeDefinitionIndex = 13291;

	class InteractExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(InteractExcelTable_TypeDefinitionIndex)->GetStaticField(0x24120);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InteractRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InteractRow*>**)Il2CppClass::FromTypeDefinitionIndex(InteractExcelTable_TypeDefinitionIndex)->GetStaticField(0x24128);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(InteractExcelTable_TypeDefinitionIndex)->GetStaticField(0x24130);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(InteractExcelTable_TypeDefinitionIndex)->GetStaticField(0x9900);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(InteractExcelTable_TypeDefinitionIndex)->GetStaticField(0x9901);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTERACTEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InteractRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InteractRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTERACTEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTERACTEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InteractRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InteractRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTERACTEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::InteractRow* GetData(::System::UInt32 InteractID)
		{
			return ((::RPG::GameCore::InteractRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTERACTEXCELTABLE_GETDATA_OFFSET))(InteractID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTERACTEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTERACTEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTERACTEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTERACTEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTERACTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTERACTEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::InteractRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::InteractRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTERACTEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
