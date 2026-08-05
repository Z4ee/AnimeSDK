#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2DAF4D0B64681D6A_Struct_2_FDD929B4062EEAA8.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/BoundingSphere.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { template <typename T> class Action_1; }

#define CLASS_1_2DAF4D0B64681D6A_METHOD_1_053A4BCAD7C42D84_OFFSET UNITYSDK_OFFSET(0x1536BCA0)
#define CLASS_1_2DAF4D0B64681D6A_METHOD_1_1394211BCB3C1CA8_OFFSET UNITYSDK_OFFSET(0x1536C370)
#define CLASS_1_2DAF4D0B64681D6A_METHOD_1_199FD87A7080D723_OFFSET UNITYSDK_OFFSET(0x1536C240)
#define CLASS_1_2DAF4D0B64681D6A_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1536BC40)
#define CLASS_1_2DAF4D0B64681D6A_METHOD_1_4C8AE4678CB2934D_OFFSET UNITYSDK_OFFSET(0x1536BD80)
#define CLASS_1_2DAF4D0B64681D6A_METHOD_1_5323F2DF46A044DA_1_OFFSET UNITYSDK_OFFSET(0x1536BC90)
#define CLASS_1_2DAF4D0B64681D6A_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x1536BB20)
#define CLASS_1_2DAF4D0B64681D6A_METHOD_1_580E7E6201D1B663_OFFSET UNITYSDK_OFFSET(0x1536BF20)
#define CLASS_1_2DAF4D0B64681D6A_METHOD_1_5D7F9E033321DE65_OFFSET UNITYSDK_OFFSET(0x1536B600)
#define CLASS_1_2DAF4D0B64681D6A_METHOD_1_844EDE2301BD8211_OFFSET UNITYSDK_OFFSET(0x1536B8C0)
#define CLASS_1_2DAF4D0B64681D6A_METHOD_1_8DA9E1C7A96D2C59_OFFSET UNITYSDK_OFFSET(0x1536C0C0)
#define CLASS_1_2DAF4D0B64681D6A_METHOD_1_A2846FC5EA0763C6_OFFSET UNITYSDK_OFFSET(0x1536C0A0)
#define CLASS_1_2DAF4D0B64681D6A_METHOD_1_BB68AE410C67C589_OFFSET UNITYSDK_OFFSET(0x1536BBC0)
#define CLASS_1_2DAF4D0B64681D6A_METHOD_1_C3FCFEB83374757C_OFFSET UNITYSDK_OFFSET(0x1536BF30)
#define CLASS_1_2DAF4D0B64681D6A_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1536BBE0)
#define CLASS_1_2DAF4D0B64681D6A_METHOD_1_DF36652FF6AEAAC1_OFFSET UNITYSDK_OFFSET(0x1536BB30)
#define CLASS_1_2DAF4D0B64681D6A_METHOD_1_E7F1AECA7CFF8AAD_1_OFFSET UNITYSDK_OFFSET(0x1536C230)
#define CLASS_1_2DAF4D0B64681D6A_METHOD_1_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x1536BAE0)
#define CLASS_1_2DAF4D0B64681D6A_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1536BAC0)
#define CLASS_1_2DAF4D0B64681D6A_METHOD_1_F73A90F086F5A538_OFFSET UNITYSDK_OFFSET(0x1536BAF0)
#define CLASS_1_2DAF4D0B64681D6A__CCTOR_OFFSET UNITYSDK_OFFSET(0x1536B5F0)
#define CLASS_1_2DAF4D0B64681D6A__CTOR_OFFSET UNITYSDK_OFFSET(0x1536B5E0)

inline static constexpr unsigned int Class_1_2DAF4D0B64681D6A_TypeDefinitionIndex = 43637;

