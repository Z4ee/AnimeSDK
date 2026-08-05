#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Timeline::TimelineComponent { class ConstraintSourcePathInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Animations { class IConstraint; }

#define CLASS_1_6E4E1E895CAF0D37_METHOD_1_53D5418034DC07FF_OFFSET UNITYSDK_OFFSET(0x14D620A0)
#define CLASS_1_6E4E1E895CAF0D37_METHOD_1_66A2F6510E7795E3_OFFSET UNITYSDK_OFFSET(0x14D62720)
#define CLASS_1_6E4E1E895CAF0D37_METHOD_1_9D12268B45B3E1F6_OFFSET UNITYSDK_OFFSET(0x14D62CD0)

inline static constexpr unsigned int Class_1_6E4E1E895CAF0D37_TypeDefinitionIndex = 44566;

class Class_1_6E4E1E895CAF0D37 : public ::System::Object
{
public:
	static ::System::Void Method_1_53D5418034DC07FF(::UnityEngine::Animations::IConstraint* a1, ::UnityEngine::GameObject* a2, ::System::Collections::Generic::List_1<::MoleMole::Timeline::TimelineComponent::ConstraintSourcePathInfo*>* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::UnityEngine::Animations::IConstraint*, ::UnityEngine::GameObject*, ::System::Collections::Generic::List_1<::MoleMole::Timeline::TimelineComponent::ConstraintSourcePathInfo*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6E4E1E895CAF0D37_METHOD_1_53D5418034DC07FF_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_66A2F6510E7795E3(::UnityEngine::Animations::IConstraint* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Animations::IConstraint*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_6E4E1E895CAF0D37_METHOD_1_66A2F6510E7795E3_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::List_1<::MoleMole::Timeline::TimelineComponent::ConstraintSourcePathInfo*>* Method_1_9D12268B45B3E1F6(::UnityEngine::Animations::IConstraint* a1)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Timeline::TimelineComponent::ConstraintSourcePathInfo*>*(*)(::UnityEngine::Animations::IConstraint*))((::PBYTE)hIl2Cpp + CLASS_1_6E4E1E895CAF0D37_METHOD_1_9D12268B45B3E1F6_OFFSET))(a1);
	}
};
