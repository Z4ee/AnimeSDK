#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A03C6135177E0F97;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_D3359DF62696519E_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB33EC40)
#define CLASS_1_D3359DF62696519E_1_GET_CONSTRAINTS_OFFSET UNITYSDK_OFFSET(0xB33EC20)
#define CLASS_1_D3359DF62696519E_1_SET_CONSTRAINTS_OFFSET UNITYSDK_OFFSET(0xB33EC30)
#define CLASS_1_D3359DF62696519E_1__CTOR_OFFSET UNITYSDK_OFFSET(0xB33F110)

inline static constexpr unsigned int Class_1_D3359DF62696519E_1_TypeDefinitionIndex = 79568;

class Class_1_D3359DF62696519E_1 : public ::System::Object
{
public:
	::System::Collections::Generic::IReadOnlyList_1<::Class_1_A03C6135177E0F97*>* _Constraints_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3359DF62696519E_1__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_A03C6135177E0F97*>* get_Constraints()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_A03C6135177E0F97*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3359DF62696519E_1_GET_CONSTRAINTS_OFFSET))(this);
	}

	::System::Void set_Constraints(::System::Collections::Generic::IReadOnlyList_1<::Class_1_A03C6135177E0F97*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_A03C6135177E0F97*>*))((::PBYTE)hIl2Cpp + CLASS_1_D3359DF62696519E_1_SET_CONSTRAINTS_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3359DF62696519E_1_DISPOSE_OFFSET))(this);
	}
};
