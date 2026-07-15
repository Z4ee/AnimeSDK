#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_11;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_54D5CCE1D19D93EF_1_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x17DCC140)
#define CLASS_1_54D5CCE1D19D93EF_1_GET_AVATARLEVEL_OFFSET UNITYSDK_OFFSET(0x17DCC160)
#define CLASS_1_54D5CCE1D19D93EF_1_METHOD_1_169C9AE8F88E4F64_OFFSET UNITYSDK_OFFSET(0x17DCC0A0)
#define CLASS_1_54D5CCE1D19D93EF_1_METHOD_1_C37EE151D005EDA7_OFFSET UNITYSDK_OFFSET(0x17DCBB30)
#define CLASS_1_54D5CCE1D19D93EF_1_SET_AVATARID_OFFSET UNITYSDK_OFFSET(0x17DCC150)
#define CLASS_1_54D5CCE1D19D93EF_1_SET_AVATARLEVEL_OFFSET UNITYSDK_OFFSET(0x17DCC170)
#define CLASS_1_54D5CCE1D19D93EF_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17DCC130)

inline static constexpr unsigned int Class_1_54D5CCE1D19D93EF_1_TypeDefinitionIndex = 63773;

class Class_1_54D5CCE1D19D93EF_1 : public ::System::Object
{
public:
	::System::UInt32 _AvatarId_k__BackingField; // 0x10
	::System::UInt32 _AvatarLevel_k__BackingField; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54D5CCE1D19D93EF_1__CTOR_OFFSET))(this);
	}

	static ::System::Collections::Generic::List_1<::Class_1_54D5CCE1D19D93EF_1*>* Method_1_C37EE151D005EDA7(::System::Collections::Generic::IEnumerable_1<::Class_1_D17272E82AE804C2_11*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_54D5CCE1D19D93EF_1*>*(*)(::System::Collections::Generic::IEnumerable_1<::Class_1_D17272E82AE804C2_11*>*))((::PBYTE)hIl2Cpp + CLASS_1_54D5CCE1D19D93EF_1_METHOD_1_C37EE151D005EDA7_OFFSET))(a1);
	}

	static ::Class_1_54D5CCE1D19D93EF_1* Method_1_169C9AE8F88E4F64(::Class_1_D17272E82AE804C2_11* a1)
	{
		return ((::Class_1_54D5CCE1D19D93EF_1*(*)(::Class_1_D17272E82AE804C2_11*))((::PBYTE)hIl2Cpp + CLASS_1_54D5CCE1D19D93EF_1_METHOD_1_169C9AE8F88E4F64_OFFSET))(a1);
	}

	::System::UInt32 get_AvatarId()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54D5CCE1D19D93EF_1_GET_AVATARID_OFFSET))(this);
	}

	::System::Void set_AvatarId(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_54D5CCE1D19D93EF_1_SET_AVATARID_OFFSET))(this, a1);
	}

	::System::UInt32 get_AvatarLevel()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54D5CCE1D19D93EF_1_GET_AVATARLEVEL_OFFSET))(this);
	}

	::System::Void set_AvatarLevel(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_54D5CCE1D19D93EF_1_SET_AVATARLEVEL_OFFSET))(this, a1);
	}
};
