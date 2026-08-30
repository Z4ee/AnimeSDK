#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::Client { class SpaceZooCatData; }
namespace RPG::GameCore { class GetRuanMadeCakePerformanceID; }
namespace RPG::GameCore { class SpaceZooInteractionRow; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_08C3B35008E75668_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17F4CCC0)
#define CLASS_3_08C3B35008E75668_METHOD_3_F1C870D01294DAF7_OFFSET UNITYSDK_OFFSET(0x17F4C460)
#define CLASS_3_08C3B35008E75668_METHOD_3_F276CF53EB5B277A_OFFSET UNITYSDK_OFFSET(0x17F4C950)
#define CLASS_3_08C3B35008E75668_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17F4C1D0)
#define CLASS_3_08C3B35008E75668__CTOR_OFFSET UNITYSDK_OFFSET(0x17F4C030)

inline static constexpr unsigned int Class_3_08C3B35008E75668_TypeDefinitionIndex = 53181;

class Class_3_08C3B35008E75668 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::GetRuanMadeCakePerformanceID*>
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::SpaceZooCatData*>* ANGGPOICCEM; // 0x28
	::RPG::GameCore::StringHash NOGGCJDGBHM; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GetRuanMadeCakePerformanceID* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GetRuanMadeCakePerformanceID*))((::PBYTE)hIl2Cpp + CLASS_3_08C3B35008E75668__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_08C3B35008E75668_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_08C3B35008E75668_DISPOSE_OFFSET))(this);
	}

	::RPG::PoolList_1<::RPG::GameCore::SpaceZooInteractionRow*>* Method_3_F276CF53EB5B277A()
	{
		return ((::RPG::PoolList_1<::RPG::GameCore::SpaceZooInteractionRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_08C3B35008E75668_METHOD_3_F276CF53EB5B277A_OFFSET))(this);
	}

	::System::Void Method_3_F1C870D01294DAF7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_08C3B35008E75668_METHOD_3_F1C870D01294DAF7_OFFSET))(this);
	}
};
