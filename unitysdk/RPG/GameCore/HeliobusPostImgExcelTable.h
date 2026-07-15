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

#define RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1B67CE70)
#define RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B67CD00)
#define RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1B67C9F0)
#define RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1B67CCA0)
#define RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1B67D000)
#define RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1B67CA70)
#define RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1B67D040)
#define RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B67D210)
#define RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1B67D390)
#define RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B67D700)
#define RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1B67D170)
#define RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1B67D0D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeliobusPostImgExcelTable_TypeDefinitionIndex = 13254;

	class HeliobusPostImgExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HeliobusPostImgExcelTable_TypeDefinitionIndex)->GetStaticField(0x39810);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusPostImgRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusPostImgRow*>**)Il2CppClass::FromTypeDefinitionIndex(HeliobusPostImgExcelTable_TypeDefinitionIndex)->GetStaticField(0x39818);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(HeliobusPostImgExcelTable_TypeDefinitionIndex)->GetStaticField(0x39820);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HeliobusPostImgExcelTable_TypeDefinitionIndex)->GetStaticField(0x9A60);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(HeliobusPostImgExcelTable_TypeDefinitionIndex)->GetStaticField(0x9A61);
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
