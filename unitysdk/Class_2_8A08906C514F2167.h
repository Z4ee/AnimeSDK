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

#define CLASS_2_8A08906C514F2167_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB8ABB30)
#define CLASS_2_8A08906C514F2167_METHOD_2_0BC5469359019175_OFFSET UNITYSDK_OFFSET(0xB8AC860)
#define CLASS_2_8A08906C514F2167_METHOD_2_5B2CAD1A0582F9BB_OFFSET UNITYSDK_OFFSET(0xB8AC490)
#define CLASS_2_8A08906C514F2167_METHOD_2_7AEA4B2B25797605_OFFSET UNITYSDK_OFFSET(0xB8AC0E0)
#define CLASS_2_8A08906C514F2167_METHOD_2_A52062643A2DBAD8_OFFSET UNITYSDK_OFFSET(0xB8AC330)
#define CLASS_2_8A08906C514F2167_METHOD_2_BA3668D75F932A95_OFFSET UNITYSDK_OFFSET(0xB8AC7A0)
#define CLASS_2_8A08906C514F2167_METHOD_2_F5C8A89B67E293AE_OFFSET UNITYSDK_OFFSET(0xB8AC1C0)
#define CLASS_2_8A08906C514F2167_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB8ABBD0)
#define CLASS_2_8A08906C514F2167_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB8AC540)
#define CLASS_2_8A08906C514F2167_TICK_OFFSET UNITYSDK_OFFSET(0xB8AC590)
#define CLASS_2_8A08906C514F2167__CTOR_OFFSET UNITYSDK_OFFSET(0xB8ABB10)

inline static constexpr unsigned int Class_2_8A08906C514F2167_TypeDefinitionIndex = 47385;

class Class_2_8A08906C514F2167 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ShowTutorialUIMask* Field_2_0; // 0x18
	::UnityEngine::RectTransform* Field_2_4; // 0x20
	::RPG::GameCore::TaskContext* Field_2_1; // 0x28
	::UnityEngine::MeshRenderer* Field_2_8; // 0x30
	::RPG::Client::InverseMask* Field_2_3; // 0x38
	::UnityEngine::Vector2 Field_2_7; // 0x40
	::System::Single Field_2_2; // 0x48
	::System::Single Field_2_6; // 0x4C
	::System::Int32 Field_2_5; // 0x50

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

	::System::Void Method_2_F5C8A89B67E293AE(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_8A08906C514F2167_METHOD_2_F5C8A89B67E293AE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A52062643A2DBAD8(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8A08906C514F2167_METHOD_2_A52062643A2DBAD8_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_0BC5469359019175(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8A08906C514F2167_METHOD_2_0BC5469359019175_OFFSET))(this, a1);
	}

	::System::Void Method_2_5B2CAD1A0582F9BB(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8A08906C514F2167_METHOD_2_5B2CAD1A0582F9BB_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_BA3668D75F932A95(::System::Single a1, ::System::Single& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_8A08906C514F2167_METHOD_2_BA3668D75F932A95_OFFSET))(this, a1, a2);
	}
};
