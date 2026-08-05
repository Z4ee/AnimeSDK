#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define CLASS_2_B26F16DF089078E4___C_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x11B529B0)
#define CLASS_2_B26F16DF089078E4___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11B52960)
#define CLASS_2_B26F16DF089078E4___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11B529A0)

inline static constexpr unsigned int Class_2_B26F16DF089078E4___c_TypeDefinitionIndex = 50112;

class Class_2_B26F16DF089078E4___c : public ::System::Object
{
public:
	static ::Class_2_B26F16DF089078E4___c** StaticGet___9()
	{
		return (::Class_2_B26F16DF089078E4___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B26F16DF089078E4___c_TypeDefinitionIndex)->GetStaticField(0x46690);
	}
	static ::System::Action_1<::System::Boolean>** StaticGet___9__30_30()
	{
		return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B26F16DF089078E4___c_TypeDefinitionIndex)->GetStaticField(0x46698);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_B26F16DF089078E4___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B26F16DF089078E4___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B26F16DF089078E4___C_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}
};
