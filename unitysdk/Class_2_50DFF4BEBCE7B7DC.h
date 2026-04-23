#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/GridFightEquipCategory.h"

namespace RPG::Client { class GridFightItemConfig; }
namespace System { class String; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_50DFF4BEBCE7B7DC_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x9770670)
#define CLASS_2_50DFF4BEBCE7B7DC_METHOD_2_5414F078A7E29228_OFFSET UNITYSDK_OFFSET(0x97706C0)
#define CLASS_2_50DFF4BEBCE7B7DC_METHOD_2_618986AC7C39AC5A_OFFSET UNITYSDK_OFFSET(0x9770860)
#define CLASS_2_50DFF4BEBCE7B7DC_METHOD_2_898C9A3FDCAD7F6C_OFFSET UNITYSDK_OFFSET(0x97708F0)
#define CLASS_2_50DFF4BEBCE7B7DC_METHOD_2_EBAE36A6264F45D6_OFFSET UNITYSDK_OFFSET(0x9770800)
#define CLASS_2_50DFF4BEBCE7B7DC_METHOD_2_F07808AF19FA033A_OFFSET UNITYSDK_OFFSET(0x97707A0)
#define CLASS_2_50DFF4BEBCE7B7DC__CTOR_OFFSET UNITYSDK_OFFSET(0x9770990)
#define CLASS_2_50DFF4BEBCE7B7DC__ONBIND_OFFSET UNITYSDK_OFFSET(0x97703C0)
#define CLASS_2_50DFF4BEBCE7B7DC___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x97709C0)

inline static constexpr unsigned int Class_2_50DFF4BEBCE7B7DC_TypeDefinitionIndex = 66568;

class Class_2_50DFF4BEBCE7B7DC : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::UnityEngine::UI::Text* Field_2_7; // 0x60
	::UnityEngine::Transform* Field_2_4; // 0x68
	::UnityEngine::Transform* Field_2_2; // 0x70
	::UnityEngine::Transform* Field_2_6; // 0x78
	::UnityEngine::Transform* Field_2_3; // 0x80
	::UnityEngine::UI::Image* Field_2_1; // 0x88
	::UnityEngine::Transform* Field_2_5; // 0x90
	::System::Boolean Field_2_8; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_50DFF4BEBCE7B7DC__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_50DFF4BEBCE7B7DC__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_50DFF4BEBCE7B7DC_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_2_5414F078A7E29228(::RPG::Client::GridFightItemConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightItemConfig*))((::PBYTE)hIl2Cpp + CLASS_2_50DFF4BEBCE7B7DC_METHOD_2_5414F078A7E29228_OFFSET))(this, a1);
	}

	::System::Void Method_2_F07808AF19FA033A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_50DFF4BEBCE7B7DC_METHOD_2_F07808AF19FA033A_OFFSET))(this, a1);
	}

	::System::Void Method_2_EBAE36A6264F45D6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_50DFF4BEBCE7B7DC_METHOD_2_EBAE36A6264F45D6_OFFSET))(this, a1);
	}

	::System::Void Method_2_618986AC7C39AC5A(::RPG::GameCore::GridFightEquipCategory a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightEquipCategory))((::PBYTE)hIl2Cpp + CLASS_2_50DFF4BEBCE7B7DC_METHOD_2_618986AC7C39AC5A_OFFSET))(this, a1);
	}

	::System::Void Method_2_898C9A3FDCAD7F6C(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_50DFF4BEBCE7B7DC_METHOD_2_898C9A3FDCAD7F6C_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_50DFF4BEBCE7B7DC___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
