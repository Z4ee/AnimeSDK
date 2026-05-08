#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define CLASS_2_F639F9869450856A_CLASS_1_35EC48D5B365CEBC_METHOD_1_2E669E36541782B5_OFFSET UNITYSDK_OFFSET(0x13580630)
#define CLASS_2_F639F9869450856A_CLASS_1_35EC48D5B365CEBC_METHOD_1_312C00EB62C83363_OFFSET UNITYSDK_OFFSET(0x13580520)
#define CLASS_2_F639F9869450856A_CLASS_1_35EC48D5B365CEBC_METHOD_1_FA662896843C137A_OFFSET UNITYSDK_OFFSET(0x135804C0)
#define CLASS_2_F639F9869450856A_CLASS_1_35EC48D5B365CEBC__CCTOR_OFFSET UNITYSDK_OFFSET(0x13580860)
#define CLASS_2_F639F9869450856A_CLASS_1_35EC48D5B365CEBC__CTOR_OFFSET UNITYSDK_OFFSET(0x135801F0)

inline static constexpr unsigned int Class_2_F639F9869450856A_Class_1_35EC48D5B365CEBC_TypeDefinitionIndex = 42043;

class Class_2_F639F9869450856A_Class_1_35EC48D5B365CEBC : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_F639F9869450856A_Class_1_35EC48D5B365CEBC_TypeDefinitionIndex)->GetStaticField(0x10EE0);
	}
	::UnityEngine::Transform* Field_1_1; // 0x10
	::UnityEngine::Quaternion Field_1_4; // 0x18
	::UnityEngine::Vector3 Field_1_2; // 0x28
	::UnityEngine::Quaternion Field_1_3; // 0x34

	::System::Void _ctor(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_F639F9869450856A_CLASS_1_35EC48D5B365CEBC__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_F639F9869450856A_CLASS_1_35EC48D5B365CEBC__CCTOR_OFFSET))();
	}

	::UnityEngine::Vector3 Method_1_FA662896843C137A()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F639F9869450856A_CLASS_1_35EC48D5B365CEBC_METHOD_1_FA662896843C137A_OFFSET))(this);
	}

	::System::Void Method_1_312C00EB62C83363(::System::Single a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_F639F9869450856A_CLASS_1_35EC48D5B365CEBC_METHOD_1_312C00EB62C83363_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2E669E36541782B5(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_F639F9869450856A_CLASS_1_35EC48D5B365CEBC_METHOD_1_2E669E36541782B5_OFFSET))(this, a1);
	}
};
