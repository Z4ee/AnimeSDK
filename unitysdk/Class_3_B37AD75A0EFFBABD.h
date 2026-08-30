#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_A0580152EB393340;
namespace RPG::GameCore { class AdventureAbilityComponent; }
namespace RPG::GameCore { class ST_Main_Escape; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TransformComponent; }

#define CLASS_3_B37AD75A0EFFBABD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1520B160)
#define CLASS_3_B37AD75A0EFFBABD_METHOD_3_05DBE83F8B5D6163_OFFSET UNITYSDK_OFFSET(0x1520B670)
#define CLASS_3_B37AD75A0EFFBABD_METHOD_3_0A68C812815B75DA_OFFSET UNITYSDK_OFFSET(0x1520DCB0)
#define CLASS_3_B37AD75A0EFFBABD_METHOD_3_4B95663C16A02708_OFFSET UNITYSDK_OFFSET(0x1520D8F0)
#define CLASS_3_B37AD75A0EFFBABD_METHOD_3_4DB14E9CF0E552EE_OFFSET UNITYSDK_OFFSET(0x1520DF00)
#define CLASS_3_B37AD75A0EFFBABD_METHOD_3_51CFFE2AF748ECD7_1_OFFSET UNITYSDK_OFFSET(0x1520B350)
#define CLASS_3_B37AD75A0EFFBABD_METHOD_3_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x1520B1C0)
#define CLASS_3_B37AD75A0EFFBABD_METHOD_3_56D8C8BA32305461_OFFSET UNITYSDK_OFFSET(0x1520DBC0)
#define CLASS_3_B37AD75A0EFFBABD_METHOD_3_A3EF4ED894EBFFC3_OFFSET UNITYSDK_OFFSET(0x1520D810)
#define CLASS_3_B37AD75A0EFFBABD_METHOD_3_ABFE6A357B89C69A_OFFSET UNITYSDK_OFFSET(0x1520DAB0)
#define CLASS_3_B37AD75A0EFFBABD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1520B4E0)
#define CLASS_3_B37AD75A0EFFBABD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1520D510)
#define CLASS_3_B37AD75A0EFFBABD_TICK_OFFSET UNITYSDK_OFFSET(0x1520D5C0)
#define CLASS_3_B37AD75A0EFFBABD__CCTOR_OFFSET UNITYSDK_OFFSET(0x1520E4A0)
#define CLASS_3_B37AD75A0EFFBABD__CTOR_OFFSET UNITYSDK_OFFSET(0x1520AFF0)

inline static constexpr unsigned int Class_3_B37AD75A0EFFBABD_TypeDefinitionIndex = 52490;

class Class_3_B37AD75A0EFFBABD : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_Escape*>
{
public:
	static ::System::Single* StaticGet_NINLIKBCLNF()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_B37AD75A0EFFBABD_TypeDefinitionIndex)->GetStaticField(0x13500);
	}
	::Class_2_A0580152EB393340* JCHMONHBIFJ; // 0x28
	::RPG::GameCore::TransformComponent* AHLEHJFOMCF; // 0x30
	::RPG::GameCore::AdventureAbilityComponent* PCDEEAAIFPK; // 0x38
	::System::Nullable_1<::UnityEngine::Vector3> LFIELBMBEFM; // 0x40
	::System::Boolean MFLJDCOCICI; // 0x50
	::System::Single LGPDOMJLANJ; // 0x54
	::UnityEngine::Vector3 DNNLBGCHGEI; // 0x58
	::UnityEngine::Vector3 MPEPJMMDDOJ; // 0x64
	::System::Int32 JFLHNFPPDFF; // 0x70
	::UnityEngine::Vector3 CNIOPJHPIIJ; // 0x74

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_Escape* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_Escape*))((::PBYTE)hIl2Cpp + CLASS_3_B37AD75A0EFFBABD__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_B37AD75A0EFFBABD__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B37AD75A0EFFBABD_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_3_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B37AD75A0EFFBABD_METHOD_3_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_3_51CFFE2AF748ECD7_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B37AD75A0EFFBABD_METHOD_3_51CFFE2AF748ECD7_1_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B37AD75A0EFFBABD_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B37AD75A0EFFBABD_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_B37AD75A0EFFBABD_TICK_OFFSET))(this, a1);
	}

	::System::Nullable_1<::System::Single> Method_3_56D8C8BA32305461(::RPG::GameCore::TransformComponent* a1)
	{
		return ((::System::Nullable_1<::System::Single>(*)(::PVOID, ::RPG::GameCore::TransformComponent*))((::PBYTE)hIl2Cpp + CLASS_3_B37AD75A0EFFBABD_METHOD_3_56D8C8BA32305461_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_ABFE6A357B89C69A()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B37AD75A0EFFBABD_METHOD_3_ABFE6A357B89C69A_OFFSET))(this);
	}

	::System::Boolean Method_3_4B95663C16A02708()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B37AD75A0EFFBABD_METHOD_3_4B95663C16A02708_OFFSET))(this);
	}

	::System::Boolean Method_3_05DBE83F8B5D6163()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B37AD75A0EFFBABD_METHOD_3_05DBE83F8B5D6163_OFFSET))(this);
	}

	::System::Boolean Method_3_4DB14E9CF0E552EE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B37AD75A0EFFBABD_METHOD_3_4DB14E9CF0E552EE_OFFSET))(this);
	}

	::System::Boolean Method_3_A3EF4ED894EBFFC3(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_B37AD75A0EFFBABD_METHOD_3_A3EF4ED894EBFFC3_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_0A68C812815B75DA(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_B37AD75A0EFFBABD_METHOD_3_0A68C812815B75DA_OFFSET))(this, a1, a2, a3);
	}
};
