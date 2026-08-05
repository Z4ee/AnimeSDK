#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BCCD4DFEA016B7F9.h"

namespace MoleMole { class PerformanceSettingPostProcessProfileBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_CE407ADBD8EC9368_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x12B60FC0)
#define CLASS_2_CE407ADBD8EC9368_METHOD_2_75DB76223B0AC032_OFFSET UNITYSDK_OFFSET(0x12B60B40)
#define CLASS_2_CE407ADBD8EC9368_METHOD_2_A4390D546C705ABC_OFFSET UNITYSDK_OFFSET(0x12B60D80)
#define CLASS_2_CE407ADBD8EC9368__CTOR_OFFSET UNITYSDK_OFFSET(0x12B60B30)

inline static constexpr unsigned int Class_2_CE407ADBD8EC9368_TypeDefinitionIndex = 88499;

class Class_2_CE407ADBD8EC9368 : public ::Class_1_BCCD4DFEA016B7F9
{
public:
	// static const ::System::Int32 Field_2_0 = 0x0; // 0x0
	// static const ::System::Int32 Field_2_7 = 0x1; // 0x0
	// static const ::System::Int32 Field_2_6 = 0x2; // 0x0
	// static const ::System::Int32 Field_2_5 = 0x3; // 0x0

	::System::Void _ctor(::MoleMole::PerformanceSettingPostProcessProfileBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::PerformanceSettingPostProcessProfileBase*))((::PBYTE)hIl2Cpp + CLASS_2_CE407ADBD8EC9368__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_75DB76223B0AC032(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CE407ADBD8EC9368_METHOD_2_75DB76223B0AC032_OFFSET))(this, a1);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CE407ADBD8EC9368_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_2_A4390D546C705ABC(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_CE407ADBD8EC9368_METHOD_2_A4390D546C705ABC_OFFSET))(a1, a2);
	}
};
