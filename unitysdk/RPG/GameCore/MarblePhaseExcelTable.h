#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/MarblePhaseType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MarblePhaseRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MARBLEPHASEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D8437E0)
#define RPG_GAMECORE_MARBLEPHASEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D843670)
#define RPG_GAMECORE_MARBLEPHASEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D843360)
#define RPG_GAMECORE_MARBLEPHASEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D843610)
#define RPG_GAMECORE_MARBLEPHASEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D843970)
#define RPG_GAMECORE_MARBLEPHASEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D8433E0)
#define RPG_GAMECORE_MARBLEPHASEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D8439B0)
#define RPG_GAMECORE_MARBLEPHASEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D843B80)
#define RPG_GAMECORE_MARBLEPHASEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D843D50)
#define RPG_GAMECORE_MARBLEPHASEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D8440C0)
#define RPG_GAMECORE_MARBLEPHASEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D843AE0)
#define RPG_GAMECORE_MARBLEPHASEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D843A40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarblePhaseExcelTable_TypeDefinitionIndex = 11868;

	class MarblePhaseExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MarblePhaseExcelTable_TypeDefinitionIndex)->GetStaticField(0x37D40);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarblePhaseRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarblePhaseRow*>**)Il2CppClass::FromTypeDefinitionIndex(MarblePhaseExcelTable_TypeDefinitionIndex)->GetStaticField(0x37D48);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MarblePhaseExcelTable_TypeDefinitionIndex)->GetStaticField(0x37D50);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MarblePhaseExcelTable_TypeDefinitionIndex)->GetStaticField(0xBE40);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MarblePhaseExcelTable_TypeDefinitionIndex)->GetStaticField(0xBE41);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEPHASEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarblePhaseRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarblePhaseRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEPHASEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEPHASEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarblePhaseRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarblePhaseRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEPHASEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MarblePhaseRow* GetData(::RPG::GameCore::MarblePhaseType a1)
		{
			return ((::RPG::GameCore::MarblePhaseRow*(*)(::RPG::GameCore::MarblePhaseType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEPHASEEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEPHASEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEPHASEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEPHASEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEPHASEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEPHASEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEPHASEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MarblePhaseRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MarblePhaseRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEPHASEEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
