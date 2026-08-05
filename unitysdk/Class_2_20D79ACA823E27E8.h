#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BE149A7D6310B037.h"
#include "unitysdk/Enum_3_34A50515BC584E0D.h"
#include "unitysdk/Share/ESwitchType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_20D79ACA823E27E8_METHOD_2_25EC451C0EA68F53_OFFSET UNITYSDK_OFFSET(0x15851040)
#define CLASS_2_20D79ACA823E27E8_METHOD_2_66F60B96100B8EE0_OFFSET UNITYSDK_OFFSET(0x158511D0)
#define CLASS_2_20D79ACA823E27E8_METHOD_2_AB1452679FE48B91_OFFSET UNITYSDK_OFFSET(0x158510F0)
#define CLASS_2_20D79ACA823E27E8__CTOR_OFFSET UNITYSDK_OFFSET(0x15850F80)

inline static constexpr unsigned int Class_2_20D79ACA823E27E8_TypeDefinitionIndex = 85594;

class Class_2_20D79ACA823E27E8 : public ::Class_1_BE149A7D6310B037
{
public:
	::System::Collections::Generic::HashSet_1<::Share::ESwitchType>* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20D79ACA823E27E8__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_2_25EC451C0EA68F53()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_20D79ACA823E27E8_METHOD_2_25EC451C0EA68F53_OFFSET))();
	}

	::System::Boolean Method_2_66F60B96100B8EE0(::Enum_3_34A50515BC584E0D a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_34A50515BC584E0D))((::PBYTE)hIl2Cpp + CLASS_2_20D79ACA823E27E8_METHOD_2_66F60B96100B8EE0_OFFSET))(this, a1);
	}

	static ::System::String* Method_2_AB1452679FE48B91()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_2_20D79ACA823E27E8_METHOD_2_AB1452679FE48B91_OFFSET))();
	}
};
