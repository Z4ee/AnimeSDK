#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Variable_2.h"
#include "unitysdk/PipelineCamera/CameraVariableFetchContext_1.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"

class Class_1_41D1BDB32D8F2611;
namespace MoleMole::Cameras { class CameraTrackBlending; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define CLASS_1_8DC4A6B2DA67EF18_METHOD_1_0DC65B56AA8AD999_OFFSET UNITYSDK_OFFSET(0xD85DC70)
#define CLASS_1_8DC4A6B2DA67EF18_METHOD_1_30746492466738D3_OFFSET UNITYSDK_OFFSET(0xD85DF00)
#define CLASS_1_8DC4A6B2DA67EF18_METHOD_1_3C2C8CD94863E711_OFFSET UNITYSDK_OFFSET(0xD85DAD0)
#define CLASS_1_8DC4A6B2DA67EF18_METHOD_1_9DCBCB2D0102B1D1_OFFSET UNITYSDK_OFFSET(0xD85DBE0)
#define CLASS_1_8DC4A6B2DA67EF18_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0xD85DEA0)
#define CLASS_1_8DC4A6B2DA67EF18_METHOD_1_A9204C92E710F4F2_OFFSET UNITYSDK_OFFSET(0xD85DB70)
#define CLASS_1_8DC4A6B2DA67EF18_METHOD_1_BF82444CC07DD319_OFFSET UNITYSDK_OFFSET(0xD85DB40)
#define CLASS_1_8DC4A6B2DA67EF18_METHOD_1_CD07D304FF70FC76_OFFSET UNITYSDK_OFFSET(0xD85DB10)
#define CLASS_1_8DC4A6B2DA67EF18__CTOR_OFFSET UNITYSDK_OFFSET(0xD85DB90)

inline static constexpr unsigned int Class_1_8DC4A6B2DA67EF18_TypeDefinitionIndex = 85742;

class Class_1_8DC4A6B2DA67EF18 : public ::System::Object
{
public:
	::Class_1_41D1BDB32D8F2611* Field_1_0; // 0x10
	::Foundation::Variable_2<::PipelineCamera::WorldBasicCameraData, ::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>> Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8DC4A6B2DA67EF18__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3C2C8CD94863E711(::PipelineCamera::WorldBasicCameraData& a1, ::MoleMole::Cameras::CameraTrackBlending* a2)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + CLASS_1_8DC4A6B2DA67EF18_METHOD_1_3C2C8CD94863E711_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CD07D304FF70FC76(::System::Func_1<::PipelineCamera::WorldBasicCameraData>* a1, ::MoleMole::Cameras::CameraTrackBlending* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_1<::PipelineCamera::WorldBasicCameraData>*, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + CLASS_1_8DC4A6B2DA67EF18_METHOD_1_CD07D304FF70FC76_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BF82444CC07DD319(::System::Func_2<::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>, ::PipelineCamera::WorldBasicCameraData>* a1, ::MoleMole::Cameras::CameraTrackBlending* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_2<::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>, ::PipelineCamera::WorldBasicCameraData>*, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + CLASS_1_8DC4A6B2DA67EF18_METHOD_1_BF82444CC07DD319_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A9204C92E710F4F2(::MoleMole::Cameras::CameraTrackBlending* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + CLASS_1_8DC4A6B2DA67EF18_METHOD_1_A9204C92E710F4F2_OFFSET))(this, a1);
	}

	::System::Void Method_1_9DCBCB2D0102B1D1(::PipelineCamera::WorldBasicCameraData& a1, ::MoleMole::Cameras::CameraTrackBlending* a2)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + CLASS_1_8DC4A6B2DA67EF18_METHOD_1_9DCBCB2D0102B1D1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0DC65B56AA8AD999(::MoleMole::Cameras::CameraTrackBlending* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + CLASS_1_8DC4A6B2DA67EF18_METHOD_1_0DC65B56AA8AD999_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8DC4A6B2DA67EF18_METHOD_1_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData Method_1_30746492466738D3(::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData> a1)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>))((::PBYTE)hIl2Cpp + CLASS_1_8DC4A6B2DA67EF18_METHOD_1_30746492466738D3_OFFSET))(this, a1);
	}
};
