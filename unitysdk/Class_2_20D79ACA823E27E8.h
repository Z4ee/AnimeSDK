#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BE149A7D6310B037.h"
#include "unitysdk/Enum_3_71D92415DF2BC99D.h"
#include "unitysdk/Share/ESwitchType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_20D79ACA823E27E8_METHOD_2_4719F7B84CAB8C34_OFFSET UNITYSDK_OFFSET(0x1130AF20)
#define CLASS_2_20D79ACA823E27E8_METHOD_2_5EBCF276C230582C_OFFSET UNITYSDK_OFFSET(0x1130B000)
#define CLASS_2_20D79ACA823E27E8_METHOD_2_66F60B96100B8EE0_OFFSET UNITYSDK_OFFSET(0x1130ADF0)
#define CLASS_2_20D79ACA823E27E8__CTOR_OFFSET UNITYSDK_OFFSET(0x1130AD30)

inline static constexpr unsigned int Class_2_20D79ACA823E27E8_TypeDefinitionIndex = 65087;

class Class_2_20D79ACA823E27E8 : public ::Class_1_BE149A7D6310B037
{
public:
	::System::Collections::Generic::HashSet_1<::Share::ESwitchType>* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20D79ACA823E27E8__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_66F60B96100B8EE0(::Enum_3_71D92415DF2BC99D a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_71D92415DF2BC99D))((::PBYTE)hIl2Cpp + CLASS_2_20D79ACA823E27E8_METHOD_2_66F60B96100B8EE0_OFFSET))(this, a1);
	}

	static ::System::String* Method_2_4719F7B84CAB8C34()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_2_20D79ACA823E27E8_METHOD_2_4719F7B84CAB8C34_OFFSET))();
	}

	static ::System::Void Method_2_5EBCF276C230582C()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_20D79ACA823E27E8_METHOD_2_5EBCF276C230582C_OFFSET))();
	}
};
