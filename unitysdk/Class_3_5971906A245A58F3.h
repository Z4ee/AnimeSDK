#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::Client { class MapPropDef; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TraceOrigamiByColony; }

#define CLASS_3_5971906A245A58F3_METHOD_3_524D12B8543C5640_OFFSET UNITYSDK_OFFSET(0x155630B0)
#define CLASS_3_5971906A245A58F3_METHOD_3_DC091D7193947F4D_OFFSET UNITYSDK_OFFSET(0x15563190)
#define CLASS_3_5971906A245A58F3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15562750)
#define CLASS_3_5971906A245A58F3__CTOR_OFFSET UNITYSDK_OFFSET(0x15562720)

inline static constexpr unsigned int Class_3_5971906A245A58F3_TypeDefinitionIndex = 53670;

class Class_3_5971906A245A58F3 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TraceOrigamiByColony*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TraceOrigamiByColony* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TraceOrigamiByColony*))((::PBYTE)hIl2Cpp + CLASS_3_5971906A245A58F3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5971906A245A58F3_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_DC091D7193947F4D(::RPG::Client::MapPropDef* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapPropDef*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_5971906A245A58F3_METHOD_3_DC091D7193947F4D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_524D12B8543C5640(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_5971906A245A58F3_METHOD_3_524D12B8543C5640_OFFSET))(this, a1, a2, a3);
	}
};
