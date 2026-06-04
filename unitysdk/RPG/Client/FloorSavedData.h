#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8826F6D93ACAC1A7;
class Class_1_DA3E1E065FF0B7AB;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_FLOORSAVEDDATA_ADDVALUE_OFFSET UNITYSDK_OFFSET(0xBA61D00)
#define RPG_CLIENT_FLOORSAVEDDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0xBA61810)
#define RPG_CLIENT_FLOORSAVEDDATA_GETFLOORSAVEDVALUES_OFFSET UNITYSDK_OFFSET(0xBA61900)
#define RPG_CLIENT_FLOORSAVEDDATA_GETVALUE_OFFSET UNITYSDK_OFFSET(0xBA61940)
#define RPG_CLIENT_FLOORSAVEDDATA_ISEMPTY_OFFSET UNITYSDK_OFFSET(0xBA618A0)
#define RPG_CLIENT_FLOORSAVEDDATA_REGISTERONSAVEDVALUECHANGE_OFFSET UNITYSDK_OFFSET(0xBA62280)
#define RPG_CLIENT_FLOORSAVEDDATA_SETVALUE_OFFSET UNITYSDK_OFFSET(0xBA61FA0)
#define RPG_CLIENT_FLOORSAVEDDATA_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0xBA61BA0)
#define RPG_CLIENT_FLOORSAVEDDATA_UNREGISTERONSAVEDVALUECHANGE_OFFSET UNITYSDK_OFFSET(0xBA62460)
#define RPG_CLIENT_FLOORSAVEDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xBA61790)

namespace RPG::Client
{
	inline static constexpr unsigned int FloorSavedData_TypeDefinitionIndex = 58076;

	class FloorSavedData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_DA3E1E065FF0B7AB*>* _SavedValuesByNameHash; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOORSAVEDDATA__CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOORSAVEDDATA_CLEAR_OFFSET))(this);
		}

		::System::Boolean IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOORSAVEDDATA_ISEMPTY_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_DA3E1E065FF0B7AB*>* GetFloorSavedValues()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_DA3E1E065FF0B7AB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOORSAVEDDATA_GETFLOORSAVEDVALUES_OFFSET))(this);
		}

		::System::Int16 GetValue(::System::String* a1, ::Class_1_8826F6D93ACAC1A7* a2)
		{
			return ((::System::Int16(*)(::PVOID, ::System::String*, ::Class_1_8826F6D93ACAC1A7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOORSAVEDDATA_GETVALUE_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryGetValue(::System::String* a1, ::System::Int16& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int16&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOORSAVEDDATA_TRYGETVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void AddValue(::System::String* a1, ::System::Int16 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int16))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOORSAVEDDATA_ADDVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void SetValue(::System::String* a1, ::System::Int16 a2, ::Class_1_8826F6D93ACAC1A7* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int16, ::Class_1_8826F6D93ACAC1A7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOORSAVEDDATA_SETVALUE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean RegisterOnSavedValueChange(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOORSAVEDDATA_REGISTERONSAVEDVALUECHANGE_OFFSET))(this, a1, a2);
		}

		::System::Boolean UnregisterOnSavedValueChange(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOORSAVEDDATA_UNREGISTERONSAVEDVALUECHANGE_OFFSET))(this, a1, a2);
		}
	};
}
