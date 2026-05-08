#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/GuidePoint_AutoGenStrategy.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_1CAC0F23A7272040;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System { template <typename T> class WeakReference_1; }

#define CLASS_1_534AF681CC2BD5FD_256_CLASS_1_F11ACB4C7C573C44_GET_ISINCAMERAVIEW_OFFSET UNITYSDK_OFFSET(0x135E7780)
#define CLASS_1_534AF681CC2BD5FD_256_CLASS_1_F11ACB4C7C573C44_GET_SHOULDCONTINUE_OFFSET UNITYSDK_OFFSET(0x135E7770)
#define CLASS_1_534AF681CC2BD5FD_256_CLASS_1_F11ACB4C7C573C44_ISBINDTOTHISENTITY_OFFSET UNITYSDK_OFFSET(0x135E7F90)
#define CLASS_1_534AF681CC2BD5FD_256_CLASS_1_F11ACB4C7C573C44_METHOD_1_0F2103CCBD8370FF_OFFSET UNITYSDK_OFFSET(0x135E7C10)
#define CLASS_1_534AF681CC2BD5FD_256_CLASS_1_F11ACB4C7C573C44_UPDATEINCAMERAVIEW_OFFSET UNITYSDK_OFFSET(0x135E7790)
#define CLASS_1_534AF681CC2BD5FD_256_CLASS_1_F11ACB4C7C573C44__CTOR_OFFSET UNITYSDK_OFFSET(0x135E8020)

inline static constexpr unsigned int Class_1_534AF681CC2BD5FD_256_Class_1_F11ACB4C7C573C44_TypeDefinitionIndex = 40180;

class Class_1_534AF681CC2BD5FD_256_Class_1_F11ACB4C7C573C44 : public ::System::Object
{
public:
	::System::String* Field_1_5; // 0x10
	::MoleMole::Config::GuidePoint_AutoGenStrategy Field_1_2; // 0x18
	::System::WeakReference_1<::Class_1_1CAC0F23A7272040*>* Field_1_3; // 0x60
	::System::Int32 Field_1_4; // 0x68
	::System::Boolean Field_1_0; // 0x6C
	::System::Boolean Field_1_1; // 0x6D

	::System::Void _ctor(::Class_1_1CAC0F23A7272040* a1, ::System::String* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1CAC0F23A7272040*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_256_CLASS_1_F11ACB4C7C573C44__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean get_ShouldContinue()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_256_CLASS_1_F11ACB4C7C573C44_GET_SHOULDCONTINUE_OFFSET))(this);
	}

	::System::Boolean get_IsInCameraView()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_256_CLASS_1_F11ACB4C7C573C44_GET_ISINCAMERAVIEW_OFFSET))(this);
	}

	::System::Void UpdateInCameraView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_256_CLASS_1_F11ACB4C7C573C44_UPDATEINCAMERAVIEW_OFFSET))(this);
	}

	::System::Boolean IsBindToThisEntity(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_256_CLASS_1_F11ACB4C7C573C44_ISBINDTOTHISENTITY_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_0F2103CCBD8370FF(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_256_CLASS_1_F11ACB4C7C573C44_METHOD_1_0F2103CCBD8370FF_OFFSET))(this, a1);
	}
};
