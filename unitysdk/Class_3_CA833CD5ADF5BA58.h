#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_7134DCF9ECF7587A.h"
#include "unitysdk/RPG/GameCore/GridFightPrepWaitCustomTimeType.h"

namespace RPG::GameCore { class GridFightPrepWaitCustomTime; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_CA833CD5ADF5BA58_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x89EAE40)
#define CLASS_3_CA833CD5ADF5BA58_METHOD_3_6A0EBEECA245A27C_OFFSET UNITYSDK_OFFSET(0x89EA820)
#define CLASS_3_CA833CD5ADF5BA58_METHOD_3_B100762010C6AFBC_OFFSET UNITYSDK_OFFSET(0x89EACD0)
#define CLASS_3_CA833CD5ADF5BA58_METHOD_3_B6BB704B01BCC35B_OFFSET UNITYSDK_OFFSET(0x89EACF0)
#define CLASS_3_CA833CD5ADF5BA58_METHOD_3_EAD10B3E55E2C4C5_OFFSET UNITYSDK_OFFSET(0x89EA870)
#define CLASS_3_CA833CD5ADF5BA58_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x89EA9B0)
#define CLASS_3_CA833CD5ADF5BA58_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x89EADA0)
#define CLASS_3_CA833CD5ADF5BA58__CTOR_OFFSET UNITYSDK_OFFSET(0x89EA810)
#define CLASS_3_CA833CD5ADF5BA58___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x89EAEA0)

inline static constexpr unsigned int Class_3_CA833CD5ADF5BA58_TypeDefinitionIndex = 43369;

class Class_3_CA833CD5ADF5BA58 : public ::Class_2_7134DCF9ECF7587A
{
public:
	::RPG::GameCore::TaskContext* Field_3_0; // 0x28
	::RPG::GameCore::GridFightPrepWaitCustomTime* Field_3_1; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GridFightPrepWaitCustomTime* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GridFightPrepWaitCustomTime*))((::PBYTE)hIl2Cpp + CLASS_3_CA833CD5ADF5BA58__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_6A0EBEECA245A27C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CA833CD5ADF5BA58_METHOD_3_6A0EBEECA245A27C_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CA833CD5ADF5BA58_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_B6BB704B01BCC35B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CA833CD5ADF5BA58_METHOD_3_B6BB704B01BCC35B_OFFSET))(this);
	}

	::System::Void Method_3_EAD10B3E55E2C4C5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CA833CD5ADF5BA58_METHOD_3_EAD10B3E55E2C4C5_OFFSET))(this);
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
