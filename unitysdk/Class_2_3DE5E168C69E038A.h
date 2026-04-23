#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace RPG::Client { class MonoEffectPluginEntityFollowEffect; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_2_3DE5E168C69E038A_METHOD_2_0094A08E076C3CCD_OFFSET UNITYSDK_OFFSET(0xD9BE4D0)
#define CLASS_2_3DE5E168C69E038A_METHOD_2_07B02DC4F232C89C_OFFSET UNITYSDK_OFFSET(0xD9BE910)
#define CLASS_2_3DE5E168C69E038A_METHOD_2_364908D302E602CD_OFFSET UNITYSDK_OFFSET(0xD9BE2D0)
#define CLASS_2_3DE5E168C69E038A_METHOD_2_4256453CFEAAC957_1_OFFSET UNITYSDK_OFFSET(0xD9BE280)
#define CLASS_2_3DE5E168C69E038A_METHOD_2_4256453CFEAAC957_OFFSET UNITYSDK_OFFSET(0xD9BDEF0)
#define CLASS_2_3DE5E168C69E038A_METHOD_2_4B8BB754EBD146AC_OFFSET UNITYSDK_OFFSET(0xD9BDE60)
#define CLASS_2_3DE5E168C69E038A_METHOD_2_63435298D974801D_OFFSET UNITYSDK_OFFSET(0xD9BE0A0)
#define CLASS_2_3DE5E168C69E038A_METHOD_2_89D0E3573C47F231_OFFSET UNITYSDK_OFFSET(0xD9BE610)
#define CLASS_2_3DE5E168C69E038A_METHOD_2_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0xD9BE330)
#define CLASS_2_3DE5E168C69E038A_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xD9BDD80)
#define CLASS_2_3DE5E168C69E038A_METHOD_2_B75D122F21CFAD25_OFFSET UNITYSDK_OFFSET(0xD9BDF40)
#define CLASS_2_3DE5E168C69E038A__CTOR_OFFSET UNITYSDK_OFFSET(0xD9BE960)

inline static constexpr unsigned int Class_2_3DE5E168C69E038A_TypeDefinitionIndex = 64406;

class Class_2_3DE5E168C69E038A : public ::RPG::Client::BehaviorBase
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_0; // 0x18
	::UnityEngine::Quaternion Field_2_4; // 0x20
	::RPG::MVector3 Field_2_1; // 0x30
	::RPG::MVector3 Field_2_2; // 0x3C
	::UnityEngine::Quaternion Field_2_3; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DE5E168C69E038A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DE5E168C69E038A_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_4256453CFEAAC957()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DE5E168C69E038A_METHOD_2_4256453CFEAAC957_OFFSET))(this);
	}

	::System::Void Method_2_63435298D974801D(::System::Collections::Generic::IList_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_3DE5E168C69E038A_METHOD_2_63435298D974801D_OFFSET))(this, a1);
	}

	::System::Void Method_2_4256453CFEAAC957_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DE5E168C69E038A_METHOD_2_4256453CFEAAC957_1_OFFSET))(this);
	}

	::System::Void Method_2_364908D302E602CD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3DE5E168C69E038A_METHOD_2_364908D302E602CD_OFFSET))(this, a1);
	}

	::System::Void Method_2_0094A08E076C3CCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DE5E168C69E038A_METHOD_2_0094A08E076C3CCD_OFFSET))(this);
	}

	::System::Void Method_2_89D0E3573C47F231(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_3DE5E168C69E038A_METHOD_2_89D0E3573C47F231_OFFSET))(this, a1);
	}

	::System::Void Method_2_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DE5E168C69E038A_METHOD_2_9681042564541CD6_1_OFFSET))(this);
	}

	::System::Void Method_2_B75D122F21CFAD25()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DE5E168C69E038A_METHOD_2_B75D122F21CFAD25_OFFSET))(this);
	}

	::RPG::Client::MonoEffectPluginEntityFollowEffect* Method_2_07B02DC4F232C89C()
	{
		return ((::RPG::Client::MonoEffectPluginEntityFollowEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DE5E168C69E038A_METHOD_2_07B02DC4F232C89C_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_2_4B8BB754EBD146AC()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DE5E168C69E038A_METHOD_2_4B8BB754EBD146AC_OFFSET))(this);
	}
};
