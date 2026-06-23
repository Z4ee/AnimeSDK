#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"

class Class_1_CD54B66100AEF2DB;
namespace MoleMole::Config { class ConfigShootingGroundCamera; }
namespace PipelineCamera { class ICameraDataBlender; }
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }

#define CLASS_1_CD54B66100AEF2DB_CLASS_1_5123393A141687FD_METHOD_1_0846D1EBB7741623_OFFSET UNITYSDK_OFFSET(0x142B1530)
#define CLASS_1_CD54B66100AEF2DB_CLASS_1_5123393A141687FD_METHOD_1_196672CC6CF38439_1_OFFSET UNITYSDK_OFFSET(0x142B15D0)
#define CLASS_1_CD54B66100AEF2DB_CLASS_1_5123393A141687FD_METHOD_1_196672CC6CF38439_OFFSET UNITYSDK_OFFSET(0x142B14B0)
#define CLASS_1_CD54B66100AEF2DB_CLASS_1_5123393A141687FD_METHOD_1_AA18621D12E9FC02_OFFSET UNITYSDK_OFFSET(0x142B13F0)
#define CLASS_1_CD54B66100AEF2DB_CLASS_1_5123393A141687FD__CTOR_OFFSET UNITYSDK_OFFSET(0x142B13E0)

inline static constexpr unsigned int Class_1_CD54B66100AEF2DB_Class_1_5123393A141687FD_TypeDefinitionIndex = 75779;

class Class_1_CD54B66100AEF2DB_Class_1_5123393A141687FD : public ::System::Object
{
public:
	::Class_1_CD54B66100AEF2DB* Field_1_0; // 0x10
	::MoleMole::Config::ConfigShootingGroundCamera* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD54B66100AEF2DB_CLASS_1_5123393A141687FD__CTOR_OFFSET))(this);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* Method_1_AA18621D12E9FC02()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD54B66100AEF2DB_CLASS_1_5123393A141687FD_METHOD_1_AA18621D12E9FC02_OFFSET))(this);
	}

	::PipelineCamera::ICameraDataBlender* Method_1_196672CC6CF38439(::PipelineCamera::ICameraDataBlender* a1)
	{
		return ((::PipelineCamera::ICameraDataBlender*(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + CLASS_1_CD54B66100AEF2DB_CLASS_1_5123393A141687FD_METHOD_1_196672CC6CF38439_OFFSET))(this, a1);
	}

	::System::Void Method_1_0846D1EBB7741623(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + CLASS_1_CD54B66100AEF2DB_CLASS_1_5123393A141687FD_METHOD_1_0846D1EBB7741623_OFFSET))(this, a1);
	}

	::PipelineCamera::ICameraDataBlender* Method_1_196672CC6CF38439_1(::PipelineCamera::ICameraDataBlender* a1)
	{
		return ((::PipelineCamera::ICameraDataBlender*(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + CLASS_1_CD54B66100AEF2DB_CLASS_1_5123393A141687FD_METHOD_1_196672CC6CF38439_1_OFFSET))(this, a1);
	}
};
