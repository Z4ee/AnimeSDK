#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_44.h"
#include "unitysdk/MoleMole/UICameraAtom.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_F356FCA60006484C;
class Class_2_0E5C429C68B41BC8;
namespace MoleMole::Config { class ConfigHollowCameraDrag; }
namespace System { class Object; }

#define CLASS_2_F02C9DCBE9D88C7A_METHOD_2_43A46E5F9FAC62B8_OFFSET UNITYSDK_OFFSET(0x170112D0)
#define CLASS_2_F02C9DCBE9D88C7A_METHOD_2_58BA0C8308C8127F_OFFSET UNITYSDK_OFFSET(0x170112E0)
#define CLASS_2_F02C9DCBE9D88C7A_METHOD_2_7A8AC8365BFD8B87_OFFSET UNITYSDK_OFFSET(0x17011020)
#define CLASS_2_F02C9DCBE9D88C7A_METHOD_2_AE600A02934CC4CF_OFFSET UNITYSDK_OFFSET(0x170111C0)
#define CLASS_2_F02C9DCBE9D88C7A__CTOR_OFFSET UNITYSDK_OFFSET(0x170112C0)

inline static constexpr unsigned int Class_2_F02C9DCBE9D88C7A_TypeDefinitionIndex = 53306;

class Class_2_F02C9DCBE9D88C7A : public ::Class_1_43BD383C98B4C0C5_44
{
public:
	::Class_2_0E5C429C68B41BC8* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F02C9DCBE9D88C7A__CTOR_OFFSET))(this);
	}

	::Class_1_F356FCA60006484C* Method_2_7A8AC8365BFD8B87(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::Class_1_F356FCA60006484C*(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_F02C9DCBE9D88C7A_METHOD_2_7A8AC8365BFD8B87_OFFSET))(this, a1);
	}

	::Class_2_0E5C429C68B41BC8* Method_2_43A46E5F9FAC62B8()
	{
		return ((::Class_2_0E5C429C68B41BC8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F02C9DCBE9D88C7A_METHOD_2_43A46E5F9FAC62B8_OFFSET))(this);
	}

	static ::Class_2_0E5C429C68B41BC8* Method_2_AE600A02934CC4CF(::MoleMole::UICameraAtom& a1, ::UnityEngine::Vector3& a2, ::MoleMole::Config::ConfigHollowCameraDrag*& a3)
	{
		return ((::Class_2_0E5C429C68B41BC8*(*)(::MoleMole::UICameraAtom&, ::UnityEngine::Vector3&, ::MoleMole::Config::ConfigHollowCameraDrag*&))((::PBYTE)hIl2Cpp + CLASS_2_F02C9DCBE9D88C7A_METHOD_2_AE600A02934CC4CF_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_2_58BA0C8308C8127F(::Class_2_0E5C429C68B41BC8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0E5C429C68B41BC8*))((::PBYTE)hIl2Cpp + CLASS_2_F02C9DCBE9D88C7A_METHOD_2_58BA0C8308C8127F_OFFSET))(this, a1);
	}
};
