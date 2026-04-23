#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/RPG/CustomRP/FrameCapture_CaptureFeature.h"
#include "unitysdk/RPG/CustomRP/FrameCapture_CaptureType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MonoEffectFrameCaptureTexPlugin; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_1AEFE812A37690A3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x128B1BE0)
#define CLASS_2_1AEFE812A37690A3_METHOD_2_19EEA5F0263FDCD2_OFFSET UNITYSDK_OFFSET(0x128B21F0)
#define CLASS_2_1AEFE812A37690A3_METHOD_2_5280473FFECB5D09_OFFSET UNITYSDK_OFFSET(0x128B26C0)
#define CLASS_2_1AEFE812A37690A3_METHOD_2_653151ACD8E3C108_OFFSET UNITYSDK_OFFSET(0x128B1E80)
#define CLASS_2_1AEFE812A37690A3_METHOD_2_90D019D81149A8BA_OFFSET UNITYSDK_OFFSET(0x128B29A0)
#define CLASS_2_1AEFE812A37690A3_METHOD_2_95FC878EB184D294_OFFSET UNITYSDK_OFFSET(0x128B2480)
#define CLASS_2_1AEFE812A37690A3_METHOD_2_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x128B2050)
#define CLASS_2_1AEFE812A37690A3_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0x128B1B70)
#define CLASS_2_1AEFE812A37690A3_METHOD_2_B79E3035284FD57D_OFFSET UNITYSDK_OFFSET(0x128B1E10)
#define CLASS_2_1AEFE812A37690A3_METHOD_2_CA2F5C1143EFAC28_OFFSET UNITYSDK_OFFSET(0x128B24E0)
#define CLASS_2_1AEFE812A37690A3_METHOD_2_D7852DE078ACC1F1_OFFSET UNITYSDK_OFFSET(0x128B1C50)
#define CLASS_2_1AEFE812A37690A3__CTOR_OFFSET UNITYSDK_OFFSET(0x128B2990)
#define CLASS_2_1AEFE812A37690A3___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x128B2A10)

inline static constexpr unsigned int Class_2_1AEFE812A37690A3_TypeDefinitionIndex = 64390;

class Class_2_1AEFE812A37690A3 : public ::RPG::Client::BehaviorBase
{
public:
	::System::Single Field_2_1; // 0x18
	::UnityEngine::Vector3 Field_2_0; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1AEFE812A37690A3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_1AEFE812A37690A3_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1AEFE812A37690A3_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_D7852DE078ACC1F1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1AEFE812A37690A3_METHOD_2_D7852DE078ACC1F1_OFFSET))(this);
	}

	::System::Void Method_2_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1AEFE812A37690A3_METHOD_2_97D83E4CB3B11935_OFFSET))(this);
	}

	::System::Void Method_2_653151ACD8E3C108()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1AEFE812A37690A3_METHOD_2_653151ACD8E3C108_OFFSET))(this);
	}

	::System::Boolean Method_2_CA2F5C1143EFAC28(::RPG::CustomRP::FrameCapture_CaptureType a1, ::RPG::CustomRP::FrameCapture_CaptureFeature a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::CustomRP::FrameCapture_CaptureType, ::RPG::CustomRP::FrameCapture_CaptureFeature))((::PBYTE)hIl2Cpp + CLASS_2_1AEFE812A37690A3_METHOD_2_CA2F5C1143EFAC28_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_95FC878EB184D294()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1AEFE812A37690A3_METHOD_2_95FC878EB184D294_OFFSET))(this);
	}

	::System::Void Method_2_5280473FFECB5D09(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1AEFE812A37690A3_METHOD_2_5280473FFECB5D09_OFFSET))(this, a1);
	}

	::System::Void Method_2_19EEA5F0263FDCD2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1AEFE812A37690A3_METHOD_2_19EEA5F0263FDCD2_OFFSET))(this);
	}

	::RPG::Client::MonoEffectFrameCaptureTexPlugin* Method_2_B79E3035284FD57D()
	{
		return ((::RPG::Client::MonoEffectFrameCaptureTexPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1AEFE812A37690A3_METHOD_2_B79E3035284FD57D_OFFSET))(this);
	}

	::System::Void Method_2_90D019D81149A8BA(::UnityEngine::MonoBehaviour* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_1AEFE812A37690A3_METHOD_2_90D019D81149A8BA_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1AEFE812A37690A3___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
