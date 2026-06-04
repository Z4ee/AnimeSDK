#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class CRPVCBackground; }
namespace RPG::Client { class SplitScreenVCControl; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::Rendering { class CRPVirtualCamera; }

#define CLASS_2_76EC52D2BB9BE399_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13A61EF0)
#define CLASS_2_76EC52D2BB9BE399_METHOD_2_155EBEDB7DB8B929_OFFSET UNITYSDK_OFFSET(0x13A62540)
#define CLASS_2_76EC52D2BB9BE399_METHOD_2_2A820A17D62802B8_OFFSET UNITYSDK_OFFSET(0x13A5FD40)
#define CLASS_2_76EC52D2BB9BE399_METHOD_2_3FA1D91279A7F0C8_OFFSET UNITYSDK_OFFSET(0x13A62640)
#define CLASS_2_76EC52D2BB9BE399_METHOD_2_6916CB2AB9451DD7_OFFSET UNITYSDK_OFFSET(0x13A62AC0)
#define CLASS_2_76EC52D2BB9BE399_METHOD_2_6FCD5ED083C67CF0_OFFSET UNITYSDK_OFFSET(0x13A624A0)
#define CLASS_2_76EC52D2BB9BE399_METHOD_2_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x13A61EA0)
#define CLASS_2_76EC52D2BB9BE399_METHOD_2_7EAA8879197594BA_1_OFFSET UNITYSDK_OFFSET(0x13A618D0)
#define CLASS_2_76EC52D2BB9BE399_METHOD_2_7EAA8879197594BA_OFFSET UNITYSDK_OFFSET(0x13A61410)
#define CLASS_2_76EC52D2BB9BE399_METHOD_2_861970C5F2C21AB2_OFFSET UNITYSDK_OFFSET(0x13A62CF0)
#define CLASS_2_76EC52D2BB9BE399_METHOD_2_8DF47EF45ABD2A6C_OFFSET UNITYSDK_OFFSET(0x13A61330)
#define CLASS_2_76EC52D2BB9BE399_METHOD_2_9B2E710EB9D49BA6_OFFSET UNITYSDK_OFFSET(0x13A62740)
#define CLASS_2_76EC52D2BB9BE399_METHOD_2_B56A5B107683EF74_OFFSET UNITYSDK_OFFSET(0x13A5FC70)
#define CLASS_2_76EC52D2BB9BE399_METHOD_2_BA00D508D791624D_OFFSET UNITYSDK_OFFSET(0x13A62400)
#define CLASS_2_76EC52D2BB9BE399_METHOD_2_C8E2469222842786_OFFSET UNITYSDK_OFFSET(0x13A5FCE0)
#define CLASS_2_76EC52D2BB9BE399_METHOD_2_CC7BB18E16D1D783_OFFSET UNITYSDK_OFFSET(0x13A61DA0)
#define CLASS_2_76EC52D2BB9BE399_METHOD_2_DB4D7D07EC5D0482_OFFSET UNITYSDK_OFFSET(0x13A623A0)
#define CLASS_2_76EC52D2BB9BE399_METHOD_2_DEDB6D705D6319DA_OFFSET UNITYSDK_OFFSET(0x13A62DD0)
#define CLASS_2_76EC52D2BB9BE399__CTOR_OFFSET UNITYSDK_OFFSET(0x13A62DC0)
#define CLASS_2_76EC52D2BB9BE399___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13A62E30)

inline static constexpr unsigned int Class_2_76EC52D2BB9BE399_TypeDefinitionIndex = 65174;

class Class_2_76EC52D2BB9BE399 : public ::RPG::Client::BehaviorBase
{
public:
	::System::String* Field_2_0; // 0x18
	::UnityEngine::Texture2D* Field_2_1; // 0x20
	::UnityEngine::Texture2D* Field_2_2; // 0x28
	::System::String* Field_2_3; // 0x30
	::System::Nullable_1<::System::Single> Field_2_4; // 0x38
	::System::Nullable_1<::UnityEngine::Color> Field_2_5; // 0x40
	::System::Nullable_1<::UnityEngine::Vector2> Field_2_6; // 0x54
	::System::Nullable_1<::System::Single> Field_2_7; // 0x60
	::System::Nullable_1<::System::Single> Field_2_8; // 0x68
	::UnityEngine::Vector2 Field_2_9; // 0x70
	::UnityEngine::Vector2 Field_2_10; // 0x78
	::System::Nullable_1<::UnityEngine::Vector2> Field_2_11; // 0x80
	::System::Nullable_1<::UnityEngine::Vector2> Field_2_12; // 0x8C
	::System::Nullable_1<::System::Single> Field_2_13; // 0x98
	::System::Nullable_1<::UnityEngine::Vector2> Field_2_14; // 0xA0
	::System::Nullable_1<::System::Single> Field_2_15; // 0xAC
	::System::Nullable_1<::System::Boolean> Field_2_16; // 0xB4
	::System::Nullable_1<::System::Boolean> Field_2_17; // 0xB6
	::System::Boolean Field_2_18; // 0xB8
	::System::Nullable_1<::UnityEngine::Color> Field_2_19; // 0xBC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76EC52D2BB9BE399__CTOR_OFFSET))(this);
	}

