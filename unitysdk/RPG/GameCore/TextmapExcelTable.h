#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AdapterEnumerator64_2.h"
#include "unitysdk/RPG/GameCore/TextmapExcelTable_IndexKey.h"
#include "unitysdk/Struct_2_F780BA94AF5E7E37.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_87F9839A308D3BC3;
namespace RPG::GameCore { class TextmapRow; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2_CacheOperation; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_TEXTMAPEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D5CBB80)
#define RPG_GAMECORE_TEXTMAPEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D5CB8F0)
#define RPG_GAMECORE_TEXTMAPEXCELTABLE_GETLANGUAGE_OFFSET UNITYSDK_OFFSET(0x1D5CBF30)
#define RPG_GAMECORE_TEXTMAPEXCELTABLE_GETLRUINFO_OFFSET UNITYSDK_OFFSET(0x1D5CB660)
#define RPG_GAMECORE_TEXTMAPEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D5CB760)
#define RPG_GAMECORE_TEXTMAPEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D5CB880)
#define RPG_GAMECORE_TEXTMAPEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D5CA860)
#define RPG_GAMECORE_TEXTMAPEXCELTABLE_ISREVERSEMAPEMPTY_OFFSET UNITYSDK_OFFSET(0x1D5CB750)
#define RPG_GAMECORE_TEXTMAPEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D5CB7E0)
#define RPG_GAMECORE_TEXTMAPEXCELTABLE_LOADTOROW_OFFSET UNITYSDK_OFFSET(0x1D5CAA30)
#define RPG_GAMECORE_TEXTMAPEXCELTABLE_SETLRUOPERATION_OFFSET UNITYSDK_OFFSET(0x1D5CB6E0)
#define RPG_GAMECORE_TEXTMAPEXCELTABLE_TRYLOADROW_OFFSET UNITYSDK_OFFSET(0x1D5CADE0)
#define RPG_GAMECORE_TEXTMAPEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D5CA8A0)
#define RPG_GAMECORE_TEXTMAPEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5CB3F0)
#define RPG_GAMECORE_TEXTMAPEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D5CB440)
#define RPG_GAMECORE_TEXTMAPEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D5CC4C0)
#define RPG_GAMECORE_TEXTMAPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D5CB380)
#define RPG_GAMECORE_TEXTMAPEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D5CB320)
#define RPG_GAMECORE_TEXTMAPEXCELTABLE__LOADFULLDATAIMPL_OFFSET UNITYSDK_OFFSET(0x1D5CBDB0)
#define RPG_GAMECORE_TEXTMAPEXCELTABLE__LOADSTARTUPDATAIMPL_OFFSET UNITYSDK_OFFSET(0x1D5CBC30)
#define RPG_GAMECORE_TEXTMAPEXCELTABLE__UNLOADPREVTEXTMAP_OFFSET UNITYSDK_OFFSET(0x1D5CBF90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TextmapExcelTable_TypeDefinitionIndex = 15122;

	class TextmapExcelTable : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_fullPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TextmapExcelTable_TypeDefinitionIndex)->GetStaticField(0x9E60);
		}
		static ::System::String** StaticGet_srcFileName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TextmapExcelTable_TypeDefinitionIndex)->GetStaticField(0x9E68);
		}
		static ::Class_2_87F9839A308D3BC3** StaticGet_headers()
		{
			return (::Class_2_87F9839A308D3BC3**)Il2CppClass::FromTypeDefinitionIndex(TextmapExcelTable_TypeDefinitionIndex)->GetStaticField(0x9E70);
		}
		static ::System::String** StaticGet_prevSrcFileName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TextmapExcelTable_TypeDefinitionIndex)->GetStaticField(0x9E78);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(TextmapExcelTable_TypeDefinitionIndex)->GetStaticField(0x9E80);
		}
		static ::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::TextmapExcelTable_IndexKey, ::RPG::GameCore::TextmapRow*>** StaticGet_LRUCache()
		{
			return (::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::TextmapExcelTable_IndexKey, ::RPG::GameCore::TextmapRow*>**)Il2CppClass::FromTypeDefinitionIndex(TextmapExcelTable_TypeDefinitionIndex)->GetStaticField(0x9E88);
		}
		static ::System::Action_1<::System::String*>** StaticGet_UnloadTextmapData()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(TextmapExcelTable_TypeDefinitionIndex)->GetStaticField(0x9E90);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TextmapExcelTable_IndexKey, ::RPG::GameCore::TextmapRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TextmapExcelTable_IndexKey, ::RPG::GameCore::TextmapRow*>**)Il2CppClass::FromTypeDefinitionIndex(TextmapExcelTable_TypeDefinitionIndex)->GetStaticField(0x9E98);
		}
		static ::System::Func_1<::System::String*>** StaticGet_GetCurrentLanguage()
		{
			return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(TextmapExcelTable_TypeDefinitionIndex)->GetStaticField(0x9EA0);
		}
		static ::System::Boolean* StaticGet_IsInStartup()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TextmapExcelTable_TypeDefinitionIndex)->GetStaticField(0x22D0);
		}
		static ::System::Boolean* StaticGet_IsLoadReverseMap()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TextmapExcelTable_TypeDefinitionIndex)->GetStaticField(0x22D1);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TextmapExcelTable_TypeDefinitionIndex)->GetStaticField(0x22D2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTMAPEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTMAPEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTMAPEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void LoadToRow(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1, ::RPG::GameCore::TextmapRow* a2)
		{
			return ((::System::Void(*)(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>, ::RPG::GameCore::TextmapRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTMAPEXCELTABLE_LOADTOROW_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryLoadRow(::RPG::GameCore::TextmapExcelTable_IndexKey a1, ::RPG::GameCore::TextmapRow*& a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::TextmapExcelTable_IndexKey, ::RPG::GameCore::TextmapRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTMAPEXCELTABLE_TRYLOADROW_OFFSET))(a1, a2);
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTMAPEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTMAPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTMAPEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::TextmapRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TextmapRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTMAPEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::Struct_2_F780BA94AF5E7E37 GetLRUInfo()
		{
			return ((::Struct_2_F780BA94AF5E7E37(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTMAPEXCELTABLE_GETLRUINFO_OFFSET))();
		}

		static ::System::Void SetLRUOperation(::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::TextmapExcelTable_IndexKey, ::RPG::GameCore::TextmapRow*>* a1, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::TextmapExcelTable_IndexKey, ::RPG::GameCore::TextmapRow*>* a2, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::TextmapExcelTable_IndexKey, ::RPG::GameCore::TextmapRow*>* a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::TextmapExcelTable_IndexKey, ::RPG::GameCore::TextmapRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::TextmapExcelTable_IndexKey, ::RPG::GameCore::TextmapRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::TextmapExcelTable_IndexKey, ::RPG::GameCore::TextmapRow*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTMAPEXCELTABLE_SETLRUOPERATION_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean IsReverseMapEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTMAPEXCELTABLE_ISREVERSEMAPEMPTY_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TextmapExcelTable_IndexKey, ::RPG::GameCore::TextmapRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TextmapExcelTable_IndexKey, ::RPG::GameCore::TextmapRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTMAPEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTMAPEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::AdapterEnumerator64_2<::RPG::GameCore::TextmapExcelTable_IndexKey, ::RPG::GameCore::TextmapRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::AdapterEnumerator64_2<::RPG::GameCore::TextmapExcelTable_IndexKey, ::RPG::GameCore::TextmapRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTMAPEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::TextmapRow* GetData(::RPG::Client::TextID a1)
		{
			return ((::RPG::GameCore::TextmapRow*(*)(::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTMAPEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTMAPEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::String* GetLanguage()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTMAPEXCELTABLE_GETLANGUAGE_OFFSET))();
		}

		static ::System::Void _LoadStartupDataImpl()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTMAPEXCELTABLE__LOADSTARTUPDATAIMPL_OFFSET))();
		}

		static ::System::Void _LoadFullDataImpl()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTMAPEXCELTABLE__LOADFULLDATAIMPL_OFFSET))();
		}

		static ::System::Void _UnloadPrevTextmap()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTMAPEXCELTABLE__UNLOADPREVTEXTMAP_OFFSET))();
		}
	};
}
