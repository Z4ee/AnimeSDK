#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHALIVESOURCEENTITY_METHOD_3_16EE6E2A35D8C9C7_OFFSET UNITYSDK_OFFSET(0x1D5A8290)
#define RPG_GAMECORE_TARGETFETCHALIVESOURCEENTITY_METHOD_3_16FB87CF2238029D_OFFSET UNITYSDK_OFFSET(0x1D5A81B0)
#define RPG_GAMECORE_TARGETFETCHALIVESOURCEENTITY_METHOD_3_82F137E52733B8FA_OFFSET UNITYSDK_OFFSET(0x1D5A82B0)
#define RPG_GAMECORE_TARGETFETCHALIVESOURCEENTITY_METHOD_3_C668D31E242F9EB8_OFFSET UNITYSDK_OFFSET(0x1D5A8230)
#define RPG_GAMECORE_TARGETFETCHALIVESOURCEENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A8220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAliveSourceEntity_TypeDefinitionIndex = 23692;

	class TargetFetchAliveSourceEntity : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHALIVESOURCEENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_16FB87CF2238029D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAliveSourceEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAliveSourceEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHALIVESOURCEENTITY_METHOD_3_16FB87CF2238029D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C668D31E242F9EB8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAliveSourceEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAliveSourceEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHALIVESOURCEENTITY_METHOD_3_C668D31E242F9EB8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_16EE6E2A35D8C9C7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAliveSourceEntity*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAliveSourceEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHALIVESOURCEENTITY_METHOD_3_16EE6E2A35D8C9C7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_82F137E52733B8FA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAliveSourceEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAliveSourceEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHALIVESOURCEENTITY_METHOD_3_82F137E52733B8FA_OFFSET))(a1, a2);
		}
	};
}
