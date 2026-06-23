#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_MONOENTITYMODELMODIFIER_CONFIGMODIFIER_GET_CONTROLPOINT_HEIGHT_OFFSET UNITYSDK_OFFSET(0x161FF530)
#define MOLEMOLE_MONOENTITYMODELMODIFIER_CONFIGMODIFIER_GET_MODELHEIGHT_OFFSET UNITYSDK_OFFSET(0x161FF5A0)
#define MOLEMOLE_MONOENTITYMODELMODIFIER_CONFIGMODIFIER_GET_MODELWIDTH_OFFSET UNITYSDK_OFFSET(0x161FF590)
#define MOLEMOLE_MONOENTITYMODELMODIFIER_CONFIGMODIFIER_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x161FF4D0)
#define MOLEMOLE_MONOENTITYMODELMODIFIER_CONFIGMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x161FF5B0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEntityModelModifier_ConfigModifier_TypeDefinitionIndex = 77653;

	class MonoEntityModelModifier_ConfigModifier : public ::System::Object
	{
	public:
		::System::Boolean _modifyWidth; // 0x10
		::System::Single _width; // 0x14
		::System::Boolean _modifyControlPointHeight; // 0x18
		::System::Single _controlPointHeight; // 0x1C
		::System::Single _modelWidth; // 0x20
		::System::Single _modelHeight; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYMODELMODIFIER_CONFIGMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Nullable_1<::System::Single> get_width()
		{
			return ((::System::Nullable_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYMODELMODIFIER_CONFIGMODIFIER_GET_WIDTH_OFFSET))(this);
		}

		::System::Nullable_1<::System::Single> get_controlPoint_Height()
		{
			return ((::System::Nullable_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYMODELMODIFIER_CONFIGMODIFIER_GET_CONTROLPOINT_HEIGHT_OFFSET))(this);
		}

		::System::Single get_modelWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYMODELMODIFIER_CONFIGMODIFIER_GET_MODELWIDTH_OFFSET))(this);
		}

		::System::Single get_modelHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYMODELMODIFIER_CONFIGMODIFIER_GET_MODELHEIGHT_OFFSET))(this);
		}
	};
}
