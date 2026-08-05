#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_333D68058B10D010.h"
#include "unitysdk/Struct_2_93287567E916A51C.h"

namespace System { class Action; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_0BD12118DF6B7FE9_METHOD_3_327B657776861CA3_1_OFFSET UNITYSDK_OFFSET(0x1505B360)
#define CLASS_3_0BD12118DF6B7FE9_METHOD_3_327B657776861CA3_OFFSET UNITYSDK_OFFSET(0x1505B290)
#define CLASS_3_0BD12118DF6B7FE9_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1505B4F0)
#define CLASS_3_0BD12118DF6B7FE9_METHOD_3_864223A0D9E3F388_OFFSET UNITYSDK_OFFSET(0x1505B430)
#define CLASS_3_0BD12118DF6B7FE9_ONDETACH_OFFSET UNITYSDK_OFFSET(0x1505B200)
#define CLASS_3_0BD12118DF6B7FE9__CTOR_OFFSET UNITYSDK_OFFSET(0x1505B250)

inline static constexpr unsigned int Class_3_0BD12118DF6B7FE9_TypeDefinitionIndex = 53535;

class Class_3_0BD12118DF6B7FE9 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_0BD12118DF6B7FE9*>
{
public:
	::System::Action_2<::Foundation::ViewObject::ViewObjectHandle, ::Struct_2_333D68058B10D010>* Field_3_0; // 0x20
	::System::Action_3<::Foundation::ViewObject::ViewObjectHandle, ::System::Int32, ::System::Action*>* Field_3_1; // 0x28
	::System::Action_2<::Foundation::ViewObject::ViewObjectHandle, ::Struct_2_93287567E916A51C>* Field_3_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0BD12118DF6B7FE9__CTOR_OFFSET))(this);
	}

	::System::Void OnDetach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0BD12118DF6B7FE9_ONDETACH_OFFSET))(this);
	}

	::System::Void Method_3_327B657776861CA3(::Struct_2_93287567E916A51C a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_93287567E916A51C))((::PBYTE)hIl2Cpp + CLASS_3_0BD12118DF6B7FE9_METHOD_3_327B657776861CA3_OFFSET))(this, a1);
	}

	::System::Void Method_3_327B657776861CA3_1(::Struct_2_333D68058B10D010 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_333D68058B10D010))((::PBYTE)hIl2Cpp + CLASS_3_0BD12118DF6B7FE9_METHOD_3_327B657776861CA3_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_864223A0D9E3F388(::System::Int32 a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_3_0BD12118DF6B7FE9_METHOD_3_864223A0D9E3F388_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0BD12118DF6B7FE9_METHOD_3_832295EC279E5994_OFFSET))(this);
	}
};
