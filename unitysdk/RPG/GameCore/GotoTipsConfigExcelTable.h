#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/ConditionType.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GotoTipsConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_GOTOTIPSCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1724B470)
#define RPG_GAMECORE_GOTOTIPSCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1724B2C0)
#define RPG_GAMECORE_GOTOTIPSCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1724AF90)
#define RPG_GAMECORE_GOTOTIPSCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1724B260)
#define RPG_GAMECORE_GOTOTIPSCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1724B640)
#define RPG_GAMECORE_GOTOTIPSCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1724B010)
#define RPG_GAMECORE_GOTOTIPSCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1724B680)
#define RPG_GAMECORE_GOTOTIPSCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1724B860)
#define RPG_GAMECORE_GOTOTIPSCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1724BA30)
#define RPG_GAMECORE_GOTOTIPSCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1724BD90)
#define RPG_GAMECORE_GOTOTIPSCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1724B7C0)
#define RPG_GAMECORE_GOTOTIPSCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1724B720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GotoTipsConfigExcelTable_TypeDefinitionIndex = 12177;

	class GotoTipsConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(GotoTipsConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x20AA0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GotoTipsConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GotoTipsConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(GotoTipsConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x20AA8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(GotoTipsConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x20AB0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(GotoTipsConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x8AC0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GotoTipsConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x8AC1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GOTOTIPSCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GotoTipsConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GotoTipsConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GOTOTIPSCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GOTOTIPSCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GotoTipsConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GotoTipsConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GOTOTIPSCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::GotoTipsConfigRow* GetData(::RPG::GameCore::ConditionType ID)
		{
			return ((::RPG::GameCore::GotoTipsConfigRow*(*)(::RPG::GameCore::ConditionType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GOTOTIPSCONFIGEXCELTABLE_GETDATA_OFFSET))(ID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GOTOTIPSCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GOTOTIPSCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GOTOTIPSCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GOTOTIPSCONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GOTOTIPSCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GOTOTIPSCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::GotoTipsConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::GotoTipsConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GOTOTIPSCONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
