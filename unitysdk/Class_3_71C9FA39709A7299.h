#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class AdvGroupFetchTargetByString; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_71C9FA39709A7299_EVALUATE_OFFSET UNITYSDK_OFFSET(0x11578DE0)
#define CLASS_3_71C9FA39709A7299_METHOD_3_A0AF8637EDFC8110_OFFSET UNITYSDK_OFFSET(0x11578FD0)
#define CLASS_3_71C9FA39709A7299__CTOR_OFFSET UNITYSDK_OFFSET(0x11578D60)

inline static constexpr unsigned int Class_3_71C9FA39709A7299_TypeDefinitionIndex = 47769;

class Class_3_71C9FA39709A7299 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::AdvGroupFetchTargetByString*>
{
public:
	::System::Void _ctor(::RPG::GameCore::AdvGroupFetchTargetByString* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvGroupFetchTargetByString*))((::PBYTE)hIl2Cpp + CLASS_3_71C9FA39709A7299__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_71C9FA39709A7299_EVALUATE_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_3_A0AF8637EDFC8110(::RPG::GameCore::TaskContext* a1, ::System::String* a2, ::System::UInt32& a3, ::System::UInt32& a4)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::TaskContext*, ::System::String*, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_3_71C9FA39709A7299_METHOD_3_A0AF8637EDFC8110_OFFSET))(a1, a2, a3, a4);
	}
};
