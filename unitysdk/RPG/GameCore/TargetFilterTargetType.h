#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFILTERTARGETTYPE_METHOD_3_1D6AE1E55B096910_OFFSET UNITYSDK_OFFSET(0x1E1B8A80)
#define RPG_GAMECORE_TARGETFILTERTARGETTYPE_METHOD_3_3C6B48B7F2803188_OFFSET UNITYSDK_OFFSET(0x1E1B8A30)
#define RPG_GAMECORE_TARGETFILTERTARGETTYPE_METHOD_3_BC71E2910CD61BB5_OFFSET UNITYSDK_OFFSET(0x1E1B8990)
#define RPG_GAMECORE_TARGETFILTERTARGETTYPE_METHOD_3_D196456F770F0121_OFFSET UNITYSDK_OFFSET(0x1E1B88B0)
#define RPG_GAMECORE_TARGETFILTERTARGETTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1B8980)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFilterTargetType_TypeDefinitionIndex = 23631;

	class TargetFilterTargetType : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::RPG::GameCore::TargetEvaluator* ExcludeTargetType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFILTERTARGETTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D196456F770F0121(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFilterTargetType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFilterTargetType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFILTERTARGETTYPE_METHOD_3_D196456F770F0121_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BC71E2910CD61BB5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFilterTargetType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFilterTargetType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFILTERTARGETTYPE_METHOD_3_BC71E2910CD61BB5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3C6B48B7F2803188(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFilterTargetType*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFilterTargetType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFILTERTARGETTYPE_METHOD_3_3C6B48B7F2803188_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1D6AE1E55B096910(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFilterTargetType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFilterTargetType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFILTERTARGETTYPE_METHOD_3_1D6AE1E55B096910_OFFSET))(a1, a2);
		}
	};
}
