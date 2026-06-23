#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BCCF9BCA86B17EFC.h"
#include "unitysdk/Struct_2_5B421F8FFABD4CA3_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_87F855E9737731A7;
class MonoNPCCrowdPlatModelComponent;
class SceneObjectAreaCheckPlayAni;
namespace MoleMole { class SceneObjectStateWidget; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_1BE7C6B25568308C_METHOD_2_10AD0834AEF29F17_OFFSET UNITYSDK_OFFSET(0xE7F0B20)
#define CLASS_2_1BE7C6B25568308C_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xE7F0CB0)
#define CLASS_2_1BE7C6B25568308C_METHOD_2_3D42765ED80D6DAA_OFFSET UNITYSDK_OFFSET(0xE7F0D50)
#define CLASS_2_1BE7C6B25568308C_METHOD_2_6092608CF92684DE_OFFSET UNITYSDK_OFFSET(0xE7F0390)
#define CLASS_2_1BE7C6B25568308C_METHOD_2_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0xE7F07E0)
#define CLASS_2_1BE7C6B25568308C_METHOD_2_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0xE7F0600)
#define CLASS_2_1BE7C6B25568308C_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xE7F0970)
#define CLASS_2_1BE7C6B25568308C_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xE7F12D0)
#define CLASS_2_1BE7C6B25568308C_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xE7F0C20)
#define CLASS_2_1BE7C6B25568308C_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0xE7F0A00)
#define CLASS_2_1BE7C6B25568308C_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0xE7F0A90)
#define CLASS_2_1BE7C6B25568308C__CTOR_OFFSET UNITYSDK_OFFSET(0xE7F0180)

inline static constexpr unsigned int Class_2_1BE7C6B25568308C_TypeDefinitionIndex = 83053;

class Class_2_1BE7C6B25568308C : public ::Class_1_BCCF9BCA86B17EFC
{
public:
	::SceneObjectAreaCheckPlayAni* Field_2_5; // 0x38
	::UnityEngine::Animator* Field_2_4; // 0x40
	::Il2CppArray<::MonoNPCCrowdPlatModelComponent*>* Field_2_6; // 0x48
	::UnityEngine::GameObject* Field_2_7; // 0x50
	::System::Single Field_2_1; // 0x58
	::System::Boolean Field_2_8; // 0x5C
	::System::Boolean Field_2_0; // 0x5D
	::System::Boolean Field_2_3; // 0x5E
	::System::Boolean Field_2_9; // 0x5F
	::System::Single Field_2_2; // 0x60

	::System::Void _ctor(::Class_1_87F855E9737731A7* a1, ::MoleMole::SceneObjectStateWidget* a2, ::System::Action_1<::Struct_2_5B421F8FFABD4CA3_1>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_87F855E9737731A7*, ::MoleMole::SceneObjectStateWidget*, ::System::Action_1<::Struct_2_5B421F8FFABD4CA3_1>*))((::PBYTE)hIl2Cpp + CLASS_2_1BE7C6B25568308C__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_79830F666EE579C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1BE7C6B25568308C_METHOD_2_79830F666EE579C0_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1BE7C6B25568308C_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void OnTriggerEnter(::UnityEngine::Collider* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_1BE7C6B25568308C_ONTRIGGERENTER_OFFSET))(this, a1);
	}

	::System::Void OnTriggerExit(::UnityEngine::Collider* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_1BE7C6B25568308C_ONTRIGGEREXIT_OFFSET))(this, a1);
	}

	::System::Void Method_2_10AD0834AEF29F17(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_1BE7C6B25568308C_METHOD_2_10AD0834AEF29F17_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1BE7C6B25568308C_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_1BE7C6B25568308C_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_84B92802FDAFF6C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1BE7C6B25568308C_METHOD_2_84B92802FDAFF6C8_OFFSET))(this);
	}

	::System::Boolean Method_2_3D42765ED80D6DAA(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_1BE7C6B25568308C_METHOD_2_3D42765ED80D6DAA_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1BE7C6B25568308C_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_6092608CF92684DE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1BE7C6B25568308C_METHOD_2_6092608CF92684DE_OFFSET))(this);
	}
};
