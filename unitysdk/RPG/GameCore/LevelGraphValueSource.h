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

#define RPG_GAMECORE_LEVELGRAPHVALUESOURCE_ADDORREPLACESHAREDVALUE_OFFSET UNITYSDK_OFFSET(0x1D1D27A0)
#define RPG_GAMECORE_LEVELGRAPHVALUESOURCE_ADDSHAREDFLOAT_OFFSET UNITYSDK_OFFSET(0x1D1D2810)
#define RPG_GAMECORE_LEVELGRAPHVALUESOURCE_ADDSHAREDINT_OFFSET UNITYSDK_OFFSET(0x1D1D2860)
#define RPG_GAMECORE_LEVELGRAPHVALUESOURCE_ADDSHAREDJSONCONFIGLIST_OFFSET UNITYSDK_OFFSET(0x1D1D29A0)
#define RPG_GAMECORE_LEVELGRAPHVALUESOURCE_ADDSHAREDJSONCONFIG_OFFSET UNITYSDK_OFFSET(0x1D1D2950)
#define RPG_GAMECORE_LEVELGRAPHVALUESOURCE_ADDSHAREDSTRINGLIST_OFFSET UNITYSDK_OFFSET(0x1D1D2900)
#define RPG_GAMECORE_LEVELGRAPHVALUESOURCE_ADDSHAREDSTRING_OFFSET UNITYSDK_OFFSET(0x1D1D28B0)
#define RPG_GAMECORE_LEVELGRAPHVALUESOURCE_ADDSHAREDUINT_OFFSET UNITYSDK_OFFSET(0x1D1D29F0)
#define RPG_GAMECORE_LEVELGRAPHVALUESOURCE_ADDSHAREDVALUE_OFFSET UNITYSDK_OFFSET(0x1D1D2D00)
#define RPG_GAMECORE_LEVELGRAPHVALUESOURCE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D1CEF20)
#define RPG_GAMECORE_LEVELGRAPHVALUESOURCE_GET_SHAREDVALUES_OFFSET UNITYSDK_OFFSET(0x1D1D26E0)
#define RPG_GAMECORE_LEVELGRAPHVALUESOURCE_ISKEYEXISTS_OFFSET UNITYSDK_OFFSET(0x1D1D27F0)
#define RPG_GAMECORE_LEVELGRAPHVALUESOURCE_OVERRIDESHAREDVALUEWITHSOURCE_OFFSET UNITYSDK_OFFSET(0x1D1D2700)
#define RPG_GAMECORE_LEVELGRAPHVALUESOURCE_REMOVESHAREDVALUE_OFFSET UNITYSDK_OFFSET(0x1D1D2A40)
#define RPG_GAMECORE_LEVELGRAPHVALUESOURCE_REPLACESHAREDVALUE_OFFSET UNITYSDK_OFFSET(0x1D1D2DC0)
#define RPG_GAMECORE_LEVELGRAPHVALUESOURCE_SET_SHAREDVALUES_OFFSET UNITYSDK_OFFSET(0x1D1D26F0)
#define RPG_GAMECORE_LEVELGRAPHVALUESOURCE_TRYADDVALUE_OFFSET UNITYSDK_OFFSET(0x1D1D24F0)
#define RPG_GAMECORE_LEVELGRAPHVALUESOURCE_TRYGETSHAREDVALUE_OFFSET UNITYSDK_OFFSET(0x1D1D2BF0)
#define RPG_GAMECORE_LEVELGRAPHVALUESOURCE_TRYREMOVEVALUE_OFFSET UNITYSDK_OFFSET(0x1D1D26A0)
#define RPG_GAMECORE_LEVELGRAPHVALUESOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1D24E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelGraphValueSource_TypeDefinitionIndex = 18097;

	class LevelGraphValueSource : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::SharedValue*>* Values; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHVALUESOURCE__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelGraphValueSource*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelGraphValueSource*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHVALUESOURCE_FROMBINARY_OFFSET))(a1, a2);
		}

		::Il2CppArray<::RPG::GameCore::SharedValue*>* get_SharedValues()
		{
			return ((::Il2CppArray<::RPG::GameCore::SharedValue*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHVALUESOURCE_GET_SHAREDVALUES_OFFSET))(this);
		}

		::System::Void set_SharedValues(::Il2CppArray<::RPG::GameCore::SharedValue*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::SharedValue*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHVALUESOURCE_SET_SHAREDVALUES_OFFSET))(this, a1);
		}

		::System::Void OverrideSharedValueWithSource(::RPG::GameCore::LevelGraphValueSource* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGraphValueSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHVALUESOURCE_OVERRIDESHAREDVALUEWITHSOURCE_OFFSET))(this, a1);
		}

		::System::Boolean TryAddValue(::RPG::GameCore::SharedValueType a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::SharedValueType, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHVALUESOURCE_TRYADDVALUE_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryRemoveValue(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHVALUESOURCE_TRYREMOVEVALUE_OFFSET))(this, a1);
		}

		::RPG::GameCore::SharedValue* TryGetSharedValue(::System::String* a1)
		{
			return ((::RPG::GameCore::SharedValue*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHVALUESOURCE_TRYGETSHAREDVALUE_OFFSET))(this, a1);
		}

		::RPG::GameCore::SharedFloat* AddSharedFloat(::System::String* a1)
		{
			return ((::RPG::GameCore::SharedFloat*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHVALUESOURCE_ADDSHAREDFLOAT_OFFSET))(this, a1);
		}

		::RPG::GameCore::SharedInt* AddSharedInt(::System::String* a1)
		{
			return ((::RPG::GameCore::SharedInt*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHVALUESOURCE_ADDSHAREDINT_OFFSET))(this, a1);
		}

		::RPG::GameCore::SharedString* AddSharedString(::System::String* a1)
		{
			return ((::RPG::GameCore::SharedString*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHVALUESOURCE_ADDSHAREDSTRING_OFFSET))(this, a1);
		}

		::RPG::GameCore::SharedStringList* AddSharedStringList(::System::String* a1)
		{
			return ((::RPG::GameCore::SharedStringList*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHVALUESOURCE_ADDSHAREDSTRINGLIST_OFFSET))(this, a1);
		}

		::RPG::GameCore::SharedJsonConfig* AddSharedJsonConfig(::System::String* a1)
		{
			return ((::RPG::GameCore::SharedJsonConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHVALUESOURCE_ADDSHAREDJSONCONFIG_OFFSET))(this, a1);
		}

		::RPG::GameCore::SharedJsonConfigList* AddSharedJsonConfigList(::System::String* a1)
		{
			return ((::RPG::GameCore::SharedJsonConfigList*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHVALUESOURCE_ADDSHAREDJSONCONFIGLIST_OFFSET))(this, a1);
		}

		::RPG::GameCore::SharedUint* AddSharedUint(::System::String* a1)
		{
			return ((::RPG::GameCore::SharedUint*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHVALUESOURCE_ADDSHAREDUINT_OFFSET))(this, a1);
		}

		::System::Boolean IsKeyExists(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHVALUESOURCE_ISKEYEXISTS_OFFSET))(this, a1);
		}

		::System::Void AddOrReplaceSharedValue(::RPG::GameCore::SharedValue* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SharedValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHVALUESOURCE_ADDORREPLACESHAREDVALUE_OFFSET))(this, a1);
		}

		::System::Void ReplaceSharedValue(::RPG::GameCore::SharedValue* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SharedValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHVALUESOURCE_REPLACESHAREDVALUE_OFFSET))(this, a1);
		}

		::System::Void AddSharedValue(::RPG::GameCore::SharedValue* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SharedValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHVALUESOURCE_ADDSHAREDVALUE_OFFSET))(this, a1);
		}

		::System::Void RemoveSharedValue(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHVALUESOURCE_REMOVESHAREDVALUE_OFFSET))(this, a1);
		}
	};
}
