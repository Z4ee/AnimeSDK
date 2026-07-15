#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_D640AF70A652FF6A;
namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerWalkingEffect; }

#define CLASS_2_5B52AEB9BD9AEA55_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1513A830)
#define CLASS_2_5B52AEB9BD9AEA55_METHOD_2_2340068C22DFE332_OFFSET UNITYSDK_OFFSET(0x1513B510)
#define CLASS_2_5B52AEB9BD9AEA55_METHOD_2_3E90A56C35C519D8_OFFSET UNITYSDK_OFFSET(0x1513BB60)
#define CLASS_2_5B52AEB9BD9AEA55_METHOD_2_626C719A884DEF9A_OFFSET UNITYSDK_OFFSET(0x1513B440)
#define CLASS_2_5B52AEB9BD9AEA55_METHOD_2_960032BA2E22793D_OFFSET UNITYSDK_OFFSET(0x1513A960)
#define CLASS_2_5B52AEB9BD9AEA55_METHOD_2_9F59C088ACADFAC2_OFFSET UNITYSDK_OFFSET(0x1513A880)
#define CLASS_2_5B52AEB9BD9AEA55_METHOD_2_B119EE02C1B6F6F4_OFFSET UNITYSDK_OFFSET(0x1513B690)
#define CLASS_2_5B52AEB9BD9AEA55_METHOD_2_B7CCB99AAB7A4C8B_OFFSET UNITYSDK_OFFSET(0x1513B3F0)
#define CLASS_2_5B52AEB9BD9AEA55_METHOD_2_F4ADC37B63F4E9EF_OFFSET UNITYSDK_OFFSET(0x1513B4C0)
#define CLASS_2_5B52AEB9BD9AEA55_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1513A6D0)
#define CLASS_2_5B52AEB9BD9AEA55_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1513A780)
#define CLASS_2_5B52AEB9BD9AEA55_TICK_OFFSET UNITYSDK_OFFSET(0x1513A7D0)
#define CLASS_2_5B52AEB9BD9AEA55__CTOR_OFFSET UNITYSDK_OFFSET(0x1513A6C0)

inline static constexpr unsigned int Class_2_5B52AEB9BD9AEA55_TypeDefinitionIndex = 53944;

class Class_2_5B52AEB9BD9AEA55 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::Class_2_D640AF70A652FF6A* Field_2_1; // 0x20
	::RPG::GameCore::TriggerWalkingEffect* Field_2_2; // 0x28
	::UnityEngine::Quaternion Field_2_3; // 0x30
	::UnityEngine::Vector3 Field_2_4; // 0x40

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

	::System::Void Method_2_F4ADC37B63F4E9EF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5B52AEB9BD9AEA55_METHOD_2_F4ADC37B63F4E9EF_OFFSET))(this);
	}

	::System::Void Method_2_2340068C22DFE332()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5B52AEB9BD9AEA55_METHOD_2_2340068C22DFE332_OFFSET))(this);
	}

	::System::Void Method_2_B7CCB99AAB7A4C8B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5B52AEB9BD9AEA55_METHOD_2_B7CCB99AAB7A4C8B_OFFSET))(this);
	}

	::System::Void Method_2_B119EE02C1B6F6F4(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_5B52AEB9BD9AEA55_METHOD_2_B119EE02C1B6F6F4_OFFSET))(this, a1);
	}

	::System::Void Method_2_3E90A56C35C519D8(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_2_5B52AEB9BD9AEA55_METHOD_2_3E90A56C35C519D8_OFFSET))(this, a1, a2);
	}
};
