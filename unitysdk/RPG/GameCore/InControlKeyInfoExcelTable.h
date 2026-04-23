#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class InControlKeyInfoRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_INCONTROLKEYINFOEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18A19F10)
#define RPG_GAMECORE_INCONTROLKEYINFOEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18A19D60)
#define RPG_GAMECORE_INCONTROLKEYINFOEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18A19A30)
#define RPG_GAMECORE_INCONTROLKEYINFOEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18A19D00)
#define RPG_GAMECORE_INCONTROLKEYINFOEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18A1A0C0)
#define RPG_GAMECORE_INCONTROLKEYINFOEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18A19AB0)
#define RPG_GAMECORE_INCONTROLKEYINFOEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18A1A100)
#define RPG_GAMECORE_INCONTROLKEYINFOEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A1A2E0)
#define RPG_GAMECORE_INCONTROLKEYINFOEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18A1A610)
#define RPG_GAMECORE_INCONTROLKEYINFOEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18A1A920)
#define RPG_GAMECORE_INCONTROLKEYINFOEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18A1A240)
#define RPG_GAMECORE_INCONTROLKEYINFOEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18A1A1A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int InControlKeyInfoExcelTable_TypeDefinitionIndex = 13091;

	class InControlKeyInfoExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InControlKeyInfoRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InControlKeyInfoRow*>**)Il2CppClass::FromTypeDefinitionIndex(InControlKeyInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0x3E9A0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(InControlKeyInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0x3E9A8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(InControlKeyInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0x3E9B0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(InControlKeyInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0xE000);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(InControlKeyInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0xE001);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLKEYINFOEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InControlKeyInfoRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InControlKeyInfoRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLKEYINFOEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLKEYINFOEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InControlKeyInfoRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InControlKeyInfoRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLKEYINFOEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::InControlKeyInfoRow* GetData(::System::String* key)
		{
			return ((::RPG::GameCore::InControlKeyInfoRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLKEYINFOEXCELTABLE_GETDATA_OFFSET))(key);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLKEYINFOEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLKEYINFOEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLKEYINFOEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLKEYINFOEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLKEYINFOEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLKEYINFOEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::InControlKeyInfoRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::InControlKeyInfoRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLKEYINFOEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
