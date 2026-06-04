#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Class_3_9C3C83892C6E19EC_Mode.h"

class Class_1_AB817CB39E494C61;
class Class_1_DDDB57AA67C3A9EA;
class Class_2_61E533321106B742;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define CLASS_2_96B9D8A88A7E78BD_METHOD_2_1ABF1CBED7A4AF0A_OFFSET UNITYSDK_OFFSET(0xAFC7870)
#define CLASS_2_96B9D8A88A7E78BD_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0xAFC7E20)
#define CLASS_2_96B9D8A88A7E78BD_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xAFC7DC0)
#define CLASS_2_96B9D8A88A7E78BD_METHOD_2_5857FF99C65608F5_OFFSET UNITYSDK_OFFSET(0xAFC7C90)
#define CLASS_2_96B9D8A88A7E78BD_METHOD_2_6CB1D198EE7238C6_OFFSET UNITYSDK_OFFSET(0xAFC7C00)
#define CLASS_2_96B9D8A88A7E78BD_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xAFC77B0)
#define CLASS_2_96B9D8A88A7E78BD_METHOD_2_C27BA6BD7BDCF785_OFFSET UNITYSDK_OFFSET(0xAFC7A40)
#define CLASS_2_96B9D8A88A7E78BD__CTOR_OFFSET UNITYSDK_OFFSET(0xAFC7D30)
#define CLASS_2_96B9D8A88A7E78BD__ONBIND_OFFSET UNITYSDK_OFFSET(0xAFC74E0)
#define CLASS_2_96B9D8A88A7E78BD__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xAFC79F0)
#define CLASS_2_96B9D8A88A7E78BD___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xAFC7D60)
#define CLASS_2_96B9D8A88A7E78BD___IFIXBASEPROXY__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xAFC7E80)

inline static constexpr unsigned int Class_2_96B9D8A88A7E78BD_TypeDefinitionIndex = 66646;

class Class_2_96B9D8A88A7E78BD : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::Class_1_AB817CB39E494C61* Field_2_1; // 0x60
	::UnityEngine::Transform* Field_2_2; // 0x68
	::UnityEngine::Transform* Field_2_3; // 0x70
	::UnityEngine::Transform* Field_2_4; // 0x78
	::UnityEngine::Transform* Field_2_5; // 0x80
	::UnityEngine::Animation* Field_2_6; // 0x88
	::UnityEngine::Transform* Field_2_7; // 0x90
	::UnityEngine::Transform* Field_2_8; // 0x98
	::Class_2_61E533321106B742* Field_2_9; // 0xA0
	::System::Single Field_2_10; // 0xA8
	::System::Boolean Field_2_11; // 0xAC
	::Class_3_9C3C83892C6E19EC_Mode Field_2_12; // 0xB0

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

	::System::Void Method_2_C27BA6BD7BDCF785(::System::Boolean a1, ::Class_3_9C3C83892C6E19EC_Mode a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_3_9C3C83892C6E19EC_Mode))((::PBYTE)hIl2Cpp + CLASS_2_96B9D8A88A7E78BD_METHOD_2_C27BA6BD7BDCF785_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5857FF99C65608F5(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_96B9D8A88A7E78BD_METHOD_2_5857FF99C65608F5_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96B9D8A88A7E78BD___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96B9D8A88A7E78BD_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96B9D8A88A7E78BD_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96B9D8A88A7E78BD___IFIXBASEPROXY__ONDISPOSE_OFFSET))(this);
	}
};
