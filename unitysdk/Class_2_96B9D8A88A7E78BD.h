#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Class_3_A2BC57CDDA246645_Mode.h"

class Class_1_AB817CB39E494C61;
class Class_1_DDDB57AA67C3A9EA;
class Class_2_EBD00563AC93D9F0;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define CLASS_2_96B9D8A88A7E78BD_METHOD_2_1ABF1CBED7A4AF0A_OFFSET UNITYSDK_OFFSET(0x161521D0)
#define CLASS_2_96B9D8A88A7E78BD_METHOD_2_5857FF99C65608F5_OFFSET UNITYSDK_OFFSET(0x161525F0)
#define CLASS_2_96B9D8A88A7E78BD_METHOD_2_6CB1D198EE7238C6_OFFSET UNITYSDK_OFFSET(0x16152570)
#define CLASS_2_96B9D8A88A7E78BD_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x16152110)
#define CLASS_2_96B9D8A88A7E78BD_METHOD_2_C27BA6BD7BDCF785_OFFSET UNITYSDK_OFFSET(0x161523A0)
#define CLASS_2_96B9D8A88A7E78BD__CTOR_OFFSET UNITYSDK_OFFSET(0x16152690)
#define CLASS_2_96B9D8A88A7E78BD__ONBIND_OFFSET UNITYSDK_OFFSET(0x16151E30)
#define CLASS_2_96B9D8A88A7E78BD__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x16152350)

inline static constexpr unsigned int Class_2_96B9D8A88A7E78BD_TypeDefinitionIndex = 68082;

class Class_2_96B9D8A88A7E78BD : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::Class_2_EBD00563AC93D9F0* Field_2_1; // 0x60
	::UnityEngine::Transform* Field_2_2; // 0x68
	::Class_1_AB817CB39E494C61* Field_2_3; // 0x70
	::UnityEngine::Transform* Field_2_4; // 0x78
	::UnityEngine::Transform* Field_2_5; // 0x80
	::UnityEngine::Transform* Field_2_6; // 0x88
	::UnityEngine::Transform* Field_2_7; // 0x90
	::UnityEngine::Transform* Field_2_8; // 0x98
	::UnityEngine::Animation* Field_2_9; // 0xA0
	::Class_3_A2BC57CDDA246645_Mode Field_2_10; // 0xA8
	::System::Boolean Field_2_11; // 0xAC
	::System::Single Field_2_12; // 0xB0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96B9D8A88A7E78BD__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96B9D8A88A7E78BD__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96B9D8A88A7E78BD_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_1ABF1CBED7A4AF0A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96B9D8A88A7E78BD_METHOD_2_1ABF1CBED7A4AF0A_OFFSET))(this);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96B9D8A88A7E78BD__ONDISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_6CB1D198EE7238C6(::Class_1_DDDB57AA67C3A9EA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*))((::PBYTE)hIl2Cpp + CLASS_2_96B9D8A88A7E78BD_METHOD_2_6CB1D198EE7238C6_OFFSET))(this, a1);
	}

	::System::Void Method_2_C27BA6BD7BDCF785(::System::Boolean a1, ::Class_3_A2BC57CDDA246645_Mode a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_3_A2BC57CDDA246645_Mode))((::PBYTE)hIl2Cpp + CLASS_2_96B9D8A88A7E78BD_METHOD_2_C27BA6BD7BDCF785_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5857FF99C65608F5(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_96B9D8A88A7E78BD_METHOD_2_5857FF99C65608F5_OFFSET))(this, a1);
	}
};
