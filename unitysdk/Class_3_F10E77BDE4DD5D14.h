#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class AdvGroupFetchTargetByString; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_F10E77BDE4DD5D14_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBF9A610)
#define CLASS_3_F10E77BDE4DD5D14_METHOD_3_D66A39B3BD20C3EB_OFFSET UNITYSDK_OFFSET(0xBF9A890)
#define CLASS_3_F10E77BDE4DD5D14__CTOR_OFFSET UNITYSDK_OFFSET(0xBF9A5A0)

inline static constexpr unsigned int Class_3_F10E77BDE4DD5D14_TypeDefinitionIndex = 56468;

class Class_3_F10E77BDE4DD5D14 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::AdvGroupFetchTargetByString*>
{
public:
	::System::Void _ctor(::RPG::GameCore::AdvGroupFetchTargetByString* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvGroupFetchTargetByString*))((::PBYTE)hIl2Cpp + CLASS_3_F10E77BDE4DD5D14__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_F10E77BDE4DD5D14_EVALUATE_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_3_D66A39B3BD20C3EB(::RPG::GameCore::TaskContext* a1, ::System::String* a2, ::System::UInt32& a3, ::System::UInt32& a4)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::TaskContext*, ::System::String*, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_3_F10E77BDE4DD5D14_METHOD_3_D66A39B3BD20C3EB_OFFSET))(a1, a2, a3, a4);
	}
};
