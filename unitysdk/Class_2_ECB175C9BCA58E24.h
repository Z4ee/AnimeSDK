#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_ECB175C9BCA58E24_Class_1_1D86127F16B40D4B;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }

#define CLASS_2_ECB175C9BCA58E24_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15FFB410)
#define CLASS_2_ECB175C9BCA58E24_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x15FFB200)
#define CLASS_2_ECB175C9BCA58E24_METHOD_2_322305E263B00C3F_OFFSET UNITYSDK_OFFSET(0x15FFAF70)
#define CLASS_2_ECB175C9BCA58E24_METHOD_2_41F5D9C0F0A306F5_OFFSET UNITYSDK_OFFSET(0x15FFB270)
#define CLASS_2_ECB175C9BCA58E24_METHOD_2_43A478BA01FE29B7_OFFSET UNITYSDK_OFFSET(0x15FFAFC0)
#define CLASS_2_ECB175C9BCA58E24_METHOD_2_A524BE2CC7E80282_OFFSET UNITYSDK_OFFSET(0x15FFABB0)
#define CLASS_2_ECB175C9BCA58E24_METHOD_2_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0x15FFB510)
#define CLASS_2_ECB175C9BCA58E24_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x15FFAAA0)
#define CLASS_2_ECB175C9BCA58E24_METHOD_2_FA3D6E45984D6807_OFFSET UNITYSDK_OFFSET(0x15FFAEE0)
#define CLASS_2_ECB175C9BCA58E24__CTOR_OFFSET UNITYSDK_OFFSET(0x15FFB520)

inline static constexpr unsigned int Class_2_ECB175C9BCA58E24_TypeDefinitionIndex = 57132;

class Class_2_ECB175C9BCA58E24 : public ::RPG::GameCore::GameComponentBase
{
public:
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Transform*, ::UnityEngine::Vector3>* ADBBMLHMMBH; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_2_ECB175C9BCA58E24_Class_1_1D86127F16B40D4B*>* KKPPNNLEIBC; // 0x20
	::RPG::GameCore::AdventureCharacterController* CPIIOIPAAKK; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ECB175C9BCA58E24__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ECB175C9BCA58E24_METHOD_2_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_2_A524BE2CC7E80282(::UnityEngine::Transform* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_ECB175C9BCA58E24_METHOD_2_A524BE2CC7E80282_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_FA3D6E45984D6807(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_ECB175C9BCA58E24_METHOD_2_FA3D6E45984D6807_OFFSET))(this, a1);
	}

	::System::Void Method_2_322305E263B00C3F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ECB175C9BCA58E24_METHOD_2_322305E263B00C3F_OFFSET))(this);
	}

	::System::Void LateUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_ECB175C9BCA58E24_LATEUPDATE_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ECB175C9BCA58E24_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_41F5D9C0F0A306F5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ECB175C9BCA58E24_METHOD_2_41F5D9C0F0A306F5_OFFSET))(this);
	}

	::System::Void Method_2_43A478BA01FE29B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ECB175C9BCA58E24_METHOD_2_43A478BA01FE29B7_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_2_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ECB175C9BCA58E24_METHOD_2_B1445E8504415D4D_OFFSET))(this);
	}
};
