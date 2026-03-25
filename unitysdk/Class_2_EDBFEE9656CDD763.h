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

#define CLASS_2_EDBFEE9656CDD763_METHOD_2_14651875DEFCB543_OFFSET UNITYSDK_OFFSET(0x10C86AB0)
#define CLASS_2_EDBFEE9656CDD763_METHOD_2_26D5ECFC58DCEF70_OFFSET UNITYSDK_OFFSET(0x10C85FA0)
#define CLASS_2_EDBFEE9656CDD763_METHOD_2_272068886DA88B16_OFFSET UNITYSDK_OFFSET(0x10C86780)
#define CLASS_2_EDBFEE9656CDD763_METHOD_2_28C33D0C418866A3_OFFSET UNITYSDK_OFFSET(0x10C861B0)
#define CLASS_2_EDBFEE9656CDD763_METHOD_2_31C1B79C1731758A_OFFSET UNITYSDK_OFFSET(0x10C86560)
#define CLASS_2_EDBFEE9656CDD763_METHOD_2_34B5C6F768ACE876_OFFSET UNITYSDK_OFFSET(0x10C86000)
#define CLASS_2_EDBFEE9656CDD763_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x10C86B40)
#define CLASS_2_EDBFEE9656CDD763_METHOD_2_5F5FDE0480C91E38_OFFSET UNITYSDK_OFFSET(0x10C862C0)
#define CLASS_2_EDBFEE9656CDD763_METHOD_2_6C849647FE591481_OFFSET UNITYSDK_OFFSET(0x10C86090)
#define CLASS_2_EDBFEE9656CDD763_METHOD_2_70F54B3F2840B308_OFFSET UNITYSDK_OFFSET(0x10C86A30)
#define CLASS_2_EDBFEE9656CDD763_METHOD_2_901EFCF125F275F7_OFFSET UNITYSDK_OFFSET(0x10C85AB0)
#define CLASS_2_EDBFEE9656CDD763_METHOD_2_B56799C8CA70E2BF_OFFSET UNITYSDK_OFFSET(0x10C86950)
#define CLASS_2_EDBFEE9656CDD763_METHOD_2_B5E7D186CC43C775_OFFSET UNITYSDK_OFFSET(0x10C869C0)
#define CLASS_2_EDBFEE9656CDD763_METHOD_2_CBC764D5D2D9A40C_OFFSET UNITYSDK_OFFSET(0x10C85E20)
#define CLASS_2_EDBFEE9656CDD763_METHOD_2_D6B347D590B6DAE2_OFFSET UNITYSDK_OFFSET(0x10C85E90)
#define CLASS_2_EDBFEE9656CDD763__CTOR_OFFSET UNITYSDK_OFFSET(0x10C868B0)

inline static constexpr unsigned int Class_2_EDBFEE9656CDD763_TypeDefinitionIndex = 39316;

class Class_2_EDBFEE9656CDD763 : public ::Class_1_1F862C3F636E9DCC
{
public:
	::System::String* Field_2_1; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::Animator*>* Field_2_2; // 0x20
	::RPG::GameCore::TimelineType Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EDBFEE9656CDD763__CTOR_OFFSET))(this);
	}

	::UnityEngine::Object* Method_2_901EFCF125F275F7(::RPGTools::Timeline::ArchiveAsset* a1)
	{
		return ((::UnityEngine::Object*(*)(::PVOID, ::RPGTools::Timeline::ArchiveAsset*))((::PBYTE)hIl2Cpp + CLASS_2_EDBFEE9656CDD763_METHOD_2_901EFCF125F275F7_OFFSET))(this, a1);
	}

	::System::Void Method_2_6C849647FE591481(::RPGTools::Timeline::ArchiveAsset* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::ArchiveAsset*))((::PBYTE)hIl2Cpp + CLASS_2_EDBFEE9656CDD763_METHOD_2_6C849647FE591481_OFFSET))(this, a1);
	}

	::UnityEngine::Object* Method_2_5F5FDE0480C91E38(::UnityEngine::Transform* a1, ::System::String* a2)
	{
		return ((::UnityEngine::Object*(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_EDBFEE9656CDD763_METHOD_2_5F5FDE0480C91E38_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_31C1B79C1731758A(::RPGTools::Timeline::BindInfo a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::BindInfo, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_EDBFEE9656CDD763_METHOD_2_31C1B79C1731758A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_272068886DA88B16()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EDBFEE9656CDD763_METHOD_2_272068886DA88B16_OFFSET))(this);
	}

	::UnityEngine::Object* Method_2_CBC764D5D2D9A40C(::RPGTools::Timeline::ArchiveCharacter* a1)
	{
		return ((::UnityEngine::Object*(*)(::PVOID, ::RPGTools::Timeline::ArchiveCharacter*))((::PBYTE)hIl2Cpp + CLASS_2_EDBFEE9656CDD763_METHOD_2_CBC764D5D2D9A40C_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_2_D6B347D590B6DAE2(::RPGTools::Timeline::ArchiveLevelBlock* a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPGTools::Timeline::ArchiveLevelBlock*))((::PBYTE)hIl2Cpp + CLASS_2_EDBFEE9656CDD763_METHOD_2_D6B347D590B6DAE2_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_2_26D5ECFC58DCEF70(::RPGTools::Timeline::ArchiveStoryArea* a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPGTools::Timeline::ArchiveStoryArea*))((::PBYTE)hIl2Cpp + CLASS_2_EDBFEE9656CDD763_METHOD_2_26D5ECFC58DCEF70_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_2_34B5C6F768ACE876(::RPGTools::Timeline::ArchiveCamera* a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPGTools::Timeline::ArchiveCamera*))((::PBYTE)hIl2Cpp + CLASS_2_EDBFEE9656CDD763_METHOD_2_34B5C6F768ACE876_OFFSET))(this, a1);
	}

	::System::Void Method_2_28C33D0C418866A3(::RPGTools::Timeline::ArchiveCharacter* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::ArchiveCharacter*))((::PBYTE)hIl2Cpp + CLASS_2_EDBFEE9656CDD763_METHOD_2_28C33D0C418866A3_OFFSET))(this, a1);
	}

	::UnityEngine::Object* Method_2_B56799C8CA70E2BF(::RPGTools::Timeline::ArchiveAsset* P0)
	{
		return ((::UnityEngine::Object*(*)(::PVOID, ::RPGTools::Timeline::ArchiveAsset*))((::PBYTE)hIl2Cpp + CLASS_2_EDBFEE9656CDD763_METHOD_2_B56799C8CA70E2BF_OFFSET))(this, P0);
	}

	::System::Void Method_2_B5E7D186CC43C775(::RPGTools::Timeline::ArchiveAsset* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::ArchiveAsset*))((::PBYTE)hIl2Cpp + CLASS_2_EDBFEE9656CDD763_METHOD_2_B5E7D186CC43C775_OFFSET))(this, P0);
	}

	::UnityEngine::Object* Method_2_70F54B3F2840B308(::UnityEngine::Transform* P0, ::System::String* P1)
	{
		return ((::UnityEngine::Object*(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_EDBFEE9656CDD763_METHOD_2_70F54B3F2840B308_OFFSET))(this, P0, P1);
	}

	::System::Void Method_2_14651875DEFCB543(::RPGTools::Timeline::BindInfo P0, ::UnityEngine::Transform* P1)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::BindInfo, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_EDBFEE9656CDD763_METHOD_2_14651875DEFCB543_OFFSET))(this, P0, P1);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EDBFEE9656CDD763_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
