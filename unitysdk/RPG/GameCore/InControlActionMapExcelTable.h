#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class InControlActionMapRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_INCONTROLACTIONMAPEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18A17F10)
#define RPG_GAMECORE_INCONTROLACTIONMAPEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18A17D90)
#define RPG_GAMECORE_INCONTROLACTIONMAPEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18A17A60)
#define RPG_GAMECORE_INCONTROLACTIONMAPEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18A17D30)
#define RPG_GAMECORE_INCONTROLACTIONMAPEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18A180C0)
#define RPG_GAMECORE_INCONTROLACTIONMAPEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18A17AE0)
#define RPG_GAMECORE_INCONTROLACTIONMAPEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18A18100)
#define RPG_GAMECORE_INCONTROLACTIONMAPEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A182E0)
#define RPG_GAMECORE_INCONTROLACTIONMAPEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18A18630)
#define RPG_GAMECORE_INCONTROLACTIONMAPEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18A18940)
#define RPG_GAMECORE_INCONTROLACTIONMAPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18A18240)
#define RPG_GAMECORE_INCONTROLACTIONMAPEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18A181A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int InControlActionMapExcelTable_TypeDefinitionIndex = 13083;

	class InControlActionMapExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InControlActionMapRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InControlActionMapRow*>**)Il2CppClass::FromTypeDefinitionIndex(InControlActionMapExcelTable_TypeDefinitionIndex)->GetStaticField(0x3E880);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(InControlActionMapExcelTable_TypeDefinitionIndex)->GetStaticField(0x3E888);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(InControlActionMapExcelTable_TypeDefinitionIndex)->GetStaticField(0x3E890);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(InControlActionMapExcelTable_TypeDefinitionIndex)->GetStaticField(0xDFE0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(InControlActionMapExcelTable_TypeDefinitionIndex)->GetStaticField(0xDFE1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLACTIONMAPEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InControlActionMapRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InControlActionMapRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLACTIONMAPEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLACTIONMAPEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InControlActionMapRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InControlActionMapRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLACTIONMAPEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::InControlActionMapRow* GetData(::System::String* actionName)
		{
			return ((::RPG::GameCore::InControlActionMapRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLACTIONMAPEXCELTABLE_GETDATA_OFFSET))(actionName);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLACTIONMAPEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLACTIONMAPEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLACTIONMAPEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLACTIONMAPEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLACTIONMAPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLACTIONMAPEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::InControlActionMapRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::InControlActionMapRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLACTIONMAPEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
