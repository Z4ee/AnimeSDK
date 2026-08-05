#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_190;
class Class_1_CB1D9942A98A3EC3;
class Class_3_010347D17DFD5D8F_3;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_156A3F8794BD57EA_METHOD_1_55BEECADAE89F4C2_OFFSET UNITYSDK_OFFSET(0x1560BB60)
#define CLASS_1_156A3F8794BD57EA_METHOD_1_6DFACA7B4E281B24_OFFSET UNITYSDK_OFFSET(0x1560B9E0)
#define CLASS_1_156A3F8794BD57EA_METHOD_1_B33A0FCD62B71A46_OFFSET UNITYSDK_OFFSET(0x1560B980)
#define CLASS_1_156A3F8794BD57EA__CTOR_OFFSET UNITYSDK_OFFSET(0x1560BB50)

inline static constexpr unsigned int Class_1_156A3F8794BD57EA_TypeDefinitionIndex = 42082;

class Class_1_156A3F8794BD57EA : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_156A3F8794BD57EA__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_190*>* Method_1_B33A0FCD62B71A46(::Class_1_CB1D9942A98A3EC3* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_190*>*(*)(::PVOID, ::Class_1_CB1D9942A98A3EC3*))((::PBYTE)hIl2Cpp + CLASS_1_156A3F8794BD57EA_METHOD_1_B33A0FCD62B71A46_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_55BEECADAE89F4C2(::Class_3_010347D17DFD5D8F_3* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_010347D17DFD5D8F_3*))((::PBYTE)hIl2Cpp + CLASS_1_156A3F8794BD57EA_METHOD_1_55BEECADAE89F4C2_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_190*>* Method_1_6DFACA7B4E281B24(::Class_3_010347D17DFD5D8F_3* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_190*>*(*)(::PVOID, ::Class_3_010347D17DFD5D8F_3*))((::PBYTE)hIl2Cpp + CLASS_1_156A3F8794BD57EA_METHOD_1_6DFACA7B4E281B24_OFFSET))(this, a1);
	}
};