	::RPG::Client::SplitScreenVCControl* Method_2_B56A5B107683EF74()
	{
		return ((::RPG::Client::SplitScreenVCControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76EC52D2BB9BE399_METHOD_2_B56A5B107683EF74_OFFSET))(this);
	}

	::System::Void Method_2_C8E2469222842786()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76EC52D2BB9BE399_METHOD_2_C8E2469222842786_OFFSET))(this);
	}

	::System::Void Method_2_CC7BB18E16D1D783(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_76EC52D2BB9BE399_METHOD_2_CC7BB18E16D1D783_OFFSET))(this, a1);
	}

	::System::Void Method_2_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_76EC52D2BB9BE399_METHOD_2_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76EC52D2BB9BE399_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_2A820A17D62802B8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76EC52D2BB9BE399_METHOD_2_2A820A17D62802B8_OFFSET))(this);
	}

	::System::Void Method_2_7EAA8879197594BA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76EC52D2BB9BE399_METHOD_2_7EAA8879197594BA_OFFSET))(this);
	}

	::System::Void Method_2_7EAA8879197594BA_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76EC52D2BB9BE399_METHOD_2_7EAA8879197594BA_1_OFFSET))(this);
	}

	::System::Void Method_2_BA00D508D791624D(::RPG::Client::CRPVCBackground* a1, ::UnityEngine::Rendering::CRPVirtualCamera* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CRPVCBackground*, ::UnityEngine::Rendering::CRPVirtualCamera*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_76EC52D2BB9BE399_METHOD_2_BA00D508D791624D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_6FCD5ED083C67CF0(::UnityEngine::Material* a1, ::UnityEngine::Color a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_2_76EC52D2BB9BE399_METHOD_2_6FCD5ED083C67CF0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_155EBEDB7DB8B929(::UnityEngine::Material* a1, ::System::String* a2, ::UnityEngine::Texture2D*& a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::String*, ::UnityEngine::Texture2D*&))((::PBYTE)hIl2Cpp + CLASS_2_76EC52D2BB9BE399_METHOD_2_155EBEDB7DB8B929_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_3FA1D91279A7F0C8(::UnityEngine::Material* a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_76EC52D2BB9BE399_METHOD_2_3FA1D91279A7F0C8_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_8DF47EF45ABD2A6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76EC52D2BB9BE399_METHOD_2_8DF47EF45ABD2A6C_OFFSET))(this);
	}

	::System::Void Method_2_9B2E710EB9D49BA6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76EC52D2BB9BE399_METHOD_2_9B2E710EB9D49BA6_OFFSET))(this);
	}

	::System::Single Method_2_861970C5F2C21AB2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76EC52D2BB9BE399_METHOD_2_861970C5F2C21AB2_OFFSET))(this);
	}

	::System::Void Method_2_6916CB2AB9451DD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76EC52D2BB9BE399_METHOD_2_6916CB2AB9451DD7_OFFSET))(this);
	}

	::UnityEngine::Material* Method_2_DB4D7D07EC5D0482(::UnityEngine::MeshRenderer* a1)
	{
		return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::MeshRenderer*))((::PBYTE)hIl2Cpp + CLASS_2_76EC52D2BB9BE399_METHOD_2_DB4D7D07EC5D0482_OFFSET))(this, a1);
	}

	::System::Void Method_2_DEDB6D705D6319DA(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_76EC52D2BB9BE399_METHOD_2_DEDB6D705D6319DA_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76EC52D2BB9BE399___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
