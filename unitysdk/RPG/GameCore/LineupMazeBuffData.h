#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_LINEUPMAZEBUFFDATA_METHOD_2_F05E48DA6C73226C_OFFSET UNITYSDK_OFFSET(0x1DD60090)
#define RPG_GAMECORE_LINEUPMAZEBUFFDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD60250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LineupMazeBuffData_TypeDefinitionIndex = 17919;

	class LineupMazeBuffData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 OwnerCharacterIndex; // 0x10
		::System::UInt32 ID; // 0x14
		::System::UInt32 Level; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* ExtraParamMap; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPMAZEBUFFDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F05E48DA6C73226C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LineupMazeBuffData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LineupMazeBuffData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPMAZEBUFFDATA_METHOD_2_F05E48DA6C73226C_OFFSET))(a1, a2);
		}
	};
}
