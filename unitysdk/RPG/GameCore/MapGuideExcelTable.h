#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MapGuideRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MAPGUIDEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1BCE0E70)
#define RPG_GAMECORE_MAPGUIDEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1BCE0D00)
#define RPG_GAMECORE_MAPGUIDEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1BCE09F0)
#define RPG_GAMECORE_MAPGUIDEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1BCE0CA0)
#define RPG_GAMECORE_MAPGUIDEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1BCE1000)
#define RPG_GAMECORE_MAPGUIDEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1BCE0A70)
#define RPG_GAMECORE_MAPGUIDEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1BCE1040)
#define RPG_GAMECORE_MAPGUIDEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BCE1210)
#define RPG_GAMECORE_MAPGUIDEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1BCE14F0)
#define RPG_GAMECORE_MAPGUIDEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BCE1860)
#define RPG_GAMECORE_MAPGUIDEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1BCE1170)
#define RPG_GAMECORE_MAPGUIDEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1BCE10D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapGuideExcelTable_TypeDefinitionIndex = 13539;

	class MapGuideExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MapGuideExcelTable_TypeDefinitionIndex)->GetStaticField(0x3DCA0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MapGuideExcelTable_TypeDefinitionIndex)->GetStaticField(0x3DCA8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapGuideRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapGuideRow*>**)Il2CppClass::FromTypeDefinitionIndex(MapGuideExcelTable_TypeDefinitionIndex)->GetStaticField(0x3DCB0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MapGuideExcelTable_TypeDefinitionIndex)->GetStaticField(0xA460);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MapGuideExcelTable_TypeDefinitionIndex)->GetStaticField(0xA461);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPGUIDEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapGuideRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapGuideRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPGUIDEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPGUIDEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapGuideRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapGuideRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPGUIDEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MapGuideRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MapGuideRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPGUIDEEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPGUIDEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPGUIDEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPGUIDEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPGUIDEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPGUIDEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPGUIDEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MapGuideRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MapGuideRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPGUIDEEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
