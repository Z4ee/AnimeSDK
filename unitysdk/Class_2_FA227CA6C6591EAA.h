#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C2937544035FD07F.h"
#include "unitysdk/Enum_3_D7FE77D6BC79ADBB.h"

class Class_3_3C9E752A71CB25A2;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_FA227CA6C6591EAA_METHOD_2_554E2C4750C8F1D2_OFFSET UNITYSDK_OFFSET(0x17012920)
#define CLASS_2_FA227CA6C6591EAA_METHOD_2_AF5C6F6152377069_OFFSET UNITYSDK_OFFSET(0x170127E0)
#define CLASS_2_FA227CA6C6591EAA_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x170125E0)
#define CLASS_2_FA227CA6C6591EAA_METHOD_2_E3979DA7E0E6B8EF_OFFSET UNITYSDK_OFFSET(0x17013CB0)
#define CLASS_2_FA227CA6C6591EAA_METHOD_2_E3996743CC66750D_OFFSET UNITYSDK_OFFSET(0x17012630)
#define CLASS_2_FA227CA6C6591EAA_METHOD_2_E70829F53C0447D4_OFFSET UNITYSDK_OFFSET(0x17014060)
#define CLASS_2_FA227CA6C6591EAA_ONSTART_OFFSET UNITYSDK_OFFSET(0x170125A0)
#define CLASS_2_FA227CA6C6591EAA__CTOR_OFFSET UNITYSDK_OFFSET(0x17012620)

inline static constexpr unsigned int Class_2_FA227CA6C6591EAA_TypeDefinitionIndex = 64334;

class Class_2_FA227CA6C6591EAA : public ::Class_1_C2937544035FD07F
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA227CA6C6591EAA__CTOR_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA227CA6C6591EAA_ONSTART_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA227CA6C6591EAA_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_E3996743CC66750D(::System::UInt32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_FA227CA6C6591EAA_METHOD_2_E3996743CC66750D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_AF5C6F6152377069(::Class_3_3C9E752A71CB25A2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_3C9E752A71CB25A2*))((::PBYTE)hIl2Cpp + CLASS_2_FA227CA6C6591EAA_METHOD_2_AF5C6F6152377069_OFFSET))(this, a1);
	}

	::System::Void Method_2_554E2C4750C8F1D2(::Enum_3_D7FE77D6BC79ADBB a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_D7FE77D6BC79ADBB, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_FA227CA6C6591EAA_METHOD_2_554E2C4750C8F1D2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E3979DA7E0E6B8EF(::Enum_3_D7FE77D6BC79ADBB a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_D7FE77D6BC79ADBB, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_FA227CA6C6591EAA_METHOD_2_E3979DA7E0E6B8EF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E70829F53C0447D4(::Enum_3_D7FE77D6BC79ADBB a1, ::System::UInt32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::UInt32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_D7FE77D6BC79ADBB, ::System::UInt32, ::System::Int32, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_FA227CA6C6591EAA_METHOD_2_E70829F53C0447D4_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
