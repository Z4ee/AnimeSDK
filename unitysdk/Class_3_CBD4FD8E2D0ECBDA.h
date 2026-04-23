#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class GravityBallPuzzleLastFinishCondition; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_CBD4FD8E2D0ECBDA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x127DC720)
#define CLASS_3_CBD4FD8E2D0ECBDA__CTOR_OFFSET UNITYSDK_OFFSET(0x127DC6F0)

inline static constexpr unsigned int Class_3_CBD4FD8E2D0ECBDA_TypeDefinitionIndex = 48803;

class Class_3_CBD4FD8E2D0ECBDA : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::GravityBallPuzzleLastFinishCondition*>
{
public:
	static ::System::Int16* StaticGet_Field_3_0()
	{
		return (::System::Int16*)Il2CppClass::FromTypeDefinitionIndex(Class_3_CBD4FD8E2D0ECBDA_TypeDefinitionIndex)->GetStaticField(0x5DE0);
	}

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GravityBallPuzzleLastFinishCondition* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GravityBallPuzzleLastFinishCondition*))((::PBYTE)hIl2Cpp + CLASS_3_CBD4FD8E2D0ECBDA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CBD4FD8E2D0ECBDA_ONTASKBEGIN_OFFSET))(this);
	}
};
