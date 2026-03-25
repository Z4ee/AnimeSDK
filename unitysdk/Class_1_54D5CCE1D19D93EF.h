#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FA4F4A67B1C04320_8;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_54D5CCE1D19D93EF_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x8930DE0)
#define CLASS_1_54D5CCE1D19D93EF_GET_AVATARLEVEL_OFFSET UNITYSDK_OFFSET(0x8930E00)
#define CLASS_1_54D5CCE1D19D93EF_METHOD_1_169C9AE8F88E4F64_OFFSET UNITYSDK_OFFSET(0x8930D40)
#define CLASS_1_54D5CCE1D19D93EF_METHOD_1_4DDD3DE2D159DC6E_OFFSET UNITYSDK_OFFSET(0x89309E0)
#define CLASS_1_54D5CCE1D19D93EF_SET_AVATARID_OFFSET UNITYSDK_OFFSET(0x8930DF0)
#define CLASS_1_54D5CCE1D19D93EF_SET_AVATARLEVEL_OFFSET UNITYSDK_OFFSET(0x8930E10)
#define CLASS_1_54D5CCE1D19D93EF__CTOR_OFFSET UNITYSDK_OFFSET(0x8930DD0)

inline static constexpr unsigned int Class_1_54D5CCE1D19D93EF_TypeDefinitionIndex = 54311;

class Class_1_54D5CCE1D19D93EF : public ::System::Object
{
public:
	::System::UInt32 _AvatarId_k__BackingField; // 0x10
	::System::UInt32 _AvatarLevel_k__BackingField; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54D5CCE1D19D93EF__CTOR_OFFSET))(this);
	}

	static ::System::Collections::Generic::List_1<::Class_1_54D5CCE1D19D93EF*>* Method_1_4DDD3DE2D159DC6E(::System::Collections::Generic::IEnumerable_1<::Class_1_FA4F4A67B1C04320_8*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_54D5CCE1D19D93EF*>*(*)(::System::Collections::Generic::IEnumerable_1<::Class_1_FA4F4A67B1C04320_8*>*))((::PBYTE)hIl2Cpp + CLASS_1_54D5CCE1D19D93EF_METHOD_1_4DDD3DE2D159DC6E_OFFSET))(a1);
	}

	static ::Class_1_54D5CCE1D19D93EF* Method_1_169C9AE8F88E4F64(::Class_1_FA4F4A67B1C04320_8* a1)
	{
		return ((::Class_1_54D5CCE1D19D93EF*(*)(::Class_1_FA4F4A67B1C04320_8*))((::PBYTE)hIl2Cpp + CLASS_1_54D5CCE1D19D93EF_METHOD_1_169C9AE8F88E4F64_OFFSET))(a1);
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
