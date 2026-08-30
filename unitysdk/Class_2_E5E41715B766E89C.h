#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/RPG/Client/BattleTargetStatus.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_2_E5E41715B766E89C_METHOD_2_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x11602650)
#define CLASS_2_E5E41715B766E89C_METHOD_2_726F914217BA3008_OFFSET UNITYSDK_OFFSET(0x11602510)
#define CLASS_2_E5E41715B766E89C_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x116024D0)
#define CLASS_2_E5E41715B766E89C__CTOR_OFFSET UNITYSDK_OFFSET(0x116026D0)
#define CLASS_2_E5E41715B766E89C__ONBIND_OFFSET UNITYSDK_OFFSET(0x11602370)

inline static constexpr unsigned int Class_2_E5E41715B766E89C_TypeDefinitionIndex = 71779;

class Class_2_E5E41715B766E89C : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* DJCBDJMACFH; // 0x0
	::UnityEngine::Transform* PCAEEEKLOJM; // 0x60
	::UnityEngine::Transform* KPJPDALFIIN; // 0x68
	::UnityEngine::Transform* HNALEMBOBFE; // 0x70
	::RPG::Client::BattleTargetStatus LODNGAGNLCB; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E5E41715B766E89C__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E5E41715B766E89C__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E5E41715B766E89C_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_726F914217BA3008(::RPG::Client::BattleTargetStatus a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleTargetStatus))((::PBYTE)hIl2Cpp + CLASS_2_E5E41715B766E89C_METHOD_2_726F914217BA3008_OFFSET))(this, a1);
	}

	::System::Void Method_2_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E5E41715B766E89C_METHOD_2_078D85152011B919_OFFSET))(this);
	}
};
