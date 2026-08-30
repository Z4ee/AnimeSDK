#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class ValueEvaluatorConfig; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_A03382E2D02FBA6C_CLASS_3_62AC09F6E0FF2A60_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xB5E1390)
#define CLASS_1_A03382E2D02FBA6C_CLASS_3_62AC09F6E0FF2A60_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xB5E13D0)
#define CLASS_1_A03382E2D02FBA6C_CLASS_3_62AC09F6E0FF2A60_INVOKE_OFFSET UNITYSDK_OFFSET(0xB5DCEA0)
#define CLASS_1_A03382E2D02FBA6C_CLASS_3_62AC09F6E0FF2A60__CTOR_OFFSET UNITYSDK_OFFSET(0xB5E12A0)

inline static constexpr unsigned int Class_1_A03382E2D02FBA6C_Class_3_62AC09F6E0FF2A60_TypeDefinitionIndex = 54395;

class Class_1_A03382E2D02FBA6C_Class_3_62AC09F6E0FF2A60 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_A03382E2D02FBA6C_CLASS_3_62AC09F6E0FF2A60__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Invoke(::RPG::GameCore::ValueEvaluatorConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::ValueEvaluatorConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_A03382E2D02FBA6C_CLASS_3_62AC09F6E0FF2A60_INVOKE_OFFSET))(this, a1, a2);
	}

	::System::IAsyncResult* BeginInvoke(::RPG::GameCore::ValueEvaluatorConfig* a1, ::RPG::GameCore::TaskContext* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::ValueEvaluatorConfig*, ::RPG::GameCore::TaskContext*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A03382E2D02FBA6C_CLASS_3_62AC09F6E0FF2A60_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::GameCore::FixPoint EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_A03382E2D02FBA6C_CLASS_3_62AC09F6E0FF2A60_ENDINVOKE_OFFSET))(this, a1);
	}
};
