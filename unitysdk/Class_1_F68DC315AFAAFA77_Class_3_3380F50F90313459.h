#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::GameCore { class AISelector; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F68DC315AFAAFA77_CLASS_3_3380F50F90313459_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x177C6200)
#define CLASS_1_F68DC315AFAAFA77_CLASS_3_3380F50F90313459_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x177C6250)
#define CLASS_1_F68DC315AFAAFA77_CLASS_3_3380F50F90313459_INVOKE_OFFSET UNITYSDK_OFFSET(0x177C2600)
#define CLASS_1_F68DC315AFAAFA77_CLASS_3_3380F50F90313459__CTOR_OFFSET UNITYSDK_OFFSET(0x177C6110)

inline static constexpr unsigned int Class_1_F68DC315AFAAFA77_Class_3_3380F50F90313459_TypeDefinitionIndex = 51869;

class Class_1_F68DC315AFAAFA77_Class_3_3380F50F90313459 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_F68DC315AFAAFA77_CLASS_3_3380F50F90313459__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::RPG::GameCore::AISelector* a1, ::RPG::GameCore::TaskContext* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a3, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AISelector*, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_F68DC315AFAAFA77_CLASS_3_3380F50F90313459_INVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::IAsyncResult* BeginInvoke(::RPG::GameCore::AISelector* a1, ::RPG::GameCore::TaskContext* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a3, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a4, ::System::AsyncCallback* a5, ::System::Object* a6)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::AISelector*, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F68DC315AFAAFA77_CLASS_3_3380F50F90313459_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_F68DC315AFAAFA77_CLASS_3_3380F50F90313459_ENDINVOKE_OFFSET))(this, a1);
	}
};
