#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"

class Class_0_16E4307DCC419505_268;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_978FE536F99F2960_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x13794410)
#define CLASS_3_978FE536F99F2960_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x13794570)
#define CLASS_3_978FE536F99F2960_METHOD_3_D93EC3DDD756C47C_OFFSET UNITYSDK_OFFSET(0x13794600)
#define CLASS_3_978FE536F99F2960_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x137943A0)
#define CLASS_3_978FE536F99F2960__CCTOR_OFFSET UNITYSDK_OFFSET(0x13794460)
#define CLASS_3_978FE536F99F2960__CTOR_OFFSET UNITYSDK_OFFSET(0x137944E0)

inline static constexpr unsigned int Class_3_978FE536F99F2960_TypeDefinitionIndex = 60351;

class Class_3_978FE536F99F2960 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_2 = 0x85; // 0x0
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_268*>* Field_3_0; // 0x48
	::System::Boolean Field_3_1; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_978FE536F99F2960__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_978FE536F99F2960__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_978FE536F99F2960_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_978FE536F99F2960_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_978FE536F99F2960_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_3_978FE536F99F2960* Method_3_D93EC3DDD756C47C()
	{
		return ((::Class_3_978FE536F99F2960*(*)())((::PBYTE)hIl2Cpp + CLASS_3_978FE536F99F2960_METHOD_3_D93EC3DDD756C47C_OFFSET))();
	}
};
