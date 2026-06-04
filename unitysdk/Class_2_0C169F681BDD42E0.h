#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1F862C3F636E9DCC.h"
#include "unitysdk/RPG/GameCore/TimelineType.h"
#include "unitysdk/RPGTools/Timeline/BindInfo.h"

namespace RPGTools::Timeline { class ArchiveAsset; }
namespace RPGTools::Timeline { class ArchiveCamera; }
namespace RPGTools::Timeline { class ArchiveCharacter; }
namespace RPGTools::Timeline { class ArchiveLevelBlock; }
namespace RPGTools::Timeline { class ArchiveStoryArea; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define CLASS_2_0C169F681BDD42E0_METHOD_2_0C632537A5C005D5_OFFSET UNITYSDK_OFFSET(0x14334A80)
#define CLASS_2_0C169F681BDD42E0_METHOD_2_20BA15E1A18FDB7B_OFFSET UNITYSDK_OFFSET(0x14334A20)
#define CLASS_2_0C169F681BDD42E0_METHOD_2_21EC4FBABA60C279_OFFSET UNITYSDK_OFFSET(0x14333F60)
#define CLASS_2_0C169F681BDD42E0_METHOD_2_26D5ECFC58DCEF70_OFFSET UNITYSDK_OFFSET(0x14334000)
#define CLASS_2_0C169F681BDD42E0_METHOD_2_28C33D0C418866A3_OFFSET UNITYSDK_OFFSET(0x14334210)
#define CLASS_2_0C169F681BDD42E0_METHOD_2_34B5C6F768ACE876_OFFSET UNITYSDK_OFFSET(0x14334060)
#define CLASS_2_0C169F681BDD42E0_METHOD_2_42BD85CDA3817358_OFFSET UNITYSDK_OFFSET(0x143340F0)
#define CLASS_2_0C169F681BDD42E0_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x14334BE0)
#define CLASS_2_0C169F681BDD42E0_METHOD_2_5F5FDE0480C91E38_OFFSET UNITYSDK_OFFSET(0x14334320)
#define CLASS_2_0C169F681BDD42E0_METHOD_2_6606B2B91282E782_OFFSET UNITYSDK_OFFSET(0x14334B60)
#define CLASS_2_0C169F681BDD42E0_METHOD_2_772B54E54F8A7FF3_OFFSET UNITYSDK_OFFSET(0x14334610)
#define CLASS_2_0C169F681BDD42E0_METHOD_2_98F9A989F243CC2D_OFFSET UNITYSDK_OFFSET(0x14334AE0)
#define CLASS_2_0C169F681BDD42E0_METHOD_2_ABA9206FF36DE17A_OFFSET UNITYSDK_OFFSET(0x14333B70)
#define CLASS_2_0C169F681BDD42E0_METHOD_2_CBC764D5D2D9A40C_OFFSET UNITYSDK_OFFSET(0x14333EF0)
#define CLASS_2_0C169F681BDD42E0_METHOD_2_D155D4917B3D2C6A_OFFSET UNITYSDK_OFFSET(0x14334870)
#define CLASS_2_0C169F681BDD42E0__CTOR_OFFSET UNITYSDK_OFFSET(0x14334980)

inline static constexpr unsigned int Class_2_0C169F681BDD42E0_TypeDefinitionIndex = 45782;

class Class_2_0C169F681BDD42E0 : public ::Class_1_1F862C3F636E9DCC
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Animator*>* Field_2_0; // 0x18
	::System::String* Field_2_1; // 0x20
	::RPG::GameCore::TimelineType Field_2_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C169F681BDD42E0__CTOR_OFFSET))(this);
	}

	::UnityEngine::Object* Method_2_ABA9206FF36DE17A(::RPGTools::Timeline::ArchiveAsset* a1)
	{
		return ((::UnityEngine::Object*(*)(::PVOID, ::RPGTools::Timeline::ArchiveAsset*))((::PBYTE)hIl2Cpp + CLASS_2_0C169F681BDD42E0_METHOD_2_ABA9206FF36DE17A_OFFSET))(this, a1);
	}

	::System::Void Method_2_42BD85CDA3817358(::RPGTools::Timeline::ArchiveAsset* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::ArchiveAsset*))((::PBYTE)hIl2Cpp + CLASS_2_0C169F681BDD42E0_METHOD_2_42BD85CDA3817358_OFFSET))(this, a1);
	}

	::UnityEngine::Object* Method_2_5F5FDE0480C91E38(::UnityEngine::Transform* a1, ::System::String* a2)
	{
		return ((::UnityEngine::Object*(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_0C169F681BDD42E0_METHOD_2_5F5FDE0480C91E38_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_772B54E54F8A7FF3(::RPGTools::Timeline::BindInfo a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::BindInfo, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_0C169F681BDD42E0_METHOD_2_772B54E54F8A7FF3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D155D4917B3D2C6A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C169F681BDD42E0_METHOD_2_D155D4917B3D2C6A_OFFSET))(this);
	}

	::UnityEngine::Object* Method_2_CBC764D5D2D9A40C(::RPGTools::Timeline::ArchiveCharacter* a1)
	{
		return ((::UnityEngine::Object*(*)(::PVOID, ::RPGTools::Timeline::ArchiveCharacter*))((::PBYTE)hIl2Cpp + CLASS_2_0C169F681BDD42E0_METHOD_2_CBC764D5D2D9A40C_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_2_21EC4FBABA60C279(::RPGTools::Timeline::ArchiveLevelBlock* a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPGTools::Timeline::ArchiveLevelBlock*))((::PBYTE)hIl2Cpp + CLASS_2_0C169F681BDD42E0_METHOD_2_21EC4FBABA60C279_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_2_26D5ECFC58DCEF70(::RPGTools::Timeline::ArchiveStoryArea* a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPGTools::Timeline::ArchiveStoryArea*))((::PBYTE)hIl2Cpp + CLASS_2_0C169F681BDD42E0_METHOD_2_26D5ECFC58DCEF70_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_2_34B5C6F768ACE876(::RPGTools::Timeline::ArchiveCamera* a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPGTools::Timeline::ArchiveCamera*))((::PBYTE)hIl2Cpp + CLASS_2_0C169F681BDD42E0_METHOD_2_34B5C6F768ACE876_OFFSET))(this, a1);
	}

	::System::Void Method_2_28C33D0C418866A3(::RPGTools::Timeline::ArchiveCharacter* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::ArchiveCharacter*))((::PBYTE)hIl2Cpp + CLASS_2_0C169F681BDD42E0_METHOD_2_28C33D0C418866A3_OFFSET))(this, a1);
	}

	::UnityEngine::Object* Method_2_20BA15E1A18FDB7B(::RPGTools::Timeline::ArchiveAsset* a1)
	{
		return ((::UnityEngine::Object*(*)(::PVOID, ::RPGTools::Timeline::ArchiveAsset*))((::PBYTE)hIl2Cpp + CLASS_2_0C169F681BDD42E0_METHOD_2_20BA15E1A18FDB7B_OFFSET))(this, a1);
	}

	::System::Void Method_2_0C632537A5C005D5(::RPGTools::Timeline::ArchiveAsset* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::ArchiveAsset*))((::PBYTE)hIl2Cpp + CLASS_2_0C169F681BDD42E0_METHOD_2_0C632537A5C005D5_OFFSET))(this, a1);
	}

	::UnityEngine::Object* Method_2_98F9A989F243CC2D(::UnityEngine::Transform* a1, ::System::String* a2)
	{
		return ((::UnityEngine::Object*(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_0C169F681BDD42E0_METHOD_2_98F9A989F243CC2D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6606B2B91282E782(::RPGTools::Timeline::BindInfo a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::BindInfo, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_0C169F681BDD42E0_METHOD_2_6606B2B91282E782_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C169F681BDD42E0_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
