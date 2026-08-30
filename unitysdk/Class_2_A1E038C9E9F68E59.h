#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A167209E71412818.h"

class Class_2_A1E038C9E9F68E59_Class_1_152E032112DD3242;
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class AspectRatioFitter; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class RawImage; }

#define CLASS_2_A1E038C9E9F68E59_METHOD_2_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x164B84D0)
#define CLASS_2_A1E038C9E9F68E59_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x164B8480)
#define CLASS_2_A1E038C9E9F68E59__CTOR_OFFSET UNITYSDK_OFFSET(0x164B88E0)

inline static constexpr unsigned int Class_2_A1E038C9E9F68E59_TypeDefinitionIndex = 72840;

class Class_2_A1E038C9E9F68E59 : public ::Class_1_A167209E71412818
{
public:
	::UnityEngine::GameObject* DGAFJKMJFMC; // 0x18
	::UnityEngine::UI::Button* DIBBFLDNFKF; // 0x20
	::UnityEngine::UI::AspectRatioFitter* BBGGMKDMDNG; // 0x28
	::UnityEngine::Transform* LMHMPGIKBEB; // 0x30
	::UnityEngine::UI::Image* AJMIIBNLHNO; // 0x38
	::Il2CppArray<::Class_2_A1E038C9E9F68E59_Class_1_152E032112DD3242*>* CNCABJHFCLM; // 0x40
	::UnityEngine::UI::RawImage* JOAJLEHAHDI; // 0x48
	::UnityEngine::UI::Button* JEOIHFIIPDJ; // 0x50
	::UnityEngine::UI::Button* DEIHEPPPHGA; // 0x58
	::UnityEngine::UI::AspectRatioFitter* AFMOKBNCLKK; // 0x60
	::UnityEngine::UI::Button* ILJAPGEMAEC; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1E038C9E9F68E59__CTOR_OFFSET))(this);
	}

	::System::String* Method_2_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1E038C9E9F68E59_METHOD_2_DA1BF2C227DC3D86_OFFSET))(this);
	}

	::System::Void Method_2_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1E038C9E9F68E59_METHOD_2_0865E94460F11643_OFFSET))(this);
	}
};
