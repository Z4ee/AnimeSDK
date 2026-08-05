#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_46.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_89980D9E958247E3_METHOD_2_513F60E1612756A9_OFFSET UNITYSDK_OFFSET(0x159CBF90)
#define CLASS_2_89980D9E958247E3_METHOD_2_D5D89BA20043C0A8_OFFSET UNITYSDK_OFFSET(0x159CBE30)
#define CLASS_2_89980D9E958247E3_METHOD_2_ED0E789471E66B84_OFFSET UNITYSDK_OFFSET(0x159CBEE0)
#define CLASS_2_89980D9E958247E3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x159CBD70)
#define CLASS_2_89980D9E958247E3__CTOR_OFFSET UNITYSDK_OFFSET(0x159CBD00)

inline static constexpr unsigned int Class_2_89980D9E958247E3_TypeDefinitionIndex = 69246;

class Class_2_89980D9E958247E3 : public ::Class_1_43BD383C98B4C0C5_46
{
public:
	::Il2CppArray<::System::Int32>* Field_2_0; // 0x10

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_89980D9E958247E3__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_89980D9E958247E3__CTOR_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_D5D89BA20043C0A8(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_89980D9E958247E3_METHOD_2_D5D89BA20043C0A8_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_ED0E789471E66B84(::Il2CppArray<::System::Int32>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_89980D9E958247E3_METHOD_2_ED0E789471E66B84_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_513F60E1612756A9(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_89980D9E958247E3_METHOD_2_513F60E1612756A9_OFFSET))(this, a1);
	}
};
