#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_2_FCB7A4BBA3DC55BF;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillData; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_D9E1D9A7305A2764_METHOD_2_1808E1CF7A125519_1_OFFSET UNITYSDK_OFFSET(0x10983A40)
#define CLASS_2_D9E1D9A7305A2764_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x109833F0)
#define CLASS_2_D9E1D9A7305A2764_METHOD_2_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x109836E0)
#define CLASS_2_D9E1D9A7305A2764_METHOD_2_283228DCA08F69C7_OFFSET UNITYSDK_OFFSET(0x109837C0)
#define CLASS_2_D9E1D9A7305A2764_METHOD_2_494458CA7765DC42_OFFSET UNITYSDK_OFFSET(0x10983AB0)
#define CLASS_2_D9E1D9A7305A2764_METHOD_2_4BD2BFB48FF90060_OFFSET UNITYSDK_OFFSET(0x10983460)
#define CLASS_2_D9E1D9A7305A2764_METHOD_2_4C1C6BDA70EF0410_OFFSET UNITYSDK_OFFSET(0x109838F0)
#define CLASS_2_D9E1D9A7305A2764_METHOD_2_5E657A2D9C0A02DF_OFFSET UNITYSDK_OFFSET(0x10983890)
#define CLASS_2_D9E1D9A7305A2764_METHOD_2_7AFC74ADCC2A9C7A_OFFSET UNITYSDK_OFFSET(0x10983750)
#define CLASS_2_D9E1D9A7305A2764_METHOD_2_838A02F643871995_OFFSET UNITYSDK_OFFSET(0x10983670)
#define CLASS_2_D9E1D9A7305A2764_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x109833A0)
#define CLASS_2_D9E1D9A7305A2764_METHOD_2_A9E445C5683F09FE_OFFSET UNITYSDK_OFFSET(0x10983B20)
#define CLASS_2_D9E1D9A7305A2764_METHOD_2_ABAF2DCAD651CD1D_OFFSET UNITYSDK_OFFSET(0x10983980)
#define CLASS_2_D9E1D9A7305A2764_METHOD_2_B2684BD6EB9B0789_OFFSET UNITYSDK_OFFSET(0x109835F0)
#define CLASS_2_D9E1D9A7305A2764_METHOD_2_C89A41A14F7CCD91_OFFSET UNITYSDK_OFFSET(0x10983C10)
#define CLASS_2_D9E1D9A7305A2764__CTOR_OFFSET UNITYSDK_OFFSET(0x10983B80)
#define CLASS_2_D9E1D9A7305A2764__ONBIND_OFFSET UNITYSDK_OFFSET(0x109832D0)
#define CLASS_2_D9E1D9A7305A2764___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x10983BB0)

inline static constexpr unsigned int Class_2_D9E1D9A7305A2764_TypeDefinitionIndex = 58943;

class Class_2_D9E1D9A7305A2764 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_4; // 0x0
	// static const ::System::String* Field_2_5; // 0x0
	// static const ::System::String* Field_2_6; // 0x0
	::UnityEngine::Animation* Field_2_3; // 0x60
	::Struct_2_96F8F0A04B900A9E Field_2_2; // 0x68
	::Class_2_FCB7A4BBA3DC55BF* Field_2_1; // 0x70
	::UnityEngine::Animator* Field_2_0; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9E1D9A7305A2764__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9E1D9A7305A2764__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_D9E1D9A7305A2764_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9E1D9A7305A2764_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_2_4BD2BFB48FF90060(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D9E1D9A7305A2764_METHOD_2_4BD2BFB48FF90060_OFFSET))(this, a1);
	}

	::System::Void Method_2_B2684BD6EB9B0789(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D9E1D9A7305A2764_METHOD_2_B2684BD6EB9B0789_OFFSET))(this, a1);
	}

	::System::Void Method_2_838A02F643871995(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_2_D9E1D9A7305A2764_METHOD_2_838A02F643871995_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D9E1D9A7305A2764_METHOD_2_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void Method_2_7AFC74ADCC2A9C7A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D9E1D9A7305A2764_METHOD_2_7AFC74ADCC2A9C7A_OFFSET))(this, a1);
	}

	::System::Void Method_2_5E657A2D9C0A02DF(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_D9E1D9A7305A2764_METHOD_2_5E657A2D9C0A02DF_OFFSET))(this, a1);
	}

	::System::Void Method_2_4C1C6BDA70EF0410(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D9E1D9A7305A2764_METHOD_2_4C1C6BDA70EF0410_OFFSET))(this, a1);
	}

	::System::Void Method_2_ABAF2DCAD651CD1D(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_D9E1D9A7305A2764_METHOD_2_ABAF2DCAD651CD1D_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1808E1CF7A125519_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9E1D9A7305A2764_METHOD_2_1808E1CF7A125519_1_OFFSET))(this);
	}

	::UnityEngine::RectTransform* Method_2_494458CA7765DC42()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9E1D9A7305A2764_METHOD_2_494458CA7765DC42_OFFSET))(this);
	}

	::System::Void Method_2_A9E445C5683F09FE(::UnityEngine::Animation* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animation*))((::PBYTE)hIl2Cpp + CLASS_2_D9E1D9A7305A2764_METHOD_2_A9E445C5683F09FE_OFFSET))(this, a1);
	}

	::System::Void Method_2_283228DCA08F69C7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D9E1D9A7305A2764_METHOD_2_283228DCA08F69C7_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9E1D9A7305A2764___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_C89A41A14F7CCD91(::Struct_2_96F8F0A04B900A9E P0)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_D9E1D9A7305A2764_METHOD_2_C89A41A14F7CCD91_OFFSET))(this, P0);
	}
};
