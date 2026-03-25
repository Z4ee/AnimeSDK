#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_89D8044AB73F8F6D.h"

class Class_2_CD83CC421FE25C89_Class_1_152E032112DD3242;
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class AspectRatioFitter; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class RawImage; }

#define CLASS_2_CD83CC421FE25C89_METHOD_2_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x8D3B2F0)
#define CLASS_2_CD83CC421FE25C89_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x8D3B2A0)
#define CLASS_2_CD83CC421FE25C89__CTOR_OFFSET UNITYSDK_OFFSET(0x8D3B760)

inline static constexpr unsigned int Class_2_CD83CC421FE25C89_TypeDefinitionIndex = 59778;

class Class_2_CD83CC421FE25C89 : public ::Class_1_89D8044AB73F8F6D
{
public:
	::UnityEngine::GameObject* Field_2_0; // 0x18
	::UnityEngine::UI::Button* Field_2_8; // 0x20
	::UnityEngine::UI::Image* Field_2_9; // 0x28
	::UnityEngine::Transform* Field_2_3; // 0x30
	::UnityEngine::UI::Button* Field_2_6; // 0x38
	::UnityEngine::UI::AspectRatioFitter* Field_2_1; // 0x40
	::UnityEngine::UI::Button* Field_2_7; // 0x48
	::UnityEngine::UI::AspectRatioFitter* Field_2_2; // 0x50
	::UnityEngine::UI::RawImage* Field_2_4; // 0x58
	::UnityEngine::UI::Button* Field_2_5; // 0x60
	::Il2CppArray<::Class_2_CD83CC421FE25C89_Class_1_152E032112DD3242*>* Field_2_10; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD83CC421FE25C89__CTOR_OFFSET))(this);
	}

	::System::String* Method_2_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD83CC421FE25C89_METHOD_2_DA1BF2C227DC3D86_OFFSET))(this);
	}

	::System::Void Method_2_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD83CC421FE25C89_METHOD_2_0865E94460F11643_OFFSET))(this);
	}
};
