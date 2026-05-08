#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera { class ICameraCommonContext; }
namespace PipelineCamera { class ICameraTimestamp; }

#define CLASS_1_41505110DC5D244C_GETDELTATIME_OFFSET UNITYSDK_OFFSET(0x118D2AD0)
#define CLASS_1_41505110DC5D244C_GETTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x118D29D0)
#define CLASS_1_41505110DC5D244C_ISTHREADSAFEINWORKTHREAD_OFFSET UNITYSDK_OFFSET(0x118D2EF0)
#define CLASS_1_41505110DC5D244C__CCTOR_OFFSET UNITYSDK_OFFSET(0x118D2F50)
#define CLASS_1_41505110DC5D244C__CTOR_OFFSET UNITYSDK_OFFSET(0x118D2F40)

inline static constexpr unsigned int Class_1_41505110DC5D244C_TypeDefinitionIndex = 43985;

class Class_1_41505110DC5D244C : public ::System::Object
{
public:
	static ::PipelineCamera::ICameraTimestamp** StaticGet_Field_1_0()
	{
		return (::PipelineCamera::ICameraTimestamp**)Il2CppClass::FromTypeDefinitionIndex(Class_1_41505110DC5D244C_TypeDefinitionIndex)->GetStaticField(0x41060);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_41505110DC5D244C__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_41505110DC5D244C__CCTOR_OFFSET))();
	}

	::System::Double GetTimestamp(::PipelineCamera::ICameraCommonContext* a1)
	{
		return ((::System::Double(*)(::PVOID, ::PipelineCamera::ICameraCommonContext*))((::PBYTE)hIl2Cpp + CLASS_1_41505110DC5D244C_GETTIMESTAMP_OFFSET))(this, a1);
	}

	::System::Single GetDeltaTime(::PipelineCamera::ICameraCommonContext* a1)
	{
		return ((::System::Single(*)(::PVOID, ::PipelineCamera::ICameraCommonContext*))((::PBYTE)hIl2Cpp + CLASS_1_41505110DC5D244C_GETDELTATIME_OFFSET))(this, a1);
	}

	::System::Boolean IsThreadSafeInWorkThread(::PipelineCamera::ICameraCommonContext* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::PipelineCamera::ICameraCommonContext*))((::PBYTE)hIl2Cpp + CLASS_1_41505110DC5D244C_ISTHREADSAFEINWORKTHREAD_OFFSET))(this, a1);
	}
};
