#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A047D65884258648.h"

class Class_1_5816B66AC6910205;
namespace RPG::GameCore { class MarbleByAnd; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_5A0BE00A19A9BDCF_METHOD_3_A94DD7FA433DEE48_OFFSET UNITYSDK_OFFSET(0x18C4D390)
#define CLASS_3_5A0BE00A19A9BDCF__CTOR_OFFSET UNITYSDK_OFFSET(0x18C4D1E0)

inline static constexpr unsigned int Class_3_5A0BE00A19A9BDCF_TypeDefinitionIndex = 39753;

class Class_3_5A0BE00A19A9BDCF : public ::Class_2_A047D65884258648
{
public:
	::System::Collections::Generic::List_1<::Class_2_A047D65884258648*>* Field_3_0; // 0x30
	::RPG::GameCore::MarbleByAnd* Field_3_1; // 0x38

	::System::Void _ctor(::RPG::GameCore::MarbleByAnd* a1, ::Class_1_5816B66AC6910205* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleByAnd*, ::Class_1_5816B66AC6910205*))((::PBYTE)hIl2Cpp + CLASS_3_5A0BE00A19A9BDCF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_A94DD7FA433DEE48()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5A0BE00A19A9BDCF_METHOD_3_A94DD7FA433DEE48_OFFSET))(this);
	}
};
