#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::GameCore { class BaseSortConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_93C352ED7897F063_CLASS_3_677DF669C3E0B70F_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xAFDBC10)
#define CLASS_1_93C352ED7897F063_CLASS_3_677DF669C3E0B70F_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xAFDBC80)
#define CLASS_1_93C352ED7897F063_CLASS_3_677DF669C3E0B70F_INVOKE_OFFSET UNITYSDK_OFFSET(0xAFD9A40)
#define CLASS_1_93C352ED7897F063_CLASS_3_677DF669C3E0B70F__CTOR_OFFSET UNITYSDK_OFFSET(0xAFDBB20)

inline static constexpr unsigned int Class_1_93C352ED7897F063_Class_3_677DF669C3E0B70F_TypeDefinitionIndex = 51956;

class Class_1_93C352ED7897F063_Class_3_677DF669C3E0B70F : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_93C352ED7897F063_CLASS_3_677DF669C3E0B70F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::RPG::GameCore::BaseSortConfig* a1, ::RPG::GameCore::TaskContext* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseSortConfig*, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_93C352ED7897F063_CLASS_3_677DF669C3E0B70F_INVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::IAsyncResult* BeginInvoke(::RPG::GameCore::BaseSortConfig* a1, ::RPG::GameCore::TaskContext* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a3, ::System::Boolean a4, ::System::AsyncCallback* a5, ::System::Object* a6)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::BaseSortConfig*, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_93C352ED7897F063_CLASS_3_677DF669C3E0B70F_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_93C352ED7897F063_CLASS_3_677DF669C3E0B70F_ENDINVOKE_OFFSET))(this, a1);
	}
};
