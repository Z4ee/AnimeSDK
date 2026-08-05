#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E894E54C3D94F028.h"
#include "unitysdk/Share/EAvatarSkillType.h"
#include "unitysdk/Struct_2_1862835F8661A21F_1273.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_11;
class Class_1_454F7A38128A75F1;
class Class_1_47EB23CB5C4B2615;
class Class_2_208CC9941471731A_141;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4D3AE486165B319D_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A5E2330)
#define CLASS_1_4D3AE486165B319D_METHOD_1_0922DC6B9987BD31_OFFSET UNITYSDK_OFFSET(0x1A5E2260)
#define CLASS_1_4D3AE486165B319D_METHOD_1_20F0A15C724866EA_OFFSET UNITYSDK_OFFSET(0x1A5E3690)
#define CLASS_1_4D3AE486165B319D_METHOD_1_2A067FD040A111BB_OFFSET UNITYSDK_OFFSET(0x1A5E3020)
#define CLASS_1_4D3AE486165B319D_METHOD_1_4BAF904FF2EE98B1_OFFSET UNITYSDK_OFFSET(0x1A5E3510)
#define CLASS_1_4D3AE486165B319D_METHOD_1_4EF900F57E40F298_OFFSET UNITYSDK_OFFSET(0x1A5E2D40)
#define CLASS_1_4D3AE486165B319D_METHOD_1_54B7EDBC93243995_OFFSET UNITYSDK_OFFSET(0x1A5E33E0)
#define CLASS_1_4D3AE486165B319D_METHOD_1_7BDC4FF250C66854_OFFSET UNITYSDK_OFFSET(0x1A5E2450)
#define CLASS_1_4D3AE486165B319D_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x1A5E2270)
#define CLASS_1_4D3AE486165B319D_METHOD_1_805C56F44231AEF9_OFFSET UNITYSDK_OFFSET(0x1A5E1D70)
#define CLASS_1_4D3AE486165B319D_METHOD_1_ABE7CF9FA1B8CCA3_OFFSET UNITYSDK_OFFSET(0x1A5E1F70)
#define CLASS_1_4D3AE486165B319D_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x1A5E2BA0)
#define CLASS_1_4D3AE486165B319D_METHOD_1_C70C8176486DAEF5_OFFSET UNITYSDK_OFFSET(0x1A5E23A0)
#define CLASS_1_4D3AE486165B319D_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1A5E1D50)
#define CLASS_1_4D3AE486165B319D_METHOD_1_E82F703EB8AA2E89_OFFSET UNITYSDK_OFFSET(0x1A5E3260)
#define CLASS_1_4D3AE486165B319D_METHOD_1_F64DECD888E32669_OFFSET UNITYSDK_OFFSET(0x1A5E2F50)
#define CLASS_1_4D3AE486165B319D_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x1A5E3670)
#define CLASS_1_4D3AE486165B319D__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5E2C80)

inline static constexpr unsigned int Class_1_4D3AE486165B319D_TypeDefinitionIndex = 14685;

class Class_1_4D3AE486165B319D : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_6; // 0x10
	::Il2CppArray<::Class_2_208CC9941471731A_141*>* Field_1_7; // 0x18
	::Struct_2_1862835F8661A21F_1273 Field_1_0; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_5; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_47EB23CB5C4B2615*>* Field_1_1; // 0x40
	::System::Boolean Field_1_11; // 0x48
	::System::Int32 Field_1_4; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D3AE486165B319D__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D3AE486165B319D_METHOD_1_CE34EA208837238D_OFFSET))(this);
	}

	::System::Void Method_1_805C56F44231AEF9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D3AE486165B319D_METHOD_1_805C56F44231AEF9_OFFSET))(this);
	}

	::System::Void Method_1_ABE7CF9FA1B8CCA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D3AE486165B319D_METHOD_1_ABE7CF9FA1B8CCA3_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D3AE486165B319D_FINALIZE_OFFSET))(this);
	}

	::System::Void Method_1_C70C8176486DAEF5(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_4D3AE486165B319D_METHOD_1_C70C8176486DAEF5_OFFSET))(this, a1);
	}

	::System::Void Method_1_0922DC6B9987BD31(::Enum_3_E894E54C3D94F028 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E894E54C3D94F028))((::PBYTE)hIl2Cpp + CLASS_1_4D3AE486165B319D_METHOD_1_0922DC6B9987BD31_OFFSET))(this, a1);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D3AE486165B319D_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_141* Method_1_4EF900F57E40F298(::System::Int32 a1, ::Share::EAvatarSkillType a2, ::System::Byte a3, ::System::Int32 a4)
	{
		return ((::Class_2_208CC9941471731A_141*(*)(::PVOID, ::System::Int32, ::Share::EAvatarSkillType, ::System::Byte, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4D3AE486165B319D_METHOD_1_4EF900F57E40F298_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_7BDC4FF250C66854(::System::Func_2<::Class_0_16E4307DCC419505_11*, ::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_2<::Class_0_16E4307DCC419505_11*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_4D3AE486165B319D_METHOD_1_7BDC4FF250C66854_OFFSET))(this, a1);
	}

	::System::Byte Method_1_2A067FD040A111BB(::System::Int32 a1, ::Share::EAvatarSkillType a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Byte(*)(::PVOID, ::System::Int32, ::Share::EAvatarSkillType, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4D3AE486165B319D_METHOD_1_2A067FD040A111BB_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Byte Method_1_E82F703EB8AA2E89(::System::Int32 a1, ::Share::EAvatarSkillType a2, ::System::Int32 a3)
	{
		return ((::System::Byte(*)(::PVOID, ::System::Int32, ::Share::EAvatarSkillType, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4D3AE486165B319D_METHOD_1_E82F703EB8AA2E89_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_141*>* Method_1_54B7EDBC93243995(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_141*>*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4D3AE486165B319D_METHOD_1_54B7EDBC93243995_OFFSET))(this, a1, a2);
	}

	::Class_1_454F7A38128A75F1* Method_1_4BAF904FF2EE98B1(::System::Int32 a1, ::Share::EAvatarSkillType a2, ::System::Int32 a3)
	{
		return ((::Class_1_454F7A38128A75F1*(*)(::PVOID, ::System::Int32, ::Share::EAvatarSkillType, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4D3AE486165B319D_METHOD_1_4BAF904FF2EE98B1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D3AE486165B319D_METHOD_1_F730968E2645E14B_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_141* Method_1_20F0A15C724866EA(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_141*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4D3AE486165B319D_METHOD_1_20F0A15C724866EA_OFFSET))(this, a1);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D3AE486165B319D_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_2_208CC9941471731A_141*>* Method_1_F64DECD888E32669()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_2_208CC9941471731A_141*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D3AE486165B319D_METHOD_1_F64DECD888E32669_OFFSET))(this);
	}
};
