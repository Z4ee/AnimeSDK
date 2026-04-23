#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A047D65884258648.h"

class Class_1_D37BADBAF66E56C6;
namespace RPG::GameCore { class MarbleByValueReach; }

#define CLASS_3_EEAE0F472137BEFE_METHOD_3_21B34F764C8BD391_OFFSET UNITYSDK_OFFSET(0x17FA2390)
#define CLASS_3_EEAE0F472137BEFE__CTOR_OFFSET UNITYSDK_OFFSET(0x17FA2370)

inline static constexpr unsigned int Class_3_EEAE0F472137BEFE_TypeDefinitionIndex = 38995;

class Class_3_EEAE0F472137BEFE : public ::Class_2_A047D65884258648
{
public:
	::RPG::GameCore::MarbleByValueReach* Field_3_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::MarbleByValueReach* a1, ::Class_1_D37BADBAF66E56C6* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleByValueReach*, ::Class_1_D37BADBAF66E56C6*))((::PBYTE)hIl2Cpp + CLASS_3_EEAE0F472137BEFE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_21B34F764C8BD391()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EEAE0F472137BEFE_METHOD_3_21B34F764C8BD391_OFFSET))(this);
	}
};
