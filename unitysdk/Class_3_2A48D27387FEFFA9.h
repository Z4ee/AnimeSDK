#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvNavigationFailReason.h"
#include "unitysdk/RPG/GameCore/SO_Task_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class SO_MoveTo; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TransformComponent; }

#define CLASS_3_2A48D27387FEFFA9_METHOD_3_1C7D2C2F0E728EF8_OFFSET UNITYSDK_OFFSET(0xC3670F0)
#define CLASS_3_2A48D27387FEFFA9_METHOD_3_9A16583EC3171F37_OFFSET UNITYSDK_OFFSET(0xC366EB0)
#define CLASS_3_2A48D27387FEFFA9_METHOD_3_B11E27216904F5F7_OFFSET UNITYSDK_OFFSET(0xC366B00)
#define CLASS_3_2A48D27387FEFFA9_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xC3670A0)
#define CLASS_3_2A48D27387FEFFA9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC366A00)
#define CLASS_3_2A48D27387FEFFA9_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC367180)
#define CLASS_3_2A48D27387FEFFA9_TICK_OFFSET UNITYSDK_OFFSET(0xC367240)
#define CLASS_3_2A48D27387FEFFA9__CCTOR_OFFSET UNITYSDK_OFFSET(0xC3672D0)
#define CLASS_3_2A48D27387FEFFA9__CTOR_OFFSET UNITYSDK_OFFSET(0xC366990)

inline static constexpr unsigned int Class_3_2A48D27387FEFFA9_TypeDefinitionIndex = 52407;

class Class_3_2A48D27387FEFFA9 : public ::RPG::GameCore::SO_Task_1<::RPG::GameCore::SO_MoveTo*>
{
public:
	static ::System::Single* StaticGet_DCIBOJNNDCI()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_2A48D27387FEFFA9_TypeDefinitionIndex)->GetStaticField(0x103D0);
	}
	static ::System::Single* StaticGet_KJPPFFLLMAB()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_2A48D27387FEFFA9_TypeDefinitionIndex)->GetStaticField(0x103D4);
	}
	static ::System::Single* StaticGet_OEJOIIMPMDP()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_2A48D27387FEFFA9_TypeDefinitionIndex)->GetStaticField(0x103D8);
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

	::System::Boolean Method_3_9A16583EC3171F37()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2A48D27387FEFFA9_METHOD_3_9A16583EC3171F37_OFFSET))(this);
	}
};
