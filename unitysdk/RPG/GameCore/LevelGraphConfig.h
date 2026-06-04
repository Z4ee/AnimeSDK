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

#define RPG_GAMECORE_LEVELGRAPHCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19874B80)
#define RPG_GAMECORE_LEVELGRAPHCONFIG_GETALLTASK_OFFSET UNITYSDK_OFFSET(0x19874D90)
#define RPG_GAMECORE_LEVELGRAPHCONFIG_GETOBJECTCHILDTASK_OFFSET UNITYSDK_OFFSET(0x19874DE0)
#define RPG_GAMECORE_LEVELGRAPHCONFIG_TRYADDSHAREDVALUE_OFFSET UNITYSDK_OFFSET(0x19875190)
#define RPG_GAMECORE_LEVELGRAPHCONFIG_TRYREMOVESHAREDVALUE_OFFSET UNITYSDK_OFFSET(0x19875350)
#define RPG_GAMECORE_LEVELGRAPHCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19874D80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelGraphConfig_TypeDefinitionIndex = 17408;

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

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelGraphConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelGraphConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHCONFIG_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::List_1<::RPG::GameCore::TaskConfig*>* GetAllTask(::RPG::GameCore::LevelGraphConfig* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::TaskConfig*>*(*)(::RPG::GameCore::LevelGraphConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHCONFIG_GETALLTASK_OFFSET))(a1);
		}

		static ::System::Void GetObjectChildTask(::System::Object* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::TaskConfig*>*& a2)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Collections::Generic::List_1<::RPG::GameCore::TaskConfig*>*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHCONFIG_GETOBJECTCHILDTASK_OFFSET))(a1, a2);
		}

		::System::Void TryAddSharedValue(::RPG::GameCore::SharedValueType a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SharedValueType, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHCONFIG_TRYADDSHAREDVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void TryRemoveSharedValue(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHCONFIG_TRYREMOVESHAREDVALUE_OFFSET))(this, a1);
		}
	};
}
