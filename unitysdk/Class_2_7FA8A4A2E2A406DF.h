#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_1_1C6D038ACA57B217;
class Class_2_ABDB9F9EEB76D625;
namespace RPG::GameCore { class GridFightManager; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_7FA8A4A2E2A406DF_METHOD_2_2F2B436D8A949630_OFFSET UNITYSDK_OFFSET(0xA5C9360)
#define CLASS_2_7FA8A4A2E2A406DF_METHOD_2_676E4EF2BBA9B1C2_OFFSET UNITYSDK_OFFSET(0xA5C93E0)
#define CLASS_2_7FA8A4A2E2A406DF_METHOD_2_A984848EA3E436DA_OFFSET UNITYSDK_OFFSET(0xA5C94A0)
#define CLASS_2_7FA8A4A2E2A406DF_METHOD_2_DDDB3490E38FF95F_OFFSET UNITYSDK_OFFSET(0xA5C97A0)
#define CLASS_2_7FA8A4A2E2A406DF__CTOR_OFFSET UNITYSDK_OFFSET(0xA5C9920)
#define CLASS_2_7FA8A4A2E2A406DF__ONBIND_OFFSET UNITYSDK_OFFSET(0xA5C92A0)
#define CLASS_2_7FA8A4A2E2A406DF___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xA5C9950)

inline static constexpr unsigned int Class_2_7FA8A4A2E2A406DF_TypeDefinitionIndex = 67522;

class Class_2_7FA8A4A2E2A406DF : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::UnityEngine::UI::Text* Field_2_1; // 0x60
	::UnityEngine::UI::Image* Field_2_2; // 0x68
	::Class_2_ABDB9F9EEB76D625* Field_2_3; // 0x70
	::Class_1_1C6D038ACA57B217* Field_2_4; // 0x78

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

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7FA8A4A2E2A406DF___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
