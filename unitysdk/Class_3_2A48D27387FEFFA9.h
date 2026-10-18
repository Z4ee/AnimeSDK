#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvNavigationFailReason.h"
#include "unitysdk/RPG/GameCore/SO_Task_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class SO_MoveTo; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TransformComponent; }

#define CLASS_3_2A48D27387FEFFA9_METHOD_3_1C7D2C2F0E728EF8_OFFSET UNITYSDK_OFFSET(0xC25A4F0)
#define CLASS_3_2A48D27387FEFFA9_METHOD_3_AE20E5BD3B1974BD_OFFSET UNITYSDK_OFFSET(0xC25A2A0)
#define CLASS_3_2A48D27387FEFFA9_METHOD_3_B11E27216904F5F7_OFFSET UNITYSDK_OFFSET(0xC259EF0)
#define CLASS_3_2A48D27387FEFFA9_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xC25A4A0)
#define CLASS_3_2A48D27387FEFFA9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC259DF0)
#define CLASS_3_2A48D27387FEFFA9_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC25A580)
#define CLASS_3_2A48D27387FEFFA9_TICK_OFFSET UNITYSDK_OFFSET(0xC25A640)
#define CLASS_3_2A48D27387FEFFA9__CCTOR_OFFSET UNITYSDK_OFFSET(0xC25A6D0)
#define CLASS_3_2A48D27387FEFFA9__CTOR_OFFSET UNITYSDK_OFFSET(0xC259D80)

inline static constexpr unsigned int Class_3_2A48D27387FEFFA9_TypeDefinitionIndex = 52120;

class Class_3_2A48D27387FEFFA9 : public ::RPG::GameCore::SO_Task_1<::RPG::GameCore::SO_MoveTo*>
{
public:
	static ::System::Single* StaticGet_KJPPFFLLMAB()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_2A48D27387FEFFA9_TypeDefinitionIndex)->GetStaticField(0x15980);
	}
	static ::System::Single* StaticGet_OEJOIIMPMDP()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_2A48D27387FEFFA9_TypeDefinitionIndex)->GetStaticField(0x15984);
	}
	static ::System::Single* StaticGet_DCIBOJNNDCI()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_2A48D27387FEFFA9_TypeDefinitionIndex)->GetStaticField(0x15988);
	}
	::RPG::GameCore::TransformComponent* GGLEFOFHHCN; // 0x40
	::UnityEngine::Quaternion MBOJLOPIEEK; // 0x48
	::System::Single NGAEMPHCOAI; // 0x58
	::UnityEngine::Vector3 KOGCFJCMFLD; // 0x5C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SO_MoveTo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SO_MoveTo*))((::PBYTE)hIl2Cpp + CLASS_3_2A48D27387FEFFA9__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_2A48D27387FEFFA9__CCTOR_OFFSET))();
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2A48D27387FEFFA9_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2A48D27387FEFFA9_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_1C7D2C2F0E728EF8(::RPG::GameCore::AdvNavigationFailReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvNavigationFailReason))((::PBYTE)hIl2Cpp + CLASS_3_2A48D27387FEFFA9_METHOD_3_1C7D2C2F0E728EF8_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2A48D27387FEFFA9_ONTASKRESET_OFFSET))(this);
	}

	::System::Boolean Method_3_B11E27216904F5F7(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_3_2A48D27387FEFFA9_METHOD_3_B11E27216904F5F7_OFFSET))(this, a1, a2);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_2A48D27387FEFFA9_TICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_AE20E5BD3B1974BD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2A48D27387FEFFA9_METHOD_3_AE20E5BD3B1974BD_OFFSET))(this);
	}
};
