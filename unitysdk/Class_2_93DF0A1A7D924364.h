#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_47939AE85467CAEB.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class AttachPointMapping; }
namespace RPG::GameCore { class ActivityHipplenInteractInfoRow; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_93DF0A1A7D924364_METHOD_2_3A122334F4DD8698_OFFSET UNITYSDK_OFFSET(0x16CCE1C0)
#define CLASS_2_93DF0A1A7D924364_METHOD_2_60524D4478F225B6_OFFSET UNITYSDK_OFFSET(0x16CCDEB0)
#define CLASS_2_93DF0A1A7D924364_METHOD_2_6EAD389C97F97CBE_OFFSET UNITYSDK_OFFSET(0x16CCE5C0)
#define CLASS_2_93DF0A1A7D924364_METHOD_2_8542E37E74FDE1B5_1_OFFSET UNITYSDK_OFFSET(0x16CCDE30)
#define CLASS_2_93DF0A1A7D924364_METHOD_2_8542E37E74FDE1B5_OFFSET UNITYSDK_OFFSET(0x16CCDDB0)
#define CLASS_2_93DF0A1A7D924364__CTOR_OFFSET UNITYSDK_OFFSET(0x16CCE650)

inline static constexpr unsigned int Class_2_93DF0A1A7D924364_TypeDefinitionIndex = 75271;

class Class_2_93DF0A1A7D924364 : public ::Class_1_47939AE85467CAEB
{
public:
	::RPG::Client::AttachPointMapping* MDOMBPFNPGB; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93DF0A1A7D924364__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8542E37E74FDE1B5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93DF0A1A7D924364_METHOD_2_8542E37E74FDE1B5_OFFSET))(this);
	}

	::System::Void Method_2_8542E37E74FDE1B5_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93DF0A1A7D924364_METHOD_2_8542E37E74FDE1B5_1_OFFSET))(this);
	}

	::System::Boolean Method_2_60524D4478F225B6(::UnityEngine::Vector2 a1, ::UnityEngine::RaycastHit& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_2_93DF0A1A7D924364_METHOD_2_60524D4478F225B6_OFFSET))(this, a1, a2);
	}

	::UnityEngine::GameObject* Method_2_3A122334F4DD8698(::System::String* a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_93DF0A1A7D924364_METHOD_2_3A122334F4DD8698_OFFSET))(this, a1);
	}

	::RPG::GameCore::ActivityHipplenInteractInfoRow* Method_2_6EAD389C97F97CBE()
	{
		return ((::RPG::GameCore::ActivityHipplenInteractInfoRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93DF0A1A7D924364_METHOD_2_6EAD389C97F97CBE_OFFSET))(this);
	}
};
