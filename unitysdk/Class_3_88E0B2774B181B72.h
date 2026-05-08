#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"

class Class_1_5860E4BC039DC782;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_88E0B2774B181B72_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x117B0C70)
#define CLASS_3_88E0B2774B181B72_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x117B0DD0)
#define CLASS_3_88E0B2774B181B72_METHOD_3_D93EC3DDD756C47C_OFFSET UNITYSDK_OFFSET(0x117B0E60)
#define CLASS_3_88E0B2774B181B72_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x117B0C00)
#define CLASS_3_88E0B2774B181B72__CCTOR_OFFSET UNITYSDK_OFFSET(0x117B0CC0)
#define CLASS_3_88E0B2774B181B72__CTOR_OFFSET UNITYSDK_OFFSET(0x117B0D40)

inline static constexpr unsigned int Class_3_88E0B2774B181B72_TypeDefinitionIndex = 43258;

class Class_3_88E0B2774B181B72 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_1 = 0xA1; // 0x0
	::System::Collections::Generic::List_1<::Class_1_5860E4BC039DC782*>* Field_3_0; // 0x48

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_88E0B2774B181B72__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_88E0B2774B181B72__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_88E0B2774B181B72_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_88E0B2774B181B72_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_88E0B2774B181B72_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_3_88E0B2774B181B72* Method_3_D93EC3DDD756C47C()
	{
		return ((::Class_3_88E0B2774B181B72*(*)())((::PBYTE)hIl2Cpp + CLASS_3_88E0B2774B181B72_METHOD_3_D93EC3DDD756C47C_OFFSET))();
	}
};
