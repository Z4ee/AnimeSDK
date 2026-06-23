#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera { class ICameraCommonContext; }
namespace PipelineCamera { class ICameraTimestamp; }

#define CLASS_1_404704D8770BD5CE_GETDELTATIME_OFFSET UNITYSDK_OFFSET(0x180693A0)
#define CLASS_1_404704D8770BD5CE_GETTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x180692A0)
#define CLASS_1_404704D8770BD5CE_ISTHREADSAFEINWORKTHREAD_OFFSET UNITYSDK_OFFSET(0x18069810)
#define CLASS_1_404704D8770BD5CE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18069870)
#define CLASS_1_404704D8770BD5CE__CTOR_OFFSET UNITYSDK_OFFSET(0x18069860)

inline static constexpr unsigned int Class_1_404704D8770BD5CE_TypeDefinitionIndex = 42145;

class Class_1_404704D8770BD5CE : public ::System::Object
{
public:
	static ::PipelineCamera::ICameraTimestamp** StaticGet_Field_1_1()
	{
		return (::PipelineCamera::ICameraTimestamp**)Il2CppClass::FromTypeDefinitionIndex(Class_1_404704D8770BD5CE_TypeDefinitionIndex)->GetStaticField(0x3B710);
	}
	static ::PipelineCamera::ICameraTimestamp** StaticGet_Field_1_2()
	{
		return (::PipelineCamera::ICameraTimestamp**)Il2CppClass::FromTypeDefinitionIndex(Class_1_404704D8770BD5CE_TypeDefinitionIndex)->GetStaticField(0x3B718);
	}
	::System::Boolean Field_1_0; // 0x10

	::System::Void _ctor(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_404704D8770BD5CE__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_404704D8770BD5CE__CCTOR_OFFSET))();
	}

	::System::Double GetTimestamp(::PipelineCamera::ICameraCommonContext* a1)
	{
		return ((::System::Double(*)(::PVOID, ::PipelineCamera::ICameraCommonContext*))((::PBYTE)hIl2Cpp + CLASS_1_404704D8770BD5CE_GETTIMESTAMP_OFFSET))(this, a1);
	}

	::System::Single GetDeltaTime(::PipelineCamera::ICameraCommonContext* a1)
	{
		return ((::System::Single(*)(::PVOID, ::PipelineCamera::ICameraCommonContext*))((::PBYTE)hIl2Cpp + CLASS_1_404704D8770BD5CE_GETDELTATIME_OFFSET))(this, a1);
	}

	::System::Boolean IsThreadSafeInWorkThread(::PipelineCamera::ICameraCommonContext* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::PipelineCamera::ICameraCommonContext*))((::PBYTE)hIl2Cpp + CLASS_1_404704D8770BD5CE_ISTHREADSAFEINWORKTHREAD_OFFSET))(this, a1);
	}
};
