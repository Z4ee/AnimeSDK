#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_66C4D81440373C6E.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_9B8A28A306558B7F;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_65273EC2F5D4171D_METHOD_2_0D98BA1C1344E5B3_OFFSET UNITYSDK_OFFSET(0x1A2B81C0)
#define CLASS_2_65273EC2F5D4171D_METHOD_2_15F4E4F86182D646_OFFSET UNITYSDK_OFFSET(0x1A2B80B0)
#define CLASS_2_65273EC2F5D4171D_METHOD_2_218124418542E081_OFFSET UNITYSDK_OFFSET(0x1A2B81B0)
#define CLASS_2_65273EC2F5D4171D_METHOD_2_4BAA8431768C8B75_OFFSET UNITYSDK_OFFSET(0x1A2B8140)
#define CLASS_2_65273EC2F5D4171D_METHOD_2_8A0292224971CD23_OFFSET UNITYSDK_OFFSET(0x1A2B8280)
#define CLASS_2_65273EC2F5D4171D_METHOD_2_9EF9C001BE59FEBE_OFFSET UNITYSDK_OFFSET(0x1A2B8270)
#define CLASS_2_65273EC2F5D4171D_METHOD_2_CB61A73E95FADD91_OFFSET UNITYSDK_OFFSET(0x1A2B8260)
#define CLASS_2_65273EC2F5D4171D__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2B81A0)

inline static constexpr unsigned int Class_2_65273EC2F5D4171D_TypeDefinitionIndex = 87078;

class Class_2_65273EC2F5D4171D : public ::Class_1_66C4D81440373C6E
{
public:
	::MoleMole::Config::CampType Field_2_0; // 0xE8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65273EC2F5D4171D__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_15F4E4F86182D646()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65273EC2F5D4171D_METHOD_2_15F4E4F86182D646_OFFSET))(this);
	}

	::System::Void Method_2_4BAA8431768C8B75(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_65273EC2F5D4171D_METHOD_2_4BAA8431768C8B75_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_218124418542E081()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65273EC2F5D4171D_METHOD_2_218124418542E081_OFFSET))(this);
	}

	::System::Void Method_2_0D98BA1C1344E5B3(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_65273EC2F5D4171D_METHOD_2_0D98BA1C1344E5B3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CB61A73E95FADD91(::MoleMole::Config::CampType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::CampType))((::PBYTE)hIl2Cpp + CLASS_2_65273EC2F5D4171D_METHOD_2_CB61A73E95FADD91_OFFSET))(this, a1);
	}

	::MoleMole::Config::CampType Method_2_9EF9C001BE59FEBE()
	{
		return ((::MoleMole::Config::CampType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65273EC2F5D4171D_METHOD_2_9EF9C001BE59FEBE_OFFSET))(this);
	}

	::System::Void Method_2_8A0292224971CD23(::System::UInt32 a1, ::Class_1_9B8A28A306558B7F* a2, ::System::UInt32 a3, ::UnityEngine::Vector3 a4, ::System::Single a5, ::MoleMole::Config::CampType a6, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a7, ::System::Int32 a8, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* a9, ::MoleMole::Config::CampType a10)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_9B8A28A306558B7F*, ::System::UInt32, ::UnityEngine::Vector3, ::System::Single, ::MoleMole::Config::CampType, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*, ::MoleMole::Config::CampType))((::PBYTE)hIl2Cpp + CLASS_2_65273EC2F5D4171D_METHOD_2_8A0292224971CD23_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}
};
