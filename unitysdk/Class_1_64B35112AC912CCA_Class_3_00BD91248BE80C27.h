#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_5F51D4049EA87B7B;
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_64B35112AC912CCA_CLASS_3_00BD91248BE80C27_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x151F1AC0)
#define CLASS_1_64B35112AC912CCA_CLASS_3_00BD91248BE80C27_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x151F1B00)
#define CLASS_1_64B35112AC912CCA_CLASS_3_00BD91248BE80C27_INVOKE_OFFSET UNITYSDK_OFFSET(0x151F1AB0)
#define CLASS_1_64B35112AC912CCA_CLASS_3_00BD91248BE80C27__CTOR_OFFSET UNITYSDK_OFFSET(0x151F19C0)

inline static constexpr unsigned int Class_1_64B35112AC912CCA_Class_3_00BD91248BE80C27_TypeDefinitionIndex = 56009;

class Class_1_64B35112AC912CCA_Class_3_00BD91248BE80C27 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_64B35112AC912CCA_CLASS_3_00BD91248BE80C27__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_5F51D4049EA87B7B* Invoke(::RPG::GameCore::TaskConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::Class_1_5F51D4049EA87B7B*(*)(::PVOID, ::RPG::GameCore::TaskConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_64B35112AC912CCA_CLASS_3_00BD91248BE80C27_INVOKE_OFFSET))(this, a1, a2);
	}

	::System::IAsyncResult* BeginInvoke(::RPG::GameCore::TaskConfig* a1, ::RPG::GameCore::TaskContext* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::TaskConfig*, ::RPG::GameCore::TaskContext*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_64B35112AC912CCA_CLASS_3_00BD91248BE80C27_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_1_5F51D4049EA87B7B* EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::Class_1_5F51D4049EA87B7B*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_64B35112AC912CCA_CLASS_3_00BD91248BE80C27_ENDINVOKE_OFFSET))(this, a1);
	}
};
