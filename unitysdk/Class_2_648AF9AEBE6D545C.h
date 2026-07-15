#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8A0BE42C657CE107.h"

class Class_2_67C5F2015028CF70;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_648AF9AEBE6D545C_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1646DC10)
#define CLASS_2_648AF9AEBE6D545C_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x1646DC80)
#define CLASS_2_648AF9AEBE6D545C_METHOD_2_B5E6FE7DC87002CD_OFFSET UNITYSDK_OFFSET(0x1646DD20)
#define CLASS_2_648AF9AEBE6D545C__CTOR_OFFSET UNITYSDK_OFFSET(0x1646DDB0)

inline static constexpr unsigned int Class_2_648AF9AEBE6D545C_TypeDefinitionIndex = 51270;

class Class_2_648AF9AEBE6D545C : public ::Class_1_8A0BE42C657CE107
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_2_0; // 0x18
	::Class_2_67C5F2015028CF70* Field_2_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_648AF9AEBE6D545C__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_648AF9AEBE6D545C_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_648AF9AEBE6D545C_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_B5E6FE7DC87002CD(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_648AF9AEBE6D545C_METHOD_2_B5E6FE7DC87002CD_OFFSET))(this, a1);
	}
};
