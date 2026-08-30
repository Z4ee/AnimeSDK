#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class MazeBuffParamKey; }
namespace RPG::GameCore { class SetDynamicValueByMazeBuffConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_6D5288406C0BFCB3_METHOD_3_06233A7AA0C3851F_OFFSET UNITYSDK_OFFSET(0xB96B010)
#define CLASS_3_6D5288406C0BFCB3_METHOD_3_BBA40177DF6F6B52_OFFSET UNITYSDK_OFFSET(0xB96B190)
#define CLASS_3_6D5288406C0BFCB3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB96AE90)
#define CLASS_3_6D5288406C0BFCB3__CTOR_OFFSET UNITYSDK_OFFSET(0xB96AE60)

inline static constexpr unsigned int Class_3_6D5288406C0BFCB3_TypeDefinitionIndex = 55645;

class Class_3_6D5288406C0BFCB3 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicValueByMazeBuffConfig*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByMazeBuffConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByMazeBuffConfig*))((::PBYTE)hIl2Cpp + CLASS_3_6D5288406C0BFCB3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6D5288406C0BFCB3_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Boolean Method_3_06233A7AA0C3851F(::RPG::GameCore::MazeBuffParamKey* a1, ::RPG::GameCore::FixPoint& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MazeBuffParamKey*, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + CLASS_3_6D5288406C0BFCB3_METHOD_3_06233A7AA0C3851F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_BBA40177DF6F6B52(::System::String* a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_3_6D5288406C0BFCB3_METHOD_3_BBA40177DF6F6B52_OFFSET))(this, a1, a2);
	}
};
