#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/SharedValueType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SharedFloat; }
namespace RPG::GameCore { class SharedInt; }
namespace RPG::GameCore { class SharedJsonConfig; }
namespace RPG::GameCore { class SharedJsonConfigList; }
namespace RPG::GameCore { class SharedString; }
namespace RPG::GameCore { class SharedStringList; }
namespace RPG::GameCore { class SharedUint; }
namespace RPG::GameCore { class SharedValue; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELGRAPHVALUESOURCE_ADDORREPLACESHAREDVALUE_OFFSET UNITYSDK_OFFSET(0x17336BF0)
#define RPG_GAMECORE_LEVELGRAPHVALUESOURCE_ADDSHAREDFLOAT_OFFSET UNITYSDK_OFFSET(0x17336C60)
#define RPG_GAMECORE_LEVELGRAPHVALUESOURCE_ADDSHAREDINT_OFFSET UNITYSDK_OFFSET(0x17336CB0)
#define RPG_GAMECORE_LEVELGRAPHVALUESOURCE_ADDSHAREDJSONCONFIGLIST_OFFSET UNITYSDK_OFFSET(0x17336DF0)
#define RPG_GAMECORE_LEVELGRAPHVALUESOURCE_ADDSHAREDJSONCONFIG_OFFSET UNITYSDK_OFFSET(0x17336DA0)
#define RPG_GAMECORE_LEVELGRAPHVALUESOURCE_ADDSHAREDSTRINGLIST_OFFSET UNITYSDK_OFFSET(0x17336D50)
#define RPG_GAMECORE_LEVELGRAPHVALUESOURCE_ADDSHAREDSTRING_OFFSET UNITYSDK_OFFSET(0x17336D00)
#define RPG_GAMECORE_LEVELGRAPHVALUESOURCE_ADDSHAREDUINT_OFFSET UNITYSDK_OFFSET(0x17336E40)
#define RPG_GAMECORE_LEVELGRAPHVALUESOURCE_ADDSHAREDVALUE_OFFSET UNITYSDK_OFFSET(0x173371B0)
#define RPG_GAMECORE_LEVELGRAPHVALUESOURCE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17333B60)
#define RPG_GAMECORE_LEVELGRAPHVALUESOURCE_GET_SHAREDVALUES_OFFSET UNITYSDK_OFFSET(0x17336B20)
#define RPG_GAMECORE_LEVELGRAPHVALUESOURCE_ISKEYEXISTS_OFFSET UNITYSDK_OFFSET(0x17336C40)
#define RPG_GAMECORE_LEVELGRAPHVALUESOURCE_OVERRIDESHAREDVALUEWITHSOURCE_OFFSET UNITYSDK_OFFSET(0x17336B40)
#define RPG_GAMECORE_LEVELGRAPHVALUESOURCE_REMOVESHAREDVALUE_OFFSET UNITYSDK_OFFSET(0x17336E90)
#define RPG_GAMECORE_LEVELGRAPHVALUESOURCE_REPLACESHAREDVALUE_OFFSET UNITYSDK_OFFSET(0x173372A0)
#define RPG_GAMECORE_LEVELGRAPHVALUESOURCE_SET_SHAREDVALUES_OFFSET UNITYSDK_OFFSET(0x17336B30)
#define RPG_GAMECORE_LEVELGRAPHVALUESOURCE_TRYADDVALUE_OFFSET UNITYSDK_OFFSET(0x17336930)
#define RPG_GAMECORE_LEVELGRAPHVALUESOURCE_TRYGETSHAREDVALUE_OFFSET UNITYSDK_OFFSET(0x17337090)
#define RPG_GAMECORE_LEVELGRAPHVALUESOURCE_TRYREMOVEVALUE_OFFSET UNITYSDK_OFFSET(0x17336AE0)
#define RPG_GAMECORE_LEVELGRAPHVALUESOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x17336920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelGraphValueSource_TypeDefinitionIndex = 16807;

