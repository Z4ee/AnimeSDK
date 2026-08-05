#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E894E54C3D94F028.h"
#include "unitysdk/Struct_2_1862835F8661A21F_23.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_1143;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_2A5B84EB0408F969_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19A25710)
#define CLASS_1_2A5B84EB0408F969_METHOD_1_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x19A252A0)
#define CLASS_1_2A5B84EB0408F969_METHOD_1_2A6E7D1FAC31CA47_OFFSET UNITYSDK_OFFSET(0x19A25A20)
#define CLASS_1_2A5B84EB0408F969_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x19A25640)
#define CLASS_1_2A5B84EB0408F969_METHOD_1_43D99DDD80B1E30C_OFFSET UNITYSDK_OFFSET(0x19A25560)
#define CLASS_1_2A5B84EB0408F969_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x19A25650)
#define CLASS_1_2A5B84EB0408F969_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x19A258F0)
#define CLASS_1_2A5B84EB0408F969_METHOD_1_C70C8176486DAEF5_OFFSET UNITYSDK_OFFSET(0x19A25840)
#define CLASS_1_2A5B84EB0408F969_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x19A25280)
#define CLASS_1_2A5B84EB0408F969__CTOR_OFFSET UNITYSDK_OFFSET(0x19A259D0)

inline static constexpr unsigned int Class_1_2A5B84EB0408F969_TypeDefinitionIndex = 17478;

class Class_1_2A5B84EB0408F969 : public ::System::Object
{
public:
	::Il2CppArray<::Class_2_208CC9941471731A_1143*>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_7; // 0x18
	::Struct_2_1862835F8661A21F_23 Field_1_1; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_6; // 0x38
	::System::Boolean Field_1_4; // 0x40
	::System::Int32 Field_1_5; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A5B84EB0408F969__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A5B84EB0408F969_METHOD_1_CE34EA208837238D_OFFSET))(this);
	}

	::System::Void Method_1_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A5B84EB0408F969_METHOD_1_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_1_43D99DDD80B1E30C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A5B84EB0408F969_METHOD_1_43D99DDD80B1E30C_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A5B84EB0408F969_FINALIZE_OFFSET))(this);
	}

	::System::Void Method_1_C70C8176486DAEF5(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2A5B84EB0408F969_METHOD_1_C70C8176486DAEF5_OFFSET))(this, a1);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_E894E54C3D94F028 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E894E54C3D94F028))((::PBYTE)hIl2Cpp + CLASS_1_2A5B84EB0408F969_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A5B84EB0408F969_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_1143* Method_1_2A6E7D1FAC31CA47(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_1143*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2A5B84EB0408F969_METHOD_1_2A6E7D1FAC31CA47_OFFSET))(this, a1);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A5B84EB0408F969_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}
};
