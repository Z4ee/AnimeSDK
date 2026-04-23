#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetMapAllTeamMember; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_570297641C314797_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x9536190)
#define CLASS_2_570297641C314797__CTOR_OFFSET UNITYSDK_OFFSET(0x9536170)

inline static constexpr unsigned int Class_2_570297641C314797_TypeDefinitionIndex = 54637;

class Class_2_570297641C314797 : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetMapAllTeamMember*>
{
public:
	static ::System::Boolean* StaticGet_Field_2_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_570297641C314797_TypeDefinitionIndex)->GetStaticField(0x8CC0);
	}

	::System::Void _ctor(::RPG::GameCore::TargetMapAllTeamMember* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetMapAllTeamMember*))((::PBYTE)hIl2Cpp + CLASS_2_570297641C314797__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_570297641C314797_TRANSFORM_OFFSET))(this, a1, a2);
	}
};
