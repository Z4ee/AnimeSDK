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

#define RPG_GAMECORE_GOTOTIPSCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D1478D0)
#define RPG_GAMECORE_GOTOTIPSCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D147760)
#define RPG_GAMECORE_GOTOTIPSCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D147450)
#define RPG_GAMECORE_GOTOTIPSCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D147700)
#define RPG_GAMECORE_GOTOTIPSCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D147A60)
#define RPG_GAMECORE_GOTOTIPSCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D1474D0)
#define RPG_GAMECORE_GOTOTIPSCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D147AA0)
#define RPG_GAMECORE_GOTOTIPSCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D147C70)
#define RPG_GAMECORE_GOTOTIPSCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D147E40)
#define RPG_GAMECORE_GOTOTIPSCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1481B0)
#define RPG_GAMECORE_GOTOTIPSCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D147BD0)
#define RPG_GAMECORE_GOTOTIPSCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D147B30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GotoTipsConfigExcelTable_TypeDefinitionIndex = 13228;

	class GotoTipsConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GotoTipsConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GotoTipsConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(GotoTipsConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x34F60);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(GotoTipsConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x34F68);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(GotoTipsConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x34F70);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(GotoTipsConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xDE10);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GotoTipsConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xDE11);
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

		static ::RPG::GameCore::GotoTipsConfigRow* GetData(::RPG::GameCore::ConditionType a1)
		{
			return ((::RPG::GameCore::GotoTipsConfigRow*(*)(::RPG::GameCore::ConditionType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GOTOTIPSCONFIGEXCELTABLE_GETDATA_OFFSET))(a1);
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

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GOTOTIPSCONFIGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GOTOTIPSCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GOTOTIPSCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::GotoTipsConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GotoTipsConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GOTOTIPSCONFIGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
