#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MaterialReplacerBase.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace RPG::GameCore { class LevelNPCInfo; }
namespace RPG::GameCore { class RtLevelGroupInstanceInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_LEVELGROUPMATERIALREPLACER_METHOD_6_8A00650C96DAEFA1_OFFSET UNITYSDK_OFFSET(0x9976260)
#define RPG_CLIENT_LEVELGROUPMATERIALREPLACER_METHOD_6_C596D6C9B0B7B38D_OFFSET UNITYSDK_OFFSET(0x9976730)
#define RPG_CLIENT_LEVELGROUPMATERIALREPLACER__CTOR_OFFSET UNITYSDK_OFFSET(0x9976C50)
#define RPG_CLIENT_LEVELGROUPMATERIALREPLACER___GETNPCINFO_B__1_0_OFFSET UNITYSDK_OFFSET(0x9976C60)
#define RPG_CLIENT_LEVELGROUPMATERIALREPLACER___GETNPCINFO_B__1_1_OFFSET UNITYSDK_OFFSET(0x9976C80)

namespace RPG::Client
{
	inline static constexpr unsigned int LevelGroupMaterialReplacer_TypeDefinitionIndex = 56397;

	class LevelGroupMaterialReplacer : public ::RPG::Client::MaterialReplacerBase
	{
	public:
		::System::UInt32 PlaneID; // 0x28
		::System::UInt32 FloorID; // 0x2C
		::System::UInt32 GroupID; // 0x30
		::System::UInt32 ID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LEVELGROUPMATERIALREPLACER__CTOR_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::String*, ::System::Collections::Generic::IEnumerable_1<::System::String*>*> Method_6_8A00650C96DAEFA1()
		{
			return ((::System::ValueTuple_2<::System::String*, ::System::Collections::Generic::IEnumerable_1<::System::String*>*>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LEVELGROUPMATERIALREPLACER_METHOD_6_8A00650C96DAEFA1_OFFSET))(this);
		}

		::RPG::GameCore::LevelNPCInfo* Method_6_C596D6C9B0B7B38D()
		{
			return ((::RPG::GameCore::LevelNPCInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LEVELGROUPMATERIALREPLACER_METHOD_6_C596D6C9B0B7B38D_OFFSET))(this);
		}

		::System::Boolean __GetNpcInfo_b__1_0(::RPG::GameCore::RtLevelGroupInstanceInfo* instance)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RtLevelGroupInstanceInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LEVELGROUPMATERIALREPLACER___GETNPCINFO_B__1_0_OFFSET))(this, instance);
		}

		::System::Boolean __GetNpcInfo_b__1_1(::RPG::GameCore::LevelNPCInfo* npc)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LevelNPCInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LEVELGROUPMATERIALREPLACER___GETNPCINFO_B__1_1_OFFSET))(this, npc);
		}
	};
}
