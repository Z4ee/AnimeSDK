#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_38;
class Class_1_DEBCF596D13A3389;
class Class_2_465A9E6CC2B0EF21;
class FiveDimRenderingItem;
class FiveDimRenderingPanel;
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_BFB33CCC5E5EC7C9_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15F54550)
#define CLASS_1_BFB33CCC5E5EC7C9_METHOD_1_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x15F53830)
#define CLASS_1_BFB33CCC5E5EC7C9_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x15F54040)
#define CLASS_1_BFB33CCC5E5EC7C9_METHOD_1_289F28027FF47717_OFFSET UNITYSDK_OFFSET(0x15F53760)
#define CLASS_1_BFB33CCC5E5EC7C9_METHOD_1_3DEE0E4175C7C35F_OFFSET UNITYSDK_OFFSET(0x15F54420)
#define CLASS_1_BFB33CCC5E5EC7C9_METHOD_1_7FBAA229ED524F8E_OFFSET UNITYSDK_OFFSET(0x15F536D0)
#define CLASS_1_BFB33CCC5E5EC7C9_METHOD_1_96B524A8DF06FC0F_OFFSET UNITYSDK_OFFSET(0x15F54200)
#define CLASS_1_BFB33CCC5E5EC7C9_METHOD_1_AC5EE71116A40BAC_OFFSET UNITYSDK_OFFSET(0x15F540D0)
#define CLASS_1_BFB33CCC5E5EC7C9_METHOD_1_B2C52ACF9D9B435B_OFFSET UNITYSDK_OFFSET(0x15F53580)
#define CLASS_1_BFB33CCC5E5EC7C9_METHOD_1_FA2C8DD3A7E3B553_OFFSET UNITYSDK_OFFSET(0x15F53990)
#define CLASS_1_BFB33CCC5E5EC7C9__CTOR_OFFSET UNITYSDK_OFFSET(0x15F53460)

inline static constexpr unsigned int Class_1_BFB33CCC5E5EC7C9_TypeDefinitionIndex = 75153;

class Class_1_BFB33CCC5E5EC7C9 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_1; // 0x0
	::UnityEngine::GameObject* Field_1_2; // 0x10
	::Class_0_16E4307DCC419505_38* Field_1_3; // 0x18
	::UnityEngine::Transform* Field_1_4; // 0x20
	::Il2CppArray<::FiveDimRenderingItem*>* Field_1_5; // 0x28
	::Class_2_465A9E6CC2B0EF21* Field_1_6; // 0x30
	::UnityEngine::Transform* Field_1_7; // 0x38
	::UnityEngine::Animation* Field_1_8; // 0x40
	::FiveDimRenderingPanel* Field_1_9; // 0x48
	::UnityEngine::Transform* Field_1_10; // 0x50
	::System::Boolean Field_1_11; // 0x58

	::System::Void _ctor(::Class_0_16E4307DCC419505_38* a1, ::Class_1_DEBCF596D13A3389* a2, ::FiveDimRenderingPanel* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_38*, ::Class_1_DEBCF596D13A3389*, ::FiveDimRenderingPanel*))((::PBYTE)hIl2Cpp + CLASS_1_BFB33CCC5E5EC7C9__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B2C52ACF9D9B435B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BFB33CCC5E5EC7C9_METHOD_1_B2C52ACF9D9B435B_OFFSET))(this);
	}

	::System::Void Method_1_289F28027FF47717()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BFB33CCC5E5EC7C9_METHOD_1_289F28027FF47717_OFFSET))(this);
	}

	::System::Void Method_1_FA2C8DD3A7E3B553(::Class_2_465A9E6CC2B0EF21* a1, ::RPG::MVector3 a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_465A9E6CC2B0EF21*, ::RPG::MVector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_BFB33CCC5E5EC7C9_METHOD_1_FA2C8DD3A7E3B553_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_96B524A8DF06FC0F(::Class_2_465A9E6CC2B0EF21* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_465A9E6CC2B0EF21*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_BFB33CCC5E5EC7C9_METHOD_1_96B524A8DF06FC0F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_3DEE0E4175C7C35F(::System::Boolean a1, ::RPG::MVector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::MVector2))((::PBYTE)hIl2Cpp + CLASS_1_BFB33CCC5E5EC7C9_METHOD_1_3DEE0E4175C7C35F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7FBAA229ED524F8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BFB33CCC5E5EC7C9_METHOD_1_7FBAA229ED524F8E_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BFB33CCC5E5EC7C9_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_AC5EE71116A40BAC(::System::Single a1, ::System::Single a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_BFB33CCC5E5EC7C9_METHOD_1_AC5EE71116A40BAC_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BFB33CCC5E5EC7C9_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_1_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BFB33CCC5E5EC7C9_METHOD_1_078D85152011B919_OFFSET))(this);
	}
};
