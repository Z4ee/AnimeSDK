#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ExtraEffectRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_EXTRAEFFECTEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x171BB290)
#define RPG_GAMECORE_EXTRAEFFECTEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x171BB0E0)
#define RPG_GAMECORE_EXTRAEFFECTEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x171BADB0)
#define RPG_GAMECORE_EXTRAEFFECTEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x171BB080)
#define RPG_GAMECORE_EXTRAEFFECTEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x171BB460)
#define RPG_GAMECORE_EXTRAEFFECTEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x171BAE30)
#define RPG_GAMECORE_EXTRAEFFECTEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x171BB4A0)
#define RPG_GAMECORE_EXTRAEFFECTEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x171BB680)
#define RPG_GAMECORE_EXTRAEFFECTEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x171BB9C0)
#define RPG_GAMECORE_EXTRAEFFECTEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x171BBD20)
#define RPG_GAMECORE_EXTRAEFFECTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x171BB5E0)
#define RPG_GAMECORE_EXTRAEFFECTEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x171BB540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExtraEffectExcelTable_TypeDefinitionIndex = 12108;

	class ExtraEffectExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ExtraEffectExcelTable_TypeDefinitionIndex)->GetStaticField(0x2D080);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ExtraEffectExcelTable_TypeDefinitionIndex)->GetStaticField(0x2D088);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExtraEffectRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExtraEffectRow*>**)Il2CppClass::FromTypeDefinitionIndex(ExtraEffectExcelTable_TypeDefinitionIndex)->GetStaticField(0x2D090);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ExtraEffectExcelTable_TypeDefinitionIndex)->GetStaticField(0xEFF0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ExtraEffectExcelTable_TypeDefinitionIndex)->GetStaticField(0xEFF1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXTRAEFFECTEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExtraEffectRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExtraEffectRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXTRAEFFECTEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXTRAEFFECTEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExtraEffectRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExtraEffectRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXTRAEFFECTEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ExtraEffectRow* GetData(::System::UInt32 ExtraEffectID)
		{
			return ((::RPG::GameCore::ExtraEffectRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXTRAEFFECTEXCELTABLE_GETDATA_OFFSET))(ExtraEffectID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXTRAEFFECTEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXTRAEFFECTEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXTRAEFFECTEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXTRAEFFECTEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXTRAEFFECTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXTRAEFFECTEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ExtraEffectRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::ExtraEffectRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXTRAEFFECTEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
