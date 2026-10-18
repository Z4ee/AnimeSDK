#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/System/Nullable_1.h"

namespace RPG::Client { class Effect_Transform; }
namespace RPG::GameCore { class TimelineOverrideEffectTransformOffsetParams; }
namespace RPG::GameCore { class TimelineOverrideEffectTransformRotateParams; }

#define CLASS_2_417D84B102DE4F5A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15EFCAC0)
#define CLASS_2_417D84B102DE4F5A_METHOD_2_03A81715BD2AFEF3_OFFSET UNITYSDK_OFFSET(0x15EFCB20)
#define CLASS_2_417D84B102DE4F5A_METHOD_2_1ABF1CBED7A4AF0A_OFFSET UNITYSDK_OFFSET(0x15EFCD90)
#define CLASS_2_417D84B102DE4F5A_METHOD_2_6416B1BD1387DA74_OFFSET UNITYSDK_OFFSET(0x15EFCC20)
#define CLASS_2_417D84B102DE4F5A_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x15EFCFA0)
#define CLASS_2_417D84B102DE4F5A_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x15EFCF00)
#define CLASS_2_417D84B102DE4F5A__CTOR_OFFSET UNITYSDK_OFFSET(0x15EFD090)

inline static constexpr unsigned int Class_2_417D84B102DE4F5A_TypeDefinitionIndex = 57360;

class Class_2_417D84B102DE4F5A : public ::RPG::GameCore::GameComponentBase
{
public:
	::RPG::GameCore::TimelineOverrideEffectTransformOffsetParams* EPNANOBCAHL; // 0x18
	::RPG::Client::Effect_Transform* OIMCMKFHMDK; // 0x20
	::RPG::GameCore::TimelineOverrideEffectTransformRotateParams* BDCOKLBALBP; // 0x28
	::RPG::GameCore::TimelineOverrideEffectTransformRotateParams* GPHAAJKBEFA; // 0x30
	::RPG::GameCore::TimelineOverrideEffectTransformOffsetParams* NDJHBLBHAPM; // 0x38
	::System::Nullable_1<::System::Boolean> CMADHKDPFMM; // 0x40
	::System::Boolean JHEHFCGCDDG; // 0x42
	::System::Boolean FGCNCDGJOAL; // 0x43

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

	::System::Void Method_2_03A81715BD2AFEF3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_417D84B102DE4F5A_METHOD_2_03A81715BD2AFEF3_OFFSET))(this);
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
