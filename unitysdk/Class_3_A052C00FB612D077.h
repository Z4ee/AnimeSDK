#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_5D22D26C61201935.h"

namespace RPG::GameCore { class ActiveTemplateVirtualCamera; }
namespace RPG::GameCore { class CinemachineVirtualCameraTemplateConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CLASS_3_A052C00FB612D077_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10A25260)
#define CLASS_3_A052C00FB612D077_METHOD_3_00CEFEA95119225A_1_OFFSET UNITYSDK_OFFSET(0x10A25CB0)
#define CLASS_3_A052C00FB612D077_METHOD_3_00CEFEA95119225A_OFFSET UNITYSDK_OFFSET(0x10A25BF0)
#define CLASS_3_A052C00FB612D077_METHOD_3_312DDA64721D74A4_OFFSET UNITYSDK_OFFSET(0x10A25DC0)
#define CLASS_3_A052C00FB612D077_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x10A25FB0)
#define CLASS_3_A052C00FB612D077_METHOD_3_72DE97951083FCD8_1_OFFSET UNITYSDK_OFFSET(0x10A25F40)
#define CLASS_3_A052C00FB612D077_METHOD_3_72DE97951083FCD8_OFFSET UNITYSDK_OFFSET(0x10A25ED0)
#define CLASS_3_A052C00FB612D077_METHOD_3_8C945585B4A8C17B_OFFSET UNITYSDK_OFFSET(0x10A25A70)
#define CLASS_3_A052C00FB612D077_METHOD_3_8EDC5379021CEA42_OFFSET UNITYSDK_OFFSET(0x10A26020)
#define CLASS_3_A052C00FB612D077_METHOD_3_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0x10A25EC0)
#define CLASS_3_A052C00FB612D077_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10A25D70)
#define CLASS_3_A052C00FB612D077_ONSKIP_OFFSET UNITYSDK_OFFSET(0x10A258F0)
#define CLASS_3_A052C00FB612D077_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10A252F0)
#define CLASS_3_A052C00FB612D077__CTOR_OFFSET UNITYSDK_OFFSET(0x10A25180)
#define CLASS_3_A052C00FB612D077___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10A25E20)
#define CLASS_3_A052C00FB612D077___IFIXBASEPROXY_ONSKIP_OFFSET UNITYSDK_OFFSET(0x10A25EB0)
#define CLASS_3_A052C00FB612D077___IFIXBASEPROXY_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10A25EA0)

inline static constexpr unsigned int Class_3_A052C00FB612D077_TypeDefinitionIndex = 46636;

class Class_3_A052C00FB612D077 : public ::Class_2_5D22D26C61201935
{
public:
	::RPG::GameCore::CinemachineVirtualCameraTemplateConfig* Field_3_0; // 0x78
	::System::String* Field_3_2; // 0x80
	::RPG::GameCore::ActiveTemplateVirtualCamera* Field_3_1; // 0x88

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

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A052C00FB612D077___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A052C00FB612D077___IFIXBASEPROXY_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A052C00FB612D077___IFIXBASEPROXY_ONSKIP_OFFSET))(this);
	}

	::System::Void Method_3_937F8473216A3162()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A052C00FB612D077_METHOD_3_937F8473216A3162_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_3_72DE97951083FCD8()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A052C00FB612D077_METHOD_3_72DE97951083FCD8_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_3_72DE97951083FCD8_1()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A052C00FB612D077_METHOD_3_72DE97951083FCD8_1_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A052C00FB612D077_METHOD_3_5790A55946AA509D_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_3_8EDC5379021CEA42(::UnityEngine::GameObject* P0, ::System::String* P1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_A052C00FB612D077_METHOD_3_8EDC5379021CEA42_OFFSET))(this, P0, P1);
	}
};
