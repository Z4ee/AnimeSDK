#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_35.h"
#include "unitysdk/System/Object.h"

class Class_1_1CBA230307F9C289_90;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1826B7898EFE06BA_METHOD_1_36A43EE474699637_OFFSET UNITYSDK_OFFSET(0x14D8BE40)
#define CLASS_1_1826B7898EFE06BA_METHOD_1_389486378BEF2498_OFFSET UNITYSDK_OFFSET(0x14D8C1E0)
#define CLASS_1_1826B7898EFE06BA_METHOD_1_3BEE013982122797_OFFSET UNITYSDK_OFFSET(0x14D8BCE0)
#define CLASS_1_1826B7898EFE06BA_METHOD_1_68DA3F8325D873C1_OFFSET UNITYSDK_OFFSET(0x14D8BFB0)
#define CLASS_1_1826B7898EFE06BA_METHOD_1_70F9AF56CA31874A_OFFSET UNITYSDK_OFFSET(0x14D8B940)
#define CLASS_1_1826B7898EFE06BA__CTOR_OFFSET UNITYSDK_OFFSET(0x14D8C270)

inline static constexpr unsigned int Class_1_1826B7898EFE06BA_TypeDefinitionIndex = 54316;

class Class_1_1826B7898EFE06BA : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Enum_3_4608E37A1B3D374A_35>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::Enum_3_4608E37A1B3D374A_35, ::System::Collections::Generic::List_1<::System::UInt32>*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1826B7898EFE06BA__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_70F9AF56CA31874A(::System::Collections::Generic::IList_1<::Class_1_1CBA230307F9C289_90*>* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_1CBA230307F9C289_90*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1826B7898EFE06BA_METHOD_1_70F9AF56CA31874A_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_3BEE013982122797()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1826B7898EFE06BA_METHOD_1_3BEE013982122797_OFFSET))(this);
	}

	::System::Void Method_1_36A43EE474699637()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1826B7898EFE06BA_METHOD_1_36A43EE474699637_OFFSET))(this);
	}

	::System::Void Method_1_68DA3F8325D873C1(::Enum_3_4608E37A1B3D374A_35 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_4608E37A1B3D374A_35, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1826B7898EFE06BA_METHOD_1_68DA3F8325D873C1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_389486378BEF2498(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1826B7898EFE06BA_METHOD_1_389486378BEF2498_OFFSET))(this, a1);
	}
};
