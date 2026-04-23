#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8826F6D93ACAC1A7;
class Class_1_EA8C52ED5A48F642;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_FLOORSAVEDDATA_ADDVALUE_OFFSET UNITYSDK_OFFSET(0xA3C4D30)
#define RPG_CLIENT_FLOORSAVEDDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0xA3C4740)
#define RPG_CLIENT_FLOORSAVEDDATA_GETFLOORSAVEDVALUES_OFFSET UNITYSDK_OFFSET(0xA3C4840)
#define RPG_CLIENT_FLOORSAVEDDATA_GETVALUE_OFFSET UNITYSDK_OFFSET(0xA3C4880)
#define RPG_CLIENT_FLOORSAVEDDATA_ISEMPTY_OFFSET UNITYSDK_OFFSET(0xA3C47E0)
#define RPG_CLIENT_FLOORSAVEDDATA_REGISTERONSAVEDVALUECHANGE_OFFSET UNITYSDK_OFFSET(0xA3C5390)
#define RPG_CLIENT_FLOORSAVEDDATA_SETVALUE_OFFSET UNITYSDK_OFFSET(0xA3C5000)
#define RPG_CLIENT_FLOORSAVEDDATA_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0xA3C4BA0)
#define RPG_CLIENT_FLOORSAVEDDATA_UNREGISTERONSAVEDVALUECHANGE_OFFSET UNITYSDK_OFFSET(0xA3C5580)
#define RPG_CLIENT_FLOORSAVEDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA3C46C0)

namespace RPG::Client
{
	inline static constexpr unsigned int FloorSavedData_TypeDefinitionIndex = 57286;

	class FloorSavedData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_EA8C52ED5A48F642*>* _SavedValuesByNameHash; // 0x10

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

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_EA8C52ED5A48F642*>* GetFloorSavedValues()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_EA8C52ED5A48F642*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOORSAVEDDATA_GETFLOORSAVEDVALUES_OFFSET))(this);
		}

		::System::Int16 GetValue(::System::String* sKey, ::Class_1_8826F6D93ACAC1A7* info)
		{
			return ((::System::Int16(*)(::PVOID, ::System::String*, ::Class_1_8826F6D93ACAC1A7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOORSAVEDDATA_GETVALUE_OFFSET))(this, sKey, info);
		}

		::System::Boolean TryGetValue(::System::String* sKey, ::System::Int16& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int16&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOORSAVEDDATA_TRYGETVALUE_OFFSET))(this, sKey, value);
		}

		::System::Void AddValue(::System::String* sKey, ::System::Int16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int16))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOORSAVEDDATA_ADDVALUE_OFFSET))(this, sKey, value);
		}

		::System::Void SetValue(::System::String* sKey, ::System::Int16 value, ::Class_1_8826F6D93ACAC1A7* info)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int16, ::Class_1_8826F6D93ACAC1A7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOORSAVEDDATA_SETVALUE_OFFSET))(this, sKey, value, info);
		}

		::System::Boolean RegisterOnSavedValueChange(::System::String* sKey, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOORSAVEDDATA_REGISTERONSAVEDVALUECHANGE_OFFSET))(this, sKey, callback);
		}

		::System::Boolean UnregisterOnSavedValueChange(::System::String* sKey, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOORSAVEDDATA_UNREGISTERONSAVEDVALUECHANGE_OFFSET))(this, sKey, callback);
		}
	};
}
