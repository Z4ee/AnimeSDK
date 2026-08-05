#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E894E54C3D94F028.h"
#include "unitysdk/Struct_2_1862835F8661A21F_502.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_66;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B2832B64B005662F_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17F7D730)
#define CLASS_1_B2832B64B005662F_METHOD_1_20F0A15C724866EA_OFFSET UNITYSDK_OFFSET(0x17F7DB40)
#define CLASS_1_B2832B64B005662F_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x17F7D590)
#define CLASS_1_B2832B64B005662F_METHOD_1_596FD8239C601ED8_OFFSET UNITYSDK_OFFSET(0x17F7CCA0)
#define CLASS_1_B2832B64B005662F_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x17F7D670)
#define CLASS_1_B2832B64B005662F_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x17F7D980)
#define CLASS_1_B2832B64B005662F_METHOD_1_C70C8176486DAEF5_OFFSET UNITYSDK_OFFSET(0x17F7D8D0)
#define CLASS_1_B2832B64B005662F_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x17F7CC80)
#define CLASS_1_B2832B64B005662F_METHOD_1_DDA8A2337932DF10_OFFSET UNITYSDK_OFFSET(0x17F7D430)
#define CLASS_1_B2832B64B005662F_METHOD_1_F64DECD888E32669_OFFSET UNITYSDK_OFFSET(0x17F7D5A0)
#define CLASS_1_B2832B64B005662F_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x17F7DB20)
#define CLASS_1_B2832B64B005662F__CTOR_OFFSET UNITYSDK_OFFSET(0x17F7DA60)

inline static constexpr unsigned int Class_1_B2832B64B005662F_TypeDefinitionIndex = 16834;

class Class_1_B2832B64B005662F : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_7; // 0x10
	::Struct_2_1862835F8661A21F_502 Field_1_1; // 0x18
	::Il2CppArray<::Class_2_208CC9941471731A_66*>* Field_1_0; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_66*>*>* Field_1_4; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_6; // 0x40
	::System::Boolean Field_1_11; // 0x48
	::System::Int32 Field_1_5; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B2832B64B005662F__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B2832B64B005662F_METHOD_1_CE34EA208837238D_OFFSET))(this);
	}

	::System::Void Method_1_596FD8239C601ED8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B2832B64B005662F_METHOD_1_596FD8239C601ED8_OFFSET))(this);
	}

	::System::Void Method_1_DDA8A2337932DF10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B2832B64B005662F_METHOD_1_DDA8A2337932DF10_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B2832B64B005662F_FINALIZE_OFFSET))(this);
	}

	::System::Void Method_1_C70C8176486DAEF5(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_B2832B64B005662F_METHOD_1_C70C8176486DAEF5_OFFSET))(this, a1);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_E894E54C3D94F028 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E894E54C3D94F028))((::PBYTE)hIl2Cpp + CLASS_1_B2832B64B005662F_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B2832B64B005662F_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_2_208CC9941471731A_66*>* Method_1_F64DECD888E32669()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_2_208CC9941471731A_66*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B2832B64B005662F_METHOD_1_F64DECD888E32669_OFFSET))(this);
	}

	::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B2832B64B005662F_METHOD_1_F730968E2645E14B_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_66* Method_1_20F0A15C724866EA(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_66*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B2832B64B005662F_METHOD_1_20F0A15C724866EA_OFFSET))(this, a1);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B2832B64B005662F_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}
};
