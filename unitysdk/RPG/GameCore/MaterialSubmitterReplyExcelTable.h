#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MaterialSubmitterReplyRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MATERIALSUBMITTERREPLYEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x173B9E20)
#define RPG_GAMECORE_MATERIALSUBMITTERREPLYEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x173B9C70)
#define RPG_GAMECORE_MATERIALSUBMITTERREPLYEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x173B9940)
#define RPG_GAMECORE_MATERIALSUBMITTERREPLYEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x173B9C10)
#define RPG_GAMECORE_MATERIALSUBMITTERREPLYEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x173B9FF0)
#define RPG_GAMECORE_MATERIALSUBMITTERREPLYEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x173B99C0)
#define RPG_GAMECORE_MATERIALSUBMITTERREPLYEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x173BA030)
#define RPG_GAMECORE_MATERIALSUBMITTERREPLYEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x173BA210)
#define RPG_GAMECORE_MATERIALSUBMITTERREPLYEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x173BA500)
#define RPG_GAMECORE_MATERIALSUBMITTERREPLYEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x173BA860)
#define RPG_GAMECORE_MATERIALSUBMITTERREPLYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x173BA170)
#define RPG_GAMECORE_MATERIALSUBMITTERREPLYEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x173BA0D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MaterialSubmitterReplyExcelTable_TypeDefinitionIndex = 11004;

	class MaterialSubmitterReplyExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MaterialSubmitterReplyExcelTable_TypeDefinitionIndex)->GetStaticField(0x28C70);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MaterialSubmitterReplyRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MaterialSubmitterReplyRow*>**)Il2CppClass::FromTypeDefinitionIndex(MaterialSubmitterReplyExcelTable_TypeDefinitionIndex)->GetStaticField(0x28C78);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MaterialSubmitterReplyExcelTable_TypeDefinitionIndex)->GetStaticField(0x28C80);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MaterialSubmitterReplyExcelTable_TypeDefinitionIndex)->GetStaticField(0xD6A0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MaterialSubmitterReplyExcelTable_TypeDefinitionIndex)->GetStaticField(0xD6A1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATERIALSUBMITTERREPLYEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MaterialSubmitterReplyRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MaterialSubmitterReplyRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATERIALSUBMITTERREPLYEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATERIALSUBMITTERREPLYEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MaterialSubmitterReplyRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MaterialSubmitterReplyRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATERIALSUBMITTERREPLYEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MaterialSubmitterReplyRow* GetData(::System::UInt32 ID)
		{
			return ((::RPG::GameCore::MaterialSubmitterReplyRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATERIALSUBMITTERREPLYEXCELTABLE_GETDATA_OFFSET))(ID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATERIALSUBMITTERREPLYEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATERIALSUBMITTERREPLYEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATERIALSUBMITTERREPLYEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATERIALSUBMITTERREPLYEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATERIALSUBMITTERREPLYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATERIALSUBMITTERREPLYEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MaterialSubmitterReplyRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::MaterialSubmitterReplyRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATERIALSUBMITTERREPLYEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
