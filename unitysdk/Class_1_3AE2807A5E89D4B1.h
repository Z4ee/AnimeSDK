#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E894E54C3D94F028.h"
#include "unitysdk/Share/EAvatarSkillType.h"
#include "unitysdk/Struct_2_1862835F8661A21F_286.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_12;
class Class_1_3AE2807A5E89D4B1_Class_1_81585F71FCC163D4;
class Class_2_208CC9941471731A_707;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_3AE2807A5E89D4B1_FINALIZE_OFFSET UNITYSDK_OFFSET(0x14F0C7F0)
#define CLASS_1_3AE2807A5E89D4B1_METHOD_1_0922DC6B9987BD31_OFFSET UNITYSDK_OFFSET(0x14F0AE70)
#define CLASS_1_3AE2807A5E89D4B1_METHOD_1_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x14F0AAB0)
#define CLASS_1_3AE2807A5E89D4B1_METHOD_1_20F0A15C724866EA_OFFSET UNITYSDK_OFFSET(0x14F0CAD0)
#define CLASS_1_3AE2807A5E89D4B1_METHOD_1_43D99DDD80B1E30C_OFFSET UNITYSDK_OFFSET(0x14F0AD80)
#define CLASS_1_3AE2807A5E89D4B1_METHOD_1_7BDC4FF250C66854_OFFSET UNITYSDK_OFFSET(0x14F0B020)
#define CLASS_1_3AE2807A5E89D4B1_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x14F0C650)
#define CLASS_1_3AE2807A5E89D4B1_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x14F0C710)
#define CLASS_1_3AE2807A5E89D4B1_METHOD_1_C0D14E1EE42F5DBB_OFFSET UNITYSDK_OFFSET(0x14F0CCE0)
#define CLASS_1_3AE2807A5E89D4B1_METHOD_1_C64F3CA8A6C36FAC_OFFSET UNITYSDK_OFFSET(0x14F0AE80)
#define CLASS_1_3AE2807A5E89D4B1_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x14F0AA90)
#define CLASS_1_3AE2807A5E89D4B1_METHOD_1_F64DECD888E32669_OFFSET UNITYSDK_OFFSET(0x14F0C9E0)
#define CLASS_1_3AE2807A5E89D4B1_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x14F0CAB0)
#define CLASS_1_3AE2807A5E89D4B1__CTOR_OFFSET UNITYSDK_OFFSET(0x14F0C920)

inline static constexpr unsigned int Class_1_3AE2807A5E89D4B1_TypeDefinitionIndex = 15689;

class Class_1_3AE2807A5E89D4B1 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_2; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_3AE2807A5E89D4B1_Class_1_81585F71FCC163D4*>* Field_1_6; // 0x18
	::Struct_2_1862835F8661A21F_286 Field_1_0; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_3; // 0x38
	::Il2CppArray<::Class_2_208CC9941471731A_707*>* Field_1_1; // 0x40
	::System::Boolean Field_1_5; // 0x48
	::System::Int32 Field_1_4; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AE2807A5E89D4B1__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AE2807A5E89D4B1_METHOD_1_CE34EA208837238D_OFFSET))(this);
	}

	::System::Void Method_1_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AE2807A5E89D4B1_METHOD_1_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_1_C64F3CA8A6C36FAC(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_3AE2807A5E89D4B1_METHOD_1_C64F3CA8A6C36FAC_OFFSET))(this, a1);
	}

	::System::Void Method_1_0922DC6B9987BD31(::Enum_3_E894E54C3D94F028 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E894E54C3D94F028))((::PBYTE)hIl2Cpp + CLASS_1_3AE2807A5E89D4B1_METHOD_1_0922DC6B9987BD31_OFFSET))(this, a1);
	}

	::System::Void Method_1_43D99DDD80B1E30C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AE2807A5E89D4B1_METHOD_1_43D99DDD80B1E30C_OFFSET))(this);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AE2807A5E89D4B1_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AE2807A5E89D4B1_FINALIZE_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_2_208CC9941471731A_707*>* Method_1_F64DECD888E32669()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_2_208CC9941471731A_707*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AE2807A5E89D4B1_METHOD_1_F64DECD888E32669_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_707* Method_1_20F0A15C724866EA(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_707*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3AE2807A5E89D4B1_METHOD_1_20F0A15C724866EA_OFFSET))(this, a1);
	}

	::System::Void Method_1_7BDC4FF250C66854(::System::Func_2<::Class_0_16E4307DCC419505_12*, ::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_2<::Class_0_16E4307DCC419505_12*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_3AE2807A5E89D4B1_METHOD_1_7BDC4FF250C66854_OFFSET))(this, a1);
	}

	::Class_2_208CC9941471731A_707* Method_1_C0D14E1EE42F5DBB(::System::Int32 a1, ::Share::EAvatarSkillType a2, ::System::Byte a3, ::System::Int32 a4)
	{
		return ((::Class_2_208CC9941471731A_707*(*)(::PVOID, ::System::Int32, ::Share::EAvatarSkillType, ::System::Byte, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3AE2807A5E89D4B1_METHOD_1_C0D14E1EE42F5DBB_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AE2807A5E89D4B1_METHOD_1_F730968E2645E14B_OFFSET))(this);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AE2807A5E89D4B1_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}
};
