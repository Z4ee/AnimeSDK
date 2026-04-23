#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_7134DCF9ECF7587A.h"
#include "unitysdk/RPG/GameCore/GridFightPrepWaitCustomTimeType.h"

namespace RPG::GameCore { class GridFightPrepWaitCustomTime; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_CA833CD5ADF5BA58_METHOD_3_07BB45288DFF8852_OFFSET UNITYSDK_OFFSET(0xD9EB9A0)
#define CLASS_3_CA833CD5ADF5BA58_METHOD_3_458DAEAB6170C584_OFFSET UNITYSDK_OFFSET(0xD9EB440)
#define CLASS_3_CA833CD5ADF5BA58_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xD9EBAF0)
#define CLASS_3_CA833CD5ADF5BA58_METHOD_3_6A0EBEECA245A27C_OFFSET UNITYSDK_OFFSET(0xD9EB3F0)
#define CLASS_3_CA833CD5ADF5BA58_METHOD_3_B100762010C6AFBC_OFFSET UNITYSDK_OFFSET(0xD9EB980)
#define CLASS_3_CA833CD5ADF5BA58_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD9EB5B0)
#define CLASS_3_CA833CD5ADF5BA58_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xD9EBA50)
#define CLASS_3_CA833CD5ADF5BA58__CTOR_OFFSET UNITYSDK_OFFSET(0xD9EB3E0)
#define CLASS_3_CA833CD5ADF5BA58___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xD9EBB50)

inline static constexpr unsigned int Class_3_CA833CD5ADF5BA58_TypeDefinitionIndex = 49368;

class Class_3_CA833CD5ADF5BA58 : public ::Class_2_7134DCF9ECF7587A
{
public:
	::RPG::GameCore::GridFightPrepWaitCustomTime* Field_3_1; // 0x28
	::RPG::GameCore::TaskContext* Field_3_0; // 0x30

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

	::System::Void Method_3_07BB45288DFF8852()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CA833CD5ADF5BA58_METHOD_3_07BB45288DFF8852_OFFSET))(this);
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
