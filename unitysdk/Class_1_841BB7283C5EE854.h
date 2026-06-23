#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Object.h"

class Class_1_A191518F735366A8;
class Class_1_A45C7A2E673C349B;
class PhotoFrame;
namespace MoleMole { class PhotoFrameRender; }
namespace MoleMole { class UIBaseController; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class RenderTexture; }

#define CLASS_1_841BB7283C5EE854_METHOD_1_2FEFB53F19F4F095_OFFSET UNITYSDK_OFFSET(0x1860A2C0)
#define CLASS_1_841BB7283C5EE854_METHOD_1_3456633D994FB6C5_OFFSET UNITYSDK_OFFSET(0x1860A3A0)
#define CLASS_1_841BB7283C5EE854_METHOD_1_6FFF24304F3671AF_OFFSET UNITYSDK_OFFSET(0x1860A9B0)
#define CLASS_1_841BB7283C5EE854_METHOD_1_AA34FC3E3EF5BF9F_OFFSET UNITYSDK_OFFSET(0x1860A1D0)

inline static constexpr unsigned int Class_1_841BB7283C5EE854_TypeDefinitionIndex = 80298;

class Class_1_841BB7283C5EE854 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0

	static ::Cysharp::Threading::Tasks::UniTask_1<::Class_1_A191518F735366A8*> Method_1_AA34FC3E3EF5BF9F(::Class_1_A45C7A2E673C349B* a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::Class_1_A191518F735366A8*>(*)(::Class_1_A45C7A2E673C349B*))((::PBYTE)hIl2Cpp + CLASS_1_841BB7283C5EE854_METHOD_1_AA34FC3E3EF5BF9F_OFFSET))(a1);
	}

	static ::Cysharp::Threading::Tasks::UniTask_1<::MoleMole::PhotoFrameRender*> Method_1_2FEFB53F19F4F095(::PhotoFrame* a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::MoleMole::PhotoFrameRender*>(*)(::PhotoFrame*))((::PBYTE)hIl2Cpp + CLASS_1_841BB7283C5EE854_METHOD_1_2FEFB53F19F4F095_OFFSET))(a1);
	}

	static ::System::Void Method_1_3456633D994FB6C5(::Class_1_A45C7A2E673C349B*& a1)
	{
		return ((::System::Void(*)(::Class_1_A45C7A2E673C349B*&))((::PBYTE)hIl2Cpp + CLASS_1_841BB7283C5EE854_METHOD_1_3456633D994FB6C5_OFFSET))(a1);
	}

	static ::Cysharp::Threading::Tasks::UniTask Method_1_6FFF24304F3671AF(::PhotoFrame* a1, ::System::Func_2<::UnityEngine::RenderTexture*, ::Cysharp::Threading::Tasks::UniTask>* a2, ::MoleMole::UIBaseController* a3)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PhotoFrame*, ::System::Func_2<::UnityEngine::RenderTexture*, ::Cysharp::Threading::Tasks::UniTask>*, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + CLASS_1_841BB7283C5EE854_METHOD_1_6FFF24304F3671AF_OFFSET))(a1, a2, a3);
	}
};
