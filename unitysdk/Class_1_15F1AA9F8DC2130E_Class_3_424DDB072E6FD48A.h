#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class ValuePostProcessConfig; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_15F1AA9F8DC2130E_CLASS_3_424DDB072E6FD48A_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1641E9E0)
#define CLASS_1_15F1AA9F8DC2130E_CLASS_3_424DDB072E6FD48A_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1641EA60)
#define CLASS_1_15F1AA9F8DC2130E_CLASS_3_424DDB072E6FD48A_INVOKE_OFFSET UNITYSDK_OFFSET(0x1641CFE0)
#define CLASS_1_15F1AA9F8DC2130E_CLASS_3_424DDB072E6FD48A__CTOR_OFFSET UNITYSDK_OFFSET(0x1641E970)

inline static constexpr unsigned int Class_1_15F1AA9F8DC2130E_Class_3_424DDB072E6FD48A_TypeDefinitionIndex = 59408;

class Class_1_15F1AA9F8DC2130E_Class_3_424DDB072E6FD48A : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_15F1AA9F8DC2130E_CLASS_3_424DDB072E6FD48A__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Invoke(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::ValuePostProcessConfig* a2, ::RPG::GameCore::TaskContext* a3)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::ValuePostProcessConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_15F1AA9F8DC2130E_CLASS_3_424DDB072E6FD48A_INVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::IAsyncResult* BeginInvoke(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::ValuePostProcessConfig* a2, ::RPG::GameCore::TaskContext* a3, ::System::AsyncCallback* a4, ::System::Object* a5)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::ValuePostProcessConfig*, ::RPG::GameCore::TaskContext*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_15F1AA9F8DC2130E_CLASS_3_424DDB072E6FD48A_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::RPG::GameCore::FixPoint EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_15F1AA9F8DC2130E_CLASS_3_424DDB072E6FD48A_ENDINVOKE_OFFSET))(this, a1);
	}
};
