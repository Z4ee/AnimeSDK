#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/BoolEx.h"
#include "unitysdk/RPG/GameCore/NumBarSubType.h"

namespace RPG::GameCore { class JsonConfig; }
namespace System { class String; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_3DB8C1534EF0424D_METHOD_2_60F407FD7312FE13_OFFSET UNITYSDK_OFFSET(0x8A72A30)
#define CLASS_2_3DB8C1534EF0424D_METHOD_2_8285091081E03590_OFFSET UNITYSDK_OFFSET(0x8A72EC0)
#define CLASS_2_3DB8C1534EF0424D_METHOD_2_8E66B82298267DC3_OFFSET UNITYSDK_OFFSET(0x8A72F60)
#define CLASS_2_3DB8C1534EF0424D_METHOD_2_B3395AFA7A642A0F_OFFSET UNITYSDK_OFFSET(0x8A72C00)
#define CLASS_2_3DB8C1534EF0424D__CTOR_OFFSET UNITYSDK_OFFSET(0x8A73030)
#define CLASS_2_3DB8C1534EF0424D__ONBIND_OFFSET UNITYSDK_OFFSET(0x8A726A0)
#define CLASS_2_3DB8C1534EF0424D___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x8A73060)

inline static constexpr unsigned int Class_2_3DB8C1534EF0424D_TypeDefinitionIndex = 59253;

class Class_2_3DB8C1534EF0424D : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::System::String* Field_2_8; // 0x60
	::UnityEngine::UI::Text* Field_2_6; // 0x68
	::UnityEngine::Transform* Field_2_4; // 0x70
	::UnityEngine::UI::Text* Field_2_0; // 0x78
	::UnityEngine::UI::Image* Field_2_2; // 0x80
	::UnityEngine::Transform* Field_2_3; // 0x88
	::UnityEngine::Transform* Field_2_5; // 0x90
	::UnityEngine::UI::Text* Field_2_1; // 0x98
	::RPG::GameCore::NumBarSubType Field_2_7; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DB8C1534EF0424D__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DB8C1534EF0424D__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_60F407FD7312FE13(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::RPG::GameCore::JsonConfig* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::RPG::GameCore::JsonConfig*))((::PBYTE)hIl2Cpp + CLASS_2_3DB8C1534EF0424D_METHOD_2_60F407FD7312FE13_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_B3395AFA7A642A0F(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::RPG::GameCore::NumBarSubType a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::RPG::GameCore::NumBarSubType))((::PBYTE)hIl2Cpp + CLASS_2_3DB8C1534EF0424D_METHOD_2_B3395AFA7A642A0F_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_8285091081E03590(::RPG::GameCore::BoolEx a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BoolEx))((::PBYTE)hIl2Cpp + CLASS_2_3DB8C1534EF0424D_METHOD_2_8285091081E03590_OFFSET))(this, a1);
	}

	::System::Void Method_2_8E66B82298267DC3(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_3DB8C1534EF0424D_METHOD_2_8E66B82298267DC3_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DB8C1534EF0424D___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
