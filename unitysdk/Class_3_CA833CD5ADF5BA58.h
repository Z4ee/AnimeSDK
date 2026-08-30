#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_BB5C2228DBF7AE1F.h"
#include "unitysdk/RPG/GameCore/GridFightPrepWaitCustomTimeType.h"

namespace RPG::GameCore { class GridFightPrepWaitCustomTime; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_CA833CD5ADF5BA58_METHOD_3_511EE97BB36FB7B6_OFFSET UNITYSDK_OFFSET(0x195DD2D0)
#define CLASS_3_CA833CD5ADF5BA58_METHOD_3_704FAC4600717444_OFFSET UNITYSDK_OFFSET(0x195DCC80)
#define CLASS_3_CA833CD5ADF5BA58_METHOD_3_8594010D6A57C9BB_OFFSET UNITYSDK_OFFSET(0x195DCC30)
#define CLASS_3_CA833CD5ADF5BA58_METHOD_3_C436A2848092EB88_OFFSET UNITYSDK_OFFSET(0x195DD320)
#define CLASS_3_CA833CD5ADF5BA58_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x195DCE80)
#define CLASS_3_CA833CD5ADF5BA58_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x195DD3D0)
#define CLASS_3_CA833CD5ADF5BA58__CTOR_OFFSET UNITYSDK_OFFSET(0x195DCC20)

inline static constexpr unsigned int Class_3_CA833CD5ADF5BA58_TypeDefinitionIndex = 53801;

class Class_3_CA833CD5ADF5BA58 : public ::Class_2_BB5C2228DBF7AE1F
{
public:
	::RPG::GameCore::GridFightPrepWaitCustomTime* IGHAHBNLIJA; // 0x28
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GridFightPrepWaitCustomTime* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GridFightPrepWaitCustomTime*))((::PBYTE)hIl2Cpp + CLASS_3_CA833CD5ADF5BA58__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_8594010D6A57C9BB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CA833CD5ADF5BA58_METHOD_3_8594010D6A57C9BB_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CA833CD5ADF5BA58_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_C436A2848092EB88()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CA833CD5ADF5BA58_METHOD_3_C436A2848092EB88_OFFSET))(this);
	}

	::System::Void Method_3_704FAC4600717444()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CA833CD5ADF5BA58_METHOD_3_704FAC4600717444_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CA833CD5ADF5BA58_ONTASKRESET_OFFSET))(this);
	}

	::RPG::GameCore::GridFightPrepWaitCustomTimeType Method_3_511EE97BB36FB7B6()
	{
		return ((::RPG::GameCore::GridFightPrepWaitCustomTimeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CA833CD5ADF5BA58_METHOD_3_511EE97BB36FB7B6_OFFSET))(this);
	}
};
