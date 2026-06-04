#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFILTERTARGETTYPE_METHOD_3_0FDA1EF33B54BEBC_OFFSET UNITYSDK_OFFSET(0x19D10260)
#define RPG_GAMECORE_TARGETFILTERTARGETTYPE_METHOD_3_BC71E2910CD61BB5_OFFSET UNITYSDK_OFFSET(0x19D10150)
#define RPG_GAMECORE_TARGETFILTERTARGETTYPE_METHOD_3_D9C196BAAFA25E8A_OFFSET UNITYSDK_OFFSET(0x19D10020)
#define RPG_GAMECORE_TARGETFILTERTARGETTYPE_METHOD_3_DBAA8A55402A4CB2_OFFSET UNITYSDK_OFFSET(0x19D101F0)
#define RPG_GAMECORE_TARGETFILTERTARGETTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x19D10130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFilterTargetType_TypeDefinitionIndex = 22588;

	class TargetFilterTargetType : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::RPG::GameCore::TargetEvaluator* ExcludeTargetType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFILTERTARGETTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D9C196BAAFA25E8A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFilterTargetType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFilterTargetType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFILTERTARGETTYPE_METHOD_3_D9C196BAAFA25E8A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BC71E2910CD61BB5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFilterTargetType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFilterTargetType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFILTERTARGETTYPE_METHOD_3_BC71E2910CD61BB5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DBAA8A55402A4CB2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFilterTargetType*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFilterTargetType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFILTERTARGETTYPE_METHOD_3_DBAA8A55402A4CB2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0FDA1EF33B54BEBC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFilterTargetType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFilterTargetType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFILTERTARGETTYPE_METHOD_3_0FDA1EF33B54BEBC_OFFSET))(a1, a2);
		}
	};
}
