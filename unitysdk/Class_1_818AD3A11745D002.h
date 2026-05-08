#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E894E54C3D94F028.h"
#include "unitysdk/Struct_2_1862835F8661A21F_1369.h"
#include "unitysdk/System/Object.h"

class Class_2_F346500DFC680A13;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_818AD3A11745D002_FINALIZE_OFFSET UNITYSDK_OFFSET(0x166DCC80)
#define CLASS_1_818AD3A11745D002_METHOD_1_0BC1CE8D82DA19B9_OFFSET UNITYSDK_OFFSET(0x166DD0E0)
#define CLASS_1_818AD3A11745D002_METHOD_1_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x166DC680)
#define CLASS_1_818AD3A11745D002_METHOD_1_23EB03BEE8CB9D74_OFFSET UNITYSDK_OFFSET(0x166DCE00)
#define CLASS_1_818AD3A11745D002_METHOD_1_3BC6B414068B5B5A_OFFSET UNITYSDK_OFFSET(0x166DCE40)
#define CLASS_1_818AD3A11745D002_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x166DCA20)
#define CLASS_1_818AD3A11745D002_METHOD_1_43D99DDD80B1E30C_OFFSET UNITYSDK_OFFSET(0x166DC940)
#define CLASS_1_818AD3A11745D002_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x166DCAE0)
#define CLASS_1_818AD3A11745D002_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x166DCBA0)
#define CLASS_1_818AD3A11745D002_METHOD_1_C70C8176486DAEF5_OFFSET UNITYSDK_OFFSET(0x166DCA30)
#define CLASS_1_818AD3A11745D002_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x166DC660)
#define CLASS_1_818AD3A11745D002_METHOD_1_F64DECD888E32669_OFFSET UNITYSDK_OFFSET(0x166DD300)
#define CLASS_1_818AD3A11745D002_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x166DD0C0)
#define CLASS_1_818AD3A11745D002__CTOR_OFFSET UNITYSDK_OFFSET(0x166DCDB0)

inline static constexpr unsigned int Class_1_818AD3A11745D002_TypeDefinitionIndex = 18193;

class Class_1_818AD3A11745D002 : public ::System::Object
{
public:
	::Struct_2_1862835F8661A21F_1369 Field_1_0; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_3; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_2; // 0x30
	::Il2CppArray<::Class_2_F346500DFC680A13*>* Field_1_1; // 0x38
	::System::Boolean Field_1_5; // 0x40
	::System::Int32 Field_1_4; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_818AD3A11745D002__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_818AD3A11745D002_METHOD_1_CE34EA208837238D_OFFSET))(this);
	}

	::System::Void Method_1_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_818AD3A11745D002_METHOD_1_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_1_C70C8176486DAEF5(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_818AD3A11745D002_METHOD_1_C70C8176486DAEF5_OFFSET))(this, a1);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_E894E54C3D94F028 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E894E54C3D94F028))((::PBYTE)hIl2Cpp + CLASS_1_818AD3A11745D002_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Void Method_1_43D99DDD80B1E30C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_818AD3A11745D002_METHOD_1_43D99DDD80B1E30C_OFFSET))(this);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_818AD3A11745D002_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_818AD3A11745D002_FINALIZE_OFFSET))(this);
	}

	::System::Void Method_1_23EB03BEE8CB9D74(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_818AD3A11745D002_METHOD_1_23EB03BEE8CB9D74_OFFSET))(this, a1, a2);
	}

	::Class_2_F346500DFC680A13* Method_1_3BC6B414068B5B5A(::System::Int32 a1)
	{
		return ((::Class_2_F346500DFC680A13*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_818AD3A11745D002_METHOD_1_3BC6B414068B5B5A_OFFSET))(this, a1);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_818AD3A11745D002_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_818AD3A11745D002_METHOD_1_F730968E2645E14B_OFFSET))(this);
	}

	::Class_2_F346500DFC680A13* Method_1_0BC1CE8D82DA19B9(::System::Int32 a1)
	{
		return ((::Class_2_F346500DFC680A13*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_818AD3A11745D002_METHOD_1_0BC1CE8D82DA19B9_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_2_F346500DFC680A13*>* Method_1_F64DECD888E32669()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_2_F346500DFC680A13*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_818AD3A11745D002_METHOD_1_F64DECD888E32669_OFFSET))(this);
	}
};
