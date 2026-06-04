#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYTARGETNPCEXISTS_METHOD_4_05B2DD96C586534C_OFFSET UNITYSDK_OFFSET(0x195DD800)
#define RPG_GAMECORE_BYTARGETNPCEXISTS_METHOD_4_0F60363FD1AA47D2_OFFSET UNITYSDK_OFFSET(0x195DD730)
#define RPG_GAMECORE_BYTARGETNPCEXISTS_METHOD_4_9978FE3283B2E34E_OFFSET UNITYSDK_OFFSET(0x195DD9B0)
#define RPG_GAMECORE_BYTARGETNPCEXISTS_METHOD_4_9D40DAABCA134DF2_OFFSET UNITYSDK_OFFSET(0x195DDA30)
#define RPG_GAMECORE_BYTARGETNPCEXISTS__CTOR_OFFSET UNITYSDK_OFFSET(0x195DD7B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByTargetNpcExists_TypeDefinitionIndex = 20460;

	class ByTargetNpcExists : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 GroupID; // 0x20
		::System::UInt32 GroupNpcID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETNPCEXISTS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_0F60363FD1AA47D2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTargetNpcExists*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTargetNpcExists*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETNPCEXISTS_METHOD_4_0F60363FD1AA47D2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_05B2DD96C586534C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTargetNpcExists* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTargetNpcExists*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETNPCEXISTS_METHOD_4_05B2DD96C586534C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9978FE3283B2E34E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetNpcExists*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetNpcExists*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETNPCEXISTS_METHOD_4_9978FE3283B2E34E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9D40DAABCA134DF2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetNpcExists* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetNpcExists*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETNPCEXISTS_METHOD_4_9D40DAABCA134DF2_OFFSET))(a1, a2);
		}
	};
}
