#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GuideResRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_GUIDERESEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D3C64C0)
#define RPG_GAMECORE_GUIDERESEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D3C6350)
#define RPG_GAMECORE_GUIDERESEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D3C6040)
#define RPG_GAMECORE_GUIDERESEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D3C62F0)
#define RPG_GAMECORE_GUIDERESEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D3C6650)
#define RPG_GAMECORE_GUIDERESEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D3C60C0)
#define RPG_GAMECORE_GUIDERESEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D3C6690)
#define RPG_GAMECORE_GUIDERESEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3C6860)
#define RPG_GAMECORE_GUIDERESEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D3C6A10)
#define RPG_GAMECORE_GUIDERESEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D3C6D80)
#define RPG_GAMECORE_GUIDERESEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D3C67C0)
#define RPG_GAMECORE_GUIDERESEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D3C6720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GuideResExcelTable_TypeDefinitionIndex = 13605;

	class GuideResExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(GuideResExcelTable_TypeDefinitionIndex)->GetStaticField(0x28170);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(GuideResExcelTable_TypeDefinitionIndex)->GetStaticField(0x28178);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GuideResRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GuideResRow*>**)Il2CppClass::FromTypeDefinitionIndex(GuideResExcelTable_TypeDefinitionIndex)->GetStaticField(0x28180);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(GuideResExcelTable_TypeDefinitionIndex)->GetStaticField(0xBD60);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GuideResExcelTable_TypeDefinitionIndex)->GetStaticField(0xBD61);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDERESEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GuideResRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GuideResRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDERESEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDERESEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GuideResRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GuideResRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDERESEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::GuideResRow* GetData(::System::Int32 a1)
		{
			return ((::RPG::GameCore::GuideResRow*(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDERESEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDERESEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDERESEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDERESEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDERESEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDERESEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDERESEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::GuideResRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GuideResRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDERESEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
