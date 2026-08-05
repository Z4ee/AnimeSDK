#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_482B1CDFE28F622E.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_43BD383C98B4C0C5_147;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
template <typename T> class Class_1_96DBACFE0236B90C;

#define CLASS_1_6EC4760F8C9D296B_METHOD_1_09A39B89545FE101_OFFSET UNITYSDK_OFFSET(0x1E077440)
#define CLASS_1_6EC4760F8C9D296B_METHOD_1_45BC362BACFA09AB_OFFSET UNITYSDK_OFFSET(0x1E0774D0)
#define CLASS_1_6EC4760F8C9D296B_METHOD_1_99A3BE2297ABEE6F_OFFSET UNITYSDK_OFFSET(0x1E077580)
#define CLASS_1_6EC4760F8C9D296B_METHOD_1_B6E1E22E39243FBD_OFFSET UNITYSDK_OFFSET(0x1E077630)
#define CLASS_1_6EC4760F8C9D296B_METHOD_1_DB1F6A3CBE58EF76_OFFSET UNITYSDK_OFFSET(0x1E077300)
#define CLASS_1_6EC4760F8C9D296B__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E077250)
#define CLASS_1_6EC4760F8C9D296B__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0772F0)

inline static constexpr unsigned int Class_1_6EC4760F8C9D296B_TypeDefinitionIndex = 91715;

class Class_1_6EC4760F8C9D296B : public ::System::Object
{
public:
	// static const ::System::String* Field_1_1; // 0x0
	// static const ::System::Int32 Field_1_0 = 0x7FFFFFFF; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6EC4760F8C9D296B__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EC4760F8C9D296B__CTOR_OFFSET))(this);
	}

	static ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_3<::System::String*, ::Class_1_43BD383C98B4C0C5_147*, ::System::Int32>>* Method_1_DB1F6A3CBE58EF76()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_3<::System::String*, ::Class_1_43BD383C98B4C0C5_147*, ::System::Int32>>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_6EC4760F8C9D296B_METHOD_1_DB1F6A3CBE58EF76_OFFSET))();
	}

	static ::System::Int32 Method_1_09A39B89545FE101()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_6EC4760F8C9D296B_METHOD_1_09A39B89545FE101_OFFSET))();
	}

	static ::Class_1_43BD383C98B4C0C5_147* Method_1_45BC362BACFA09AB(::System::String* a1)
	{
		return ((::Class_1_43BD383C98B4C0C5_147*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6EC4760F8C9D296B_METHOD_1_45BC362BACFA09AB_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_99A3BE2297ABEE6F(::System::String* a1)
	{
		return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6EC4760F8C9D296B_METHOD_1_99A3BE2297ABEE6F_OFFSET))(a1);
	}

	static ::Class_1_96DBACFE0236B90C<::Enum_3_482B1CDFE28F622E>* Method_1_B6E1E22E39243FBD()
	{
		return ((::Class_1_96DBACFE0236B90C<::Enum_3_482B1CDFE28F622E>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_6EC4760F8C9D296B_METHOD_1_B6E1E22E39243FBD_OFFSET))();
	}
};
