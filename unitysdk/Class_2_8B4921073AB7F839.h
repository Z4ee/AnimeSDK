#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace RPG::GameCore { class JsonConfig; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_8B4921073AB7F839_METHOD_2_1AC96540166A150F_OFFSET UNITYSDK_OFFSET(0x116A4AE0)
#define CLASS_2_8B4921073AB7F839_METHOD_2_7994C4DE82EC92CB_OFFSET UNITYSDK_OFFSET(0x116A4E00)
#define CLASS_2_8B4921073AB7F839_METHOD_2_7E0102A7D81125F5_OFFSET UNITYSDK_OFFSET(0x116A4EB0)
#define CLASS_2_8B4921073AB7F839_METHOD_2_846274BDDB405F6B_OFFSET UNITYSDK_OFFSET(0x116A4C60)
#define CLASS_2_8B4921073AB7F839__CTOR_OFFSET UNITYSDK_OFFSET(0x116A4FB0)
#define CLASS_2_8B4921073AB7F839__ONBIND_OFFSET UNITYSDK_OFFSET(0x116A48F0)
#define CLASS_2_8B4921073AB7F839___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x116A4FE0)

inline static constexpr unsigned int Class_2_8B4921073AB7F839_TypeDefinitionIndex = 59254;

class Class_2_8B4921073AB7F839 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_4; // 0x0
	// static const ::System::String* Field_2_5; // 0x0
	// static const ::System::String* Field_2_6; // 0x0
	::UnityEngine::UI::Text* Field_2_1; // 0x60
	::UnityEngine::UI::Image* Field_2_0; // 0x68
	::UnityEngine::Animation* Field_2_2; // 0x70
	::System::Int32 Field_2_3; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B4921073AB7F839__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B4921073AB7F839__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_1AC96540166A150F(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::RPG::GameCore::JsonConfig* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::RPG::GameCore::JsonConfig*))((::PBYTE)hIl2Cpp + CLASS_2_8B4921073AB7F839_METHOD_2_1AC96540166A150F_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_846274BDDB405F6B(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8B4921073AB7F839_METHOD_2_846274BDDB405F6B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7994C4DE82EC92CB(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8B4921073AB7F839_METHOD_2_7994C4DE82EC92CB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7E0102A7D81125F5(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_8B4921073AB7F839_METHOD_2_7E0102A7D81125F5_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B4921073AB7F839___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
