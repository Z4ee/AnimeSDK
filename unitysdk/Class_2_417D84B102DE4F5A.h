#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/System/Nullable_1.h"

namespace RPG::Client { class Effect_Transform; }
namespace RPG::GameCore { class TimelineOverrideEffectTransformOffsetParams; }
namespace RPG::GameCore { class TimelineOverrideEffectTransformRotateParams; }

#define CLASS_2_417D84B102DE4F5A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x186BEFD0)
#define CLASS_2_417D84B102DE4F5A_METHOD_2_1ABF1CBED7A4AF0A_OFFSET UNITYSDK_OFFSET(0x186BF300)
#define CLASS_2_417D84B102DE4F5A_METHOD_2_6416B1BD1387DA74_OFFSET UNITYSDK_OFFSET(0x186BF190)
#define CLASS_2_417D84B102DE4F5A_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x186BF520)
#define CLASS_2_417D84B102DE4F5A_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x186BF480)
#define CLASS_2_417D84B102DE4F5A_METHOD_2_D799715F2EF979EA_OFFSET UNITYSDK_OFFSET(0x186BF030)
#define CLASS_2_417D84B102DE4F5A__CTOR_OFFSET UNITYSDK_OFFSET(0x186BF610)

inline static constexpr unsigned int Class_2_417D84B102DE4F5A_TypeDefinitionIndex = 54795;

class Class_2_417D84B102DE4F5A : public ::RPG::GameCore::GameComponentBase
{
public:
	::RPG::GameCore::TimelineOverrideEffectTransformRotateParams* Field_2_0; // 0x18
	::RPG::GameCore::TimelineOverrideEffectTransformRotateParams* Field_2_1; // 0x20
	::RPG::Client::Effect_Transform* Field_2_2; // 0x28
	::RPG::GameCore::TimelineOverrideEffectTransformOffsetParams* Field_2_3; // 0x30
	::RPG::GameCore::TimelineOverrideEffectTransformOffsetParams* Field_2_4; // 0x38
	::System::Boolean Field_2_5; // 0x40
	::System::Nullable_1<::System::Boolean> Field_2_6; // 0x41
	::System::Boolean Field_2_7; // 0x43

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_417D84B102DE4F5A__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_417D84B102DE4F5A_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_6416B1BD1387DA74(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3, ::RPG::GameCore::TimelineOverrideEffectTransformOffsetParams* a4, ::System::Boolean a5, ::RPG::GameCore::TimelineOverrideEffectTransformRotateParams* a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::RPG::GameCore::TimelineOverrideEffectTransformOffsetParams*, ::System::Boolean, ::RPG::GameCore::TimelineOverrideEffectTransformRotateParams*))((::PBYTE)hIl2Cpp + CLASS_2_417D84B102DE4F5A_METHOD_2_6416B1BD1387DA74_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_417D84B102DE4F5A_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_2_D799715F2EF979EA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_417D84B102DE4F5A_METHOD_2_D799715F2EF979EA_OFFSET))(this);
	}

	::System::Void Method_2_1ABF1CBED7A4AF0A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_417D84B102DE4F5A_METHOD_2_1ABF1CBED7A4AF0A_OFFSET))(this);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_417D84B102DE4F5A_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}
};
