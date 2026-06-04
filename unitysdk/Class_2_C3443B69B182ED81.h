#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_C3443B69B182ED81_Class_1_1D86127F16B40D4B;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }

#define CLASS_2_C3443B69B182ED81_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10621480)
#define CLASS_2_C3443B69B182ED81_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x106212A0)
#define CLASS_2_C3443B69B182ED81_METHOD_2_41AA181104E03F2C_OFFSET UNITYSDK_OFFSET(0x10621310)
#define CLASS_2_C3443B69B182ED81_METHOD_2_4358F70A163BCEAE_OFFSET UNITYSDK_OFFSET(0x10621090)
#define CLASS_2_C3443B69B182ED81_METHOD_2_85601694D4B82356_OFFSET UNITYSDK_OFFSET(0x10621040)
#define CLASS_2_C3443B69B182ED81_METHOD_2_A38E31A7E560B74B_OFFSET UNITYSDK_OFFSET(0x10620CB0)
#define CLASS_2_C3443B69B182ED81_METHOD_2_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x10620BD0)
#define CLASS_2_C3443B69B182ED81_METHOD_2_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0x10621550)
#define CLASS_2_C3443B69B182ED81_METHOD_2_FA3D6E45984D6807_OFFSET UNITYSDK_OFFSET(0x10620FB0)
#define CLASS_2_C3443B69B182ED81__CTOR_OFFSET UNITYSDK_OFFSET(0x10621560)
#define CLASS_2_C3443B69B182ED81___IFIXBASEPROXY_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x10621640)

inline static constexpr unsigned int Class_2_C3443B69B182ED81_TypeDefinitionIndex = 53196;

class Class_2_C3443B69B182ED81 : public ::RPG::GameCore::GameComponentBase
{
public:
	::RPG::GameCore::AdventureCharacterController* Field_2_0; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_2_C3443B69B182ED81_Class_1_1D86127F16B40D4B*>* Field_2_1; // 0x20
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Transform*, ::UnityEngine::Vector3>* Field_2_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3443B69B182ED81__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3443B69B182ED81_METHOD_2_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Method_2_A38E31A7E560B74B(::UnityEngine::Transform* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C3443B69B182ED81_METHOD_2_A38E31A7E560B74B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_FA3D6E45984D6807(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_C3443B69B182ED81_METHOD_2_FA3D6E45984D6807_OFFSET))(this, a1);
	}

	::System::Void Method_2_85601694D4B82356()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3443B69B182ED81_METHOD_2_85601694D4B82356_OFFSET))(this);
	}

	::System::Void LateUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C3443B69B182ED81_LATEUPDATE_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3443B69B182ED81_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_41AA181104E03F2C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3443B69B182ED81_METHOD_2_41AA181104E03F2C_OFFSET))(this);
	}

	::System::Void Method_2_4358F70A163BCEAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3443B69B182ED81_METHOD_2_4358F70A163BCEAE_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_2_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3443B69B182ED81_METHOD_2_B1445E8504415D4D_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_LateUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C3443B69B182ED81___IFIXBASEPROXY_LATEUPDATE_OFFSET))(this, a1);
	}
};
