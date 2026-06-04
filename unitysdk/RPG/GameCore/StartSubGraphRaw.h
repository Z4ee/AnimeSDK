#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SubLevelGraphDynamicOverrideSet; }
namespace System { class String; }

#define RPG_GAMECORE_STARTSUBGRAPHRAW_METHOD_3_417528287A40BC9C_OFFSET UNITYSDK_OFFSET(0x19CB9240)
#define RPG_GAMECORE_STARTSUBGRAPHRAW_METHOD_3_6C43293600FF5166_OFFSET UNITYSDK_OFFSET(0x19CB92C0)
#define RPG_GAMECORE_STARTSUBGRAPHRAW__CTOR_OFFSET UNITYSDK_OFFSET(0x19CB9290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StartSubGraphRaw_TypeDefinitionIndex = 19575;

	class StartSubGraphRaw : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* LevelGraphPath; // 0x18
		::RPG::GameCore::SubLevelGraphDynamicOverrideSet* DynamicOverrideSet; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTSUBGRAPHRAW__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_417528287A40BC9C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StartSubGraphRaw*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StartSubGraphRaw*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTSUBGRAPHRAW_METHOD_3_417528287A40BC9C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6C43293600FF5166(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StartSubGraphRaw* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StartSubGraphRaw*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTSUBGRAPHRAW_METHOD_3_6C43293600FF5166_OFFSET))(a1, a2);
		}
	};
}
