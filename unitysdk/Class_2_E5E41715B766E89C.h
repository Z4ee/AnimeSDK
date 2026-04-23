#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/Client/BattleTargetStatus.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_2_E5E41715B766E89C_METHOD_2_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x11BA88E0)
#define CLASS_2_E5E41715B766E89C_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x11BA8A00)
#define CLASS_2_E5E41715B766E89C_METHOD_2_726F914217BA3008_OFFSET UNITYSDK_OFFSET(0x11BA87B0)
#define CLASS_2_E5E41715B766E89C_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11BA8770)
#define CLASS_2_E5E41715B766E89C__CTOR_OFFSET UNITYSDK_OFFSET(0x11BA8960)
#define CLASS_2_E5E41715B766E89C__ONBIND_OFFSET UNITYSDK_OFFSET(0x11BA85E0)
#define CLASS_2_E5E41715B766E89C___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x11BA89A0)

inline static constexpr unsigned int Class_2_E5E41715B766E89C_TypeDefinitionIndex = 66200;

class Class_2_E5E41715B766E89C : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_3; // 0x0
	::UnityEngine::Transform* Field_2_0; // 0x60
	::UnityEngine::Transform* Field_2_2; // 0x68
	::UnityEngine::Transform* Field_2_1; // 0x70
	::RPG::Client::BattleTargetStatus Field_2_4; // 0x78

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

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E5E41715B766E89C___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E5E41715B766E89C_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
