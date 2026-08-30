#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueNousSurfaceTagRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUENOUSSURFACETAGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1E542500)
#define RPG_GAMECORE_ROGUENOUSSURFACETAGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E542390)
#define RPG_GAMECORE_ROGUENOUSSURFACETAGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1E542080)
#define RPG_GAMECORE_ROGUENOUSSURFACETAGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1E542330)
#define RPG_GAMECORE_ROGUENOUSSURFACETAGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1E542690)
#define RPG_GAMECORE_ROGUENOUSSURFACETAGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E542100)
#define RPG_GAMECORE_ROGUENOUSSURFACETAGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1E5426D0)
#define RPG_GAMECORE_ROGUENOUSSURFACETAGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E5428A0)
#define RPG_GAMECORE_ROGUENOUSSURFACETAGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1E542AB0)
#define RPG_GAMECORE_ROGUENOUSSURFACETAGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E542E20)
#define RPG_GAMECORE_ROGUENOUSSURFACETAGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1E542800)
#define RPG_GAMECORE_ROGUENOUSSURFACETAGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E542760)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueNousSurfaceTagExcelTable_TypeDefinitionIndex = 14745;

	class RogueNousSurfaceTagExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueNousSurfaceTagExcelTable_TypeDefinitionIndex)->GetStaticField(0x10AE0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousSurfaceTagRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousSurfaceTagRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueNousSurfaceTagExcelTable_TypeDefinitionIndex)->GetStaticField(0x10AE8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueNousSurfaceTagExcelTable_TypeDefinitionIndex)->GetStaticField(0x10AF0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueNousSurfaceTagExcelTable_TypeDefinitionIndex)->GetStaticField(0x75E0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueNousSurfaceTagExcelTable_TypeDefinitionIndex)->GetStaticField(0x75E1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSURFACETAGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousSurfaceTagRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousSurfaceTagRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSURFACETAGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSURFACETAGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousSurfaceTagRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousSurfaceTagRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSURFACETAGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueNousSurfaceTagRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueNousSurfaceTagRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSURFACETAGEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSURFACETAGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSURFACETAGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSURFACETAGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSURFACETAGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSURFACETAGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSURFACETAGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueNousSurfaceTagRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueNousSurfaceTagRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSURFACETAGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
