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

#define CLASS_2_F85A8B28708D3B19_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE5C25C0)
#define CLASS_2_F85A8B28708D3B19_METHOD_2_0B878306CEF61472_OFFSET UNITYSDK_OFFSET(0xE5C3090)
#define CLASS_2_F85A8B28708D3B19_METHOD_2_10D29CA63ADBB954_OFFSET UNITYSDK_OFFSET(0xE5C2CC0)
#define CLASS_2_F85A8B28708D3B19_METHOD_2_3AF12545215A4C33_OFFSET UNITYSDK_OFFSET(0xE5C2990)
#define CLASS_2_F85A8B28708D3B19_METHOD_2_50884DFE76178C82_OFFSET UNITYSDK_OFFSET(0xE5C2610)
#define CLASS_2_F85A8B28708D3B19_METHOD_2_5379016E387EBF40_OFFSET UNITYSDK_OFFSET(0xE5C3160)
#define CLASS_2_F85A8B28708D3B19_METHOD_2_66034C7E392B8C3C_OFFSET UNITYSDK_OFFSET(0xE5C2E10)
#define CLASS_2_F85A8B28708D3B19_METHOD_2_A8F024A80048B6EA_OFFSET UNITYSDK_OFFSET(0xE5C3020)
#define CLASS_2_F85A8B28708D3B19_METHOD_2_AE1BB9B637FD4AA4_OFFSET UNITYSDK_OFFSET(0xE5C2730)
#define CLASS_2_F85A8B28708D3B19_METHOD_2_EEABD52C0F4D0C8A_OFFSET UNITYSDK_OFFSET(0xE5C27B0)
#define CLASS_2_F85A8B28708D3B19_METHOD_2_F3C30662690446CD_OFFSET UNITYSDK_OFFSET(0xE5C2A20)
#define CLASS_2_F85A8B28708D3B19__CTOR_OFFSET UNITYSDK_OFFSET(0xE5C3230)

inline static constexpr unsigned int Class_2_F85A8B28708D3B19_TypeDefinitionIndex = 60716;

class Class_2_F85A8B28708D3B19 : public ::Class_1_D5DA62FC7DE2D532
{
public:
	::Class_1_64D890C466F37235* KGCNPIEDOCA; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_E3CC6BC1F6AE3962*>* JCIAPBIPPPC; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_E3CC6BC1F6AE3962*>* EFOPFCJHJFM; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F85A8B28708D3B19__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F85A8B28708D3B19_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_50884DFE76178C82(::Class_1_64D890C466F37235* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_64D890C466F37235*))((::PBYTE)hIl2Cpp + CLASS_2_F85A8B28708D3B19_METHOD_2_50884DFE76178C82_OFFSET))(this, a1);
	}

	::System::Void Method_2_AE1BB9B637FD4AA4(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_F85A8B28708D3B19_METHOD_2_AE1BB9B637FD4AA4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3AF12545215A4C33(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Quaternion a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_F85A8B28708D3B19_METHOD_2_3AF12545215A4C33_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_F3C30662690446CD(::RPG::Client::MonoMapPoseSwitcher* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoMapPoseSwitcher*))((::PBYTE)hIl2Cpp + CLASS_2_F85A8B28708D3B19_METHOD_2_F3C30662690446CD_OFFSET))(this, a1);
	}

	::System::Void Method_2_10D29CA63ADBB954(::RPG::Client::MonoMapPoseSwitcher* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoMapPoseSwitcher*))((::PBYTE)hIl2Cpp + CLASS_2_F85A8B28708D3B19_METHOD_2_10D29CA63ADBB954_OFFSET))(this, a1);
	}

	::System::Void Method_2_66034C7E392B8C3C(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_F85A8B28708D3B19_METHOD_2_66034C7E392B8C3C_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_A8F024A80048B6EA(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_F85A8B28708D3B19_METHOD_2_A8F024A80048B6EA_OFFSET))(this, a1);
	}

	::Class_1_E3CC6BC1F6AE3962* Method_2_0B878306CEF61472(::UnityEngine::Collider* a1)
	{
		return ((::Class_1_E3CC6BC1F6AE3962*(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_F85A8B28708D3B19_METHOD_2_0B878306CEF61472_OFFSET))(this, a1);
	}

	::System::Void Method_2_5379016E387EBF40(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::UnityEngine::Quaternion a4, ::RPG::Client::WorldShiftingReason a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::RPG::Client::WorldShiftingReason))((::PBYTE)hIl2Cpp + CLASS_2_F85A8B28708D3B19_METHOD_2_5379016E387EBF40_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_EEABD52C0F4D0C8A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F85A8B28708D3B19_METHOD_2_EEABD52C0F4D0C8A_OFFSET))(this);
	}
};
