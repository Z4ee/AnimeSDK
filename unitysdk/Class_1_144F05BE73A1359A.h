#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_842;
class Class_2_91B3AB6EFF8B8044_2;
class Class_2_91B3AB6EFF8B8044_3;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_144F05BE73A1359A_METHOD_1_322D281636A85958_OFFSET UNITYSDK_OFFSET(0x1C46AAA0)
#define CLASS_1_144F05BE73A1359A_METHOD_1_66CE1793F783DCE7_OFFSET UNITYSDK_OFFSET(0x1C46BAA0)
#define CLASS_1_144F05BE73A1359A__CTOR_OFFSET UNITYSDK_OFFSET(0x1C47BA50)

inline static constexpr unsigned int Class_1_144F05BE73A1359A_TypeDefinitionIndex = 89010;

class Class_1_144F05BE73A1359A : public ::System::Object
{
public:
	::Class_2_91B3AB6EFF8B8044_3* Field_1_0; // 0x10
	::Class_2_91B3AB6EFF8B8044_2* Field_1_1; // 0x18

	::System::Void _ctor(::Class_2_91B3AB6EFF8B8044_3* a1, ::Class_2_91B3AB6EFF8B8044_2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_91B3AB6EFF8B8044_3*, ::Class_2_91B3AB6EFF8B8044_2*))((::PBYTE)hIl2Cpp + CLASS_1_144F05BE73A1359A__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_842* Method_1_322D281636A85958(::System::Int32 a1, ::System::Boolean a2, ::System::UInt32 a3)
	{
		return ((::Class_0_16E4307DCC419505_842*(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_144F05BE73A1359A_METHOD_1_322D281636A85958_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_842*>* Method_1_66CE1793F783DCE7(::System::UInt32 a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_842*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_144F05BE73A1359A_METHOD_1_66CE1793F783DCE7_OFFSET))(this, a1);
	}
};
