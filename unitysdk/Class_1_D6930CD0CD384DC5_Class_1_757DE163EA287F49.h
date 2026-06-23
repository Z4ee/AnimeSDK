#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigAttackDistanceAttenuation; }
namespace System { class Action; }

#define CLASS_1_D6930CD0CD384DC5_CLASS_1_757DE163EA287F49_METHOD_1_9B60F4E2DECF5D2B_OFFSET UNITYSDK_OFFSET(0x114CB230)
#define CLASS_1_D6930CD0CD384DC5_CLASS_1_757DE163EA287F49__CTOR_OFFSET UNITYSDK_OFFSET(0x114CB220)

inline static constexpr unsigned int Class_1_D6930CD0CD384DC5_Class_1_757DE163EA287F49_TypeDefinitionIndex = 62227;

class Class_1_D6930CD0CD384DC5_Class_1_757DE163EA287F49 : public ::System::Object
{
public:
	::Foundation::AssetPath Field_1_0; // 0x10
	::System::Action* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6930CD0CD384DC5_CLASS_1_757DE163EA287F49__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9B60F4E2DECF5D2B(::MoleMole::Config::ConfigAttackDistanceAttenuation* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigAttackDistanceAttenuation*))((::PBYTE)hIl2Cpp + CLASS_1_D6930CD0CD384DC5_CLASS_1_757DE163EA287F49_METHOD_1_9B60F4E2DECF5D2B_OFFSET))(this, a1);
	}
};
