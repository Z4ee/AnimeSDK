#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/HeartDialEmoType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class HeartDialEmoRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_HEARTDIALEMOEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D3CEF90)
#define RPG_GAMECORE_HEARTDIALEMOEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D3CEE20)
#define RPG_GAMECORE_HEARTDIALEMOEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D3CEB10)
#define RPG_GAMECORE_HEARTDIALEMOEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D3CEDC0)
#define RPG_GAMECORE_HEARTDIALEMOEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D3CF120)
#define RPG_GAMECORE_HEARTDIALEMOEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D3CEB90)
#define RPG_GAMECORE_HEARTDIALEMOEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D3CF160)
#define RPG_GAMECORE_HEARTDIALEMOEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3CF330)
#define RPG_GAMECORE_HEARTDIALEMOEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D3CF500)
#define RPG_GAMECORE_HEARTDIALEMOEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D3CF870)
#define RPG_GAMECORE_HEARTDIALEMOEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D3CF290)
#define RPG_GAMECORE_HEARTDIALEMOEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D3CF1F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeartDialEmoExcelTable_TypeDefinitionIndex = 13620;

	class HeartDialEmoExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialEmoRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialEmoRow*>**)Il2CppClass::FromTypeDefinitionIndex(HeartDialEmoExcelTable_TypeDefinitionIndex)->GetStaticField(0x28B90);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HeartDialEmoExcelTable_TypeDefinitionIndex)->GetStaticField(0x28B98);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(HeartDialEmoExcelTable_TypeDefinitionIndex)->GetStaticField(0x28BA0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(HeartDialEmoExcelTable_TypeDefinitionIndex)->GetStaticField(0xC040);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HeartDialEmoExcelTable_TypeDefinitionIndex)->GetStaticField(0xC041);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEARTDIALEMOEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialEmoRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialEmoRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEARTDIALEMOEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEARTDIALEMOEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialEmoRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialEmoRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEARTDIALEMOEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::HeartDialEmoRow* GetData(::RPG::GameCore::HeartDialEmoType a1)
		{
			return ((::RPG::GameCore::HeartDialEmoRow*(*)(::RPG::GameCore::HeartDialEmoType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEARTDIALEMOEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEARTDIALEMOEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEARTDIALEMOEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEARTDIALEMOEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEARTDIALEMOEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEARTDIALEMOEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEARTDIALEMOEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::HeartDialEmoRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::HeartDialEmoRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEARTDIALEMOEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
