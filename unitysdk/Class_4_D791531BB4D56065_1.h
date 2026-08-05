#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_A26D4A2AAC08C213.h"

class Class_1_884860A2FAB24301;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_4_D791531BB4D56065_1_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1707DB50)
#define CLASS_4_D791531BB4D56065_1_METHOD_4_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x1707DD90)
#define CLASS_4_D791531BB4D56065_1_METHOD_4_C9796185EB79C68E_OFFSET UNITYSDK_OFFSET(0x1707DE20)
#define CLASS_4_D791531BB4D56065_1_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1707DC20)
#define CLASS_4_D791531BB4D56065_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1707DBA0)
#define CLASS_4_D791531BB4D56065_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1707DCA0)

inline static constexpr unsigned int Class_4_D791531BB4D56065_1_TypeDefinitionIndex = 63291;

class Class_4_D791531BB4D56065_1 : public ::Class_3_A26D4A2AAC08C213
{
public:
	// static const ::System::Int32 Field_4_0 = 0x21C; // 0x0
	::Class_1_884860A2FAB24301* Field_4_6; // 0x50
	::System::Collections::Generic::List_1<::System::Int32>* Field_4_7; // 0x58

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_D791531BB4D56065_1__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_D791531BB4D56065_1__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_D791531BB4D56065_1_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_D791531BB4D56065_1_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 Method_4_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_D791531BB4D56065_1_METHOD_4_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_4_D791531BB4D56065_1* Method_4_C9796185EB79C68E()
	{
		return ((::Class_4_D791531BB4D56065_1*(*)())((::PBYTE)hIl2Cpp + CLASS_4_D791531BB4D56065_1_METHOD_4_C9796185EB79C68E_OFFSET))();
	}
};
