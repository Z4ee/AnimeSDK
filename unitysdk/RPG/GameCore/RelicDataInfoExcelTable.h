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

#define RPG_GAMECORE_RELICDATAINFOEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1B9C5680)
#define RPG_GAMECORE_RELICDATAINFOEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B9C5510)
#define RPG_GAMECORE_RELICDATAINFOEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1B9C5200)
#define RPG_GAMECORE_RELICDATAINFOEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1B9C54B0)
#define RPG_GAMECORE_RELICDATAINFOEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1B9C5860)
#define RPG_GAMECORE_RELICDATAINFOEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1B9C5280)
#define RPG_GAMECORE_RELICDATAINFOEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1B9C58A0)
#define RPG_GAMECORE_RELICDATAINFOEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B9C5A70)
#define RPG_GAMECORE_RELICDATAINFOEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1B9C5D90)
#define RPG_GAMECORE_RELICDATAINFOEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B9C6130)
#define RPG_GAMECORE_RELICDATAINFOEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1B9C59D0)
#define RPG_GAMECORE_RELICDATAINFOEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1B9C5930)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RelicDataInfoExcelTable_TypeDefinitionIndex = 14064;

	class RelicDataInfoExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RelicDataInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0x413A0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicDataInfoRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicDataInfoRow*>**)Il2CppClass::FromTypeDefinitionIndex(RelicDataInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0x413A8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RelicDataInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0x413B0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RelicDataInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0xB000);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RelicDataInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0xB001);
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

		static ::RPG::GameCore::RelicDataInfoRow* GetData(::System::UInt32 a1, ::RPG::GameCore::RelicType a2)
		{
			return ((::RPG::GameCore::RelicDataInfoRow*(*)(::System::UInt32, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICDATAINFOEXCELTABLE_GETDATA_OFFSET))(a1, a2);
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

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICDATAINFOEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICDATAINFOEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICDATAINFOEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RelicDataInfoRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RelicDataInfoRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICDATAINFOEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
