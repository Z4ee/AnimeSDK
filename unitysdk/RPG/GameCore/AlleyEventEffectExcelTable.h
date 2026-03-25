#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AlleyEventEffectRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ALLEYEVENTEFFECTEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x16F70200)
#define RPG_GAMECORE_ALLEYEVENTEFFECTEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16F70050)
#define RPG_GAMECORE_ALLEYEVENTEFFECTEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x16F6FD20)
#define RPG_GAMECORE_ALLEYEVENTEFFECTEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x16F6FFF0)
#define RPG_GAMECORE_ALLEYEVENTEFFECTEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x16F703D0)
#define RPG_GAMECORE_ALLEYEVENTEFFECTEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x16F6FDA0)
#define RPG_GAMECORE_ALLEYEVENTEFFECTEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x16F70410)
#define RPG_GAMECORE_ALLEYEVENTEFFECTEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16F705F0)
#define RPG_GAMECORE_ALLEYEVENTEFFECTEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x16F70850)
#define RPG_GAMECORE_ALLEYEVENTEFFECTEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F70BB0)
#define RPG_GAMECORE_ALLEYEVENTEFFECTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x16F70550)
#define RPG_GAMECORE_ALLEYEVENTEFFECTEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x16F704B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleyEventEffectExcelTable_TypeDefinitionIndex = 11507;

	class AlleyEventEffectExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyEventEffectRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyEventEffectRow*>**)Il2CppClass::FromTypeDefinitionIndex(AlleyEventEffectExcelTable_TypeDefinitionIndex)->GetStaticField(0x1EFC0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AlleyEventEffectExcelTable_TypeDefinitionIndex)->GetStaticField(0x1EFC8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AlleyEventEffectExcelTable_TypeDefinitionIndex)->GetStaticField(0x1EFD0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(AlleyEventEffectExcelTable_TypeDefinitionIndex)->GetStaticField(0x8200);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AlleyEventEffectExcelTable_TypeDefinitionIndex)->GetStaticField(0x8201);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYEVENTEFFECTEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyEventEffectRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyEventEffectRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYEVENTEFFECTEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYEVENTEFFECTEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyEventEffectRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyEventEffectRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYEVENTEFFECTEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AlleyEventEffectRow* GetData(::System::UInt32 EventEffectID)
		{
			return ((::RPG::GameCore::AlleyEventEffectRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYEVENTEFFECTEXCELTABLE_GETDATA_OFFSET))(EventEffectID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYEVENTEFFECTEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYEVENTEFFECTEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYEVENTEFFECTEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYEVENTEFFECTEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYEVENTEFFECTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYEVENTEFFECTEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AlleyEventEffectRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::AlleyEventEffectRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYEVENTEFFECTEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
