#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/RPG/CustomRP/FrameCapture_CaptureFeature.h"
#include "unitysdk/RPG/CustomRP/FrameCapture_CaptureType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MonoEffectScreenCrackPlugin; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_0F324A0DDA48BBC6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9348A70)
#define CLASS_2_0F324A0DDA48BBC6_METHOD_2_19EEA5F0263FDCD2_OFFSET UNITYSDK_OFFSET(0x9349210)
#define CLASS_2_0F324A0DDA48BBC6_METHOD_2_1AB815F99882A36B_OFFSET UNITYSDK_OFFSET(0x9349050)
#define CLASS_2_0F324A0DDA48BBC6_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x9348AE0)
#define CLASS_2_0F324A0DDA48BBC6_METHOD_2_6345BF557E4E4E6A_OFFSET UNITYSDK_OFFSET(0x9349610)
#define CLASS_2_0F324A0DDA48BBC6_METHOD_2_67D41ACFEF39E84E_OFFSET UNITYSDK_OFFSET(0x9348C00)
#define CLASS_2_0F324A0DDA48BBC6_METHOD_2_90D019D81149A8BA_OFFSET UNITYSDK_OFFSET(0x93499E0)
#define CLASS_2_0F324A0DDA48BBC6_METHOD_2_95FC878EB184D294_OFFSET UNITYSDK_OFFSET(0x9349440)
#define CLASS_2_0F324A0DDA48BBC6_METHOD_2_A452EAC691095B7E_OFFSET UNITYSDK_OFFSET(0x9349740)
#define CLASS_2_0F324A0DDA48BBC6_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0x9348A00)
#define CLASS_2_0F324A0DDA48BBC6_METHOD_2_B7F8E0B4AF22DEA3_1_OFFSET UNITYSDK_OFFSET(0x9348E60)
#define CLASS_2_0F324A0DDA48BBC6_METHOD_2_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0x93490A0)
#define CLASS_2_0F324A0DDA48BBC6_METHOD_2_D35E93954B1E9965_OFFSET UNITYSDK_OFFSET(0x93494A0)
#define CLASS_2_0F324A0DDA48BBC6__CTOR_OFFSET UNITYSDK_OFFSET(0x93499C0)
#define CLASS_2_0F324A0DDA48BBC6___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9349A50)
#define CLASS_2_0F324A0DDA48BBC6___STARTFRAMECAPTURE_B__5_0_OFFSET UNITYSDK_OFFSET(0x93499D0)

inline static constexpr unsigned int Class_2_0F324A0DDA48BBC6_TypeDefinitionIndex = 64440;

class Class_2_0F324A0DDA48BBC6 : public ::RPG::Client::BehaviorBase
{
public:
	::System::Single Field_2_1; // 0x18
	::UnityEngine::Vector3 Field_2_0; // 0x1C
	::System::Boolean Field_2_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F324A0DDA48BBC6__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_0F324A0DDA48BBC6_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F324A0DDA48BBC6_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F324A0DDA48BBC6_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_B7F8E0B4AF22DEA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F324A0DDA48BBC6_METHOD_2_B7F8E0B4AF22DEA3_OFFSET))(this);
	}

	::System::Void Method_2_67D41ACFEF39E84E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F324A0DDA48BBC6_METHOD_2_67D41ACFEF39E84E_OFFSET))(this);
	}

	::System::Void Method_2_B7F8E0B4AF22DEA3_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F324A0DDA48BBC6_METHOD_2_B7F8E0B4AF22DEA3_1_OFFSET))(this);
	}

	::System::Boolean Method_2_D35E93954B1E9965(::RPG::CustomRP::FrameCapture_CaptureType a1, ::RPG::CustomRP::FrameCapture_CaptureFeature a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::CustomRP::FrameCapture_CaptureType, ::RPG::CustomRP::FrameCapture_CaptureFeature))((::PBYTE)hIl2Cpp + CLASS_2_0F324A0DDA48BBC6_METHOD_2_D35E93954B1E9965_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_95FC878EB184D294()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F324A0DDA48BBC6_METHOD_2_95FC878EB184D294_OFFSET))(this);
	}

	::System::Void Method_2_6345BF557E4E4E6A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0F324A0DDA48BBC6_METHOD_2_6345BF557E4E4E6A_OFFSET))(this, a1);
	}

	::System::Void Method_2_A452EAC691095B7E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0F324A0DDA48BBC6_METHOD_2_A452EAC691095B7E_OFFSET))(this, a1);
	}

	::System::Void Method_2_19EEA5F0263FDCD2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F324A0DDA48BBC6_METHOD_2_19EEA5F0263FDCD2_OFFSET))(this);
	}

	::RPG::Client::MonoEffectScreenCrackPlugin* Method_2_1AB815F99882A36B()
	{
		return ((::RPG::Client::MonoEffectScreenCrackPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F324A0DDA48BBC6_METHOD_2_1AB815F99882A36B_OFFSET))(this);
	}

	::System::Void __StartFrameCapture_b__5_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F324A0DDA48BBC6___STARTFRAMECAPTURE_B__5_0_OFFSET))(this);
	}

	::System::Void Method_2_90D019D81149A8BA(::UnityEngine::MonoBehaviour* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_0F324A0DDA48BBC6_METHOD_2_90D019D81149A8BA_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F324A0DDA48BBC6___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
