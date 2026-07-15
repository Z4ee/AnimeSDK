#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_1_AB817CB39E494C61;
class Class_1_DDDB57AA67C3A9EA;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_EBD00563AC93D9F0_METHOD_2_4585B86A14B51A17_OFFSET UNITYSDK_OFFSET(0x18F6F520)
#define CLASS_2_EBD00563AC93D9F0_METHOD_2_4B4F1EFFB5ED5DCB_OFFSET UNITYSDK_OFFSET(0x18F6EB40)
#define CLASS_2_EBD00563AC93D9F0_METHOD_2_532795DE13579A51_OFFSET UNITYSDK_OFFSET(0x18F6EA90)
#define CLASS_2_EBD00563AC93D9F0_METHOD_2_735EE20B25F86BF4_OFFSET UNITYSDK_OFFSET(0x18F6E820)
#define CLASS_2_EBD00563AC93D9F0_METHOD_2_A455E3B9C7451749_OFFSET UNITYSDK_OFFSET(0x18F6EBE0)
#define CLASS_2_EBD00563AC93D9F0_METHOD_2_F206290BA342BA13_OFFSET UNITYSDK_OFFSET(0x18F6E8B0)
#define CLASS_2_EBD00563AC93D9F0__CTOR_OFFSET UNITYSDK_OFFSET(0x18F6F7E0)
#define CLASS_2_EBD00563AC93D9F0__ONBIND_OFFSET UNITYSDK_OFFSET(0x18F6E370)

inline static constexpr unsigned int Class_2_EBD00563AC93D9F0_TypeDefinitionIndex = 68068;

class Class_2_EBD00563AC93D9F0 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::UnityEngine::UI::Text* Field_2_1; // 0x60
	::UnityEngine::Animation* Field_2_2; // 0x68
	::UnityEngine::Transform* Field_2_3; // 0x70
	::UnityEngine::Transform* Field_2_4; // 0x78
	::UnityEngine::Transform* Field_2_5; // 0x80
	::UnityEngine::UI::Text* Field_2_6; // 0x88
	::UnityEngine::Transform* Field_2_7; // 0x90
	::UnityEngine::Animation* Field_2_8; // 0x98
	::UnityEngine::UI::Image* Field_2_9; // 0xA0
	::Class_1_AB817CB39E494C61* Field_2_10; // 0xA8
	::UnityEngine::Transform* Field_2_11; // 0xB0
	::UnityEngine::UI::Image* Field_2_12; // 0xB8
	::UnityEngine::Transform* Field_2_13; // 0xC0
	::UnityEngine::Transform* Field_2_14; // 0xC8
	::UnityEngine::Transform* Field_2_15; // 0xD0
	::UnityEngine::Color Field_2_16; // 0xD8
	::System::Boolean Field_2_17; // 0xE8
	::System::Single Field_2_18; // 0xEC
	::UnityEngine::Color Field_2_19; // 0xF0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EBD00563AC93D9F0__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EBD00563AC93D9F0__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_735EE20B25F86BF4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EBD00563AC93D9F0_METHOD_2_735EE20B25F86BF4_OFFSET))(this);
	}

	::System::Void Method_2_F206290BA342BA13()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EBD00563AC93D9F0_METHOD_2_F206290BA342BA13_OFFSET))(this);
	}

	::System::Void Method_2_532795DE13579A51(::Class_1_DDDB57AA67C3A9EA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*))((::PBYTE)hIl2Cpp + CLASS_2_EBD00563AC93D9F0_METHOD_2_532795DE13579A51_OFFSET))(this, a1);
	}

	::System::Void Method_2_4B4F1EFFB5ED5DCB(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_EBD00563AC93D9F0_METHOD_2_4B4F1EFFB5ED5DCB_OFFSET))(this, a1);
	}

	::System::Void Method_2_A455E3B9C7451749(::Class_1_DDDB57AA67C3A9EA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*))((::PBYTE)hIl2Cpp + CLASS_2_EBD00563AC93D9F0_METHOD_2_A455E3B9C7451749_OFFSET))(this, a1);
	}

	::System::Void Method_2_4585B86A14B51A17(::System::Boolean a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_EBD00563AC93D9F0_METHOD_2_4585B86A14B51A17_OFFSET))(this, a1, a2);
	}
};
