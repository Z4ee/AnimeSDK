#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/NativeMemoryRequestHandle.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/Struct_2_60DB83E0FA9E5BFC.h"
#include "unitysdk/Struct_2_6402D4A3EAB8BDC8.h"
#include "unitysdk/Struct_2_ACD0EF80A5330786.h"
#include "unitysdk/Struct_2_F0CFA50094D8FF32_Struct_2_D2AF02AB9D5157BD.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace Foundation { class NameValueContainerBuilder; }
namespace Foundation { class NativeMemory; }
namespace Foundation { class NativeMemoryBuilder; }
namespace MoleMole::Photo { class BoneSocketConfig; }
namespace MoleMole::Photo { class ReferenceSkeletonConfig; }
namespace MoleMole::Photo { class Skeleton; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_DC1272DAD90AE74E_METHOD_1_170484CF64D444FC_OFFSET UNITYSDK_OFFSET(0xF295E50)
#define CLASS_1_DC1272DAD90AE74E_METHOD_1_805A1176D6D48274_OFFSET UNITYSDK_OFFSET(0xF2977F0)
#define CLASS_1_DC1272DAD90AE74E_METHOD_1_976F2D84A4D5D9B7_OFFSET UNITYSDK_OFFSET(0xF298E90)
#define CLASS_1_DC1272DAD90AE74E_METHOD_1_D27A045D6D2D7121_OFFSET UNITYSDK_OFFSET(0xF297B40)
#define CLASS_1_DC1272DAD90AE74E_METHOD_1_E1270750936A4EA2_OFFSET UNITYSDK_OFFSET(0xF297D20)
#define CLASS_1_DC1272DAD90AE74E_METHOD_1_E8AC0942E184E7D0_OFFSET UNITYSDK_OFFSET(0xF295D50)
#define CLASS_1_DC1272DAD90AE74E__CTOR_1_OFFSET UNITYSDK_OFFSET(0xF295CD0)
#define CLASS_1_DC1272DAD90AE74E__CTOR_OFFSET UNITYSDK_OFFSET(0xF295C50)

inline static constexpr unsigned int Class_1_DC1272DAD90AE74E_TypeDefinitionIndex = 45508;

class Class_1_DC1272DAD90AE74E : public ::System::Object
{
public:
	::Foundation::NameValueContainerBuilder* Field_1_3; // 0x10
	::MoleMole::Photo::ReferenceSkeletonConfig* Field_1_0; // 0x18
	::Foundation::NameValueContainerBuilder* Field_1_1; // 0x20
	::Il2CppArray<::Foundation::NativeMemoryRequestHandle>* Field_1_4; // 0x28
	::System::Collections::Generic::Dictionary_2<::Foundation::Unreal::FName, ::System::ValueTuple_2<::Struct_2_F0CFA50094D8FF32_Struct_2_D2AF02AB9D5157BD, ::Struct_2_6402D4A3EAB8BDC8>>* Field_1_2; // 0x30
	::Struct_2_60DB83E0FA9E5BFC Field_1_5; // 0x38

	::System::Void _ctor(::MoleMole::Photo::ReferenceSkeletonConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Photo::ReferenceSkeletonConfig*))((::PBYTE)hIl2Cpp + CLASS_1_DC1272DAD90AE74E__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC1272DAD90AE74E__CTOR_1_OFFSET))(this);
	}

	::System::Void Method_1_E8AC0942E184E7D0(::Foundation::NativeMemoryBuilder* a1, ::MoleMole::Photo::Skeleton* a2, ::System::String*& a3)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::NativeMemoryBuilder*, ::MoleMole::Photo::Skeleton*, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_DC1272DAD90AE74E_METHOD_1_E8AC0942E184E7D0_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_805A1176D6D48274(::Foundation::NativeMemoryBuilder* a1, ::System::String*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::NativeMemoryBuilder*, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_DC1272DAD90AE74E_METHOD_1_805A1176D6D48274_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_170484CF64D444FC(::Foundation::NativeMemoryBuilder* a1, ::System::String*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::NativeMemoryBuilder*, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_DC1272DAD90AE74E_METHOD_1_170484CF64D444FC_OFFSET))(this, a1, a2);
	}

	::Struct_2_ACD0EF80A5330786 Method_1_E1270750936A4EA2(::Foundation::NativeMemory* a1, ::System::String*& a2)
	{
		return ((::Struct_2_ACD0EF80A5330786(*)(::PVOID, ::Foundation::NativeMemory*, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_DC1272DAD90AE74E_METHOD_1_E1270750936A4EA2_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_976F2D84A4D5D9B7(::MoleMole::Photo::BoneSocketConfig* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Photo::BoneSocketConfig*))((::PBYTE)hIl2Cpp + CLASS_1_DC1272DAD90AE74E_METHOD_1_976F2D84A4D5D9B7_OFFSET))(this, a1);
	}

	::Struct_2_6402D4A3EAB8BDC8 Method_1_D27A045D6D2D7121(::Foundation::Unreal::FName a1)
	{
		return ((::Struct_2_6402D4A3EAB8BDC8(*)(::PVOID, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + CLASS_1_DC1272DAD90AE74E_METHOD_1_D27A045D6D2D7121_OFFSET))(this, a1);
	}
};
