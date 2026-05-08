#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E894E54C3D94F028.h"
#include "unitysdk/Struct_2_1862835F8661A21F_1200.h"
#include "unitysdk/System/Object.h"

class Class_2_534AF681CC2BD5FD_219;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_DD0A0EC16F855C77_FINALIZE_OFFSET UNITYSDK_OFFSET(0x13A77AC0)
#define CLASS_1_DD0A0EC16F855C77_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x13A77820)
#define CLASS_1_DD0A0EC16F855C77_METHOD_1_43D99DDD80B1E30C_OFFSET UNITYSDK_OFFSET(0x13A77830)
#define CLASS_1_DD0A0EC16F855C77_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x13A77920)
#define CLASS_1_DD0A0EC16F855C77_METHOD_1_805C56F44231AEF9_OFFSET UNITYSDK_OFFSET(0x18985BA0)
#define CLASS_1_DD0A0EC16F855C77_METHOD_1_8A2D907B45D889C8_OFFSET UNITYSDK_OFFSET(0x18985D90)
#define CLASS_1_DD0A0EC16F855C77_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x13A779E0)
#define CLASS_1_DD0A0EC16F855C77_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18985B80)
#define CLASS_1_DD0A0EC16F855C77__CTOR_OFFSET UNITYSDK_OFFSET(0x13A77BF0)

inline static constexpr unsigned int Class_1_DD0A0EC16F855C77_TypeDefinitionIndex = 15303;

class Class_1_DD0A0EC16F855C77 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_2; // 0x10
	::Struct_2_1862835F8661A21F_1200 Field_1_0; // 0x18
	::Il2CppArray<::Class_2_534AF681CC2BD5FD_219*>* Field_1_1; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_3; // 0x38
	::System::Boolean Field_1_5; // 0x40
	::System::Int32 Field_1_4; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD0A0EC16F855C77__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD0A0EC16F855C77_METHOD_1_CE34EA208837238D_OFFSET))(this);
	}

	::System::Void Method_1_805C56F44231AEF9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD0A0EC16F855C77_METHOD_1_805C56F44231AEF9_OFFSET))(this);
	}

	::System::Void Method_1_8A2D907B45D889C8(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_DD0A0EC16F855C77_METHOD_1_8A2D907B45D889C8_OFFSET))(this, a1);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_E894E54C3D94F028 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E894E54C3D94F028))((::PBYTE)hIl2Cpp + CLASS_1_DD0A0EC16F855C77_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Void Method_1_43D99DDD80B1E30C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD0A0EC16F855C77_METHOD_1_43D99DDD80B1E30C_OFFSET))(this);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD0A0EC16F855C77_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD0A0EC16F855C77_FINALIZE_OFFSET))(this);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD0A0EC16F855C77_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}
};
