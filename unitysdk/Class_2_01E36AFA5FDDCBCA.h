#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_2_01E36AFA5FDDCBCA_METHOD_2_10633FB61A0D692F_OFFSET UNITYSDK_OFFSET(0x1445FD50)
#define CLASS_2_01E36AFA5FDDCBCA_METHOD_2_6F8D0E1AE17C99D8_OFFSET UNITYSDK_OFFSET(0x1445FF30)
#define CLASS_2_01E36AFA5FDDCBCA__CTOR_OFFSET UNITYSDK_OFFSET(0x1445FFC0)
#define CLASS_2_01E36AFA5FDDCBCA__ONBIND_OFFSET UNITYSDK_OFFSET(0x1445FB50)
#define CLASS_2_01E36AFA5FDDCBCA___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x1445FFF0)

inline static constexpr unsigned int Class_2_01E36AFA5FDDCBCA_TypeDefinitionIndex = 67519;

class Class_2_01E36AFA5FDDCBCA : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::UnityEngine::Transform* Field_2_1; // 0x60
	::UnityEngine::Transform* Field_2_2; // 0x68
	::UnityEngine::Transform* Field_2_3; // 0x70
	::UnityEngine::Transform* Field_2_4; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01E36AFA5FDDCBCA__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01E36AFA5FDDCBCA__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_10633FB61A0D692F(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_01E36AFA5FDDCBCA_METHOD_2_10633FB61A0D692F_OFFSET))(this, a1);
	}

	::System::Void Method_2_6F8D0E1AE17C99D8(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_01E36AFA5FDDCBCA_METHOD_2_6F8D0E1AE17C99D8_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01E36AFA5FDDCBCA___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
