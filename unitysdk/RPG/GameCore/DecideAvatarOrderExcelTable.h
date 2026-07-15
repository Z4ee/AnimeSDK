#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DecideAvatarOrderRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_DECIDEAVATARORDEREXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1C1008A0)
#define RPG_GAMECORE_DECIDEAVATARORDEREXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C100730)
#define RPG_GAMECORE_DECIDEAVATARORDEREXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1C100420)
#define RPG_GAMECORE_DECIDEAVATARORDEREXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1C1006D0)
#define RPG_GAMECORE_DECIDEAVATARORDEREXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1C100A30)
#define RPG_GAMECORE_DECIDEAVATARORDEREXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1C1004A0)
#define RPG_GAMECORE_DECIDEAVATARORDEREXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1C100A70)
#define RPG_GAMECORE_DECIDEAVATARORDEREXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C100C40)
#define RPG_GAMECORE_DECIDEAVATARORDEREXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1C100DE0)
#define RPG_GAMECORE_DECIDEAVATARORDEREXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C101150)
#define RPG_GAMECORE_DECIDEAVATARORDEREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1C100BA0)
#define RPG_GAMECORE_DECIDEAVATARORDEREXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1C100B00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DecideAvatarOrderExcelTable_TypeDefinitionIndex = 12867;

	class DecideAvatarOrderExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DecideAvatarOrderExcelTable_TypeDefinitionIndex)->GetStaticField(0x2E2D0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(DecideAvatarOrderExcelTable_TypeDefinitionIndex)->GetStaticField(0x2E2D8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DecideAvatarOrderRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DecideAvatarOrderRow*>**)Il2CppClass::FromTypeDefinitionIndex(DecideAvatarOrderExcelTable_TypeDefinitionIndex)->GetStaticField(0x2E2E0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DecideAvatarOrderExcelTable_TypeDefinitionIndex)->GetStaticField(0x8180);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(DecideAvatarOrderExcelTable_TypeDefinitionIndex)->GetStaticField(0x8181);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECIDEAVATARORDEREXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DecideAvatarOrderRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DecideAvatarOrderRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECIDEAVATARORDEREXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECIDEAVATARORDEREXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DecideAvatarOrderRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DecideAvatarOrderRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECIDEAVATARORDEREXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::DecideAvatarOrderRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::DecideAvatarOrderRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECIDEAVATARORDEREXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECIDEAVATARORDEREXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECIDEAVATARORDEREXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECIDEAVATARORDEREXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECIDEAVATARORDEREXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECIDEAVATARORDEREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECIDEAVATARORDEREXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::DecideAvatarOrderRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::DecideAvatarOrderRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECIDEAVATARORDEREXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
