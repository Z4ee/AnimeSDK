#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4DBF4263913B7C67.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class AttachPointMapping; }
namespace RPG::GameCore { class ActivityHipplenInteractInfoRow; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_FA82176727DB51E8_METHOD_2_015C4568B90A98D2_OFFSET UNITYSDK_OFFSET(0x9EE5170)
#define CLASS_2_FA82176727DB51E8_METHOD_2_5032D345693BCF5C_OFFSET UNITYSDK_OFFSET(0x9EE5180)
#define CLASS_2_FA82176727DB51E8_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x9EE5110)
#define CLASS_2_FA82176727DB51E8_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x9EE50B0)
#define CLASS_2_FA82176727DB51E8_METHOD_2_60524D4478F225B6_OFFSET UNITYSDK_OFFSET(0x9EE4800)
#define CLASS_2_FA82176727DB51E8_METHOD_2_8542E37E74FDE1B5_1_OFFSET UNITYSDK_OFFSET(0x9EE4780)
#define CLASS_2_FA82176727DB51E8_METHOD_2_8542E37E74FDE1B5_OFFSET UNITYSDK_OFFSET(0x9EE4700)
#define CLASS_2_FA82176727DB51E8_METHOD_2_BB8CB27D27D208BE_OFFSET UNITYSDK_OFFSET(0x9EE4B00)
#define CLASS_2_FA82176727DB51E8_METHOD_2_F21134421FE54DC7_OFFSET UNITYSDK_OFFSET(0x9EE5010)
#define CLASS_2_FA82176727DB51E8__CTOR_OFFSET UNITYSDK_OFFSET(0x9EE50A0)

inline static constexpr unsigned int Class_2_FA82176727DB51E8_TypeDefinitionIndex = 61720;

class Class_2_FA82176727DB51E8 : public ::Class_1_4DBF4263913B7C67
{
public:
	::RPG::Client::AttachPointMapping* Field_2_0; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA82176727DB51E8__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8542E37E74FDE1B5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA82176727DB51E8_METHOD_2_8542E37E74FDE1B5_OFFSET))(this);
	}

	::System::Void Method_2_8542E37E74FDE1B5_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA82176727DB51E8_METHOD_2_8542E37E74FDE1B5_1_OFFSET))(this);
	}

	::System::Boolean Method_2_60524D4478F225B6(::UnityEngine::Vector2 a1, ::UnityEngine::RaycastHit& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_2_FA82176727DB51E8_METHOD_2_60524D4478F225B6_OFFSET))(this, a1, a2);
	}

	::UnityEngine::GameObject* Method_2_BB8CB27D27D208BE(::System::String* a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_FA82176727DB51E8_METHOD_2_BB8CB27D27D208BE_OFFSET))(this, a1);
	}

	::RPG::GameCore::ActivityHipplenInteractInfoRow* Method_2_F21134421FE54DC7()
	{
		return ((::RPG::GameCore::ActivityHipplenInteractInfoRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA82176727DB51E8_METHOD_2_F21134421FE54DC7_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA82176727DB51E8_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA82176727DB51E8_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Boolean Method_2_015C4568B90A98D2(::UnityEngine::Vector2 P0, ::UnityEngine::RaycastHit& P1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_2_FA82176727DB51E8_METHOD_2_015C4568B90A98D2_OFFSET))(this, P0, P1);
	}

	::UnityEngine::GameObject* Method_2_5032D345693BCF5C(::System::String* P0)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_FA82176727DB51E8_METHOD_2_5032D345693BCF5C_OFFSET))(this, P0);
	}
};
