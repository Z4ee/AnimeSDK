#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CharacterEffect; }
namespace UnityEngine { class LineRenderer; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }

#define CLASS_2_ECFE369993AEEF11_CLASS_1_DC1725B707DAACCF_METHOD_1_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x152386C0)
#define CLASS_2_ECFE369993AEEF11_CLASS_1_DC1725B707DAACCF_METHOD_1_D0A7AC5663C34EC7_OFFSET UNITYSDK_OFFSET(0x15237FE0)
#define CLASS_2_ECFE369993AEEF11_CLASS_1_DC1725B707DAACCF_METHOD_1_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x15239090)
#define CLASS_2_ECFE369993AEEF11_CLASS_1_DC1725B707DAACCF__CTOR_OFFSET UNITYSDK_OFFSET(0x15238A30)

inline static constexpr unsigned int Class_2_ECFE369993AEEF11_Class_1_DC1725B707DAACCF_TypeDefinitionIndex = 66730;

class Class_2_ECFE369993AEEF11_Class_1_DC1725B707DAACCF : public ::System::Object
{
public:
	::UnityEngine::LineRenderer* Field_1_0; // 0x10
	::RPG::Client::CharacterEffect* Field_1_1; // 0x18
	::UnityEngine::Material* Field_1_2; // 0x20
	::UnityEngine::Material* Field_1_3; // 0x28
	::UnityEngine::Transform* Field_1_4; // 0x30
	::UnityEngine::Transform* Field_1_5; // 0x38
	::System::Single Field_1_6; // 0x40

	::System::Void _ctor(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::UnityEngine::LineRenderer* a3, ::UnityEngine::Transform* a4, ::RPG::Client::CharacterEffect* a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::LineRenderer*, ::UnityEngine::Transform*, ::RPG::Client::CharacterEffect*))((::PBYTE)hIl2Cpp + CLASS_2_ECFE369993AEEF11_CLASS_1_DC1725B707DAACCF__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_D0A7AC5663C34EC7(::System::Single a1, ::System::Boolean a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_ECFE369993AEEF11_CLASS_1_DC1725B707DAACCF_METHOD_1_D0A7AC5663C34EC7_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_ECFE369993AEEF11_CLASS_1_DC1725B707DAACCF_METHOD_1_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Void Method_1_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ECFE369993AEEF11_CLASS_1_DC1725B707DAACCF_METHOD_1_D0BD1377F2594D33_OFFSET))(this);
	}
};