	class LevelGraphValueSource : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::SharedValue*>* Values; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHVALUESOURCE__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelGraphValueSource*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelGraphValueSource*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHVALUESOURCE_FROMBINARY_OFFSET))(array, val);
		}

		::Il2CppArray<::RPG::GameCore::SharedValue*>* get_SharedValues()
		{
			return ((::Il2CppArray<::RPG::GameCore::SharedValue*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHVALUESOURCE_GET_SHAREDVALUES_OFFSET))(this);
		}

		::System::Void set_SharedValues(::Il2CppArray<::RPG::GameCore::SharedValue*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::SharedValue*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHVALUESOURCE_SET_SHAREDVALUES_OFFSET))(this, value);
		}

		::System::Void OverrideSharedValueWithSource(::RPG::GameCore::LevelGraphValueSource* source)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGraphValueSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHVALUESOURCE_OVERRIDESHAREDVALUEWITHSOURCE_OFFSET))(this, source);
		}

		::System::Boolean TryAddValue(::RPG::GameCore::SharedValueType type, ::System::String* key)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::SharedValueType, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHVALUESOURCE_TRYADDVALUE_OFFSET))(this, type, key);
		}

		::System::Boolean TryRemoveValue(::System::String* key)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHVALUESOURCE_TRYREMOVEVALUE_OFFSET))(this, key);
		}

		::RPG::GameCore::SharedValue* TryGetSharedValue(::System::String* key)
		{
			return ((::RPG::GameCore::SharedValue*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHVALUESOURCE_TRYGETSHAREDVALUE_OFFSET))(this, key);
		}

		::RPG::GameCore::SharedFloat* AddSharedFloat(::System::String* key)
		{
			return ((::RPG::GameCore::SharedFloat*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHVALUESOURCE_ADDSHAREDFLOAT_OFFSET))(this, key);
		}

		::RPG::GameCore::SharedInt* AddSharedInt(::System::String* key)
		{
			return ((::RPG::GameCore::SharedInt*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHVALUESOURCE_ADDSHAREDINT_OFFSET))(this, key);
		}

		::RPG::GameCore::SharedString* AddSharedString(::System::String* key)
		{
			return ((::RPG::GameCore::SharedString*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHVALUESOURCE_ADDSHAREDSTRING_OFFSET))(this, key);
		}

		::RPG::GameCore::SharedStringList* AddSharedStringList(::System::String* key)
		{
			return ((::RPG::GameCore::SharedStringList*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHVALUESOURCE_ADDSHAREDSTRINGLIST_OFFSET))(this, key);
		}

		::RPG::GameCore::SharedJsonConfig* AddSharedJsonConfig(::System::String* key)
		{
			return ((::RPG::GameCore::SharedJsonConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHVALUESOURCE_ADDSHAREDJSONCONFIG_OFFSET))(this, key);
		}

		::RPG::GameCore::SharedJsonConfigList* AddSharedJsonConfigList(::System::String* key)
		{
			return ((::RPG::GameCore::SharedJsonConfigList*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHVALUESOURCE_ADDSHAREDJSONCONFIGLIST_OFFSET))(this, key);
		}

		::RPG::GameCore::SharedUint* AddSharedUint(::System::String* key)
		{
			return ((::RPG::GameCore::SharedUint*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHVALUESOURCE_ADDSHAREDUINT_OFFSET))(this, key);
		}

		::System::Boolean IsKeyExists(::System::String* key)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHVALUESOURCE_ISKEYEXISTS_OFFSET))(this, key);
		}

		::System::Void AddOrReplaceSharedValue(::RPG::GameCore::SharedValue* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SharedValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHVALUESOURCE_ADDORREPLACESHAREDVALUE_OFFSET))(this, value);
		}

		::System::Void ReplaceSharedValue(::RPG::GameCore::SharedValue* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SharedValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHVALUESOURCE_REPLACESHAREDVALUE_OFFSET))(this, value);
		}

		::System::Void AddSharedValue(::RPG::GameCore::SharedValue* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SharedValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHVALUESOURCE_ADDSHAREDVALUE_OFFSET))(this, value);
		}

		::System::Void RemoveSharedValue(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHVALUESOURCE_REMOVESHAREDVALUE_OFFSET))(this, key);
		}
	};
}
