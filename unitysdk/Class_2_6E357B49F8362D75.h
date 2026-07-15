#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D5DA62FC7DE2D532.h"
#include "unitysdk/RPG/Client/WorldShiftingReason.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_64D890C466F37235;
class Class_1_E3CC6BC1F6AE3962;
namespace RPG::Client { class MonoMapPoseSwitcher; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Collider; }

#define CLASS_2_6E357B49F8362D75_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16D827D0)
#define CLASS_2_6E357B49F8362D75_METHOD_2_0AAD07D70F97EFFB_OFFSET UNITYSDK_OFFSET(0x16D833D0)
#define CLASS_2_6E357B49F8362D75_METHOD_2_144AAA06FA947F2A_OFFSET UNITYSDK_OFFSET(0x16D82C10)
#define CLASS_2_6E357B49F8362D75_METHOD_2_1A54E3DF1B02B1B9_OFFSET UNITYSDK_OFFSET(0x16D82820)
#define CLASS_2_6E357B49F8362D75_METHOD_2_37F6A1213A869485_OFFSET UNITYSDK_OFFSET(0x16D830F0)
#define CLASS_2_6E357B49F8362D75_METHOD_2_5379016E387EBF40_OFFSET UNITYSDK_OFFSET(0x16D834D0)
#define CLASS_2_6E357B49F8362D75_METHOD_2_597AED2EE2E8AB2D_OFFSET UNITYSDK_OFFSET(0x16D82980)
#define CLASS_2_6E357B49F8362D75_METHOD_2_80FB85C06B725B76_OFFSET UNITYSDK_OFFSET(0x16D82CA0)
#define CLASS_2_6E357B49F8362D75_METHOD_2_8EBBAC1841E65B5D_OFFSET UNITYSDK_OFFSET(0x16D82F70)
#define CLASS_2_6E357B49F8362D75_METHOD_2_A8F024A80048B6EA_OFFSET UNITYSDK_OFFSET(0x16D83330)
#define CLASS_2_6E357B49F8362D75_METHOD_2_C5F2E178DAEB1793_OFFSET UNITYSDK_OFFSET(0x16D82A00)
#define CLASS_2_6E357B49F8362D75__CTOR_OFFSET UNITYSDK_OFFSET(0x16D835A0)

inline static constexpr unsigned int Class_2_6E357B49F8362D75_TypeDefinitionIndex = 57895;

class Class_2_6E357B49F8362D75 : public ::Class_1_D5DA62FC7DE2D532
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_E3CC6BC1F6AE3962*>* Field_2_0; // 0x10
	::Class_1_64D890C466F37235* Field_2_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_E3CC6BC1F6AE3962*>* Field_2_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E357B49F8362D75__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E357B49F8362D75_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_1A54E3DF1B02B1B9(::Class_1_64D890C466F37235* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_64D890C466F37235*))((::PBYTE)hIl2Cpp + CLASS_2_6E357B49F8362D75_METHOD_2_1A54E3DF1B02B1B9_OFFSET))(this, a1);
	}

	::System::Void Method_2_597AED2EE2E8AB2D(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_6E357B49F8362D75_METHOD_2_597AED2EE2E8AB2D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_144AAA06FA947F2A(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Quaternion a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_6E357B49F8362D75_METHOD_2_144AAA06FA947F2A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_80FB85C06B725B76(::RPG::Client::MonoMapPoseSwitcher* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoMapPoseSwitcher*))((::PBYTE)hIl2Cpp + CLASS_2_6E357B49F8362D75_METHOD_2_80FB85C06B725B76_OFFSET))(this, a1);
	}

	::System::Void Method_2_8EBBAC1841E65B5D(::RPG::Client::MonoMapPoseSwitcher* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoMapPoseSwitcher*))((::PBYTE)hIl2Cpp + CLASS_2_6E357B49F8362D75_METHOD_2_8EBBAC1841E65B5D_OFFSET))(this, a1);
	}

	::System::Void Method_2_37F6A1213A869485(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_6E357B49F8362D75_METHOD_2_37F6A1213A869485_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_A8F024A80048B6EA(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_6E357B49F8362D75_METHOD_2_A8F024A80048B6EA_OFFSET))(this, a1);
	}

	::Class_1_E3CC6BC1F6AE3962* Method_2_0AAD07D70F97EFFB(::UnityEngine::Collider* a1)
	{
		return ((::Class_1_E3CC6BC1F6AE3962*(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_6E357B49F8362D75_METHOD_2_0AAD07D70F97EFFB_OFFSET))(this, a1);
	}

	::System::Void Method_2_5379016E387EBF40(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::UnityEngine::Quaternion a4, ::RPG::Client::WorldShiftingReason a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::RPG::Client::WorldShiftingReason))((::PBYTE)hIl2Cpp + CLASS_2_6E357B49F8362D75_METHOD_2_5379016E387EBF40_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_C5F2E178DAEB1793()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E357B49F8362D75_METHOD_2_C5F2E178DAEB1793_OFFSET))(this);
	}
};
