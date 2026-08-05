#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F5ACAAB9AA1EB49.h"

namespace MoleMole { class ZipLineSubSystem; }
namespace MoleMole { class ZipLineSubSystem_CameraModel; }
namespace MoleMole { class ZipLineSubSystem_CommonSkill; }
namespace MoleMole { class ZipLineSubSystem_EnterPointModel; }
namespace MoleMole { class ZipLineSubSystem_ExitPointModel; }
namespace MoleMole { class ZipLineSubSystem_GroupState; }
namespace MoleMole { class ZipLineSubSystem_HUDModel; }
namespace MoleMole { class ZipLineSubSystem_MainState; }
namespace MoleMole { class ZipLineSubSystem_SwitchPointModel; }

#define MOLEMOLE_ZIPLINESUBSYSTEM_CMODEL_GET_CAMERAMODEL_OFFSET UNITYSDK_OFFSET(0x12B26F70)
#define MOLEMOLE_ZIPLINESUBSYSTEM_CMODEL_GET_COMMONSKILL_OFFSET UNITYSDK_OFFSET(0x12B27010)
#define MOLEMOLE_ZIPLINESUBSYSTEM_CMODEL_GET_ENTERPOINT_OFFSET UNITYSDK_OFFSET(0x12B26F90)
#define MOLEMOLE_ZIPLINESUBSYSTEM_CMODEL_GET_EXITPOINT_OFFSET UNITYSDK_OFFSET(0x12B26FD0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_CMODEL_GET_GROUPSTATE_OFFSET UNITYSDK_OFFSET(0x12B27030)
#define MOLEMOLE_ZIPLINESUBSYSTEM_CMODEL_GET_HUDMODEL_OFFSET UNITYSDK_OFFSET(0x12B26FF0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_CMODEL_GET_MAINSTATE_OFFSET UNITYSDK_OFFSET(0x12B26F50)
#define MOLEMOLE_ZIPLINESUBSYSTEM_CMODEL_GET_SWITCHPOINT_OFFSET UNITYSDK_OFFSET(0x12B26FB0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_CMODEL_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x12B27050)
#define MOLEMOLE_ZIPLINESUBSYSTEM_CMODEL_SET_CAMERAMODEL_OFFSET UNITYSDK_OFFSET(0x12B26F80)
#define MOLEMOLE_ZIPLINESUBSYSTEM_CMODEL_SET_COMMONSKILL_OFFSET UNITYSDK_OFFSET(0x12B27020)
#define MOLEMOLE_ZIPLINESUBSYSTEM_CMODEL_SET_ENTERPOINT_OFFSET UNITYSDK_OFFSET(0x12B26FA0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_CMODEL_SET_EXITPOINT_OFFSET UNITYSDK_OFFSET(0x12B26FE0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_CMODEL_SET_GROUPSTATE_OFFSET UNITYSDK_OFFSET(0x12B27040)
#define MOLEMOLE_ZIPLINESUBSYSTEM_CMODEL_SET_HUDMODEL_OFFSET UNITYSDK_OFFSET(0x12B27000)
#define MOLEMOLE_ZIPLINESUBSYSTEM_CMODEL_SET_MAINSTATE_OFFSET UNITYSDK_OFFSET(0x12B26F60)
#define MOLEMOLE_ZIPLINESUBSYSTEM_CMODEL_SET_SWITCHPOINT_OFFSET UNITYSDK_OFFSET(0x12B26FC0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_CMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x12B26E60)
#define MOLEMOLE_ZIPLINESUBSYSTEM_CMODEL__ONCREATEPROPERTY_B__35_0_OFFSET UNITYSDK_OFFSET(0x12B27230)
#define MOLEMOLE_ZIPLINESUBSYSTEM_CMODEL__ONCREATEPROPERTY_B__35_1_OFFSET UNITYSDK_OFFSET(0x12B27290)
#define MOLEMOLE_ZIPLINESUBSYSTEM_CMODEL__ONCREATEPROPERTY_B__35_2_OFFSET UNITYSDK_OFFSET(0x12B272E0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_CMODEL__ONCREATEPROPERTY_B__35_3_OFFSET UNITYSDK_OFFSET(0x12B27350)
#define MOLEMOLE_ZIPLINESUBSYSTEM_CMODEL__ONCREATEPROPERTY_B__35_4_OFFSET UNITYSDK_OFFSET(0x12B273E0)

namespace MoleMole
{
	inline static constexpr unsigned int ZipLineSubSystem_CModel_TypeDefinitionIndex = 63892;

	class ZipLineSubSystem_CModel : public ::Class_1_5F5ACAAB9AA1EB49
	{
	public:
		::MoleMole::ZipLineSubSystem_SwitchPointModel* _SwitchPoint_k__BackingField; // 0x80
		::MoleMole::ZipLineSubSystem_ExitPointModel* _ExitPoint_k__BackingField; // 0x88
		::MoleMole::ZipLineSubSystem_GroupState* _GroupState_k__BackingField; // 0x90
		::MoleMole::ZipLineSubSystem_HUDModel* _HUDModel_k__BackingField; // 0x98
		::MoleMole::ZipLineSubSystem_MainState* _MainState_k__BackingField; // 0xA0
		::MoleMole::ZipLineSubSystem* _ownerSubSystem; // 0xA8
		::MoleMole::ZipLineSubSystem_CommonSkill* _CommonSkill_k__BackingField; // 0xB0
		::MoleMole::ZipLineSubSystem_CameraModel* _CameraModel_k__BackingField; // 0xB8
		::MoleMole::ZipLineSubSystem_EnterPointModel* _EnterPoint_k__BackingField; // 0xC0
		::System::Boolean SomeInit; // 0xC8

