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

#define RPG_GAMECORE_GUIDEROGUETABEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D3C76C0)
#define RPG_GAMECORE_GUIDEROGUETABEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D3C7590)
#define RPG_GAMECORE_GUIDEROGUETABEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D3C7280)
#define RPG_GAMECORE_GUIDEROGUETABEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D3C7530)
#define RPG_GAMECORE_GUIDEROGUETABEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D3C77C0)
#define RPG_GAMECORE_GUIDEROGUETABEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D3C7300)
#define RPG_GAMECORE_GUIDEROGUETABEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D3C7800)
#define RPG_GAMECORE_GUIDEROGUETABEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3C79D0)
#define RPG_GAMECORE_GUIDEROGUETABEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D3C7D60)
#define RPG_GAMECORE_GUIDEROGUETABEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D3C81C0)
#define RPG_GAMECORE_GUIDEROGUETABEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D3C7930)
#define RPG_GAMECORE_GUIDEROGUETABEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D3C7890)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GuideRogueTabExcelTable_TypeDefinitionIndex = 13285;

	class GuideRogueTabExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(GuideRogueTabExcelTable_TypeDefinitionIndex)->GetStaticField(0x28220);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(GuideRogueTabExcelTable_TypeDefinitionIndex)->GetStaticField(0x28228);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GuideRogueTabExcelTable_IndexKey, ::RPG::GameCore::GuideRogueTabRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GuideRogueTabExcelTable_IndexKey, ::RPG::GameCore::GuideRogueTabRow*>**)Il2CppClass::FromTypeDefinitionIndex(GuideRogueTabExcelTable_TypeDefinitionIndex)->GetStaticField(0x28230);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GuideRogueTabExcelTable_TypeDefinitionIndex)->GetStaticField(0xBDC0);
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
