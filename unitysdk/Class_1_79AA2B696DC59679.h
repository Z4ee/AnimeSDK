#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0C791B68CB2A5BF5;
class Class_1_E13183B148E560DC;
namespace DG::Tweening { class Tween; }
namespace MoleMole { class TextureSheetData; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class SpriteRenderer; }
namespace UnityEngine { class Transform; }

#define CLASS_1_79AA2B696DC59679_METHOD_1_39590AB2089F9F4D_OFFSET UNITYSDK_OFFSET(0x111E6060)
#define CLASS_1_79AA2B696DC59679_METHOD_1_41A074549EF25F63_1_OFFSET UNITYSDK_OFFSET(0x111E5EE0)
#define CLASS_1_79AA2B696DC59679_METHOD_1_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x111E5D60)
#define CLASS_1_79AA2B696DC59679_METHOD_1_82E992240300FB30_OFFSET UNITYSDK_OFFSET(0x111E6040)
#define CLASS_1_79AA2B696DC59679_METHOD_1_A15BA9596DA44418_OFFSET UNITYSDK_OFFSET(0x111E5CF0)
#define CLASS_1_79AA2B696DC59679_METHOD_1_B975341E888FDB33_OFFSET UNITYSDK_OFFSET(0x111E6130)
#define CLASS_1_79AA2B696DC59679__CCTOR_OFFSET UNITYSDK_OFFSET(0x111E5CD0)
#define CLASS_1_79AA2B696DC59679__CTOR_OFFSET UNITYSDK_OFFSET(0x111E5BE0)

inline static constexpr unsigned int Class_1_79AA2B696DC59679_TypeDefinitionIndex = 64402;

class Class_1_79AA2B696DC59679 : public ::System::Object
{
public:
	static ::System::Single* StaticGet_Field_1_0()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_79AA2B696DC59679_TypeDefinitionIndex)->GetStaticField(0xF490);
	}
	static ::System::Single* StaticGet_Field_1_1()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_79AA2B696DC59679_TypeDefinitionIndex)->GetStaticField(0xF494);
	}
	static ::System::Single* StaticGet_Field_1_2()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_79AA2B696DC59679_TypeDefinitionIndex)->GetStaticField(0xF498);
	}
	::DG::Tweening::Tween* Field_1_13; // 0x10
	::UnityEngine::Transform* Field_1_5; // 0x18
	::UnityEngine::SpriteRenderer* Field_1_6; // 0x20
	::Class_1_E13183B148E560DC* Field_1_7; // 0x28
	::DG::Tweening::Tween* Field_1_12; // 0x30
	::UnityEngine::Transform* Field_1_3; // 0x38
	::UnityEngine::GameObject* Field_1_4; // 0x40
	::System::Single Field_1_9; // 0x48
	::System::Boolean Field_1_10; // 0x4C
	::System::Boolean Field_1_11; // 0x4D
	::System::Int32 Field_1_8; // 0x50

	::System::Void _ctor(::UnityEngine::GameObject* a1, ::UnityEngine::Transform* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_79AA2B696DC59679__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_79AA2B696DC59679__CCTOR_OFFSET))();
	}

	::System::Void Method_1_A15BA9596DA44418(::MoleMole::TextureSheetData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::TextureSheetData*))((::PBYTE)hIl2Cpp + CLASS_1_79AA2B696DC59679_METHOD_1_A15BA9596DA44418_OFFSET))(this, a1);
	}

	::System::Void Method_1_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79AA2B696DC59679_METHOD_1_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_1_41A074549EF25F63_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79AA2B696DC59679_METHOD_1_41A074549EF25F63_1_OFFSET))(this);
	}

	::System::Void Method_1_82E992240300FB30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79AA2B696DC59679_METHOD_1_82E992240300FB30_OFFSET))(this);
	}

	::System::Void Method_1_39590AB2089F9F4D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_79AA2B696DC59679_METHOD_1_39590AB2089F9F4D_OFFSET))(this, a1);
	}

	::System::Void Method_1_B975341E888FDB33(::Class_1_0C791B68CB2A5BF5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0C791B68CB2A5BF5*))((::PBYTE)hIl2Cpp + CLASS_1_79AA2B696DC59679_METHOD_1_B975341E888FDB33_OFFSET))(this, a1);
	}
};
