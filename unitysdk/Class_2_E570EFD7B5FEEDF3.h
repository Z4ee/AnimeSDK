#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetMapAllTeamMember; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_E570EFD7B5FEEDF3_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x14586ED0)
#define CLASS_2_E570EFD7B5FEEDF3__CTOR_OFFSET UNITYSDK_OFFSET(0x14586EB0)

inline static constexpr unsigned int Class_2_E570EFD7B5FEEDF3_TypeDefinitionIndex = 55364;

class Class_2_E570EFD7B5FEEDF3 : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetMapAllTeamMember*>
{
public:
	static ::System::Boolean* StaticGet_Field_2_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E570EFD7B5FEEDF3_TypeDefinitionIndex)->GetStaticField(0xABE0);
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
