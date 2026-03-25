#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MonopolyQuizPlayerConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MONOPOLYQUIZPLAYERCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x174423D0)
#define RPG_GAMECORE_MONOPOLYQUIZPLAYERCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17442220)
#define RPG_GAMECORE_MONOPOLYQUIZPLAYERCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x17441EF0)
#define RPG_GAMECORE_MONOPOLYQUIZPLAYERCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x174421C0)
#define RPG_GAMECORE_MONOPOLYQUIZPLAYERCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x174425A0)
#define RPG_GAMECORE_MONOPOLYQUIZPLAYERCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x17441F70)
#define RPG_GAMECORE_MONOPOLYQUIZPLAYERCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x174425E0)
#define RPG_GAMECORE_MONOPOLYQUIZPLAYERCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x174427C0)
#define RPG_GAMECORE_MONOPOLYQUIZPLAYERCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x17442A70)
#define RPG_GAMECORE_MONOPOLYQUIZPLAYERCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17442DD0)
#define RPG_GAMECORE_MONOPOLYQUIZPLAYERCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x17442720)
#define RPG_GAMECORE_MONOPOLYQUIZPLAYERCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x17442680)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyQuizPlayerConfigExcelTable_TypeDefinitionIndex = 11046;

	class MonopolyQuizPlayerConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MonopolyQuizPlayerConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x2C3C0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MonopolyQuizPlayerConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x2C3C8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyQuizPlayerConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyQuizPlayerConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(MonopolyQuizPlayerConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x2C3D0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MonopolyQuizPlayerConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xEB50);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonopolyQuizPlayerConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xEB51);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUIZPLAYERCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyQuizPlayerConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyQuizPlayerConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUIZPLAYERCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUIZPLAYERCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyQuizPlayerConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyQuizPlayerConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUIZPLAYERCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MonopolyQuizPlayerConfigRow* GetData(::System::UInt32 QuizPlayerID)
		{
			return ((::RPG::GameCore::MonopolyQuizPlayerConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUIZPLAYERCONFIGEXCELTABLE_GETDATA_OFFSET))(QuizPlayerID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUIZPLAYERCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUIZPLAYERCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUIZPLAYERCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUIZPLAYERCONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUIZPLAYERCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUIZPLAYERCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MonopolyQuizPlayerConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::MonopolyQuizPlayerConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUIZPLAYERCONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