class Class_1_2DAF4D0B64681D6A : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_8()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2DAF4D0B64681D6A_TypeDefinitionIndex)->GetStaticField(0xC760);
	}
	static ::System::Int32* StaticGet_Field_1_6()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2DAF4D0B64681D6A_TypeDefinitionIndex)->GetStaticField(0xC764);
	}
	::Il2CppArray<::Class_1_2DAF4D0B64681D6A_Struct_2_FDD929B4062EEAA8>* Field_1_9; // 0x10
	::System::Single Field_1_10; // 0x18
	::UnityEngine::Vector3 Field_1_11; // 0x1C
	::System::Single Field_1_5; // 0x28
	::System::Single Field_1_4; // 0x2C
	::UnityEngine::Bounds Field_1_0; // 0x30
	::UnityEngine::Matrix4x4 Field_1_7; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2DAF4D0B64681D6A__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2DAF4D0B64681D6A__CCTOR_OFFSET))();
	}

	::UnityEngine::Vector3 Method_1_5D7F9E033321DE65(::System::Single& a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_2DAF4D0B64681D6A_METHOD_1_5D7F9E033321DE65_OFFSET))(this, a1);
	}

	::UnityEngine::BoundingSphere Method_1_844EDE2301BD8211(::Class_1_2DAF4D0B64681D6A_Struct_2_FDD929B4062EEAA8 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::UnityEngine::BoundingSphere(*)(::PVOID, ::Class_1_2DAF4D0B64681D6A_Struct_2_FDD929B4062EEAA8, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2DAF4D0B64681D6A_METHOD_1_844EDE2301BD8211_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2DAF4D0B64681D6A_METHOD_1_F0E307B84478A272_OFFSET))(this);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2DAF4D0B64681D6A_METHOD_1_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::UnityEngine::Matrix4x4 Method_1_F73A90F086F5A538()
	{
		return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2DAF4D0B64681D6A_METHOD_1_F73A90F086F5A538_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2DAF4D0B64681D6A_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Int32 Method_1_DF36652FF6AEAAC1(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2DAF4D0B64681D6A_METHOD_1_DF36652FF6AEAAC1_OFFSET))(this, a1);
	}

	::System::Void Method_1_BB68AE410C67C589(::UnityEngine::Matrix4x4 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + CLASS_1_2DAF4D0B64681D6A_METHOD_1_BB68AE410C67C589_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2DAF4D0B64681D6A_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2DAF4D0B64681D6A_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2DAF4D0B64681D6A_METHOD_1_5323F2DF46A044DA_1_OFFSET))(this);
	}

	::UnityEngine::BoundingSphere Method_1_053A4BCAD7C42D84(::System::Int32 a1)
	{
		return ((::UnityEngine::BoundingSphere(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2DAF4D0B64681D6A_METHOD_1_053A4BCAD7C42D84_OFFSET))(this, a1);
	}

	::System::Void Method_1_4C8AE4678CB2934D(::Class_1_2DAF4D0B64681D6A_Struct_2_FDD929B4062EEAA8 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2DAF4D0B64681D6A_Struct_2_FDD929B4062EEAA8))((::PBYTE)hIl2Cpp + CLASS_1_2DAF4D0B64681D6A_METHOD_1_4C8AE4678CB2934D_OFFSET))(this, a1);
	}

	::System::Void Method_1_580E7E6201D1B663(::UnityEngine::Bounds a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + CLASS_1_2DAF4D0B64681D6A_METHOD_1_580E7E6201D1B663_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_C3FCFEB83374757C(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_2DAF4D0B64681D6A_METHOD_1_C3FCFEB83374757C_OFFSET))(this, a1);
	}

	::UnityEngine::Bounds Method_1_A2846FC5EA0763C6()
	{
		return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2DAF4D0B64681D6A_METHOD_1_A2846FC5EA0763C6_OFFSET))(this);
	}

	::System::Int32 Method_1_8DA9E1C7A96D2C59(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2DAF4D0B64681D6A_METHOD_1_8DA9E1C7A96D2C59_OFFSET))(this, a1);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2DAF4D0B64681D6A_METHOD_1_E7F1AECA7CFF8AAD_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_199FD87A7080D723(::System::Action_1<::Class_1_2DAF4D0B64681D6A_Struct_2_FDD929B4062EEAA8>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_2DAF4D0B64681D6A_Struct_2_FDD929B4062EEAA8>*))((::PBYTE)hIl2Cpp + CLASS_1_2DAF4D0B64681D6A_METHOD_1_199FD87A7080D723_OFFSET))(this, a1);
	}

	::UnityEngine::Bounds Method_1_1394211BCB3C1CA8(::UnityEngine::Matrix4x4 a1)
	{
		return ((::UnityEngine::Bounds(*)(::PVOID, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + CLASS_1_2DAF4D0B64681D6A_METHOD_1_1394211BCB3C1CA8_OFFSET))(this, a1);
	}
};
