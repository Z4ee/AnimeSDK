#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetMapAllTeamMemberFromFirstEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_3373733FD373A134_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x110F9520)
#define CLASS_2_3373733FD373A134__CTOR_OFFSET UNITYSDK_OFFSET(0x110F9500)

inline static constexpr unsigned int Class_2_3373733FD373A134_TypeDefinitionIndex = 47897;

class Class_2_3373733FD373A134 : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetMapAllTeamMemberFromFirstEntity*>
{
public:
	static ::System::Boolean* StaticGet_Field_2_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_3373733FD373A134_TypeDefinitionIndex)->GetStaticField(0x12050);
	}

	::System::Void _ctor(::RPG::GameCore::TargetMapAllTeamMemberFromFirstEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetMapAllTeamMemberFromFirstEntity*))((::PBYTE)hIl2Cpp + CLASS_2_3373733FD373A134__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_3373733FD373A134_TRANSFORM_OFFSET))(this, a1, a2);
	}
};
