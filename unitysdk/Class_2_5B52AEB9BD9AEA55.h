#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_B7F2227F5894FFC0;
namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerWalkingEffect; }

#define CLASS_2_5B52AEB9BD9AEA55_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAA14D80)
#define CLASS_2_5B52AEB9BD9AEA55_METHOD_2_0F2138E056F9294A_OFFSET UNITYSDK_OFFSET(0xAA159B0)
#define CLASS_2_5B52AEB9BD9AEA55_METHOD_2_3BC8B8F2BB08C1C2_OFFSET UNITYSDK_OFFSET(0xAA15890)
#define CLASS_2_5B52AEB9BD9AEA55_METHOD_2_3E90A56C35C519D8_OFFSET UNITYSDK_OFFSET(0xAA15E20)
#define CLASS_2_5B52AEB9BD9AEA55_METHOD_2_455E250D679F9642_OFFSET UNITYSDK_OFFSET(0xAA15960)
#define CLASS_2_5B52AEB9BD9AEA55_METHOD_2_626C719A884DEF9A_OFFSET UNITYSDK_OFFSET(0xAA158E0)
#define CLASS_2_5B52AEB9BD9AEA55_METHOD_2_6FF275C3039EB02D_OFFSET UNITYSDK_OFFSET(0xAA15AB0)
#define CLASS_2_5B52AEB9BD9AEA55_METHOD_2_960032BA2E22793D_OFFSET UNITYSDK_OFFSET(0xAA14EB0)
#define CLASS_2_5B52AEB9BD9AEA55_METHOD_2_9F59C088ACADFAC2_OFFSET UNITYSDK_OFFSET(0xAA14DD0)
#define CLASS_2_5B52AEB9BD9AEA55_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8FBD9B0)
#define CLASS_2_5B52AEB9BD9AEA55_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8FBDA30)
#define CLASS_2_5B52AEB9BD9AEA55_TICK_OFFSET UNITYSDK_OFFSET(0x8FBDA80)
#define CLASS_2_5B52AEB9BD9AEA55__CTOR_OFFSET UNITYSDK_OFFSET(0x8FBD9A0)

inline static constexpr unsigned int Class_2_5B52AEB9BD9AEA55_TypeDefinitionIndex = 52059;

class Class_2_5B52AEB9BD9AEA55 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TriggerWalkingEffect* Field_2_3; // 0x18
	::Class_2_B7F2227F5894FFC0* Field_2_0; // 0x20
	::RPG::GameCore::TaskContext* Field_2_4; // 0x28
	::UnityEngine::Vector3 Field_2_1; // 0x30
	::UnityEngine::Quaternion Field_2_2; // 0x3C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerWalkingEffect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerWalkingEffect*))((::PBYTE)hIl2Cpp + CLASS_2_5B52AEB9BD9AEA55__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5B52AEB9BD9AEA55_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5B52AEB9BD9AEA55_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5B52AEB9BD9AEA55_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5B52AEB9BD9AEA55_DISPOSE_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_9F59C088ACADFAC2()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5B52AEB9BD9AEA55_METHOD_2_9F59C088ACADFAC2_OFFSET))(this);
	}

	::System::Void Method_2_960032BA2E22793D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5B52AEB9BD9AEA55_METHOD_2_960032BA2E22793D_OFFSET))(this);
	}

	::System::Void Method_2_626C719A884DEF9A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_5B52AEB9BD9AEA55_METHOD_2_626C719A884DEF9A_OFFSET))(this, a1);
	}

	::System::Void Method_2_455E250D679F9642()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5B52AEB9BD9AEA55_METHOD_2_455E250D679F9642_OFFSET))(this);
	}

	::System::Void Method_2_0F2138E056F9294A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5B52AEB9BD9AEA55_METHOD_2_0F2138E056F9294A_OFFSET))(this);
	}

	::System::Void Method_2_3BC8B8F2BB08C1C2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5B52AEB9BD9AEA55_METHOD_2_3BC8B8F2BB08C1C2_OFFSET))(this);
	}

	::System::Void Method_2_6FF275C3039EB02D(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_5B52AEB9BD9AEA55_METHOD_2_6FF275C3039EB02D_OFFSET))(this, a1);
	}

	::System::Void Method_2_3E90A56C35C519D8(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_2_5B52AEB9BD9AEA55_METHOD_2_3E90A56C35C519D8_OFFSET))(this, a1, a2);
	}
};
