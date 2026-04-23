#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class UIRedDotRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_UIREDDOTEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x190E0B90)
#define RPG_GAMECORE_UIREDDOTEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x190E0A10)
#define RPG_GAMECORE_UIREDDOTEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x190E06E0)
#define RPG_GAMECORE_UIREDDOTEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x190E09B0)
#define RPG_GAMECORE_UIREDDOTEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x190E0D80)
#define RPG_GAMECORE_UIREDDOTEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x190E0760)
#define RPG_GAMECORE_UIREDDOTEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x190E0DC0)
#define RPG_GAMECORE_UIREDDOTEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x190E0FA0)
#define RPG_GAMECORE_UIREDDOTEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x190E1230)
#define RPG_GAMECORE_UIREDDOTEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x190E1540)
#define RPG_GAMECORE_UIREDDOTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x190E0F00)
#define RPG_GAMECORE_UIREDDOTEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x190E0E60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UIRedDotExcelTable_TypeDefinitionIndex = 14613;

	class UIRedDotExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(UIRedDotExcelTable_TypeDefinitionIndex)->GetStaticField(0x11100);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::UIRedDotRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::UIRedDotRow*>**)Il2CppClass::FromTypeDefinitionIndex(UIRedDotExcelTable_TypeDefinitionIndex)->GetStaticField(0x11108);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIRedDotExcelTable_TypeDefinitionIndex)->GetStaticField(0x11110);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIRedDotExcelTable_TypeDefinitionIndex)->GetStaticField(0x5350);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(UIRedDotExcelTable_TypeDefinitionIndex)->GetStaticField(0x5351);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIREDDOTEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::UIRedDotRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::UIRedDotRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIREDDOTEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIREDDOTEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::UIRedDotRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::UIRedDotRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIREDDOTEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::UIRedDotRow* GetData(::System::String* RedDot)
		{
			return ((::RPG::GameCore::UIRedDotRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIREDDOTEXCELTABLE_GETDATA_OFFSET))(RedDot);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIREDDOTEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIREDDOTEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIREDDOTEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIREDDOTEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIREDDOTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIREDDOTEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::UIRedDotRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::UIRedDotRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIREDDOTEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
