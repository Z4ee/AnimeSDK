#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LittleGameEvent; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMSPLINEMOVEPOINT_METHOD_2_9362A82156713A28_OFFSET UNITYSDK_OFFSET(0x1D1042A0)
#define RPG_GAMECORE_FIVEDIMSPLINEMOVEPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D104440)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSplineMovePoint_TypeDefinitionIndex = 18348;

	class FiveDimSplineMovePoint : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* PointName; // 0x10
		::System::Single WaitTime; // 0x18
		::System::Single MoveSpeed; // 0x1C
		::RPG::GameCore::LittleGameEvent* OnEnterPoint; // 0x20
		::RPG::GameCore::LittleGameEvent* OnExitPoint; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSPLINEMOVEPOINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_9362A82156713A28(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSplineMovePoint*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSplineMovePoint*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSPLINEMOVEPOINT_METHOD_2_9362A82156713A28_OFFSET))(a1, a2);
		}
	};
}
