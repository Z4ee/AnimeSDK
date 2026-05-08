#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_872037CA3D9BDC34.h"
#include "unitysdk/Struct_2_4C8453486C91E3A1_16.h"
#include "unitysdk/Struct_2_58DF5669875F2C66_136.h"

class Class_0_16E4307DCC419505_13;
class Class_1_37A8069FEC1C5427;
class Class_2_AA2DF3435829EFF0_8;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_622FAAD4E5007D10_METHOD_2_86953C79667FC2E6_OFFSET UNITYSDK_OFFSET(0x1ACA1C90)
#define CLASS_2_622FAAD4E5007D10__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACA1950)

inline static constexpr unsigned int Class_2_622FAAD4E5007D10_TypeDefinitionIndex = 83771;

class Class_2_622FAAD4E5007D10 : public ::Class_1_872037CA3D9BDC34
{
public:
	::System::Collections::Generic::List_1<::Struct_2_4C8453486C91E3A1_16>* Field_2_1; // 0x48
	::Class_1_37A8069FEC1C5427* Field_2_0; // 0x50

	::System::Void _ctor(::Struct_2_58DF5669875F2C66_136 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_58DF5669875F2C66_136, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_622FAAD4E5007D10__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_86953C79667FC2E6(::Class_2_AA2DF3435829EFF0_8* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_AA2DF3435829EFF0_8*))((::PBYTE)hIl2Cpp + CLASS_2_622FAAD4E5007D10_METHOD_2_86953C79667FC2E6_OFFSET))(this, a1);
	}
};
