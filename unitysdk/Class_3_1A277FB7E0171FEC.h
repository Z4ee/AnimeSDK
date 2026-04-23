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

#define CLASS_3_1A277FB7E0171FEC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x96DAD10)
#define CLASS_3_1A277FB7E0171FEC_METHOD_3_3D8F0F1C6E55B9B6_OFFSET UNITYSDK_OFFSET(0x96DBA30)
#define CLASS_3_1A277FB7E0171FEC_METHOD_3_7AFDBF811FBF265E_OFFSET UNITYSDK_OFFSET(0x96DB6D0)
#define CLASS_3_1A277FB7E0171FEC_METHOD_3_A58C6FE876BCB0BF_OFFSET UNITYSDK_OFFSET(0x96DB790)
#define CLASS_3_1A277FB7E0171FEC_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x96DB9D0)
#define CLASS_3_1A277FB7E0171FEC_METHOD_3_CBB16AE705BCA424_OFFSET UNITYSDK_OFFSET(0x96DB7F0)
#define CLASS_3_1A277FB7E0171FEC_METHOD_3_F67A76C2F255E347_OFFSET UNITYSDK_OFFSET(0x96DB350)
#define CLASS_3_1A277FB7E0171FEC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x96DAD60)
#define CLASS_3_1A277FB7E0171FEC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x96DBA90)
#define CLASS_3_1A277FB7E0171FEC_TICK_OFFSET UNITYSDK_OFFSET(0x96DB890)
#define CLASS_3_1A277FB7E0171FEC__CTOR_OFFSET UNITYSDK_OFFSET(0x96DACB0)
#define CLASS_3_1A277FB7E0171FEC___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x96DBB60)
#define CLASS_3_1A277FB7E0171FEC___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x96DBBB0)

inline static constexpr unsigned int Class_3_1A277FB7E0171FEC_TypeDefinitionIndex = 48198;

class Class_3_1A277FB7E0171FEC : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_MoveToPosition*>
{
public:
	::RPG::GameCore::AdventureAbilityComponent* Field_3_5; // 0x28
	::Class_2_A0580152EB393340* Field_3_0; // 0x30
	::System::Single Field_3_3; // 0x38
	::System::Single Field_3_4; // 0x3C
	::UnityEngine::Vector3 Field_3_1; // 0x40
	::UnityEngine::Quaternion Field_3_2; // 0x4C

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
