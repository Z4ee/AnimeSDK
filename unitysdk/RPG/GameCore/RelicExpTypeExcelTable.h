#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RelicExpTypeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_RELICEXPTYPEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x175903C0)
#define RPG_GAMECORE_RELICEXPTYPEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17590210)
#define RPG_GAMECORE_RELICEXPTYPEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1758FEE0)
#define RPG_GAMECORE_RELICEXPTYPEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x175901B0)
#define RPG_GAMECORE_RELICEXPTYPEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x175905D0)
#define RPG_GAMECORE_RELICEXPTYPEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1758FF60)
#define RPG_GAMECORE_RELICEXPTYPEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x17590610)
#define RPG_GAMECORE_RELICEXPTYPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x175907F0)
#define RPG_GAMECORE_RELICEXPTYPEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x175909B0)
#define RPG_GAMECORE_RELICEXPTYPEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17590D60)
#define RPG_GAMECORE_RELICEXPTYPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x17590750)
#define RPG_GAMECORE_RELICEXPTYPEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x175906B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RelicExpTypeExcelTable_TypeDefinitionIndex = 13364;

	class RelicExpTypeExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RelicExpTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x31BE0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicExpTypeRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicExpTypeRow*>**)Il2CppClass::FromTypeDefinitionIndex(RelicExpTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x31BE8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RelicExpTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x31BF0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RelicExpTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x103B0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RelicExpTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x103B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICEXPTYPEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicExpTypeRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicExpTypeRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICEXPTYPEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICEXPTYPEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicExpTypeRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicExpTypeRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICEXPTYPEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RelicExpTypeRow* GetData(::System::UInt32 TypeID, ::System::UInt32 Level)
		{
			return ((::RPG::GameCore::RelicExpTypeRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICEXPTYPEEXCELTABLE_GETDATA_OFFSET))(TypeID, Level);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICEXPTYPEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICEXPTYPEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICEXPTYPEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICEXPTYPEEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICEXPTYPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICEXPTYPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RelicExpTypeRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::RelicExpTypeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICEXPTYPEEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
