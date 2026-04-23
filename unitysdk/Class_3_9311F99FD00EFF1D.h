#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvNavigationFailReason.h"
#include "unitysdk/RPG/GameCore/SO_Task_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class SO_MoveTo; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TransformComponent; }

#define CLASS_3_9311F99FD00EFF1D_METHOD_3_49EFCDBA80B108A1_OFFSET UNITYSDK_OFFSET(0x9E37770)
#define CLASS_3_9311F99FD00EFF1D_METHOD_3_928FA5FC7B5D5FB0_OFFSET UNITYSDK_OFFSET(0x9E37200)
#define CLASS_3_9311F99FD00EFF1D_METHOD_3_941C72F2E2B055F5_OFFSET UNITYSDK_OFFSET(0x9E37580)
#define CLASS_3_9311F99FD00EFF1D_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9E37720)
#define CLASS_3_9311F99FD00EFF1D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9E37100)
#define CLASS_3_9311F99FD00EFF1D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x9E377E0)
#define CLASS_3_9311F99FD00EFF1D_TICK_OFFSET UNITYSDK_OFFSET(0x9E378A0)
#define CLASS_3_9311F99FD00EFF1D__CCTOR_OFFSET UNITYSDK_OFFSET(0x9E37930)
#define CLASS_3_9311F99FD00EFF1D__CTOR_OFFSET UNITYSDK_OFFSET(0x9E37060)
#define CLASS_3_9311F99FD00EFF1D___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x9E37950)

inline static constexpr unsigned int Class_3_9311F99FD00EFF1D_TypeDefinitionIndex = 48116;

class Class_3_9311F99FD00EFF1D : public ::RPG::GameCore::SO_Task_1<::RPG::GameCore::SO_MoveTo*>
{
public:
	static ::System::Single* StaticGet_Field_3_4()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_9311F99FD00EFF1D_TypeDefinitionIndex)->GetStaticField(0x11A50);
	}
	static ::System::Single* StaticGet_Field_3_3()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_9311F99FD00EFF1D_TypeDefinitionIndex)->GetStaticField(0x11A54);
	}
	static ::System::Single* StaticGet_Field_3_6()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_9311F99FD00EFF1D_TypeDefinitionIndex)->GetStaticField(0x11A58);
	}
	::RPG::GameCore::TransformComponent* Field_3_0; // 0x40
	::UnityEngine::Quaternion Field_3_2; // 0x48
	::UnityEngine::Vector3 Field_3_1; // 0x58
	::System::Single Field_3_5; // 0x64

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SO_MoveTo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SO_MoveTo*))((::PBYTE)hIl2Cpp + CLASS_3_9311F99FD00EFF1D__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_9311F99FD00EFF1D__CCTOR_OFFSET))();
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9311F99FD00EFF1D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9311F99FD00EFF1D_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_49EFCDBA80B108A1(::RPG::GameCore::AdvNavigationFailReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvNavigationFailReason))((::PBYTE)hIl2Cpp + CLASS_3_9311F99FD00EFF1D_METHOD_3_49EFCDBA80B108A1_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9311F99FD00EFF1D_ONTASKRESET_OFFSET))(this);
	}

	::System::Boolean Method_3_928FA5FC7B5D5FB0(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_3_9311F99FD00EFF1D_METHOD_3_928FA5FC7B5D5FB0_OFFSET))(this, a1, a2);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_9311F99FD00EFF1D_TICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_941C72F2E2B055F5()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9311F99FD00EFF1D_METHOD_3_941C72F2E2B055F5_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_9311F99FD00EFF1D___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
