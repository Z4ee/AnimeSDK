#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvNavigationFailReason.h"
#include "unitysdk/RPG/GameCore/SO_Task_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class SO_MoveTo; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TransformComponent; }

#define CLASS_3_A1A5211EC5FEB9AC_METHOD_3_1C7D2C2F0E728EF8_OFFSET UNITYSDK_OFFSET(0xAF249C0)
#define CLASS_3_A1A5211EC5FEB9AC_METHOD_3_9A16583EC3171F37_OFFSET UNITYSDK_OFFSET(0xAF24780)
#define CLASS_3_A1A5211EC5FEB9AC_METHOD_3_B11E27216904F5F7_OFFSET UNITYSDK_OFFSET(0xAF243D0)
#define CLASS_3_A1A5211EC5FEB9AC_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xAF24970)
#define CLASS_3_A1A5211EC5FEB9AC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAF242D0)
#define CLASS_3_A1A5211EC5FEB9AC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xAF24A50)
#define CLASS_3_A1A5211EC5FEB9AC_TICK_OFFSET UNITYSDK_OFFSET(0xAF24B10)
#define CLASS_3_A1A5211EC5FEB9AC__CCTOR_OFFSET UNITYSDK_OFFSET(0xAF24BA0)
#define CLASS_3_A1A5211EC5FEB9AC__CTOR_OFFSET UNITYSDK_OFFSET(0xAF241F0)
#define CLASS_3_A1A5211EC5FEB9AC___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xAF24BC0)

inline static constexpr unsigned int Class_3_A1A5211EC5FEB9AC_TypeDefinitionIndex = 48734;

class Class_3_A1A5211EC5FEB9AC : public ::RPG::GameCore::SO_Task_1<::RPG::GameCore::SO_MoveTo*>
{
public:
	static ::System::Single* StaticGet_Field_3_0()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_A1A5211EC5FEB9AC_TypeDefinitionIndex)->GetStaticField(0xB490);
	}
	static ::System::Single* StaticGet_Field_3_1()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_A1A5211EC5FEB9AC_TypeDefinitionIndex)->GetStaticField(0xB494);
	}
	static ::System::Single* StaticGet_Field_3_2()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_A1A5211EC5FEB9AC_TypeDefinitionIndex)->GetStaticField(0xB498);
	}
	::RPG::GameCore::TransformComponent* Field_3_3; // 0x40
	::System::Single Field_3_4; // 0x48
	::UnityEngine::Vector3 Field_3_5; // 0x4C
	::UnityEngine::Quaternion Field_3_6; // 0x58

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SO_MoveTo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SO_MoveTo*))((::PBYTE)hIl2Cpp + CLASS_3_A1A5211EC5FEB9AC__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_A1A5211EC5FEB9AC__CCTOR_OFFSET))();
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A1A5211EC5FEB9AC_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A1A5211EC5FEB9AC_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_1C7D2C2F0E728EF8(::RPG::GameCore::AdvNavigationFailReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvNavigationFailReason))((::PBYTE)hIl2Cpp + CLASS_3_A1A5211EC5FEB9AC_METHOD_3_1C7D2C2F0E728EF8_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A1A5211EC5FEB9AC_ONTASKRESET_OFFSET))(this);
	}

	::System::Boolean Method_3_B11E27216904F5F7(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_3_A1A5211EC5FEB9AC_METHOD_3_B11E27216904F5F7_OFFSET))(this, a1, a2);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_A1A5211EC5FEB9AC_TICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_9A16583EC3171F37()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A1A5211EC5FEB9AC_METHOD_3_9A16583EC3171F37_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_A1A5211EC5FEB9AC___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
	}
};
