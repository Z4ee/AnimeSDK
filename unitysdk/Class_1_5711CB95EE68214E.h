#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5711CB95EE68214E_Enum_3_98489D92AAE4E815.h"
#include "unitysdk/Foundation/ReservedObjectPoolDataHandle.h"
#include "unitysdk/Foundation/Unreal/FTransform3D.h"
#include "unitysdk/MoleMole/Config/EffectType.h"
#include "unitysdk/MoleMole/Config/TargetCamera.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_5_DCFF91E03A93C03C;
namespace MoleMole::EffectSimulate { class NapEffectSimulatorMgr; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_5711CB95EE68214E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17239350)
#define CLASS_1_5711CB95EE68214E_METHOD_1_0030D44AC6A16FDF_OFFSET UNITYSDK_OFFSET(0x1723A670)
#define CLASS_1_5711CB95EE68214E_METHOD_1_225AB75B97EB5C28_OFFSET UNITYSDK_OFFSET(0x17239970)
#define CLASS_1_5711CB95EE68214E_METHOD_1_283228DCA08F69C7_OFFSET UNITYSDK_OFFSET(0x17239B20)
#define CLASS_1_5711CB95EE68214E_METHOD_1_37E430BF0BE2B290_OFFSET UNITYSDK_OFFSET(0x172399E0)
#define CLASS_1_5711CB95EE68214E_METHOD_1_5B944DF9FC8FD32D_OFFSET UNITYSDK_OFFSET(0x1723A5F0)
#define CLASS_1_5711CB95EE68214E_METHOD_1_6105334A729F22E3_OFFSET UNITYSDK_OFFSET(0x1723A560)
#define CLASS_1_5711CB95EE68214E_METHOD_1_6357D72C0EBC91B4_OFFSET UNITYSDK_OFFSET(0x17239C40)
#define CLASS_1_5711CB95EE68214E_METHOD_1_6423291ED13007B8_OFFSET UNITYSDK_OFFSET(0x1723A460)
#define CLASS_1_5711CB95EE68214E_METHOD_1_67D034621E6DA1EC_OFFSET UNITYSDK_OFFSET(0x17239AD0)
#define CLASS_1_5711CB95EE68214E_METHOD_1_81855C54613E2F49_OFFSET UNITYSDK_OFFSET(0x172397B0)
#define CLASS_1_5711CB95EE68214E_METHOD_1_82E992240300FB30_OFFSET UNITYSDK_OFFSET(0x17239BF0)
#define CLASS_1_5711CB95EE68214E_METHOD_1_AF2CFBAAD2629B3B_OFFSET UNITYSDK_OFFSET(0x1723A320)
#define CLASS_1_5711CB95EE68214E_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x172399D0)
#define CLASS_1_5711CB95EE68214E__CTOR_OFFSET UNITYSDK_OFFSET(0x172397A0)

inline static constexpr unsigned int Class_1_5711CB95EE68214E_TypeDefinitionIndex = 47567;

class Class_1_5711CB95EE68214E : public ::System::Object
{
public:
	// static const ::Class_1_5711CB95EE68214E_Enum_3_98489D92AAE4E815 Field_1_1; // 0x0
	::Class_5_DCFF91E03A93C03C* Field_1_4; // 0x10
	::System::Action_1<::Class_1_5711CB95EE68214E*>* Field_1_10; // 0x18
	::UnityEngine::GameObject* Field_1_6; // 0x20
	::Foundation::ReservedObjectPoolDataHandle Field_1_11; // 0x28
	::System::String* Field_1_0; // 0x38
	::MoleMole::EffectSimulate::NapEffectSimulatorMgr* Field_1_7; // 0x40
	::System::Boolean Field_1_12; // 0x48
	::System::Boolean Field_1_8; // 0x49
	::System::Nullable_1<::System::Single> Field_1_9; // 0x4C
	::System::Single Field_1_14; // 0x54
	::System::UInt32 Field_1_5; // 0x58
	::MoleMole::Config::TargetCamera Field_1_15; // 0x5C
	::Class_1_5711CB95EE68214E_Enum_3_98489D92AAE4E815 Field_1_13; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5711CB95EE68214E__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5711CB95EE68214E_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_81855C54613E2F49(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5711CB95EE68214E_METHOD_1_81855C54613E2F49_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_225AB75B97EB5C28(::Class_1_5711CB95EE68214E_Enum_3_98489D92AAE4E815 a1, ::Class_1_5711CB95EE68214E_Enum_3_98489D92AAE4E815 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5711CB95EE68214E_Enum_3_98489D92AAE4E815, ::Class_1_5711CB95EE68214E_Enum_3_98489D92AAE4E815))((::PBYTE)hIl2Cpp + CLASS_1_5711CB95EE68214E_METHOD_1_225AB75B97EB5C28_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5711CB95EE68214E_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_37E430BF0BE2B290(::MoleMole::Config::TargetCamera a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::TargetCamera))((::PBYTE)hIl2Cpp + CLASS_1_5711CB95EE68214E_METHOD_1_37E430BF0BE2B290_OFFSET))(this, a1);
	}

	::System::Void Method_1_67D034621E6DA1EC(::System::Nullable_1<::System::Single> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + CLASS_1_5711CB95EE68214E_METHOD_1_67D034621E6DA1EC_OFFSET))(this, a1);
	}

	::System::Void Method_1_283228DCA08F69C7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5711CB95EE68214E_METHOD_1_283228DCA08F69C7_OFFSET))(this, a1);
	}

	::System::Void Method_1_82E992240300FB30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5711CB95EE68214E_METHOD_1_82E992240300FB30_OFFSET))(this);
	}

	::System::Void Method_1_6357D72C0EBC91B4(::MoleMole::Config::EffectType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::EffectType))((::PBYTE)hIl2Cpp + CLASS_1_5711CB95EE68214E_METHOD_1_6357D72C0EBC91B4_OFFSET))(this, a1);
	}

	::System::Void Method_1_AF2CFBAAD2629B3B(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5711CB95EE68214E_METHOD_1_AF2CFBAAD2629B3B_OFFSET))(this, a1);
	}

	::System::Void Method_1_6423291ED13007B8(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5711CB95EE68214E_METHOD_1_6423291ED13007B8_OFFSET))(this, a1);
	}

	::System::Void Method_1_6105334A729F22E3(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_5711CB95EE68214E_METHOD_1_6105334A729F22E3_OFFSET))(this, a1);
	}

	::System::Void Method_1_5B944DF9FC8FD32D(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_5711CB95EE68214E_METHOD_1_5B944DF9FC8FD32D_OFFSET))(this, a1);
	}

	::System::Void Method_1_0030D44AC6A16FDF(::Foundation::Unreal::FTransform3D a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FTransform3D))((::PBYTE)hIl2Cpp + CLASS_1_5711CB95EE68214E_METHOD_1_0030D44AC6A16FDF_OFFSET))(this, a1);
	}
};
