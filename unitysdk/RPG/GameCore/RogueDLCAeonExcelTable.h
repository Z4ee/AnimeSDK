#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueDLCAeonRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEDLCAEONEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x175F4230)
#define RPG_GAMECORE_ROGUEDLCAEONEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x175F40B0)
#define RPG_GAMECORE_ROGUEDLCAEONEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x175F3D80)
#define RPG_GAMECORE_ROGUEDLCAEONEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x175F4050)
#define RPG_GAMECORE_ROGUEDLCAEONEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x175F4400)
#define RPG_GAMECORE_ROGUEDLCAEONEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x175F3E00)
#define RPG_GAMECORE_ROGUEDLCAEONEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x175F4440)
#define RPG_GAMECORE_ROGUEDLCAEONEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x175F4620)
#define RPG_GAMECORE_ROGUEDLCAEONEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x175F4EC0)
#define RPG_GAMECORE_ROGUEDLCAEONEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x175F51E0)
#define RPG_GAMECORE_ROGUEDLCAEONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x175F4580)
#define RPG_GAMECORE_ROGUEDLCAEONEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x175F44E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCAeonExcelTable_TypeDefinitionIndex = 13466;

	class RogueDLCAeonExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAeonRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAeonRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCAeonExcelTable_TypeDefinitionIndex)->GetStaticField(0x34AC0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCAeonExcelTable_TypeDefinitionIndex)->GetStaticField(0x34AC8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCAeonExcelTable_TypeDefinitionIndex)->GetStaticField(0x34AD0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueDLCAeonExcelTable_TypeDefinitionIndex)->GetStaticField(0x10760);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueDLCAeonExcelTable_TypeDefinitionIndex)->GetStaticField(0x10761);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAeonRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAeonRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAeonRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAeonRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueDLCAeonRow* GetData(::System::UInt32 AeonID)
		{
			return ((::RPG::GameCore::RogueDLCAeonRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONEXCELTABLE_GETDATA_OFFSET))(AeonID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueDLCAeonRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueDLCAeonRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
