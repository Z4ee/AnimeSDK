#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvNavigationFailReason.h"
#include "unitysdk/RPG/GameCore/SO_Task_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class SO_MoveTo; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TransformComponent; }

#define CLASS_3_A1A5211EC5FEB9AC_METHOD_3_1C7D2C2F0E728EF8_OFFSET UNITYSDK_OFFSET(0x10B80EE0)
#define CLASS_3_A1A5211EC5FEB9AC_METHOD_3_93D0B142F6ED8E2C_OFFSET UNITYSDK_OFFSET(0x10B80CC0)
#define CLASS_3_A1A5211EC5FEB9AC_METHOD_3_B11E27216904F5F7_OFFSET UNITYSDK_OFFSET(0x10B80910)
#define CLASS_3_A1A5211EC5FEB9AC_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10B80E90)
#define CLASS_3_A1A5211EC5FEB9AC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10B80810)
#define CLASS_3_A1A5211EC5FEB9AC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10B80F70)
#define CLASS_3_A1A5211EC5FEB9AC_TICK_OFFSET UNITYSDK_OFFSET(0x10B81030)
#define CLASS_3_A1A5211EC5FEB9AC__CCTOR_OFFSET UNITYSDK_OFFSET(0x10B810C0)
#define CLASS_3_A1A5211EC5FEB9AC__CTOR_OFFSET UNITYSDK_OFFSET(0x10B80730)
#define CLASS_3_A1A5211EC5FEB9AC___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x10B81100)

inline static constexpr unsigned int Class_3_A1A5211EC5FEB9AC_TypeDefinitionIndex = 42143;

class Class_3_A1A5211EC5FEB9AC : public ::RPG::GameCore::SO_Task_1<::RPG::GameCore::SO_MoveTo*>
{
public:
	static ::System::Single* StaticGet_Field_3_6()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_A1A5211EC5FEB9AC_TypeDefinitionIndex)->GetStaticField(0x12BE0);
	}
	static ::System::Single* StaticGet_Field_3_4()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_A1A5211EC5FEB9AC_TypeDefinitionIndex)->GetStaticField(0x12BE4);
	}
	static ::System::Single* StaticGet_Field_3_3()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_A1A5211EC5FEB9AC_TypeDefinitionIndex)->GetStaticField(0x12BE8);
	}
	::RPG::GameCore::TransformComponent* Field_3_0; // 0x40
	::UnityEngine::Vector3 Field_3_1; // 0x48
	::UnityEngine::Quaternion Field_3_2; // 0x54
	::System::Single Field_3_5; // 0x64

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

	::System::Boolean Method_3_93D0B142F6ED8E2C()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A1A5211EC5FEB9AC_METHOD_3_93D0B142F6ED8E2C_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_A1A5211EC5FEB9AC___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
