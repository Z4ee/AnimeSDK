#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_CLIENT_FULLBODY_IKSOLVER_CLASS_3_50D343C44D28BEFB_11_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x16D49F40)
#define RPG_CLIENT_FULLBODY_IKSOLVER_CLASS_3_50D343C44D28BEFB_11_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x16D49F70)
#define RPG_CLIENT_FULLBODY_IKSOLVER_CLASS_3_50D343C44D28BEFB_11_INVOKE_OFFSET UNITYSDK_OFFSET(0x16D486E0)
#define RPG_CLIENT_FULLBODY_IKSOLVER_CLASS_3_50D343C44D28BEFB_11__CTOR_OFFSET UNITYSDK_OFFSET(0x16D49ED0)

namespace RPG::Client::FullBody
{
	inline static constexpr unsigned int IKSolver_Class_3_50D343C44D28BEFB_11_TypeDefinitionIndex = 70860;

	class IKSolver_Class_3_50D343C44D28BEFB_11 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVER_CLASS_3_50D343C44D28BEFB_11__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVER_CLASS_3_50D343C44D28BEFB_11_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVER_CLASS_3_50D343C44D28BEFB_11_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVER_CLASS_3_50D343C44D28BEFB_11_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
