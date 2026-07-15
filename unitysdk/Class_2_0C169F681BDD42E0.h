#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A2C90C566F67A6EF.h"
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

#define CLASS_2_0C169F681BDD42E0_METHOD_2_22C1DEA5809FD6CA_OFFSET UNITYSDK_OFFSET(0x15F404A0)
#define CLASS_2_0C169F681BDD42E0_METHOD_2_26D5ECFC58DCEF70_OFFSET UNITYSDK_OFFSET(0x15F40A30)
#define CLASS_2_0C169F681BDD42E0_METHOD_2_28C33D0C418866A3_OFFSET UNITYSDK_OFFSET(0x15F40CB0)
#define CLASS_2_0C169F681BDD42E0_METHOD_2_34B5C6F768ACE876_OFFSET UNITYSDK_OFFSET(0x15F40A90)
#define CLASS_2_0C169F681BDD42E0_METHOD_2_5F5FDE0480C91E38_OFFSET UNITYSDK_OFFSET(0x15F40DC0)
#define CLASS_2_0C169F681BDD42E0_METHOD_2_772B54E54F8A7FF3_OFFSET UNITYSDK_OFFSET(0x15F410B0)
#define CLASS_2_0C169F681BDD42E0_METHOD_2_901CB4B8A4F1E982_OFFSET UNITYSDK_OFFSET(0x15F40910)
#define CLASS_2_0C169F681BDD42E0_METHOD_2_CBC764D5D2D9A40C_OFFSET UNITYSDK_OFFSET(0x15F408A0)
#define CLASS_2_0C169F681BDD42E0_METHOD_2_D155D4917B3D2C6A_OFFSET UNITYSDK_OFFSET(0x15F41310)
#define CLASS_2_0C169F681BDD42E0_METHOD_2_F6ABBA6DD61AD4B6_OFFSET UNITYSDK_OFFSET(0x15F40B20)
#define CLASS_2_0C169F681BDD42E0__CTOR_OFFSET UNITYSDK_OFFSET(0x15F41420)

inline static constexpr unsigned int Class_2_0C169F681BDD42E0_TypeDefinitionIndex = 46721;

class Class_2_0C169F681BDD42E0 : public ::Class_1_A2C90C566F67A6EF
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Animator*>* Field_2_0; // 0x18
	::System::String* Field_2_1; // 0x20
	::RPG::GameCore::TimelineType Field_2_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C169F681BDD42E0__CTOR_OFFSET))(this);
	}

	::UnityEngine::Object* Method_2_22C1DEA5809FD6CA(::RPGTools::Timeline::ArchiveAsset* a1)
	{
		return ((::UnityEngine::Object*(*)(::PVOID, ::RPGTools::Timeline::ArchiveAsset*))((::PBYTE)hIl2Cpp + CLASS_2_0C169F681BDD42E0_METHOD_2_22C1DEA5809FD6CA_OFFSET))(this, a1);
	}

	::System::Void Method_2_F6ABBA6DD61AD4B6(::RPGTools::Timeline::ArchiveAsset* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::ArchiveAsset*))((::PBYTE)hIl2Cpp + CLASS_2_0C169F681BDD42E0_METHOD_2_F6ABBA6DD61AD4B6_OFFSET))(this, a1);
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

	::UnityEngine::GameObject* Method_2_901CB4B8A4F1E982(::RPGTools::Timeline::ArchiveLevelBlock* a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPGTools::Timeline::ArchiveLevelBlock*))((::PBYTE)hIl2Cpp + CLASS_2_0C169F681BDD42E0_METHOD_2_901CB4B8A4F1E982_OFFSET))(this, a1);
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
};
