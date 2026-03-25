#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RelicBaseTypeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_RELICBASETYPEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1758B670)
#define RPG_GAMECORE_RELICBASETYPEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1758B4C0)
#define RPG_GAMECORE_RELICBASETYPEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1758B190)
#define RPG_GAMECORE_RELICBASETYPEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1758B460)
#define RPG_GAMECORE_RELICBASETYPEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1758B840)
#define RPG_GAMECORE_RELICBASETYPEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1758B210)
#define RPG_GAMECORE_RELICBASETYPEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1758B880)
#define RPG_GAMECORE_RELICBASETYPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1758BA60)
#define RPG_GAMECORE_RELICBASETYPEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1758BD20)
#define RPG_GAMECORE_RELICBASETYPEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1758C080)
#define RPG_GAMECORE_RELICBASETYPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1758B9C0)
#define RPG_GAMECORE_RELICBASETYPEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1758B920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RelicBaseTypeExcelTable_TypeDefinitionIndex = 13367;

	class RelicBaseTypeExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RelicBaseTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x31A60);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicBaseTypeRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicBaseTypeRow*>**)Il2CppClass::FromTypeDefinitionIndex(RelicBaseTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x31A68);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RelicBaseTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x31A70);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RelicBaseTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x102E0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RelicBaseTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x102E1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICBASETYPEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicBaseTypeRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicBaseTypeRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICBASETYPEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICBASETYPEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicBaseTypeRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicBaseTypeRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICBASETYPEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RelicBaseTypeRow* GetData(::RPG::GameCore::RelicType Type)
		{
			return ((::RPG::GameCore::RelicBaseTypeRow*(*)(::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICBASETYPEEXCELTABLE_GETDATA_OFFSET))(Type);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICBASETYPEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICBASETYPEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICBASETYPEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICBASETYPEEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICBASETYPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICBASETYPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RelicBaseTypeRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::RelicBaseTypeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICBASETYPEEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
