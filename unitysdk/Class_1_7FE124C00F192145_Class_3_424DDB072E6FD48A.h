#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class ValuePostProcessConfig; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_7FE124C00F192145_CLASS_3_424DDB072E6FD48A_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xD3503C0)
#define CLASS_1_7FE124C00F192145_CLASS_3_424DDB072E6FD48A_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xD350440)
#define CLASS_1_7FE124C00F192145_CLASS_3_424DDB072E6FD48A_INVOKE_OFFSET UNITYSDK_OFFSET(0xD34E8B0)
#define CLASS_1_7FE124C00F192145_CLASS_3_424DDB072E6FD48A__CTOR_OFFSET UNITYSDK_OFFSET(0xD3503A0)

inline static constexpr unsigned int Class_1_7FE124C00F192145_Class_3_424DDB072E6FD48A_TypeDefinitionIndex = 54660;

class Class_1_7FE124C00F192145_Class_3_424DDB072E6FD48A : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_7FE124C00F192145_CLASS_3_424DDB072E6FD48A__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Invoke(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::ValuePostProcessConfig* a2, ::RPG::GameCore::TaskContext* a3)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::ValuePostProcessConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_7FE124C00F192145_CLASS_3_424DDB072E6FD48A_INVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::IAsyncResult* BeginInvoke(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::ValuePostProcessConfig* a2, ::RPG::GameCore::TaskContext* a3, ::System::AsyncCallback* a4, ::System::Object* a5)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::ValuePostProcessConfig*, ::RPG::GameCore::TaskContext*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7FE124C00F192145_CLASS_3_424DDB072E6FD48A_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::RPG::GameCore::FixPoint EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_7FE124C00F192145_CLASS_3_424DDB072E6FD48A_ENDINVOKE_OFFSET))(this, a1);
	}
};
