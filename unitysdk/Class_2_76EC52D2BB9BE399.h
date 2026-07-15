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

#define CLASS_2_76EC52D2BB9BE399_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16E8EE80)
#define CLASS_2_76EC52D2BB9BE399_METHOD_2_155EBEDB7DB8B929_OFFSET UNITYSDK_OFFSET(0x16E8F4E0)
#define CLASS_2_76EC52D2BB9BE399_METHOD_2_3FA1D91279A7F0C8_OFFSET UNITYSDK_OFFSET(0x16E8F5E0)
#define CLASS_2_76EC52D2BB9BE399_METHOD_2_6916CB2AB9451DD7_OFFSET UNITYSDK_OFFSET(0x16E8FA60)
#define CLASS_2_76EC52D2BB9BE399_METHOD_2_6FCD5ED083C67CF0_OFFSET UNITYSDK_OFFSET(0x16E8F440)
#define CLASS_2_76EC52D2BB9BE399_METHOD_2_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x16E8EE30)
#define CLASS_2_76EC52D2BB9BE399_METHOD_2_7EAA8879197594BA_1_OFFSET UNITYSDK_OFFSET(0x16E8E860)
#define CLASS_2_76EC52D2BB9BE399_METHOD_2_7EAA8879197594BA_OFFSET UNITYSDK_OFFSET(0x16E8E3D0)
#define CLASS_2_76EC52D2BB9BE399_METHOD_2_861970C5F2C21AB2_OFFSET UNITYSDK_OFFSET(0x16E8FC90)
#define CLASS_2_76EC52D2BB9BE399_METHOD_2_8DF47EF45ABD2A6C_OFFSET UNITYSDK_OFFSET(0x16E8E2F0)
#define CLASS_2_76EC52D2BB9BE399_METHOD_2_9B2E710EB9D49BA6_OFFSET UNITYSDK_OFFSET(0x16E8F6E0)
#define CLASS_2_76EC52D2BB9BE399_METHOD_2_B56A5B107683EF74_OFFSET UNITYSDK_OFFSET(0x16E8CC20)
#define CLASS_2_76EC52D2BB9BE399_METHOD_2_BA00D508D791624D_OFFSET UNITYSDK_OFFSET(0x16E8F3A0)
#define CLASS_2_76EC52D2BB9BE399_METHOD_2_C8E2469222842786_OFFSET UNITYSDK_OFFSET(0x16E8CC90)
#define CLASS_2_76EC52D2BB9BE399_METHOD_2_CC7BB18E16D1D783_OFFSET UNITYSDK_OFFSET(0x16E8ED30)
#define CLASS_2_76EC52D2BB9BE399_METHOD_2_D68547FF19A170E2_OFFSET UNITYSDK_OFFSET(0x16E8CCF0)
#define CLASS_2_76EC52D2BB9BE399_METHOD_2_DB4D7D07EC5D0482_OFFSET UNITYSDK_OFFSET(0x16E8F340)
#define CLASS_2_76EC52D2BB9BE399__CTOR_OFFSET UNITYSDK_OFFSET(0x16E8FD60)

inline static constexpr unsigned int Class_2_76EC52D2BB9BE399_TypeDefinitionIndex = 66583;

class Class_2_76EC52D2BB9BE399 : public ::RPG::Client::BehaviorBase
{
public:
	::System::String* Field_2_0; // 0x18
	::UnityEngine::Texture2D* Field_2_1; // 0x20
	::UnityEngine::Texture2D* Field_2_2; // 0x28
	::System::String* Field_2_3; // 0x30
	::System::Boolean Field_2_4; // 0x38
	::System::Nullable_1<::System::Boolean> Field_2_5; // 0x39
	::System::Nullable_1<::System::Boolean> Field_2_6; // 0x3B
	::System::Nullable_1<::System::Single> Field_2_7; // 0x40
	::System::Nullable_1<::UnityEngine::Vector2> Field_2_8; // 0x48
	::UnityEngine::Vector2 Field_2_9; // 0x54
	::System::Nullable_1<::System::Single> Field_2_10; // 0x5C
	::System::Nullable_1<::System::Single> Field_2_11; // 0x64
	::System::Nullable_1<::UnityEngine::Color> Field_2_12; // 0x6C
	::System::Nullable_1<::UnityEngine::Vector2> Field_2_13; // 0x80
	::System::Nullable_1<::UnityEngine::Vector2> Field_2_14; // 0x8C
	::System::Nullable_1<::System::Single> Field_2_15; // 0x98
	::System::Nullable_1<::UnityEngine::Color> Field_2_16; // 0xA0
	::System::Nullable_1<::System::Single> Field_2_17; // 0xB4
	::System::Nullable_1<::UnityEngine::Vector2> Field_2_18; // 0xBC
	::UnityEngine::Vector2 Field_2_19; // 0xC8

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

	::System::Void Method_2_D68547FF19A170E2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76EC52D2BB9BE399_METHOD_2_D68547FF19A170E2_OFFSET))(this);
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
};
