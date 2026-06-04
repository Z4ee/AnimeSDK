#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_7134DCF9ECF7587A.h"
#include "unitysdk/RPG/GameCore/GridFightPrepWaitCustomTimeType.h"

namespace RPG::GameCore { class GridFightPrepWaitCustomTime; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_CA833CD5ADF5BA58_METHOD_3_458DAEAB6170C584_OFFSET UNITYSDK_OFFSET(0xA636A30)
#define CLASS_3_CA833CD5ADF5BA58_METHOD_3_4A41C63BFE58D26F_OFFSET UNITYSDK_OFFSET(0xA636FB0)
#define CLASS_3_CA833CD5ADF5BA58_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xA637100)
#define CLASS_3_CA833CD5ADF5BA58_METHOD_3_B100762010C6AFBC_OFFSET UNITYSDK_OFFSET(0xA636F90)
#define CLASS_3_CA833CD5ADF5BA58_METHOD_3_EAD10B3E55E2C4C5_OFFSET UNITYSDK_OFFSET(0xA6369E0)
#define CLASS_3_CA833CD5ADF5BA58_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA636BB0)
#define CLASS_3_CA833CD5ADF5BA58_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA637060)
#define CLASS_3_CA833CD5ADF5BA58__CTOR_OFFSET UNITYSDK_OFFSET(0xA6369D0)
#define CLASS_3_CA833CD5ADF5BA58___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA637160)

inline static constexpr unsigned int Class_3_CA833CD5ADF5BA58_TypeDefinitionIndex = 50035;

class Class_3_CA833CD5ADF5BA58 : public ::Class_2_7134DCF9ECF7587A
{
public:
	::RPG::GameCore::TaskContext* Field_3_0; // 0x28
	::RPG::GameCore::GridFightPrepWaitCustomTime* Field_3_1; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GridFightPrepWaitCustomTime* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GridFightPrepWaitCustomTime*))((::PBYTE)hIl2Cpp + CLASS_3_CA833CD5ADF5BA58__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_EAD10B3E55E2C4C5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CA833CD5ADF5BA58_METHOD_3_EAD10B3E55E2C4C5_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CA833CD5ADF5BA58_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_4A41C63BFE58D26F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CA833CD5ADF5BA58_METHOD_3_4A41C63BFE58D26F_OFFSET))(this);
	}

	::System::Void Method_3_458DAEAB6170C584()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CA833CD5ADF5BA58_METHOD_3_458DAEAB6170C584_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CA833CD5ADF5BA58_ONTASKRESET_OFFSET))(this);
	}

	::RPG::GameCore::GridFightPrepWaitCustomTimeType Method_3_B100762010C6AFBC()
	{
		return ((::RPG::GameCore::GridFightPrepWaitCustomTimeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CA833CD5ADF5BA58_METHOD_3_B100762010C6AFBC_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CA833CD5ADF5BA58_METHOD_3_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CA833CD5ADF5BA58___IFIXBASEPROXY_ONTASKRESET_OFFSET))(this);
	}
};
