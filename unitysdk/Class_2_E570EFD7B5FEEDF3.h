#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetMapAllTeamMember; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_E570EFD7B5FEEDF3_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xB60A0B0)
#define CLASS_2_E570EFD7B5FEEDF3__CTOR_OFFSET UNITYSDK_OFFSET(0xB60A090)

inline static constexpr unsigned int Class_2_E570EFD7B5FEEDF3_TypeDefinitionIndex = 59385;

class Class_2_E570EFD7B5FEEDF3 : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetMapAllTeamMember*>
{
public:
	static ::System::Boolean* StaticGet_NKNKCFCLHGE()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E570EFD7B5FEEDF3_TypeDefinitionIndex)->GetStaticField(0xFFB0);
	}

	::System::Void _ctor(::RPG::GameCore::TargetMapAllTeamMember* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetMapAllTeamMember*))((::PBYTE)hIl2Cpp + CLASS_2_E570EFD7B5FEEDF3__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_E570EFD7B5FEEDF3_TRANSFORM_OFFSET))(this, a1, a2);
	}
};
