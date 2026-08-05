#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_B9814F859AB43FFE_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x17CEB6C0)
#define CLASS_3_B9814F859AB43FFE_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x17CEB820)
#define CLASS_3_B9814F859AB43FFE_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x17CEB7A0)
#define CLASS_3_B9814F859AB43FFE_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x17CEB670)
#define CLASS_3_B9814F859AB43FFE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17CEB710)
#define CLASS_3_B9814F859AB43FFE__CTOR_OFFSET UNITYSDK_OFFSET(0x17CEB790)

inline static constexpr unsigned int Class_3_B9814F859AB43FFE_TypeDefinitionIndex = 55362;

class Class_3_B9814F859AB43FFE : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_6 = 0x14; // 0x0
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_7; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* Field_3_0; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_B9814F859AB43FFE__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B9814F859AB43FFE__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B9814F859AB43FFE_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B9814F859AB43FFE_GETCLASSID_OFFSET))(this);
	}

	static ::Class_3_B9814F859AB43FFE* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_B9814F859AB43FFE*(*)())((::PBYTE)hIl2Cpp + CLASS_3_B9814F859AB43FFE_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B9814F859AB43FFE_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
