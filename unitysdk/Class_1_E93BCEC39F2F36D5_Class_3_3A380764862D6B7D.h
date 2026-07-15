#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class PointGeneratorConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E93BCEC39F2F36D5_CLASS_3_3A380764862D6B7D_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x16AB3EA0)
#define CLASS_1_E93BCEC39F2F36D5_CLASS_3_3A380764862D6B7D_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x16AB3EE0)
#define CLASS_1_E93BCEC39F2F36D5_CLASS_3_3A380764862D6B7D_INVOKE_OFFSET UNITYSDK_OFFSET(0x16AB3E80)
#define CLASS_1_E93BCEC39F2F36D5_CLASS_3_3A380764862D6B7D__CTOR_OFFSET UNITYSDK_OFFSET(0x16AB3D90)

inline static constexpr unsigned int Class_1_E93BCEC39F2F36D5_Class_3_3A380764862D6B7D_TypeDefinitionIndex = 57433;

class Class_1_E93BCEC39F2F36D5_Class_3_3A380764862D6B7D : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_E93BCEC39F2F36D5_CLASS_3_3A380764862D6B7D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PointGeneratorConfig* a2, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PointGeneratorConfig*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CLASS_1_E93BCEC39F2F36D5_CLASS_3_3A380764862D6B7D_INVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::IAsyncResult* BeginInvoke(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PointGeneratorConfig* a2, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a3, ::System::AsyncCallback* a4, ::System::Object* a5)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PointGeneratorConfig*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E93BCEC39F2F36D5_CLASS_3_3A380764862D6B7D_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_E93BCEC39F2F36D5_CLASS_3_3A380764862D6B7D_ENDINVOKE_OFFSET))(this, a1);
	}
};
