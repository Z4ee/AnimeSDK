#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class HeliobusPostImgRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D186960)
#define RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D1867F0)
#define RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D1864E0)
#define RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D186790)
#define RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D186AF0)
#define RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D186560)
#define RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D186B30)
#define RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D186D00)
#define RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D186E80)
#define RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1871F0)
#define RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D186C60)
#define RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D186BC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeliobusPostImgExcelTable_TypeDefinitionIndex = 13645;

	class HeliobusPostImgExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(HeliobusPostImgExcelTable_TypeDefinitionIndex)->GetStaticField(0x3AF90);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HeliobusPostImgExcelTable_TypeDefinitionIndex)->GetStaticField(0x3AF98);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusPostImgRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusPostImgRow*>**)Il2CppClass::FromTypeDefinitionIndex(HeliobusPostImgExcelTable_TypeDefinitionIndex)->GetStaticField(0x3AFA0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HeliobusPostImgExcelTable_TypeDefinitionIndex)->GetStaticField(0xEA00);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(HeliobusPostImgExcelTable_TypeDefinitionIndex)->GetStaticField(0xEA01);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusPostImgRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusPostImgRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusPostImgRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusPostImgRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::HeliobusPostImgRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::HeliobusPostImgRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::HeliobusPostImgRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::HeliobusPostImgRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
