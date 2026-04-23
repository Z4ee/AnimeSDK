#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::Client { class SkillCounterItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_23621931BDBFAF77_METHOD_1_60451B2DE9D371C9_OFFSET UNITYSDK_OFFSET(0x9083060)
#define CLASS_1_23621931BDBFAF77_METHOD_1_C0D69F22318C86FE_OFFSET UNITYSDK_OFFSET(0x90833A0)
#define CLASS_1_23621931BDBFAF77_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9083010)
#define CLASS_1_23621931BDBFAF77_METHOD_1_DD36367A88EA26F2_OFFSET UNITYSDK_OFFSET(0x9083160)
#define CLASS_1_23621931BDBFAF77_METHOD_1_E6F4FD7AF7C4C2DC_OFFSET UNITYSDK_OFFSET(0x9082EF0)
#define CLASS_1_23621931BDBFAF77__CTOR_OFFSET UNITYSDK_OFFSET(0x9083470)

inline static constexpr unsigned int Class_1_23621931BDBFAF77_TypeDefinitionIndex = 66680;

class Class_1_23621931BDBFAF77 : public ::System::Object
{
public:
	::RPG::Client::PrefabLoadMeta* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::SkillCounterItem*>* Field_1_3; // 0x18
	::UnityEngine::GameObject* Field_1_0; // 0x20
	::UnityEngine::Transform* Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_23621931BDBFAF77__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E6F4FD7AF7C4C2DC(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_23621931BDBFAF77_METHOD_1_E6F4FD7AF7C4C2DC_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_23621931BDBFAF77_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_60451B2DE9D371C9(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_23621931BDBFAF77_METHOD_1_60451B2DE9D371C9_OFFSET))(this, a1);
	}

	::System::Void Method_1_DD36367A88EA26F2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_23621931BDBFAF77_METHOD_1_DD36367A88EA26F2_OFFSET))(this, a1);
	}

	::System::Void Method_1_C0D69F22318C86FE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_23621931BDBFAF77_METHOD_1_C0D69F22318C86FE_OFFSET))(this, a1);
	}
};
