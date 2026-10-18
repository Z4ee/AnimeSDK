#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A047D65884258648.h"

class Class_1_7325E2A200EF063B;
namespace RPG::GameCore { class MarbleByValueReach; }

#define CLASS_3_EEAE0F472137BEFE_METHOD_3_AF088DD8936FBFFF_OFFSET UNITYSDK_OFFSET(0x1CA739B0)
#define CLASS_3_EEAE0F472137BEFE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA73990)

inline static constexpr unsigned int Class_3_EEAE0F472137BEFE_TypeDefinitionIndex = 43148;

class Class_3_EEAE0F472137BEFE : public ::Class_2_A047D65884258648
{
public:
	::RPG::GameCore::MarbleByValueReach* IGHAHBNLIJA; // 0x30

	::System::Void _ctor(::RPG::GameCore::MarbleByValueReach* a1, ::Class_1_7325E2A200EF063B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleByValueReach*, ::Class_1_7325E2A200EF063B*))((::PBYTE)hIl2Cpp + CLASS_3_EEAE0F472137BEFE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_AF088DD8936FBFFF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EEAE0F472137BEFE_METHOD_3_AF088DD8936FBFFF_OFFSET))(this);
	}
};
