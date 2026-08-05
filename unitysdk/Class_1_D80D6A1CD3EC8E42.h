#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::NAPRenderPipeline0 { class RTHandle; }

#define CLASS_1_D80D6A1CD3EC8E42_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1457D9D0)
#define CLASS_1_D80D6A1CD3EC8E42_METHOD_1_66C6955E7A705E95_OFFSET UNITYSDK_OFFSET(0x1457D6D0)
#define CLASS_1_D80D6A1CD3EC8E42_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1457D950)
#define CLASS_1_D80D6A1CD3EC8E42_METHOD_1_EB44EFCB44CBA9C1_OFFSET UNITYSDK_OFFSET(0x1457DA30)
#define CLASS_1_D80D6A1CD3EC8E42__CTOR_OFFSET UNITYSDK_OFFSET(0x1457D6C0)

inline static constexpr unsigned int Class_1_D80D6A1CD3EC8E42_TypeDefinitionIndex = 47455;

class Class_1_D80D6A1CD3EC8E42 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_6()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D80D6A1CD3EC8E42_TypeDefinitionIndex)->GetStaticField(0x10490);
	}
	// static const ::System::Single Field_1_0; // 0x0
	::UnityEngine::NAPRenderPipeline0::RTHandle* Field_1_7; // 0x10
	::System::UInt32 Field_1_1; // 0x18

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D80D6A1CD3EC8E42__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_66C6955E7A705E95(::System::Single a1, ::System::Single a2, ::System::String* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D80D6A1CD3EC8E42_METHOD_1_66C6955E7A705E95_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D80D6A1CD3EC8E42_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::UnityEngine::RenderTexture* Method_1_EB44EFCB44CBA9C1()
	{
		return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D80D6A1CD3EC8E42_METHOD_1_EB44EFCB44CBA9C1_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D80D6A1CD3EC8E42_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}
};
