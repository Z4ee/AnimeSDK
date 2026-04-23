#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AlleySpecialOrderRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ALLEYSPECIALORDEREXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1869DA10)
#define RPG_GAMECORE_ALLEYSPECIALORDEREXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1869D860)
#define RPG_GAMECORE_ALLEYSPECIALORDEREXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1869D530)
#define RPG_GAMECORE_ALLEYSPECIALORDEREXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1869D800)
#define RPG_GAMECORE_ALLEYSPECIALORDEREXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1869DB90)
#define RPG_GAMECORE_ALLEYSPECIALORDEREXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1869D5B0)
#define RPG_GAMECORE_ALLEYSPECIALORDEREXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1869DBD0)
#define RPG_GAMECORE_ALLEYSPECIALORDEREXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1869DDB0)
#define RPG_GAMECORE_ALLEYSPECIALORDEREXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1869E1A0)
#define RPG_GAMECORE_ALLEYSPECIALORDEREXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1869E4B0)
#define RPG_GAMECORE_ALLEYSPECIALORDEREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1869DD10)
#define RPG_GAMECORE_ALLEYSPECIALORDEREXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1869DC70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleySpecialOrderExcelTable_TypeDefinitionIndex = 11920;

	class AlleySpecialOrderExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleySpecialOrderRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleySpecialOrderRow*>**)Il2CppClass::FromTypeDefinitionIndex(AlleySpecialOrderExcelTable_TypeDefinitionIndex)->GetStaticField(0x25A40);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AlleySpecialOrderExcelTable_TypeDefinitionIndex)->GetStaticField(0x25A48);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AlleySpecialOrderExcelTable_TypeDefinitionIndex)->GetStaticField(0x25A50);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(AlleySpecialOrderExcelTable_TypeDefinitionIndex)->GetStaticField(0x9DD0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AlleySpecialOrderExcelTable_TypeDefinitionIndex)->GetStaticField(0x9DD1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSPECIALORDEREXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleySpecialOrderRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleySpecialOrderRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSPECIALORDEREXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSPECIALORDEREXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleySpecialOrderRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleySpecialOrderRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSPECIALORDEREXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AlleySpecialOrderRow* GetData(::System::UInt32 SpecialOrderID)
		{
			return ((::RPG::GameCore::AlleySpecialOrderRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSPECIALORDEREXCELTABLE_GETDATA_OFFSET))(SpecialOrderID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSPECIALORDEREXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSPECIALORDEREXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSPECIALORDEREXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSPECIALORDEREXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSPECIALORDEREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSPECIALORDEREXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AlleySpecialOrderRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::AlleySpecialOrderRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSPECIALORDEREXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