		::System::Void _ctor(::MoleMole::ZipLineSubSystem* ownerSubSystem)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ZipLineSubSystem*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_CMODEL__CTOR_OFFSET))(this, ownerSubSystem);
		}

		::MoleMole::ZipLineSubSystem_MainState* get_MainState()
		{
			return ((::MoleMole::ZipLineSubSystem_MainState*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_CMODEL_GET_MAINSTATE_OFFSET))(this);
		}

		::System::Void set_MainState(::MoleMole::ZipLineSubSystem_MainState* value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ZipLineSubSystem_MainState*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_CMODEL_SET_MAINSTATE_OFFSET))(this, value);
		}

		::MoleMole::ZipLineSubSystem_CameraModel* get_CameraModel()
		{
			return ((::MoleMole::ZipLineSubSystem_CameraModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_CMODEL_GET_CAMERAMODEL_OFFSET))(this);
		}

		::System::Void set_CameraModel(::MoleMole::ZipLineSubSystem_CameraModel* value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ZipLineSubSystem_CameraModel*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_CMODEL_SET_CAMERAMODEL_OFFSET))(this, value);
		}

		::MoleMole::ZipLineSubSystem_EnterPointModel* get_EnterPoint()
		{
			return ((::MoleMole::ZipLineSubSystem_EnterPointModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_CMODEL_GET_ENTERPOINT_OFFSET))(this);
		}

		::System::Void set_EnterPoint(::MoleMole::ZipLineSubSystem_EnterPointModel* value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ZipLineSubSystem_EnterPointModel*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_CMODEL_SET_ENTERPOINT_OFFSET))(this, value);
		}

		::MoleMole::ZipLineSubSystem_SwitchPointModel* get_SwitchPoint()
		{
			return ((::MoleMole::ZipLineSubSystem_SwitchPointModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_CMODEL_GET_SWITCHPOINT_OFFSET))(this);
		}

		::System::Void set_SwitchPoint(::MoleMole::ZipLineSubSystem_SwitchPointModel* value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ZipLineSubSystem_SwitchPointModel*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_CMODEL_SET_SWITCHPOINT_OFFSET))(this, value);
		}

		::MoleMole::ZipLineSubSystem_ExitPointModel* get_ExitPoint()
		{
			return ((::MoleMole::ZipLineSubSystem_ExitPointModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_CMODEL_GET_EXITPOINT_OFFSET))(this);
		}

		::System::Void set_ExitPoint(::MoleMole::ZipLineSubSystem_ExitPointModel* value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ZipLineSubSystem_ExitPointModel*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_CMODEL_SET_EXITPOINT_OFFSET))(this, value);
		}

		::MoleMole::ZipLineSubSystem_HUDModel* get_HUDModel()
		{
			return ((::MoleMole::ZipLineSubSystem_HUDModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_CMODEL_GET_HUDMODEL_OFFSET))(this);
		}

		::System::Void set_HUDModel(::MoleMole::ZipLineSubSystem_HUDModel* value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ZipLineSubSystem_HUDModel*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_CMODEL_SET_HUDMODEL_OFFSET))(this, value);
		}

		::MoleMole::ZipLineSubSystem_CommonSkill* get_CommonSkill()
		{
			return ((::MoleMole::ZipLineSubSystem_CommonSkill*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_CMODEL_GET_COMMONSKILL_OFFSET))(this);
		}

		::System::Void set_CommonSkill(::MoleMole::ZipLineSubSystem_CommonSkill* value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ZipLineSubSystem_CommonSkill*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_CMODEL_SET_COMMONSKILL_OFFSET))(this, value);
		}

		::MoleMole::ZipLineSubSystem_GroupState* get_GroupState()
		{
			return ((::MoleMole::ZipLineSubSystem_GroupState*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_CMODEL_GET_GROUPSTATE_OFFSET))(this);
		}

		::System::Void set_GroupState(::MoleMole::ZipLineSubSystem_GroupState* value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ZipLineSubSystem_GroupState*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_CMODEL_SET_GROUPSTATE_OFFSET))(this, value);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_CMODEL_ONCREATEPROPERTY_OFFSET))(this);
		}

		::MoleMole::ZipLineSubSystem_CameraModel* _OnCreateProperty_b__35_0()
		{
			return ((::MoleMole::ZipLineSubSystem_CameraModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_CMODEL__ONCREATEPROPERTY_B__35_0_OFFSET))(this);
		}

		::MoleMole::ZipLineSubSystem_ExitPointModel* _OnCreateProperty_b__35_1()
		{
			return ((::MoleMole::ZipLineSubSystem_ExitPointModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_CMODEL__ONCREATEPROPERTY_B__35_1_OFFSET))(this);
		}

		::MoleMole::ZipLineSubSystem_CommonSkill* _OnCreateProperty_b__35_2()
		{
			return ((::MoleMole::ZipLineSubSystem_CommonSkill*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_CMODEL__ONCREATEPROPERTY_B__35_2_OFFSET))(this);
		}

		::MoleMole::ZipLineSubSystem_HUDModel* _OnCreateProperty_b__35_3()
		{
			return ((::MoleMole::ZipLineSubSystem_HUDModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_CMODEL__ONCREATEPROPERTY_B__35_3_OFFSET))(this);
		}

		::MoleMole::ZipLineSubSystem_GroupState* _OnCreateProperty_b__35_4()
		{
			return ((::MoleMole::ZipLineSubSystem_GroupState*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_CMODEL__ONCREATEPROPERTY_B__35_4_OFFSET))(this);
		}
	};
}
