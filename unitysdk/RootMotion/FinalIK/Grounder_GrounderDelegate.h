#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ROOTMOTION_FINALIK_GROUNDER_GROUNDERDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1DEAB620)
#define ROOTMOTION_FINALIK_GROUNDER_GROUNDERDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1DEAB650)
#define ROOTMOTION_FINALIK_GROUNDER_GROUNDERDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DEAB380)
#define ROOTMOTION_FINALIK_GROUNDER_GROUNDERDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEAB360)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int Grounder_GrounderDelegate_TypeDefinitionIndex = 38356;

	class Grounder_GrounderDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDER_GROUNDERDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDER_GROUNDERDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDER_GROUNDERDELEGATE_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDER_GROUNDERDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
