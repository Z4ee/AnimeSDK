#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E894E54C3D94F028.h"
#include "unitysdk/Struct_2_1862835F8661A21F_1490.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_1129;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_45A8CC014B0955AB_FINALIZE_OFFSET UNITYSDK_OFFSET(0x195E6370)
#define CLASS_1_45A8CC014B0955AB_METHOD_1_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x195E5850)
#define CLASS_1_45A8CC014B0955AB_METHOD_1_20F0A15C724866EA_OFFSET UNITYSDK_OFFSET(0x195E6540)
#define CLASS_1_45A8CC014B0955AB_METHOD_1_292CC34C78A58E6F_OFFSET UNITYSDK_OFFSET(0x195E6770)
#define CLASS_1_45A8CC014B0955AB_METHOD_1_43D99DDD80B1E30C_OFFSET UNITYSDK_OFFSET(0x195E5B20)
#define CLASS_1_45A8CC014B0955AB_METHOD_1_6009B3D36692BE0F_OFFSET UNITYSDK_OFFSET(0x195E5C10)
#define CLASS_1_45A8CC014B0955AB_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x195E61D0)
#define CLASS_1_45A8CC014B0955AB_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x195E6290)
#define CLASS_1_45A8CC014B0955AB_METHOD_1_C64F3CA8A6C36FAC_OFFSET UNITYSDK_OFFSET(0x195E5F60)
#define CLASS_1_45A8CC014B0955AB_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x195E5830)
#define CLASS_1_45A8CC014B0955AB_METHOD_1_F64DECD888E32669_OFFSET UNITYSDK_OFFSET(0x195E6100)
#define CLASS_1_45A8CC014B0955AB_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x195E6750)
#define CLASS_1_45A8CC014B0955AB__CCTOR_OFFSET UNITYSDK_OFFSET(0x195E64F0)
#define CLASS_1_45A8CC014B0955AB__CTOR_OFFSET UNITYSDK_OFFSET(0x195E64A0)

inline static constexpr unsigned int Class_1_45A8CC014B0955AB_TypeDefinitionIndex = 16832;

class Class_1_45A8CC014B0955AB : public ::System::Object
{
public:
	static ::System::Collections::Generic::HashSet_1<::System::Int32>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::HashSet_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45A8CC014B0955AB_TypeDefinitionIndex)->GetStaticField(0x79C0);
	}
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_6; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_7; // 0x18
	::Struct_2_1862835F8661A21F_1490 Field_1_1; // 0x20
	::Il2CppArray<::Class_2_208CC9941471731A_1129*>* Field_1_0; // 0x38
	::System::Boolean Field_1_4; // 0x40
	::System::Int32 Field_1_5; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45A8CC014B0955AB__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_45A8CC014B0955AB__CCTOR_OFFSET))();
	}

	::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45A8CC014B0955AB_METHOD_1_CE34EA208837238D_OFFSET))(this);
	}

	::System::Void Method_1_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45A8CC014B0955AB_METHOD_1_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_1_C64F3CA8A6C36FAC(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_45A8CC014B0955AB_METHOD_1_C64F3CA8A6C36FAC_OFFSET))(this, a1);
	}

	::System::Void Method_1_6009B3D36692BE0F(::Enum_3_E894E54C3D94F028 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E894E54C3D94F028))((::PBYTE)hIl2Cpp + CLASS_1_45A8CC014B0955AB_METHOD_1_6009B3D36692BE0F_OFFSET))(this, a1);
	}

	::System::Void Method_1_43D99DDD80B1E30C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45A8CC014B0955AB_METHOD_1_43D99DDD80B1E30C_OFFSET))(this);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45A8CC014B0955AB_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45A8CC014B0955AB_FINALIZE_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_1129* Method_1_20F0A15C724866EA(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_1129*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_45A8CC014B0955AB_METHOD_1_20F0A15C724866EA_OFFSET))(this, a1);
	}

	::Class_2_208CC9941471731A_1129* Method_1_292CC34C78A58E6F(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_1129*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_45A8CC014B0955AB_METHOD_1_292CC34C78A58E6F_OFFSET))(this, a1);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45A8CC014B0955AB_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_2_208CC9941471731A_1129*>* Method_1_F64DECD888E32669()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_2_208CC9941471731A_1129*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45A8CC014B0955AB_METHOD_1_F64DECD888E32669_OFFSET))(this);
	}

	::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45A8CC014B0955AB_METHOD_1_F730968E2645E14B_OFFSET))(this);
	}
};
