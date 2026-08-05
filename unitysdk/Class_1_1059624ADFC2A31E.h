#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagContainer.h"
#include "unitysdk/System/Object.h"

class Class_1_1059624ADFC2A31E_Class_1_DC3575BBBC6E5EDC;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_1059624ADFC2A31E_METHOD_1_0B959E0CD380B2A0_OFFSET UNITYSDK_OFFSET(0x10D158B0)
#define CLASS_1_1059624ADFC2A31E_METHOD_1_268788F6F134E4C1_OFFSET UNITYSDK_OFFSET(0x10D152D0)
#define CLASS_1_1059624ADFC2A31E_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x10D159F0)
#define CLASS_1_1059624ADFC2A31E_METHOD_1_76D558CF9960A3B7_OFFSET UNITYSDK_OFFSET(0x10D15610)
#define CLASS_1_1059624ADFC2A31E_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x10D158A0)
#define CLASS_1_1059624ADFC2A31E_METHOD_1_FD9BDBBF14155756_OFFSET UNITYSDK_OFFSET(0x10D15780)
#define CLASS_1_1059624ADFC2A31E__CTOR_OFFSET UNITYSDK_OFFSET(0x10D15240)

inline static constexpr unsigned int Class_1_1059624ADFC2A31E_TypeDefinitionIndex = 60353;

class Class_1_1059624ADFC2A31E : public ::System::Object
{
public:
	static ::Class_1_1059624ADFC2A31E_Class_1_DC3575BBBC6E5EDC** StaticGet_Field_1_6()
	{
		return (::Class_1_1059624ADFC2A31E_Class_1_DC3575BBBC6E5EDC**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1059624ADFC2A31E_TypeDefinitionIndex)->GetStaticField(0x4CE70);
	}
	// static const ::System::Int32 Field_1_7 = 0x20; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_1_1; // 0x10
	::System::Int32 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1059624ADFC2A31E__CTOR_OFFSET))(this);
	}

	::System::UInt32 Method_1_268788F6F134E4C1(::System::Collections::Generic::IEnumerable_1<::System::String*>* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_1059624ADFC2A31E_METHOD_1_268788F6F134E4C1_OFFSET))(this, a1);
	}

	static ::Class_1_1059624ADFC2A31E_Class_1_DC3575BBBC6E5EDC* Method_1_FD9BDBBF14155756()
	{
		return ((::Class_1_1059624ADFC2A31E_Class_1_DC3575BBBC6E5EDC*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1059624ADFC2A31E_METHOD_1_FD9BDBBF14155756_OFFSET))();
	}

	::System::Int32 Method_1_76D558CF9960A3B7(::System::String* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1059624ADFC2A31E_METHOD_1_76D558CF9960A3B7_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1059624ADFC2A31E_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::UInt32 Method_1_0B959E0CD380B2A0(::Foundation::Unreal::FGameplayTagContainer& a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + CLASS_1_1059624ADFC2A31E_METHOD_1_0B959E0CD380B2A0_OFFSET))(this, a1);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1059624ADFC2A31E_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}
};
