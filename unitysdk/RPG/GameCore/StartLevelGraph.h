#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_STARTLEVELGRAPH_METHOD_3_143460D953587014_OFFSET UNITYSDK_OFFSET(0x17774C70)
#define RPG_GAMECORE_STARTLEVELGRAPH_METHOD_3_5F8291923D34B3E2_OFFSET UNITYSDK_OFFSET(0x17774BF0)
#define RPG_GAMECORE_STARTLEVELGRAPH__CTOR_OFFSET UNITYSDK_OFFSET(0x17774C40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StartLevelGraph_TypeDefinitionIndex = 21644;

	class StartLevelGraph : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* LoadFromTableKey; // 0x18
		::System::String* Path; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTLEVELGRAPH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5F8291923D34B3E2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StartLevelGraph*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StartLevelGraph*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTLEVELGRAPH_METHOD_3_5F8291923D34B3E2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_143460D953587014(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StartLevelGraph* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StartLevelGraph*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTLEVELGRAPH_METHOD_3_143460D953587014_OFFSET))(a1, a2);
		}
	};
}
