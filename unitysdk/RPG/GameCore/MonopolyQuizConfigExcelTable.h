#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MonopolyQuizConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MONOPOLYQUIZCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x17441360)
#define RPG_GAMECORE_MONOPOLYQUIZCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x174411B0)
#define RPG_GAMECORE_MONOPOLYQUIZCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x17440E80)
#define RPG_GAMECORE_MONOPOLYQUIZCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x17441150)
#define RPG_GAMECORE_MONOPOLYQUIZCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x17441530)
#define RPG_GAMECORE_MONOPOLYQUIZCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x17440F00)
#define RPG_GAMECORE_MONOPOLYQUIZCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x17441570)
#define RPG_GAMECORE_MONOPOLYQUIZCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x17441750)
#define RPG_GAMECORE_MONOPOLYQUIZCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x17441A40)
#define RPG_GAMECORE_MONOPOLYQUIZCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17441DA0)
#define RPG_GAMECORE_MONOPOLYQUIZCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x174416B0)
#define RPG_GAMECORE_MONOPOLYQUIZCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x17441610)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyQuizConfigExcelTable_TypeDefinitionIndex = 11042;

	class MonopolyQuizConfigExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MonopolyQuizConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x2C390);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyQuizConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyQuizConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(MonopolyQuizConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x2C398);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MonopolyQuizConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x2C3A0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MonopolyQuizConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xEB40);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonopolyQuizConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xEB41);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUIZCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyQuizConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyQuizConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUIZCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUIZCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyQuizConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyQuizConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUIZCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MonopolyQuizConfigRow* GetData(::System::UInt32 QuizID)
		{
			return ((::RPG::GameCore::MonopolyQuizConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUIZCONFIGEXCELTABLE_GETDATA_OFFSET))(QuizID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUIZCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUIZCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUIZCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUIZCONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUIZCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUIZCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MonopolyQuizConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::MonopolyQuizConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUIZCONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
