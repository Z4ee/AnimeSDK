#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RelicDataInfoRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_RELICDATAINFOEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1758E350)
#define RPG_GAMECORE_RELICDATAINFOEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1758E1A0)
#define RPG_GAMECORE_RELICDATAINFOEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1758DE70)
#define RPG_GAMECORE_RELICDATAINFOEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1758E140)
#define RPG_GAMECORE_RELICDATAINFOEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1758E560)
#define RPG_GAMECORE_RELICDATAINFOEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1758DEF0)
#define RPG_GAMECORE_RELICDATAINFOEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1758E5A0)
#define RPG_GAMECORE_RELICDATAINFOEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1758E780)
#define RPG_GAMECORE_RELICDATAINFOEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1758EAA0)
#define RPG_GAMECORE_RELICDATAINFOEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1758EE50)
#define RPG_GAMECORE_RELICDATAINFOEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1758E6E0)
#define RPG_GAMECORE_RELICDATAINFOEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1758E640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RelicDataInfoExcelTable_TypeDefinitionIndex = 13371;

	class RelicDataInfoExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RelicDataInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0x31BA0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RelicDataInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0x31BA8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicDataInfoRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicDataInfoRow*>**)Il2CppClass::FromTypeDefinitionIndex(RelicDataInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0x31BB0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RelicDataInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0x10330);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RelicDataInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0x10331);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICDATAINFOEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicDataInfoRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicDataInfoRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICDATAINFOEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICDATAINFOEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicDataInfoRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicDataInfoRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICDATAINFOEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RelicDataInfoRow* GetData(::System::UInt32 SetID, ::RPG::GameCore::RelicType Type)
		{
			return ((::RPG::GameCore::RelicDataInfoRow*(*)(::System::UInt32, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICDATAINFOEXCELTABLE_GETDATA_OFFSET))(SetID, Type);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICDATAINFOEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICDATAINFOEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICDATAINFOEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICDATAINFOEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICDATAINFOEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICDATAINFOEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RelicDataInfoRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::RelicDataInfoRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICDATAINFOEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
