#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E894E54C3D94F028.h"
#include "unitysdk/Share/EAvatarSkillType.h"
#include "unitysdk/Struct_2_1862835F8661A21F_969.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_12;
class Class_1_49FD0F6EAEE79D37_Class_1_DB8F09D3E86642D5;
class Class_1_FE222B85F7CE3D1B;
class Class_2_208CC9941471731A_532;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_49FD0F6EAEE79D37_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1AC93E50)
#define CLASS_1_49FD0F6EAEE79D37_METHOD_1_0922DC6B9987BD31_OFFSET UNITYSDK_OFFSET(0x1AC93D80)
#define CLASS_1_49FD0F6EAEE79D37_METHOD_1_0DE2AC97F6E0294F_1_OFFSET UNITYSDK_OFFSET(0x1AC95560)
#define CLASS_1_49FD0F6EAEE79D37_METHOD_1_0DE2AC97F6E0294F_OFFSET UNITYSDK_OFFSET(0x1AC94FE0)
#define CLASS_1_49FD0F6EAEE79D37_METHOD_1_20F0A15C724866EA_OFFSET UNITYSDK_OFFSET(0x1AC957B0)
#define CLASS_1_49FD0F6EAEE79D37_METHOD_1_2A825C55D51E3F8B_OFFSET UNITYSDK_OFFSET(0x1AC95250)
#define CLASS_1_49FD0F6EAEE79D37_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x1AC93D90)
#define CLASS_1_49FD0F6EAEE79D37_METHOD_1_805C56F44231AEF9_OFFSET UNITYSDK_OFFSET(0x1AC938E0)
#define CLASS_1_49FD0F6EAEE79D37_METHOD_1_ABE7CF9FA1B8CCA3_OFFSET UNITYSDK_OFFSET(0x1AC93AE0)
#define CLASS_1_49FD0F6EAEE79D37_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x1AC94DE0)
#define CLASS_1_49FD0F6EAEE79D37_METHOD_1_C70C8176486DAEF5_OFFSET UNITYSDK_OFFSET(0x1AC93EC0)
#define CLASS_1_49FD0F6EAEE79D37_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1AC938C0)
#define CLASS_1_49FD0F6EAEE79D37_METHOD_1_F64DECD888E32669_OFFSET UNITYSDK_OFFSET(0x1AC94F10)
#define CLASS_1_49FD0F6EAEE79D37_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x1AC95230)
#define CLASS_1_49FD0F6EAEE79D37_METHOD_1_F9C55F6457D10A5D_OFFSET UNITYSDK_OFFSET(0x1AC93F70)
#define CLASS_1_49FD0F6EAEE79D37__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC94EC0)

inline static constexpr unsigned int Class_1_49FD0F6EAEE79D37_TypeDefinitionIndex = 14023;

class Class_1_49FD0F6EAEE79D37 : public ::System::Object
{
public:
	::Struct_2_1862835F8661A21F_969 Field_1_0; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_3; // 0x28
	::Il2CppArray<::Class_2_208CC9941471731A_532*>* Field_1_1; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_2; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_49FD0F6EAEE79D37_Class_1_DB8F09D3E86642D5*>* Field_1_6; // 0x40
	::System::Int32 Field_1_4; // 0x48
	::System::Boolean Field_1_5; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49FD0F6EAEE79D37__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49FD0F6EAEE79D37_METHOD_1_CE34EA208837238D_OFFSET))(this);
	}

	::System::Void Method_1_805C56F44231AEF9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49FD0F6EAEE79D37_METHOD_1_805C56F44231AEF9_OFFSET))(this);
	}

	::System::Void Method_1_ABE7CF9FA1B8CCA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49FD0F6EAEE79D37_METHOD_1_ABE7CF9FA1B8CCA3_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49FD0F6EAEE79D37_FINALIZE_OFFSET))(this);
	}

	::System::Void Method_1_C70C8176486DAEF5(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_49FD0F6EAEE79D37_METHOD_1_C70C8176486DAEF5_OFFSET))(this, a1);
	}

	::System::Void Method_1_0922DC6B9987BD31(::Enum_3_E894E54C3D94F028 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E894E54C3D94F028))((::PBYTE)hIl2Cpp + CLASS_1_49FD0F6EAEE79D37_METHOD_1_0922DC6B9987BD31_OFFSET))(this, a1);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49FD0F6EAEE79D37_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49FD0F6EAEE79D37_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Void Method_1_F9C55F6457D10A5D(::System::Func_2<::Class_0_16E4307DCC419505_12*, ::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_2<::Class_0_16E4307DCC419505_12*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_49FD0F6EAEE79D37_METHOD_1_F9C55F6457D10A5D_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_532*>* Method_1_0DE2AC97F6E0294F(::System::Int32 a1, ::Share::EAvatarSkillType a2, ::System::Int32 a3)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_532*>*(*)(::PVOID, ::System::Int32, ::Share::EAvatarSkillType, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_49FD0F6EAEE79D37_METHOD_1_0DE2AC97F6E0294F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49FD0F6EAEE79D37_METHOD_1_F730968E2645E14B_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_FE222B85F7CE3D1B*>* Method_1_2A825C55D51E3F8B(::System::Int32 a1, ::Share::EAvatarSkillType a2, ::System::Int32 a3)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_FE222B85F7CE3D1B*>*(*)(::PVOID, ::System::Int32, ::Share::EAvatarSkillType, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_49FD0F6EAEE79D37_METHOD_1_2A825C55D51E3F8B_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_2_208CC9941471731A_532*>* Method_1_F64DECD888E32669()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_2_208CC9941471731A_532*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49FD0F6EAEE79D37_METHOD_1_F64DECD888E32669_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_532* Method_1_20F0A15C724866EA(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_532*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_49FD0F6EAEE79D37_METHOD_1_20F0A15C724866EA_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_532*>* Method_1_0DE2AC97F6E0294F_1(::System::Int32 a1, ::Share::EAvatarSkillType a2, ::System::Int32 a3)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_532*>*(*)(::PVOID, ::System::Int32, ::Share::EAvatarSkillType, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_49FD0F6EAEE79D37_METHOD_1_0DE2AC97F6E0294F_1_OFFSET))(this, a1, a2, a3);
	}
};
