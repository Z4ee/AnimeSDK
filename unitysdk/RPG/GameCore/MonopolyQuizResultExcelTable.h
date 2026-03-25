#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MonopolyQuizResultRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MONOPOLYQUIZRESULTEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x17443400)
#define RPG_GAMECORE_MONOPOLYQUIZRESULTEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17443250)
#define RPG_GAMECORE_MONOPOLYQUIZRESULTEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x17442F20)
#define RPG_GAMECORE_MONOPOLYQUIZRESULTEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x174431F0)
#define RPG_GAMECORE_MONOPOLYQUIZRESULTEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x174435D0)
#define RPG_GAMECORE_MONOPOLYQUIZRESULTEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x17442FA0)
#define RPG_GAMECORE_MONOPOLYQUIZRESULTEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x17443610)
#define RPG_GAMECORE_MONOPOLYQUIZRESULTEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x174437F0)
#define RPG_GAMECORE_MONOPOLYQUIZRESULTEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x17443A50)
#define RPG_GAMECORE_MONOPOLYQUIZRESULTEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17443DB0)
#define RPG_GAMECORE_MONOPOLYQUIZRESULTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x17443750)
#define RPG_GAMECORE_MONOPOLYQUIZRESULTEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x174436B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyQuizResultExcelTable_TypeDefinitionIndex = 11048;

	class MonopolyQuizResultExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MonopolyQuizResultExcelTable_TypeDefinitionIndex)->GetStaticField(0x2C3E0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MonopolyQuizResultExcelTable_TypeDefinitionIndex)->GetStaticField(0x2C3E8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyQuizResultRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyQuizResultRow*>**)Il2CppClass::FromTypeDefinitionIndex(MonopolyQuizResultExcelTable_TypeDefinitionIndex)->GetStaticField(0x2C3F0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonopolyQuizResultExcelTable_TypeDefinitionIndex)->GetStaticField(0xEB60);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MonopolyQuizResultExcelTable_TypeDefinitionIndex)->GetStaticField(0xEB61);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUIZRESULTEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyQuizResultRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyQuizResultRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUIZRESULTEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUIZRESULTEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyQuizResultRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyQuizResultRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUIZRESULTEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MonopolyQuizResultRow* GetData(::System::UInt32 ID)
		{
			return ((::RPG::GameCore::MonopolyQuizResultRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUIZRESULTEXCELTABLE_GETDATA_OFFSET))(ID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUIZRESULTEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUIZRESULTEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUIZRESULTEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUIZRESULTEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUIZRESULTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUIZRESULTEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MonopolyQuizResultRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::MonopolyQuizResultRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUIZRESULTEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
