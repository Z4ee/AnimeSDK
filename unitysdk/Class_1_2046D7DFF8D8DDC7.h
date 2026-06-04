#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_86997AC0C8EBD0CE;
class Class_1_CC0F8AEEF044EF7C;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_2046D7DFF8D8DDC7_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xC96F2D0)
#define CLASS_1_2046D7DFF8D8DDC7_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0xC96F2E0)
#define CLASS_1_2046D7DFF8D8DDC7_METHOD_1_283DA224BE06DA9F_OFFSET UNITYSDK_OFFSET(0xC96F350)
#define CLASS_1_2046D7DFF8D8DDC7_METHOD_1_4FDFCF0E824F852D_OFFSET UNITYSDK_OFFSET(0xC96F3A0)
#define CLASS_1_2046D7DFF8D8DDC7_METHOD_1_9E9E31C8C52B2D9F_OFFSET UNITYSDK_OFFSET(0xC96F610)
#define CLASS_1_2046D7DFF8D8DDC7_METHOD_1_BEEEB78F79566EBD_OFFSET UNITYSDK_OFFSET(0xC96F550)
#define CLASS_1_2046D7DFF8D8DDC7__CTOR_OFFSET UNITYSDK_OFFSET(0xC96F2F0)

inline static constexpr unsigned int Class_1_2046D7DFF8D8DDC7_TypeDefinitionIndex = 57409;

class Class_1_2046D7DFF8D8DDC7 : public ::System::Object
{
public:
	::Class_1_CC0F8AEEF044EF7C* _Config_k__BackingField; // 0x10
	::Class_1_86997AC0C8EBD0CE* _Progress_k__BackingField; // 0x18

	::System::Void _ctor(::Class_1_CC0F8AEEF044EF7C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CC0F8AEEF044EF7C*))((::PBYTE)hIl2Cpp + CLASS_1_2046D7DFF8D8DDC7__CTOR_OFFSET))(this, a1);
	}

	::Class_1_CC0F8AEEF044EF7C* get_Config()
	{
		return ((::Class_1_CC0F8AEEF044EF7C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2046D7DFF8D8DDC7_GET_CONFIG_OFFSET))(this);
	}

	::Class_1_86997AC0C8EBD0CE* get_Progress()
	{
		return ((::Class_1_86997AC0C8EBD0CE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2046D7DFF8D8DDC7_GET_PROGRESS_OFFSET))(this);
	}

	::System::Void Method_1_283DA224BE06DA9F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2046D7DFF8D8DDC7_METHOD_1_283DA224BE06DA9F_OFFSET))(this);
	}

	::System::Boolean Method_1_4FDFCF0E824F852D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2046D7DFF8D8DDC7_METHOD_1_4FDFCF0E824F852D_OFFSET))(this);
	}

	::System::Boolean Method_1_BEEEB78F79566EBD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2046D7DFF8D8DDC7_METHOD_1_BEEEB78F79566EBD_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Int32>* Method_1_9E9E31C8C52B2D9F()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2046D7DFF8D8DDC7_METHOD_1_9E9E31C8C52B2D9F_OFFSET))(this);
	}
};
