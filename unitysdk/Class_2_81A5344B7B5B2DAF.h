#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_1_6D3A625BE1D0B270;
class Class_2_157110479543DAE3;
namespace RPG::GameCore { class GridFightManager; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_81A5344B7B5B2DAF_METHOD_2_2F2B436D8A949630_OFFSET UNITYSDK_OFFSET(0x8A70800)
#define CLASS_2_81A5344B7B5B2DAF_METHOD_2_3DCAF09BEB5CADD1_OFFSET UNITYSDK_OFFSET(0x8A70880)
#define CLASS_2_81A5344B7B5B2DAF_METHOD_2_8F8D080EF5D1D761_OFFSET UNITYSDK_OFFSET(0x8A70BE0)
#define CLASS_2_81A5344B7B5B2DAF_METHOD_2_B9A97467188E4B69_OFFSET UNITYSDK_OFFSET(0x8A70940)
#define CLASS_2_81A5344B7B5B2DAF__CTOR_OFFSET UNITYSDK_OFFSET(0x8A70D50)
#define CLASS_2_81A5344B7B5B2DAF__ONBIND_OFFSET UNITYSDK_OFFSET(0x8A70670)
#define CLASS_2_81A5344B7B5B2DAF___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x8A70D80)

inline static constexpr unsigned int Class_2_81A5344B7B5B2DAF_TypeDefinitionIndex = 59189;

class Class_2_81A5344B7B5B2DAF : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::Class_2_157110479543DAE3* Field_2_1; // 0x60
	::UnityEngine::UI::Text* Field_2_3; // 0x68
	::Class_1_6D3A625BE1D0B270* Field_2_4; // 0x70
	::UnityEngine::UI::Image* Field_2_2; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81A5344B7B5B2DAF__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81A5344B7B5B2DAF__ONBIND_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_2_2F2B436D8A949630()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81A5344B7B5B2DAF_METHOD_2_2F2B436D8A949630_OFFSET))(this);
	}

	::System::Void Method_2_3DCAF09BEB5CADD1(::Class_1_6D3A625BE1D0B270* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6D3A625BE1D0B270*))((::PBYTE)hIl2Cpp + CLASS_2_81A5344B7B5B2DAF_METHOD_2_3DCAF09BEB5CADD1_OFFSET))(this, a1);
	}

	::System::Void Method_2_B9A97467188E4B69()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81A5344B7B5B2DAF_METHOD_2_B9A97467188E4B69_OFFSET))(this);
	}

	::RPG::GameCore::GridFightManager* Method_2_8F8D080EF5D1D761()
	{
		return ((::RPG::GameCore::GridFightManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81A5344B7B5B2DAF_METHOD_2_8F8D080EF5D1D761_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81A5344B7B5B2DAF___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
