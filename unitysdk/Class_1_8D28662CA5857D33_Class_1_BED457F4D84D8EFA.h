#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7D59F735ACB38970_Enum_3_6E0E8267CDDC65CF.h"
#include "unitysdk/System/Object.h"

class Class_1_7D59F735ACB38970;
class Class_1_8D28662CA5857D33_Class_1_110CEE6864079A61_4;
namespace MoleMole::Config { class ScenePerformConfig; }

#define CLASS_1_8D28662CA5857D33_CLASS_1_BED457F4D84D8EFA_METHOD_1_52FAC18ABC96CFBC_OFFSET UNITYSDK_OFFSET(0x1432A010)
#define CLASS_1_8D28662CA5857D33_CLASS_1_BED457F4D84D8EFA__CTOR_OFFSET UNITYSDK_OFFSET(0x1432A000)

inline static constexpr unsigned int Class_1_8D28662CA5857D33_Class_1_BED457F4D84D8EFA_TypeDefinitionIndex = 76534;

class Class_1_8D28662CA5857D33_Class_1_BED457F4D84D8EFA : public ::System::Object
{
public:
	::Class_1_7D59F735ACB38970* Field_1_0; // 0x10
	::MoleMole::Config::ScenePerformConfig* Field_1_1; // 0x18
	::Class_1_8D28662CA5857D33_Class_1_110CEE6864079A61_4* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_CLASS_1_BED457F4D84D8EFA__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_52FAC18ABC96CFBC(::Class_1_7D59F735ACB38970_Enum_3_6E0E8267CDDC65CF a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7D59F735ACB38970_Enum_3_6E0E8267CDDC65CF))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_CLASS_1_BED457F4D84D8EFA_METHOD_1_52FAC18ABC96CFBC_OFFSET))(this, a1);
	}
};
