#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvNavigationFailReason.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/ECharacterNavSteerMode.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_A0580152EB393340;
namespace RPG::GameCore { class AdventureAbilityComponent; }
namespace RPG::GameCore { class ST_Main_MoveToPosition; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_1A277FB7E0171FEC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC4D5110)
#define CLASS_3_1A277FB7E0171FEC_METHOD_3_3D8F0F1C6E55B9B6_OFFSET UNITYSDK_OFFSET(0xC4D5DE0)
#define CLASS_3_1A277FB7E0171FEC_METHOD_3_7AFDBF811FBF265E_OFFSET UNITYSDK_OFFSET(0xC4D5A90)
#define CLASS_3_1A277FB7E0171FEC_METHOD_3_A58C6FE876BCB0BF_OFFSET UNITYSDK_OFFSET(0xC4D5B40)
#define CLASS_3_1A277FB7E0171FEC_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xC4D5D80)
#define CLASS_3_1A277FB7E0171FEC_METHOD_3_CBB16AE705BCA424_OFFSET UNITYSDK_OFFSET(0xC4D5BA0)
#define CLASS_3_1A277FB7E0171FEC_METHOD_3_F67A76C2F255E347_OFFSET UNITYSDK_OFFSET(0xC4D5710)
#define CLASS_3_1A277FB7E0171FEC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC4D5160)
#define CLASS_3_1A277FB7E0171FEC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC4D5E40)
#define CLASS_3_1A277FB7E0171FEC_TICK_OFFSET UNITYSDK_OFFSET(0xC4D5C40)
#define CLASS_3_1A277FB7E0171FEC__CTOR_OFFSET UNITYSDK_OFFSET(0xC4D50B0)
#define CLASS_3_1A277FB7E0171FEC___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC4D5F10)
#define CLASS_3_1A277FB7E0171FEC___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xC4D5F60)

inline static constexpr unsigned int Class_3_1A277FB7E0171FEC_TypeDefinitionIndex = 42238;

class Class_3_1A277FB7E0171FEC : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_MoveToPosition*>
{
public:
	::Class_2_A0580152EB393340* Field_3_0; // 0x28
	::RPG::GameCore::AdventureAbilityComponent* Field_3_5; // 0x30
	::UnityEngine::Quaternion Field_3_2; // 0x38
	::UnityEngine::Vector3 Field_3_1; // 0x48
	::System::Single Field_3_4; // 0x54
	::System::Single Field_3_3; // 0x58

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_MoveToPosition* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_MoveToPosition*))((::PBYTE)hIl2Cpp + CLASS_3_1A277FB7E0171FEC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1A277FB7E0171FEC_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1A277FB7E0171FEC_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_1A277FB7E0171FEC_TICK_OFFSET))(this, a1);
	}

	::System::Nullable_1<::RPG::GameCore::ECharacterNavSteerMode> Method_3_A58C6FE876BCB0BF()
	{
		return ((::System::Nullable_1<::RPG::GameCore::ECharacterNavSteerMode>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1A277FB7E0171FEC_METHOD_3_A58C6FE876BCB0BF_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1A277FB7E0171FEC_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_3D8F0F1C6E55B9B6(::RPG::GameCore::AdvNavigationFailReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvNavigationFailReason))((::PBYTE)hIl2Cpp + CLASS_3_1A277FB7E0171FEC_METHOD_3_3D8F0F1C6E55B9B6_OFFSET))(this, a1);
	}

	::System::Void Method_3_CBB16AE705BCA424(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_1A277FB7E0171FEC_METHOD_3_CBB16AE705BCA424_OFFSET))(this, a1);
	}

	::RPG::GameCore::CharacterMotionFlag Method_3_7AFDBF811FBF265E()
	{
		return ((::RPG::GameCore::CharacterMotionFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1A277FB7E0171FEC_METHOD_3_7AFDBF811FBF265E_OFFSET))(this);
	}

	::System::Boolean Method_3_F67A76C2F255E347(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_3_1A277FB7E0171FEC_METHOD_3_F67A76C2F255E347_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1A277FB7E0171FEC_ONTASKRESET_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1A277FB7E0171FEC___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_1A277FB7E0171FEC___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
