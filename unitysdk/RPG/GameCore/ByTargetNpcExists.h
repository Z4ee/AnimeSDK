#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYTARGETNPCEXISTS_METHOD_4_05B2DD96C586534C_OFFSET UNITYSDK_OFFSET(0x1B2C22E0)
#define RPG_GAMECORE_BYTARGETNPCEXISTS_METHOD_4_453AF4C31EAEB7EB_OFFSET UNITYSDK_OFFSET(0x1B2C2490)
#define RPG_GAMECORE_BYTARGETNPCEXISTS_METHOD_4_7A763C6EE97FD084_OFFSET UNITYSDK_OFFSET(0x1B2C24C0)
#define RPG_GAMECORE_BYTARGETNPCEXISTS_METHOD_4_C2B932ED20111539_OFFSET UNITYSDK_OFFSET(0x1B2C22A0)
#define RPG_GAMECORE_BYTARGETNPCEXISTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2C22D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByTargetNpcExists_TypeDefinitionIndex = 20875;

	class ByTargetNpcExists : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 GroupID; // 0x20
		::System::UInt32 GroupNpcID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETNPCEXISTS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_C2B932ED20111539(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTargetNpcExists*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTargetNpcExists*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETNPCEXISTS_METHOD_4_C2B932ED20111539_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_05B2DD96C586534C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTargetNpcExists* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTargetNpcExists*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETNPCEXISTS_METHOD_4_05B2DD96C586534C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_453AF4C31EAEB7EB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetNpcExists*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetNpcExists*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETNPCEXISTS_METHOD_4_453AF4C31EAEB7EB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7A763C6EE97FD084(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetNpcExists* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetNpcExists*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETNPCEXISTS_METHOD_4_7A763C6EE97FD084_OFFSET))(a1, a2);
		}
	};
}
