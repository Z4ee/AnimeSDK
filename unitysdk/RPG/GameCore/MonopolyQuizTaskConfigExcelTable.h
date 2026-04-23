#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MonopolyQuizTaskConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MONOPOLYQUIZTASKCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18B51040)
#define RPG_GAMECORE_MONOPOLYQUIZTASKCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18B50E90)
#define RPG_GAMECORE_MONOPOLYQUIZTASKCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18B50B60)
#define RPG_GAMECORE_MONOPOLYQUIZTASKCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18B50E30)
#define RPG_GAMECORE_MONOPOLYQUIZTASKCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18B51210)
#define RPG_GAMECORE_MONOPOLYQUIZTASKCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18B50BE0)
#define RPG_GAMECORE_MONOPOLYQUIZTASKCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18B51250)
#define RPG_GAMECORE_MONOPOLYQUIZTASKCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18B51430)
#define RPG_GAMECORE_MONOPOLYQUIZTASKCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18B51650)
#define RPG_GAMECORE_MONOPOLYQUIZTASKCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B519B0)
#define RPG_GAMECORE_MONOPOLYQUIZTASKCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18B51390)
#define RPG_GAMECORE_MONOPOLYQUIZTASKCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18B512F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyQuizTaskConfigExcelTable_TypeDefinitionIndex = 11447;

	class MonopolyQuizTaskConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MonopolyQuizTaskConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x3EED0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MonopolyQuizTaskConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x3EED8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyQuizTaskConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyQuizTaskConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(MonopolyQuizTaskConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x3EEE0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MonopolyQuizTaskConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xE120);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonopolyQuizTaskConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xE121);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUIZTASKCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyQuizTaskConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyQuizTaskConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUIZTASKCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUIZTASKCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyQuizTaskConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyQuizTaskConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUIZTASKCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MonopolyQuizTaskConfigRow* GetData(::System::UInt32 QuizTaskID)
		{
			return ((::RPG::GameCore::MonopolyQuizTaskConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUIZTASKCONFIGEXCELTABLE_GETDATA_OFFSET))(QuizTaskID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUIZTASKCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUIZTASKCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUIZTASKCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUIZTASKCONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUIZTASKCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUIZTASKCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MonopolyQuizTaskConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::MonopolyQuizTaskConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUIZTASKCONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
