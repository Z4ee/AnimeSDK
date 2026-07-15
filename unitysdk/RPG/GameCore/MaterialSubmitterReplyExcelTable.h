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

#define RPG_GAMECORE_MATERIALSUBMITTERREPLYEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1AF425D0)
#define RPG_GAMECORE_MATERIALSUBMITTERREPLYEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1AF42460)
#define RPG_GAMECORE_MATERIALSUBMITTERREPLYEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1AF42150)
#define RPG_GAMECORE_MATERIALSUBMITTERREPLYEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1AF42400)
#define RPG_GAMECORE_MATERIALSUBMITTERREPLYEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1AF42760)
#define RPG_GAMECORE_MATERIALSUBMITTERREPLYEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1AF421D0)
#define RPG_GAMECORE_MATERIALSUBMITTERREPLYEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1AF427A0)
#define RPG_GAMECORE_MATERIALSUBMITTERREPLYEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1AF42970)
#define RPG_GAMECORE_MATERIALSUBMITTERREPLYEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1AF42C60)
#define RPG_GAMECORE_MATERIALSUBMITTERREPLYEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF42FD0)
#define RPG_GAMECORE_MATERIALSUBMITTERREPLYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1AF428D0)
#define RPG_GAMECORE_MATERIALSUBMITTERREPLYEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1AF42830)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MaterialSubmitterReplyExcelTable_TypeDefinitionIndex = 11552;

	class MaterialSubmitterReplyExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MaterialSubmitterReplyExcelTable_TypeDefinitionIndex)->GetStaticField(0x40300);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MaterialSubmitterReplyExcelTable_TypeDefinitionIndex)->GetStaticField(0x40308);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MaterialSubmitterReplyRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MaterialSubmitterReplyRow*>**)Il2CppClass::FromTypeDefinitionIndex(MaterialSubmitterReplyExcelTable_TypeDefinitionIndex)->GetStaticField(0x40310);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MaterialSubmitterReplyExcelTable_TypeDefinitionIndex)->GetStaticField(0xAC30);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MaterialSubmitterReplyExcelTable_TypeDefinitionIndex)->GetStaticField(0xAC31);
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

		static ::RPG::GameCore::MaterialSubmitterReplyRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MaterialSubmitterReplyRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATERIALSUBMITTERREPLYEXCELTABLE_GETDATA_OFFSET))(a1);
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

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATERIALSUBMITTERREPLYEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATERIALSUBMITTERREPLYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATERIALSUBMITTERREPLYEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MaterialSubmitterReplyRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MaterialSubmitterReplyRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATERIALSUBMITTERREPLYEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
