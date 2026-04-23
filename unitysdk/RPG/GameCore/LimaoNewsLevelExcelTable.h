#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LimaoNewsLevelRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_LIMAONEWSLEVELEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18A5BDC0)
#define RPG_GAMECORE_LIMAONEWSLEVELEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18A5BC10)
#define RPG_GAMECORE_LIMAONEWSLEVELEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18A5B8E0)
#define RPG_GAMECORE_LIMAONEWSLEVELEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18A5BBB0)
#define RPG_GAMECORE_LIMAONEWSLEVELEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18A5BF90)
#define RPG_GAMECORE_LIMAONEWSLEVELEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18A5B960)
#define RPG_GAMECORE_LIMAONEWSLEVELEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18A5BFD0)
#define RPG_GAMECORE_LIMAONEWSLEVELEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A5C1B0)
#define RPG_GAMECORE_LIMAONEWSLEVELEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18A5C4D0)
#define RPG_GAMECORE_LIMAONEWSLEVELEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18A5C830)
#define RPG_GAMECORE_LIMAONEWSLEVELEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18A5C110)
#define RPG_GAMECORE_LIMAONEWSLEVELEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18A5C070)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LimaoNewsLevelExcelTable_TypeDefinitionIndex = 13227;

	class LimaoNewsLevelExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0x22580);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0x22588);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LimaoNewsLevelRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LimaoNewsLevelRow*>**)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0x22590);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0x8A20);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0x8A21);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LIMAONEWSLEVELEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LimaoNewsLevelRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LimaoNewsLevelRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LIMAONEWSLEVELEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LIMAONEWSLEVELEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LimaoNewsLevelRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LimaoNewsLevelRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LIMAONEWSLEVELEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::LimaoNewsLevelRow* GetData(::System::UInt32 Level)
		{
			return ((::RPG::GameCore::LimaoNewsLevelRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LIMAONEWSLEVELEXCELTABLE_GETDATA_OFFSET))(Level);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LIMAONEWSLEVELEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LIMAONEWSLEVELEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LIMAONEWSLEVELEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LIMAONEWSLEVELEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LIMAONEWSLEVELEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LIMAONEWSLEVELEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::LimaoNewsLevelRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::LimaoNewsLevelRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LIMAONEWSLEVELEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
