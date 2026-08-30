#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_5D22D26C61201935.h"

namespace RPG::GameCore { class ActiveTemplateVirtualCamera; }
namespace RPG::GameCore { class CinemachineVirtualCameraTemplateConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CLASS_3_A052C00FB612D077_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AA3F5B0)
#define CLASS_3_A052C00FB612D077_METHOD_3_00CEFEA95119225A_1_OFFSET UNITYSDK_OFFSET(0x1AA3FFF0)
#define CLASS_3_A052C00FB612D077_METHOD_3_00CEFEA95119225A_OFFSET UNITYSDK_OFFSET(0x1AA3FF30)
#define CLASS_3_A052C00FB612D077_METHOD_3_312DDA64721D74A4_OFFSET UNITYSDK_OFFSET(0x1AA40100)
#define CLASS_3_A052C00FB612D077_METHOD_3_8C945585B4A8C17B_OFFSET UNITYSDK_OFFSET(0x1AA3FDB0)
#define CLASS_3_A052C00FB612D077_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1AA400B0)
#define CLASS_3_A052C00FB612D077_ONSKIP_OFFSET UNITYSDK_OFFSET(0x1AA3FC30)
#define CLASS_3_A052C00FB612D077_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1AA3F630)
#define CLASS_3_A052C00FB612D077__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA3F4F0)

inline static constexpr unsigned int Class_3_A052C00FB612D077_TypeDefinitionIndex = 58004;

class Class_3_A052C00FB612D077 : public ::Class_2_5D22D26C61201935
{
public:
	::RPG::GameCore::CinemachineVirtualCameraTemplateConfig* HCMMLOKKGPG; // 0x78
	::RPG::GameCore::ActiveTemplateVirtualCamera* IMELGBDDPGP; // 0x80
	::System::String* LGODNIDADMN; // 0x88

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ActiveTemplateVirtualCamera* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ActiveTemplateVirtualCamera*))((::PBYTE)hIl2Cpp + CLASS_3_A052C00FB612D077__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A052C00FB612D077_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A052C00FB612D077_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A052C00FB612D077_ONSKIP_OFFSET))(this);
	}

	::System::Void Method_3_8C945585B4A8C17B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A052C00FB612D077_METHOD_3_8C945585B4A8C17B_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_3_00CEFEA95119225A()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A052C00FB612D077_METHOD_3_00CEFEA95119225A_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_3_00CEFEA95119225A_1()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A052C00FB612D077_METHOD_3_00CEFEA95119225A_1_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A052C00FB612D077_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_3_312DDA64721D74A4(::UnityEngine::GameObject* a1, ::System::String* a2)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_A052C00FB612D077_METHOD_3_312DDA64721D74A4_OFFSET))(this, a1, a2);
	}
};
