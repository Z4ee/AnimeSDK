#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace RPG::GameCore { class FormationData; }

#define CLASS_1_7B53D750DDEAD498_METHOD_1_0E52362BF9982DBA_OFFSET UNITYSDK_OFFSET(0x14FC0D30)
#define CLASS_1_7B53D750DDEAD498_METHOD_1_66C983B70F245D78_OFFSET UNITYSDK_OFFSET(0x14FC1170)

inline static constexpr unsigned int Class_1_7B53D750DDEAD498_TypeDefinitionIndex = 56662;

class Class_1_7B53D750DDEAD498 : public ::System::Object
{
public:
	static ::System::Int32 Method_1_0E52362BF9982DBA(::RPG::GameCore::FormationData* a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Int32(*)(::RPG::GameCore::FormationData*, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_7B53D750DDEAD498_METHOD_1_0E52362BF9982DBA_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_66C983B70F245D78(::RPG::GameCore::FormationData* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::FormationData*))((::PBYTE)hIl2Cpp + CLASS_1_7B53D750DDEAD498_METHOD_1_66C983B70F245D78_OFFSET))(a1);
	}
};
