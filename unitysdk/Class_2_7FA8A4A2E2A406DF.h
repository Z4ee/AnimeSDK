#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

class Class_1_1C6D038ACA57B217;
class Class_2_ABDB9F9EEB76D625;
namespace RPG::GameCore { class GridFightManager; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_7FA8A4A2E2A406DF_METHOD_2_2F2B436D8A949630_OFFSET UNITYSDK_OFFSET(0x17E8DEE0)
#define CLASS_2_7FA8A4A2E2A406DF_METHOD_2_676E4EF2BBA9B1C2_OFFSET UNITYSDK_OFFSET(0x17E8DF60)
#define CLASS_2_7FA8A4A2E2A406DF_METHOD_2_A984848EA3E436DA_OFFSET UNITYSDK_OFFSET(0x17E8E020)
#define CLASS_2_7FA8A4A2E2A406DF_METHOD_2_DDDB3490E38FF95F_OFFSET UNITYSDK_OFFSET(0x17E8E320)
#define CLASS_2_7FA8A4A2E2A406DF__CTOR_OFFSET UNITYSDK_OFFSET(0x17E8E4A0)
#define CLASS_2_7FA8A4A2E2A406DF__ONBIND_OFFSET UNITYSDK_OFFSET(0x17E8DE20)

inline static constexpr unsigned int Class_2_7FA8A4A2E2A406DF_TypeDefinitionIndex = 72202;

class Class_2_7FA8A4A2E2A406DF : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* DJCBDJMACFH; // 0x0
	::Class_2_ABDB9F9EEB76D625* PJMNKNKJOGE; // 0x60
	::UnityEngine::UI::Image* LKAOENJHMHA; // 0x68
	::UnityEngine::UI::Text* KPICPMEANJJ; // 0x70
	::Class_1_1C6D038ACA57B217* PMAIPJPNKMJ; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7FA8A4A2E2A406DF__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7FA8A4A2E2A406DF__ONBIND_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_2_2F2B436D8A949630()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7FA8A4A2E2A406DF_METHOD_2_2F2B436D8A949630_OFFSET))(this);
	}

	::System::Void Method_2_676E4EF2BBA9B1C2(::Class_1_1C6D038ACA57B217* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1C6D038ACA57B217*))((::PBYTE)hIl2Cpp + CLASS_2_7FA8A4A2E2A406DF_METHOD_2_676E4EF2BBA9B1C2_OFFSET))(this, a1);
	}

	::System::Void Method_2_A984848EA3E436DA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7FA8A4A2E2A406DF_METHOD_2_A984848EA3E436DA_OFFSET))(this);
	}

	::RPG::GameCore::GridFightManager* Method_2_DDDB3490E38FF95F()
	{
		return ((::RPG::GameCore::GridFightManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7FA8A4A2E2A406DF_METHOD_2_DDDB3490E38FF95F_OFFSET))(this);
	}
};
