#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_51.h"
#include "unitysdk/MoleMole/UICameraAtom.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_F356FCA60006484C;
class Class_2_0E5C429C68B41BC8;
namespace MoleMole::Config { class ConfigHollowCameraDrag; }
namespace System { class Object; }

#define CLASS_2_F02C9DCBE9D88C7A_METHOD_2_43A46E5F9FAC62B8_OFFSET UNITYSDK_OFFSET(0x1902D200)
#define CLASS_2_F02C9DCBE9D88C7A_METHOD_2_58BA0C8308C8127F_OFFSET UNITYSDK_OFFSET(0x1902D210)
#define CLASS_2_F02C9DCBE9D88C7A_METHOD_2_89ACAF7889AF1DB2_OFFSET UNITYSDK_OFFSET(0x1902CF60)
#define CLASS_2_F02C9DCBE9D88C7A_METHOD_2_AE600A02934CC4CF_OFFSET UNITYSDK_OFFSET(0x1902D100)
#define CLASS_2_F02C9DCBE9D88C7A__CTOR_OFFSET UNITYSDK_OFFSET(0x1902D1F0)

inline static constexpr unsigned int Class_2_F02C9DCBE9D88C7A_TypeDefinitionIndex = 71256;

class Class_2_F02C9DCBE9D88C7A : public ::Class_1_43BD383C98B4C0C5_51
{
public:
	::Class_2_0E5C429C68B41BC8* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F02C9DCBE9D88C7A__CTOR_OFFSET))(this);
	}

	::Class_1_F356FCA60006484C* Method_2_89ACAF7889AF1DB2(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::Class_1_F356FCA60006484C*(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_F02C9DCBE9D88C7A_METHOD_2_89ACAF7889AF1DB2_OFFSET))(this, a1);
	}

	::Class_2_0E5C429C68B41BC8* Method_2_43A46E5F9FAC62B8()
	{
		return ((::Class_2_0E5C429C68B41BC8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F02C9DCBE9D88C7A_METHOD_2_43A46E5F9FAC62B8_OFFSET))(this);
	}

	::System::Void Method_2_58BA0C8308C8127F(::Class_2_0E5C429C68B41BC8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0E5C429C68B41BC8*))((::PBYTE)hIl2Cpp + CLASS_2_F02C9DCBE9D88C7A_METHOD_2_58BA0C8308C8127F_OFFSET))(this, a1);
	}

	static ::Class_2_0E5C429C68B41BC8* Method_2_AE600A02934CC4CF(::MoleMole::UICameraAtom& a1, ::UnityEngine::Vector3& a2, ::MoleMole::Config::ConfigHollowCameraDrag*& a3)
	{
		return ((::Class_2_0E5C429C68B41BC8*(*)(::MoleMole::UICameraAtom&, ::UnityEngine::Vector3&, ::MoleMole::Config::ConfigHollowCameraDrag*&))((::PBYTE)hIl2Cpp + CLASS_2_F02C9DCBE9D88C7A_METHOD_2_AE600A02934CC4CF_OFFSET))(a1, a2, a3);
	}
};
