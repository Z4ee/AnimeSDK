#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_B190E1D15FBA12AE_Struct_2_A3D84ABDBC5CF665.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/Struct_2_395B739A1AC58399.h"
#include "unitysdk/Struct_2_3D5AD448B9E9356A.h"
#include "unitysdk/Struct_2_C3A9B4762CBE027D.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"

class Class_1_2AC45833F3CC8C86;
namespace MoleMole { class MonoBuddyStairAnimCorrector; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace Unity::Collections { template <typename T> class ManagedBlockQueue_1; }

#define CLASS_2_B190E1D15FBA12AE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x154FBFE0)
#define CLASS_2_B190E1D15FBA12AE_METHOD_2_00C844EC3E18A03E_OFFSET UNITYSDK_OFFSET(0x154FCCE0)
#define CLASS_2_B190E1D15FBA12AE_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x154FE340)
#define CLASS_2_B190E1D15FBA12AE_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x154FCE60)
#define CLASS_2_B190E1D15FBA12AE_METHOD_2_1D1DDF64ED78E801_OFFSET UNITYSDK_OFFSET(0x154FD900)
#define CLASS_2_B190E1D15FBA12AE_METHOD_2_24487D5165F3C6DC_OFFSET UNITYSDK_OFFSET(0x154FCA70)
#define CLASS_2_B190E1D15FBA12AE_METHOD_2_27DCE79024097D95_OFFSET UNITYSDK_OFFSET(0x154FC870)
#define CLASS_2_B190E1D15FBA12AE_METHOD_2_32A29E64875C6DDD_1_OFFSET UNITYSDK_OFFSET(0x154FE4A0)
#define CLASS_2_B190E1D15FBA12AE_METHOD_2_32A29E64875C6DDD_OFFSET UNITYSDK_OFFSET(0x154FC7F0)
#define CLASS_2_B190E1D15FBA12AE_METHOD_2_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x154FDAB0)
#define CLASS_2_B190E1D15FBA12AE_METHOD_2_56E8ED155DF34A44_OFFSET UNITYSDK_OFFSET(0x154FCFB0)
#define CLASS_2_B190E1D15FBA12AE_METHOD_2_5A124CAF1E48B74F_OFFSET UNITYSDK_OFFSET(0x154FDFC0)
#define CLASS_2_B190E1D15FBA12AE_METHOD_2_A44A18C9451109E4_OFFSET UNITYSDK_OFFSET(0x154FDD00)
#define CLASS_2_B190E1D15FBA12AE_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x154FC7A0)
#define CLASS_2_B190E1D15FBA12AE_METHOD_2_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x154FE2E0)
#define CLASS_2_B190E1D15FBA12AE_METHOD_2_E7D02C44C535B08E_OFFSET UNITYSDK_OFFSET(0x154FC360)
#define CLASS_2_B190E1D15FBA12AE_METHOD_2_F627A7F96C7927CA_OFFSET UNITYSDK_OFFSET(0x154FD380)
#define CLASS_2_B190E1D15FBA12AE_ONCREATE_OFFSET UNITYSDK_OFFSET(0x154FBE90)
#define CLASS_2_B190E1D15FBA12AE__CCTOR_OFFSET UNITYSDK_OFFSET(0x154FC340)
#define CLASS_2_B190E1D15FBA12AE__CTOR_OFFSET UNITYSDK_OFFSET(0x154FC330)

inline static constexpr unsigned int Class_2_B190E1D15FBA12AE_TypeDefinitionIndex = 61752;

class Class_2_B190E1D15FBA12AE : public ::Foundation::SingletonDisposable_1<::Class_2_B190E1D15FBA12AE*>
{
public:
	static ::System::Boolean* StaticGet_Field_2_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_B190E1D15FBA12AE_TypeDefinitionIndex)->GetStaticField(0xB1B0);
	}
	static ::System::Boolean* StaticGet_Field_2_5()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_B190E1D15FBA12AE_TypeDefinitionIndex)->GetStaticField(0xB1B1);
	}
	::Unity::Collections::ManagedBlockQueue_1<::Struct_2_3D5AD448B9E9356A>* Field_2_7; // 0x10
	::System::Collections::Generic::List_1<::Struct_2_C3A9B4762CBE027D>* Field_2_4; // 0x18
	::Unity::Collections::ManagedBlockQueue_1<::Struct_2_395B739A1AC58399>* Field_2_6; // 0x20
	::System::Collections::Generic::List_1<::Class_1_2AC45833F3CC8C86*>* Field_2_11; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_2_10; // 0x30
	::Unity::Jobs::JobHandle Field_2_9; // 0x38
	::System::Boolean Field_2_15; // 0x48
	::System::Boolean Field_2_8; // 0x49
	::Class_2_B190E1D15FBA12AE_Struct_2_A3D84ABDBC5CF665 Field_2_14; // 0x4A

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B190E1D15FBA12AE__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_B190E1D15FBA12AE__CCTOR_OFFSET))();
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B190E1D15FBA12AE_ONCREATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B190E1D15FBA12AE_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_E7D02C44C535B08E(::Unity::Jobs::JobHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + CLASS_2_B190E1D15FBA12AE_METHOD_2_E7D02C44C535B08E_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B190E1D15FBA12AE_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_32A29E64875C6DDD(::MoleMole::MonoBuddyStairAnimCorrector* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoBuddyStairAnimCorrector*))((::PBYTE)hIl2Cpp + CLASS_2_B190E1D15FBA12AE_METHOD_2_32A29E64875C6DDD_OFFSET))(this, a1);
	}

	::System::Void Method_2_27DCE79024097D95(::MoleMole::MonoBuddyStairAnimCorrector* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoBuddyStairAnimCorrector*))((::PBYTE)hIl2Cpp + CLASS_2_B190E1D15FBA12AE_METHOD_2_27DCE79024097D95_OFFSET))(this, a1);
	}

	::System::Void Method_2_00C844EC3E18A03E(::Unity::Jobs::JobHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + CLASS_2_B190E1D15FBA12AE_METHOD_2_00C844EC3E18A03E_OFFSET))(this, a1);
	}

	::System::Void Method_2_56E8ED155DF34A44()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B190E1D15FBA12AE_METHOD_2_56E8ED155DF34A44_OFFSET))(this);
	}

	static ::System::Void Method_2_1D1DDF64ED78E801(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B190E1D15FBA12AE_METHOD_2_1D1DDF64ED78E801_OFFSET))(a1);
	}

	::System::Void Method_2_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B190E1D15FBA12AE_METHOD_2_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_2_A44A18C9451109E4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B190E1D15FBA12AE_METHOD_2_A44A18C9451109E4_OFFSET))(this);
	}

	::System::Void Method_2_5A124CAF1E48B74F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B190E1D15FBA12AE_METHOD_2_5A124CAF1E48B74F_OFFSET))(this);
	}

	::System::Void Method_2_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B190E1D15FBA12AE_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_2_F627A7F96C7927CA(::MoleMole::MonoBuddyStairAnimCorrector* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoBuddyStairAnimCorrector*))((::PBYTE)hIl2Cpp + CLASS_2_B190E1D15FBA12AE_METHOD_2_F627A7F96C7927CA_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_2_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_B190E1D15FBA12AE_METHOD_2_CE34EA208837238D_OFFSET))();
	}

	::System::Void Method_2_24487D5165F3C6DC(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B190E1D15FBA12AE_METHOD_2_24487D5165F3C6DC_OFFSET))(this, a1);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B190E1D15FBA12AE_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_32A29E64875C6DDD_1(::MoleMole::MonoBuddyStairAnimCorrector* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoBuddyStairAnimCorrector*))((::PBYTE)hIl2Cpp + CLASS_2_B190E1D15FBA12AE_METHOD_2_32A29E64875C6DDD_1_OFFSET))(this, a1);
	}
};
