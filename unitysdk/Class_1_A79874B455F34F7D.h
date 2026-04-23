#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0E117AC86D8E5BCA;
class Class_1_EA5232D6CAD71030;
class Class_2_1BB8CA1042AACD99;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A79874B455F34F7D_METHOD_1_1E7A319C3208C836_OFFSET UNITYSDK_OFFSET(0x17C6A180)
#define CLASS_1_A79874B455F34F7D_METHOD_1_768382B9C3196C55_OFFSET UNITYSDK_OFFSET(0x17C69E60)
#define CLASS_1_A79874B455F34F7D__CTOR_OFFSET UNITYSDK_OFFSET(0x17C69690)

inline static constexpr unsigned int Class_1_A79874B455F34F7D_TypeDefinitionIndex = 34160;

class Class_1_A79874B455F34F7D : public ::System::Object
{
public:
	::Class_1_EA5232D6CAD71030* Field_1_0; // 0x10

	::System::Void _ctor(::Class_1_EA5232D6CAD71030* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EA5232D6CAD71030*))((::PBYTE)hIl2Cpp + CLASS_1_A79874B455F34F7D__CTOR_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_768382B9C3196C55(::Class_2_1BB8CA1042AACD99* a1, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a2)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::Class_2_1BB8CA1042AACD99*, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*))((::PBYTE)hIl2Cpp + CLASS_1_A79874B455F34F7D_METHOD_1_768382B9C3196C55_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_1E7A319C3208C836(::Class_2_1BB8CA1042AACD99* a1, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a2)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::Class_2_1BB8CA1042AACD99*, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*))((::PBYTE)hIl2Cpp + CLASS_1_A79874B455F34F7D_METHOD_1_1E7A319C3208C836_OFFSET))(this, a1, a2);
	}
};
