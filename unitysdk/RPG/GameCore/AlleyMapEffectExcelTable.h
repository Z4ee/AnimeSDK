#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AlleyMapEffectRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ALLEYMAPEFFECTEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x16F74720)
#define RPG_GAMECORE_ALLEYMAPEFFECTEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16F74570)
#define RPG_GAMECORE_ALLEYMAPEFFECTEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x16F74240)
#define RPG_GAMECORE_ALLEYMAPEFFECTEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x16F74510)
#define RPG_GAMECORE_ALLEYMAPEFFECTEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x16F748F0)
#define RPG_GAMECORE_ALLEYMAPEFFECTEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x16F742C0)
#define RPG_GAMECORE_ALLEYMAPEFFECTEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x16F74930)
#define RPG_GAMECORE_ALLEYMAPEFFECTEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16F74B10)
#define RPG_GAMECORE_ALLEYMAPEFFECTEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x16F74E40)
#define RPG_GAMECORE_ALLEYMAPEFFECTEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F751A0)
#define RPG_GAMECORE_ALLEYMAPEFFECTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x16F74A70)
#define RPG_GAMECORE_ALLEYMAPEFFECTEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x16F749D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleyMapEffectExcelTable_TypeDefinitionIndex = 11497;

	class AlleyMapEffectExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AlleyMapEffectExcelTable_TypeDefinitionIndex)->GetStaticField(0x1F0C0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AlleyMapEffectExcelTable_TypeDefinitionIndex)->GetStaticField(0x1F0C8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyMapEffectRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyMapEffectRow*>**)Il2CppClass::FromTypeDefinitionIndex(AlleyMapEffectExcelTable_TypeDefinitionIndex)->GetStaticField(0x1F0D0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(AlleyMapEffectExcelTable_TypeDefinitionIndex)->GetStaticField(0x8270);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AlleyMapEffectExcelTable_TypeDefinitionIndex)->GetStaticField(0x8271);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMAPEFFECTEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyMapEffectRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyMapEffectRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMAPEFFECTEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMAPEFFECTEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyMapEffectRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyMapEffectRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMAPEFFECTEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AlleyMapEffectRow* GetData(::System::UInt32 MapEffectID)
		{
			return ((::RPG::GameCore::AlleyMapEffectRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMAPEFFECTEXCELTABLE_GETDATA_OFFSET))(MapEffectID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMAPEFFECTEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMAPEFFECTEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMAPEFFECTEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMAPEFFECTEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMAPEFFECTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMAPEFFECTEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AlleyMapEffectRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::AlleyMapEffectRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMAPEFFECTEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
