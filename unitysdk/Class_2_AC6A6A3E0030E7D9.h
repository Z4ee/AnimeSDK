#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/RPG/CustomRP/FrameCapture_CaptureFeature.h"
#include "unitysdk/RPG/CustomRP/FrameCapture_CaptureType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MonoEffectScreenCrackPlugin; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_AC6A6A3E0030E7D9_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC1FD640)
#define CLASS_2_AC6A6A3E0030E7D9_METHOD_2_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0xC1FDC80)
#define CLASS_2_AC6A6A3E0030E7D9_METHOD_2_3BC4F26FA1AA9C5D_OFFSET UNITYSDK_OFFSET(0xC1FE220)
#define CLASS_2_AC6A6A3E0030E7D9_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xC1FD6B0)
#define CLASS_2_AC6A6A3E0030E7D9_METHOD_2_4805283D59625FD9_OFFSET UNITYSDK_OFFSET(0xC1FD7D0)
#define CLASS_2_AC6A6A3E0030E7D9_METHOD_2_95FC878EB184D294_OFFSET UNITYSDK_OFFSET(0xC1FE030)
#define CLASS_2_AC6A6A3E0030E7D9_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0xC1FD5D0)
#define CLASS_2_AC6A6A3E0030E7D9_METHOD_2_D339EFAB24ED44B0_OFFSET UNITYSDK_OFFSET(0xC1FDDF0)
#define CLASS_2_AC6A6A3E0030E7D9_METHOD_2_D7852DE078ACC1F1_OFFSET UNITYSDK_OFFSET(0xC1FDA20)
#define CLASS_2_AC6A6A3E0030E7D9_METHOD_2_DEDB6D705D6319DA_OFFSET UNITYSDK_OFFSET(0xC1FE630)
#define CLASS_2_AC6A6A3E0030E7D9_METHOD_2_E4FD627DC95E6090_OFFSET UNITYSDK_OFFSET(0xC1FDC30)
#define CLASS_2_AC6A6A3E0030E7D9_METHOD_2_EF3BC6BC95F13788_OFFSET UNITYSDK_OFFSET(0xC1FE090)
#define CLASS_2_AC6A6A3E0030E7D9_METHOD_2_FDA446125651C201_OFFSET UNITYSDK_OFFSET(0xC1FE360)
#define CLASS_2_AC6A6A3E0030E7D9__CTOR_OFFSET UNITYSDK_OFFSET(0xC1FE610)
#define CLASS_2_AC6A6A3E0030E7D9___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC1FE690)
#define CLASS_2_AC6A6A3E0030E7D9___STARTFRAMECAPTURE_B__5_0_OFFSET UNITYSDK_OFFSET(0xC1FE620)

inline static constexpr unsigned int Class_2_AC6A6A3E0030E7D9_TypeDefinitionIndex = 65361;

class Class_2_AC6A6A3E0030E7D9 : public ::RPG::Client::BehaviorBase
{
public:
	::System::Single Field_2_0; // 0x18
	::System::Boolean Field_2_1; // 0x1C
	::UnityEngine::Vector3 Field_2_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC6A6A3E0030E7D9__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_AC6A6A3E0030E7D9_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC6A6A3E0030E7D9_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC6A6A3E0030E7D9_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC6A6A3E0030E7D9_METHOD_2_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Void Method_2_4805283D59625FD9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC6A6A3E0030E7D9_METHOD_2_4805283D59625FD9_OFFSET))(this);
	}

	::System::Void Method_2_D7852DE078ACC1F1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC6A6A3E0030E7D9_METHOD_2_D7852DE078ACC1F1_OFFSET))(this);
	}

	::System::Boolean Method_2_EF3BC6BC95F13788(::RPG::CustomRP::FrameCapture_CaptureType a1, ::RPG::CustomRP::FrameCapture_CaptureFeature a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::CustomRP::FrameCapture_CaptureType, ::RPG::CustomRP::FrameCapture_CaptureFeature))((::PBYTE)hIl2Cpp + CLASS_2_AC6A6A3E0030E7D9_METHOD_2_EF3BC6BC95F13788_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_95FC878EB184D294()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC6A6A3E0030E7D9_METHOD_2_95FC878EB184D294_OFFSET))(this);
	}

	::System::Void Method_2_3BC4F26FA1AA9C5D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_AC6A6A3E0030E7D9_METHOD_2_3BC4F26FA1AA9C5D_OFFSET))(this, a1);
	}

	::System::Void Method_2_FDA446125651C201(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_AC6A6A3E0030E7D9_METHOD_2_FDA446125651C201_OFFSET))(this, a1);
	}

	::System::Void Method_2_D339EFAB24ED44B0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC6A6A3E0030E7D9_METHOD_2_D339EFAB24ED44B0_OFFSET))(this);
	}

	::RPG::Client::MonoEffectScreenCrackPlugin* Method_2_E4FD627DC95E6090()
	{
		return ((::RPG::Client::MonoEffectScreenCrackPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC6A6A3E0030E7D9_METHOD_2_E4FD627DC95E6090_OFFSET))(this);
	}

	::System::Void __StartFrameCapture_b__5_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC6A6A3E0030E7D9___STARTFRAMECAPTURE_B__5_0_OFFSET))(this);
	}

	::System::Void Method_2_DEDB6D705D6319DA(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_AC6A6A3E0030E7D9_METHOD_2_DEDB6D705D6319DA_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC6A6A3E0030E7D9___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
