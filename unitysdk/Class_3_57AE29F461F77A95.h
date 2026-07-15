#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class CalcPitchAngle; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_57AE29F461F77A95_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17208B70)
#define CLASS_3_57AE29F461F77A95__CTOR_OFFSET UNITYSDK_OFFSET(0x17208A90)

inline static constexpr unsigned int Class_3_57AE29F461F77A95_TypeDefinitionIndex = 53815;

class Class_3_57AE29F461F77A95 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::CalcPitchAngle*>
{
public:
	::RPG::GameCore::StringHash Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CalcPitchAngle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CalcPitchAngle*))((::PBYTE)hIl2Cpp + CLASS_3_57AE29F461F77A95__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_57AE29F461F77A95_ONTASKBEGIN_OFFSET))(this);
	}
};
