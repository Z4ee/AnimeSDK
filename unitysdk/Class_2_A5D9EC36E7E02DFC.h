#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/FixVec3.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtTargetMapPosWithMaxTargetCount; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_A5D9EC36E7E02DFC_METHOD_2_E58943F7D6D74853_OFFSET UNITYSDK_OFFSET(0x11D5CCE0)
#define CLASS_2_A5D9EC36E7E02DFC_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x11D5CA30)
#define CLASS_2_A5D9EC36E7E02DFC__CTOR_OFFSET UNITYSDK_OFFSET(0x11D5CA10)

inline static constexpr unsigned int Class_2_A5D9EC36E7E02DFC_TypeDefinitionIndex = 49596;

class Class_2_A5D9EC36E7E02DFC : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::RtTargetMapPosWithMaxTargetCount*>
{
public:
	::System::Void _ctor(::RPG::GameCore::RtTargetMapPosWithMaxTargetCount* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtTargetMapPosWithMaxTargetCount*))((::PBYTE)hIl2Cpp + CLASS_2_A5D9EC36E7E02DFC__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_A5D9EC36E7E02DFC_TRANSFORM_OFFSET))(this, a1, a2);
	}

	static ::RPG::GameCore::FixVec3 Method_2_E58943F7D6D74853(::RPG::GameCore::FixPoint a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a3)
	{
		return ((::RPG::GameCore::FixVec3(*)(::RPG::GameCore::FixPoint, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_A5D9EC36E7E02DFC_METHOD_2_E58943F7D6D74853_OFFSET))(a1, a2, a3);
	}
};
