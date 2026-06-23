#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"

class Class_1_EA67DE3E7B7C743B;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_E7DAE994C565ED1F_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1A163B40)
#define CLASS_3_E7DAE994C565ED1F_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x1A163CB0)
#define CLASS_3_E7DAE994C565ED1F_METHOD_3_BEAB6CF0CF797770_OFFSET UNITYSDK_OFFSET(0x1A163D40)
#define CLASS_3_E7DAE994C565ED1F_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1A163AA0)
#define CLASS_3_E7DAE994C565ED1F__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A163B90)
#define CLASS_3_E7DAE994C565ED1F__CTOR_OFFSET UNITYSDK_OFFSET(0x1A163C10)

inline static constexpr unsigned int Class_3_E7DAE994C565ED1F_TypeDefinitionIndex = 68008;

class Class_3_E7DAE994C565ED1F : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_1 = 0x4D; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_EA67DE3E7B7C743B*>* Field_3_0; // 0x48

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_E7DAE994C565ED1F__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E7DAE994C565ED1F__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E7DAE994C565ED1F_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E7DAE994C565ED1F_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E7DAE994C565ED1F_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_3_E7DAE994C565ED1F* Method_3_BEAB6CF0CF797770()
	{
		return ((::Class_3_E7DAE994C565ED1F*(*)())((::PBYTE)hIl2Cpp + CLASS_3_E7DAE994C565ED1F_METHOD_3_BEAB6CF0CF797770_OFFSET))();
	}
};
