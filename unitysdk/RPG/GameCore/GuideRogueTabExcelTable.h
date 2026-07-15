#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/GuideRogueTabExcelTable_IndexKey.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GuideRogueTabRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_GUIDEROGUETABEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1B66B560)
#define RPG_GAMECORE_GUIDEROGUETABEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B66B430)
#define RPG_GAMECORE_GUIDEROGUETABEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1B66B120)
#define RPG_GAMECORE_GUIDEROGUETABEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1B66B3D0)
#define RPG_GAMECORE_GUIDEROGUETABEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1B66B660)
#define RPG_GAMECORE_GUIDEROGUETABEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1B66B1A0)
#define RPG_GAMECORE_GUIDEROGUETABEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1B66B6A0)
#define RPG_GAMECORE_GUIDEROGUETABEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B66B870)
#define RPG_GAMECORE_GUIDEROGUETABEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1B66BC00)
#define RPG_GAMECORE_GUIDEROGUETABEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B66C060)
#define RPG_GAMECORE_GUIDEROGUETABEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1B66B7D0)
#define RPG_GAMECORE_GUIDEROGUETABEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1B66B730)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GuideRogueTabExcelTable_TypeDefinitionIndex = 12894;

	class GuideRogueTabExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(GuideRogueTabExcelTable_TypeDefinitionIndex)->GetStaticField(0x39250);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GuideRogueTabExcelTable_IndexKey, ::RPG::GameCore::GuideRogueTabRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GuideRogueTabExcelTable_IndexKey, ::RPG::GameCore::GuideRogueTabRow*>**)Il2CppClass::FromTypeDefinitionIndex(GuideRogueTabExcelTable_TypeDefinitionIndex)->GetStaticField(0x39258);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(GuideRogueTabExcelTable_TypeDefinitionIndex)->GetStaticField(0x39260);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GuideRogueTabExcelTable_TypeDefinitionIndex)->GetStaticField(0x9940);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDEROGUETABEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GuideRogueTabExcelTable_IndexKey, ::RPG::GameCore::GuideRogueTabRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GuideRogueTabExcelTable_IndexKey, ::RPG::GameCore::GuideRogueTabRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDEROGUETABEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDEROGUETABEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::GuideRogueTabExcelTable_IndexKey, ::RPG::GameCore::GuideRogueTabRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::GuideRogueTabExcelTable_IndexKey, ::RPG::GameCore::GuideRogueTabRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDEROGUETABEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::GuideRogueTabRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GuideRogueTabRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDEROGUETABEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDEROGUETABEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDEROGUETABEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDEROGUETABEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDEROGUETABEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDEROGUETABEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDEROGUETABEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::GuideRogueTabRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GuideRogueTabRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDEROGUETABEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
