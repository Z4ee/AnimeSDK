#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EA6632B7AF7D71D5;

#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLEJUDGMENTRANGE_TOJUDGMENTRANGE_OFFSET UNITYSDK_OFFSET(0x159F8660)
#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLEJUDGMENTRANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x159F8650)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigUISimpleParkourGame_SerializableJudgmentRange_TypeDefinitionIndex = 43827;

	class ConfigUISimpleParkourGame_SerializableJudgmentRange : public ::System::Object
	{
	public:
		::System::Single Before; // 0x10
		::System::Single After; // 0x14

		::System::Void _ctor(::System::Single before, ::System::Single after)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLEJUDGMENTRANGE__CTOR_OFFSET))(this, before, after);
		}

		::Class_1_EA6632B7AF7D71D5* ToJudgmentRange()
		{
			return ((::Class_1_EA6632B7AF7D71D5*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLEJUDGMENTRANGE_TOJUDGMENTRANGE_OFFSET))(this);
		}
	};
}
