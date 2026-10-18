#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class InverseMask; }
namespace RPG::GameCore { class ShowTutorialUIMask; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_8A08906C514F2167_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBD11580)
#define CLASS_2_8A08906C514F2167_METHOD_2_0BC5469359019175_OFFSET UNITYSDK_OFFSET(0xBD123D0)
#define CLASS_2_8A08906C514F2167_METHOD_2_76CD9B9D1269FA90_OFFSET UNITYSDK_OFFSET(0xBD11EB0)
#define CLASS_2_8A08906C514F2167_METHOD_2_7AEA4B2B25797605_OFFSET UNITYSDK_OFFSET(0xBD11BA0)
#define CLASS_2_8A08906C514F2167_METHOD_2_A52062643A2DBAD8_OFFSET UNITYSDK_OFFSET(0xBD11D50)
#define CLASS_2_8A08906C514F2167_METHOD_2_BA3668D75F932A95_OFFSET UNITYSDK_OFFSET(0xBD12310)
#define CLASS_2_8A08906C514F2167_METHOD_2_D2EAF64EAA6E21FB_OFFSET UNITYSDK_OFFSET(0xBD11C80)
#define CLASS_2_8A08906C514F2167_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBD11620)
#define CLASS_2_8A08906C514F2167_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBD11FD0)
#define CLASS_2_8A08906C514F2167_TICK_OFFSET UNITYSDK_OFFSET(0xBD12020)
#define CLASS_2_8A08906C514F2167__CTOR_OFFSET UNITYSDK_OFFSET(0xBD11560)

inline static constexpr unsigned int Class_2_8A08906C514F2167_TypeDefinitionIndex = 58704;

class Class_2_8A08906C514F2167 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::Client::InverseMask* AHFPLGOENNH; // 0x18
	::UnityEngine::MeshRenderer* GFEHCONCNCA; // 0x20
	::UnityEngine::RectTransform* AFOCLDFKOCI; // 0x28
	::RPG::GameCore::ShowTutorialUIMask* OFKGLJOAMLD; // 0x30
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x38
	::System::Single DJKKCALPBJE; // 0x40
	::System::Int32 POHBPGJFONJ; // 0x44
	::UnityEngine::Vector2 IKKNJMJCDOJ; // 0x48
	::System::Single EHLMEPDCBBC; // 0x50

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowTutorialUIMask* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowTutorialUIMask*))((::PBYTE)hIl2Cpp + CLASS_2_8A08906C514F2167__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8A08906C514F2167_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8A08906C514F2167_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8A08906C514F2167_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8A08906C514F2167_TICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_7AEA4B2B25797605()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8A08906C514F2167_METHOD_2_7AEA4B2B25797605_OFFSET))(this);
	}

	::System::Void Method_2_D2EAF64EAA6E21FB(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_8A08906C514F2167_METHOD_2_D2EAF64EAA6E21FB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A52062643A2DBAD8(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8A08906C514F2167_METHOD_2_A52062643A2DBAD8_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_0BC5469359019175(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8A08906C514F2167_METHOD_2_0BC5469359019175_OFFSET))(this, a1);
	}

	::System::Void Method_2_76CD9B9D1269FA90(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8A08906C514F2167_METHOD_2_76CD9B9D1269FA90_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_BA3668D75F932A95(::System::Single a1, ::System::Single& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_8A08906C514F2167_METHOD_2_BA3668D75F932A95_OFFSET))(this, a1, a2);
	}
};
