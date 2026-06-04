#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Transform; }

#define CLASS_1_B79BADA9978B5C30_GET_ID_OFFSET UNITYSDK_OFFSET(0xAFC97C0)
#define CLASS_1_B79BADA9978B5C30_METHOD_1_18A5053E0B8194D7_OFFSET UNITYSDK_OFFSET(0xAFC95D0)
#define CLASS_1_B79BADA9978B5C30_METHOD_1_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0xAFC9160)
#define CLASS_1_B79BADA9978B5C30_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xAFC9830)
#define CLASS_1_B79BADA9978B5C30_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xAFC91F0)
#define CLASS_1_B79BADA9978B5C30_METHOD_1_343609514F0B1F13_OFFSET UNITYSDK_OFFSET(0xAFC8CF0)
#define CLASS_1_B79BADA9978B5C30_METHOD_1_38B862BB2192EC08_OFFSET UNITYSDK_OFFSET(0xAFC97E0)
#define CLASS_1_B79BADA9978B5C30_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xAFC9760)
#define CLASS_1_B79BADA9978B5C30_METHOD_1_749948B663FCCCEF_OFFSET UNITYSDK_OFFSET(0xAFC9580)
#define CLASS_1_B79BADA9978B5C30_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xAFC9710)
#define CLASS_1_B79BADA9978B5C30_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xAFC96D0)
#define CLASS_1_B79BADA9978B5C30_METHOD_1_E67B8EE7D04609D0_1_OFFSET UNITYSDK_OFFSET(0xAFC94D0)
#define CLASS_1_B79BADA9978B5C30_METHOD_1_E67B8EE7D04609D0_OFFSET UNITYSDK_OFFSET(0xAFC9420)
#define CLASS_1_B79BADA9978B5C30_METHOD_1_F7BA13C72A6B3F58_OFFSET UNITYSDK_OFFSET(0xAFC9320)
#define CLASS_1_B79BADA9978B5C30_ONSELECT_OFFSET UNITYSDK_OFFSET(0xAFC9270)
#define CLASS_1_B79BADA9978B5C30_SET_ID_OFFSET UNITYSDK_OFFSET(0xAFC97D0)
#define CLASS_1_B79BADA9978B5C30__CCTOR_OFFSET UNITYSDK_OFFSET(0xAFC9890)
#define CLASS_1_B79BADA9978B5C30__CTOR_OFFSET UNITYSDK_OFFSET(0xAFC8CE0)

inline static constexpr unsigned int Class_1_B79BADA9978B5C30_TypeDefinitionIndex = 70458;

class Class_1_B79BADA9978B5C30 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B79BADA9978B5C30_TypeDefinitionIndex)->GetStaticField(0xC950);
	}
	static ::System::Int32* StaticGet_Field_1_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B79BADA9978B5C30_TypeDefinitionIndex)->GetStaticField(0xC954);
	}
	static ::System::Int32* StaticGet_Field_1_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B79BADA9978B5C30_TypeDefinitionIndex)->GetStaticField(0xC958);
	}
	::UnityEngine::MeshRenderer* Field_1_3; // 0x10
	::UnityEngine::GameObject* Field_1_4; // 0x18
	::System::Action* Field_1_5; // 0x20
	::UnityEngine::GameObject* Field_1_6; // 0x28
	::UnityEngine::Transform* Field_1_7; // 0x30
	::UnityEngine::Animator* Field_1_8; // 0x38
	::System::UInt32 _ID_k__BackingField; // 0x40
	::System::Nullable_1<::UnityEngine::Rect> Field_1_10; // 0x44
	::System::Boolean Field_1_11; // 0x58

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B79BADA9978B5C30__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B79BADA9978B5C30__CCTOR_OFFSET))();
	}

	::System::Void Method_1_343609514F0B1F13(::System::String* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_B79BADA9978B5C30_METHOD_1_343609514F0B1F13_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B79BADA9978B5C30_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void OnSelect()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B79BADA9978B5C30_ONSELECT_OFFSET))(this);
	}

	::System::Void Method_1_F7BA13C72A6B3F58()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B79BADA9978B5C30_METHOD_1_F7BA13C72A6B3F58_OFFSET))(this);
	}

	::System::Void Method_1_E67B8EE7D04609D0(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_B79BADA9978B5C30_METHOD_1_E67B8EE7D04609D0_OFFSET))(this, a1);
	}

	::System::Void Method_1_E67B8EE7D04609D0_1(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_B79BADA9978B5C30_METHOD_1_E67B8EE7D04609D0_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_749948B663FCCCEF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B79BADA9978B5C30_METHOD_1_749948B663FCCCEF_OFFSET))(this);
	}

	::System::Boolean Method_1_18A5053E0B8194D7(::UnityEngine::Vector2 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_B79BADA9978B5C30_METHOD_1_18A5053E0B8194D7_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B79BADA9978B5C30_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B79BADA9978B5C30_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B79BADA9978B5C30_METHOD_1_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B79BADA9978B5C30_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B79BADA9978B5C30_GET_ID_OFFSET))(this);
	}

	::System::Void set_ID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B79BADA9978B5C30_SET_ID_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* Method_1_38B862BB2192EC08()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B79BADA9978B5C30_METHOD_1_38B862BB2192EC08_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B79BADA9978B5C30_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}
};
