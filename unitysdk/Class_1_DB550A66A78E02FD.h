#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BFF1DA2C4D50F81F;
class Class_1_CC0F8AEEF044EF7C;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_DB550A66A78E02FD_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x175E5920)
#define CLASS_1_DB550A66A78E02FD_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x175E5930)
#define CLASS_1_DB550A66A78E02FD_METHOD_1_15A9FF19C39EE59D_OFFSET UNITYSDK_OFFSET(0x175E59F0)
#define CLASS_1_DB550A66A78E02FD_METHOD_1_283DA224BE06DA9F_OFFSET UNITYSDK_OFFSET(0x175E59A0)
#define CLASS_1_DB550A66A78E02FD_METHOD_1_545B7AA914D8A728_OFFSET UNITYSDK_OFFSET(0x175E5BA0)
#define CLASS_1_DB550A66A78E02FD_METHOD_1_9E9E31C8C52B2D9F_OFFSET UNITYSDK_OFFSET(0x175E5C60)
#define CLASS_1_DB550A66A78E02FD__CTOR_OFFSET UNITYSDK_OFFSET(0x175E5940)

inline static constexpr unsigned int Class_1_DB550A66A78E02FD_TypeDefinitionIndex = 58671;

class Class_1_DB550A66A78E02FD : public ::System::Object
{
public:
	::Class_1_CC0F8AEEF044EF7C* _Config_k__BackingField; // 0x10
	::Class_1_BFF1DA2C4D50F81F* _Progress_k__BackingField; // 0x18

	::System::Void _ctor(::Class_1_CC0F8AEEF044EF7C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CC0F8AEEF044EF7C*))((::PBYTE)hIl2Cpp + CLASS_1_DB550A66A78E02FD__CTOR_OFFSET))(this, a1);
	}

	::Class_1_CC0F8AEEF044EF7C* get_Config()
	{
		return ((::Class_1_CC0F8AEEF044EF7C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB550A66A78E02FD_GET_CONFIG_OFFSET))(this);
	}

	::Class_1_BFF1DA2C4D50F81F* get_Progress()
	{
		return ((::Class_1_BFF1DA2C4D50F81F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB550A66A78E02FD_GET_PROGRESS_OFFSET))(this);
	}

	::System::Void Method_1_283DA224BE06DA9F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB550A66A78E02FD_METHOD_1_283DA224BE06DA9F_OFFSET))(this);
	}

	::System::Boolean Method_1_15A9FF19C39EE59D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB550A66A78E02FD_METHOD_1_15A9FF19C39EE59D_OFFSET))(this);
	}

	::System::Boolean Method_1_545B7AA914D8A728()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB550A66A78E02FD_METHOD_1_545B7AA914D8A728_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Int32>* Method_1_9E9E31C8C52B2D9F()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB550A66A78E02FD_METHOD_1_9E9E31C8C52B2D9F_OFFSET))(this);
	}
};
