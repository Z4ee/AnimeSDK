#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LevelGraphType.h"
#include "unitysdk/RPG/GameCore/SharedValueType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelGraphValueSource; }
namespace RPG::GameCore { class LevelInitSequeceConfig; }
namespace RPG::GameCore { class LevelStartSequeceConfig; }
namespace RPG::GameCore { class SharedEntityEvent; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_LEVELGRAPHCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A42C20)
#define RPG_GAMECORE_LEVELGRAPHCONFIG_GETALLTASK_OFFSET UNITYSDK_OFFSET(0x18A42E40)
#define RPG_GAMECORE_LEVELGRAPHCONFIG_GETOBJECTCHILDTASK_OFFSET UNITYSDK_OFFSET(0x18A42E90)
#define RPG_GAMECORE_LEVELGRAPHCONFIG_TRYADDSHAREDVALUE_OFFSET UNITYSDK_OFFSET(0x18A431E0)
#define RPG_GAMECORE_LEVELGRAPHCONFIG_TRYREMOVESHAREDVALUE_OFFSET UNITYSDK_OFFSET(0x18A433A0)
#define RPG_GAMECORE_LEVELGRAPHCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18A42E30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelGraphConfig_TypeDefinitionIndex = 17403;

	class LevelGraphConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::LevelInitSequeceConfig*>* OnInitSequece; // 0x10
		::Il2CppArray<::RPG::GameCore::LevelStartSequeceConfig*>* OnStartSequece; // 0x18
		::RPG::GameCore::LevelGraphValueSource* ValueSource; // 0x20
		::RPG::GameCore::LevelGraphType Type; // 0x28
		::Il2CppArray<::RPG::GameCore::SharedEntityEvent*>* EntityEventList; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelGraphConfig*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelGraphConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHCONFIG_FROMBINARY_OFFSET))(array, val);
		}

		static ::System::Collections::Generic::List_1<::RPG::GameCore::TaskConfig*>* GetAllTask(::RPG::GameCore::LevelGraphConfig* config)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::TaskConfig*>*(*)(::RPG::GameCore::LevelGraphConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHCONFIG_GETALLTASK_OFFSET))(config);
		}

		static ::System::Void GetObjectChildTask(::System::Object* obj, ::System::Collections::Generic::List_1<::RPG::GameCore::TaskConfig*>*& results)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Collections::Generic::List_1<::RPG::GameCore::TaskConfig*>*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHCONFIG_GETOBJECTCHILDTASK_OFFSET))(obj, results);
		}

		::System::Void TryAddSharedValue(::RPG::GameCore::SharedValueType valueType, ::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SharedValueType, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHCONFIG_TRYADDSHAREDVALUE_OFFSET))(this, valueType, key);
		}

		::System::Void TryRemoveSharedValue(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHCONFIG_TRYREMOVESHAREDVALUE_OFFSET))(this, key);
		}
	};
}
