#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_813FDB0DF0F3263D_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x962EF10)
#define CLASS_2_813FDB0DF0F3263D_METHOD_2_43841C47716286CE_OFFSET UNITYSDK_OFFSET(0x962EFB0)
#define CLASS_2_813FDB0DF0F3263D_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x962F0F0)
#define CLASS_2_813FDB0DF0F3263D__CTOR_OFFSET UNITYSDK_OFFSET(0x962F060)
#define CLASS_2_813FDB0DF0F3263D__ONBIND_OFFSET UNITYSDK_OFFSET(0x962EE10)
#define CLASS_2_813FDB0DF0F3263D___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x962F090)

inline static constexpr unsigned int Class_2_813FDB0DF0F3263D_TypeDefinitionIndex = 65813;

class Class_2_813FDB0DF0F3263D : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_4; // 0x0
	// static const ::System::String* Field_2_5; // 0x0
	::UnityEngine::UI::Image* Field_2_0; // 0x60
	::UnityEngine::Transform* Field_2_1; // 0x68
	::UnityEngine::Animation* Field_2_2; // 0x70
	::System::Boolean Field_2_3; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_813FDB0DF0F3263D__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_813FDB0DF0F3263D__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_813FDB0DF0F3263D_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_43841C47716286CE(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_813FDB0DF0F3263D_METHOD_2_43841C47716286CE_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_813FDB0DF0F3263D___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_813FDB0DF0F3263D_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
