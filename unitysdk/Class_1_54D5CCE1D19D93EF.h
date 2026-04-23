#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_8;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_54D5CCE1D19D93EF_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x129A22A0)
#define CLASS_1_54D5CCE1D19D93EF_GET_AVATARLEVEL_OFFSET UNITYSDK_OFFSET(0x129A22C0)
#define CLASS_1_54D5CCE1D19D93EF_METHOD_1_169C9AE8F88E4F64_OFFSET UNITYSDK_OFFSET(0x129A2200)
#define CLASS_1_54D5CCE1D19D93EF_METHOD_1_4DDD3DE2D159DC6E_OFFSET UNITYSDK_OFFSET(0x129A1EA0)
#define CLASS_1_54D5CCE1D19D93EF_SET_AVATARID_OFFSET UNITYSDK_OFFSET(0x129A22B0)
#define CLASS_1_54D5CCE1D19D93EF_SET_AVATARLEVEL_OFFSET UNITYSDK_OFFSET(0x129A22D0)
#define CLASS_1_54D5CCE1D19D93EF__CTOR_OFFSET UNITYSDK_OFFSET(0x129A2290)

inline static constexpr unsigned int Class_1_54D5CCE1D19D93EF_TypeDefinitionIndex = 61474;

class Class_1_54D5CCE1D19D93EF : public ::System::Object
{
public:
	::System::UInt32 _AvatarId_k__BackingField; // 0x10
	::System::UInt32 _AvatarLevel_k__BackingField; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54D5CCE1D19D93EF__CTOR_OFFSET))(this);
	}

	static ::System::Collections::Generic::List_1<::Class_1_54D5CCE1D19D93EF*>* Method_1_4DDD3DE2D159DC6E(::System::Collections::Generic::IEnumerable_1<::Class_1_D17272E82AE804C2_8*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_54D5CCE1D19D93EF*>*(*)(::System::Collections::Generic::IEnumerable_1<::Class_1_D17272E82AE804C2_8*>*))((::PBYTE)hIl2Cpp + CLASS_1_54D5CCE1D19D93EF_METHOD_1_4DDD3DE2D159DC6E_OFFSET))(a1);
	}

	static ::Class_1_54D5CCE1D19D93EF* Method_1_169C9AE8F88E4F64(::Class_1_D17272E82AE804C2_8* a1)
	{
		return ((::Class_1_54D5CCE1D19D93EF*(*)(::Class_1_D17272E82AE804C2_8*))((::PBYTE)hIl2Cpp + CLASS_1_54D5CCE1D19D93EF_METHOD_1_169C9AE8F88E4F64_OFFSET))(a1);
	}

	::System::UInt32 get_AvatarId()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54D5CCE1D19D93EF_GET_AVATARID_OFFSET))(this);
	}

	::System::Void set_AvatarId(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_54D5CCE1D19D93EF_SET_AVATARID_OFFSET))(this, value);
	}

	::System::UInt32 get_AvatarLevel()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54D5CCE1D19D93EF_GET_AVATARLEVEL_OFFSET))(this);
	}

	::System::Void set_AvatarLevel(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_54D5CCE1D19D93EF_SET_AVATARLEVEL_OFFSET))(this, value);
	}
};
