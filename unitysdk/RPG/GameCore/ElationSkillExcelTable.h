#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ElationSkillRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ELATIONSKILLEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1718B790)
#define RPG_GAMECORE_ELATIONSKILLEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1718B5E0)
#define RPG_GAMECORE_ELATIONSKILLEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1718B2B0)
#define RPG_GAMECORE_ELATIONSKILLEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1718B580)
#define RPG_GAMECORE_ELATIONSKILLEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1718B910)
#define RPG_GAMECORE_ELATIONSKILLEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1718B330)
#define RPG_GAMECORE_ELATIONSKILLEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1718B950)
#define RPG_GAMECORE_ELATIONSKILLEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1718BB30)
#define RPG_GAMECORE_ELATIONSKILLEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1718BCA0)
#define RPG_GAMECORE_ELATIONSKILLEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1718BFB0)
#define RPG_GAMECORE_ELATIONSKILLEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1718BA90)
#define RPG_GAMECORE_ELATIONSKILLEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1718B9F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElationSkillExcelTable_TypeDefinitionIndex = 12065;

	class ElationSkillExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ElationSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x2B710);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ElationSkillRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ElationSkillRow*>**)Il2CppClass::FromTypeDefinitionIndex(ElationSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x2B718);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ElationSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x2B720);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ElationSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0xE700);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ElationSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0xE701);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONSKILLEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ElationSkillRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ElationSkillRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONSKILLEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONSKILLEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ElationSkillRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ElationSkillRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONSKILLEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ElationSkillRow* GetData(::System::UInt32 ElationSkillID)
		{
			return ((::RPG::GameCore::ElationSkillRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONSKILLEXCELTABLE_GETDATA_OFFSET))(ElationSkillID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONSKILLEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONSKILLEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONSKILLEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONSKILLEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONSKILLEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONSKILLEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ElationSkillRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::ElationSkillRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONSKILLEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
