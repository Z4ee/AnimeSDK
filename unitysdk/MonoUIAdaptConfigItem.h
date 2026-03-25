#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/UIAdaptiveDeviceType.h"
#include "unitysdk/System/Object.h"

class Class_1_92608A36037A1D69;
namespace RPG::GameCore { class UIOperation; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MONOUIADAPTCONFIGITEM_METHOD_1_5C8B80D3D5F605B1_OFFSET UNITYSDK_OFFSET(0x88BEEA0)
#define MONOUIADAPTCONFIGITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x88BF240)

inline static constexpr unsigned int MonoUIAdaptConfigItem_TypeDefinitionIndex = 38445;

class MonoUIAdaptConfigItem : public ::System::Object
{
public:
	::Il2CppArray<::UnityEngine::Transform*>* Targets; // 0x10
	::RPG::GameCore::UIOperation* Operation; // 0x18
	::RPG::GameCore::UIAdaptiveDeviceType DeviceType; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIADAPTCONFIGITEM__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5C8B80D3D5F605B1(::System::Collections::Generic::List_1<::Class_1_92608A36037A1D69*>*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_92608A36037A1D69*>*&))((::PBYTE)hIl2Cpp + MONOUIADAPTCONFIGITEM_METHOD_1_5C8B80D3D5F605B1_OFFSET))(this, a1);
	}
};
