#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Enum_3_86F978FA535DE21D.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_CF43FA1E89397A1C;
class Class_4_5B5E82918BC44D6E;
namespace MoleMole::Utils { class INapCameraSequenceDataTableEntry; }
namespace MoleMole::Utils { class NapCameraSequence; }
namespace System { class String; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_E97E5B843CDE4EAE_METHOD_4_0BA07FBB7BA42AD1_OFFSET UNITYSDK_OFFSET(0x11EB8E40)
#define CLASS_4_E97E5B843CDE4EAE_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x11EB8DC0)
#define CLASS_4_E97E5B843CDE4EAE_METHOD_4_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0x11EB7EF0)
#define CLASS_4_E97E5B843CDE4EAE_METHOD_4_3F0F9592A0E917D4_OFFSET UNITYSDK_OFFSET(0x11EB8210)
#define CLASS_4_E97E5B843CDE4EAE_METHOD_4_40A13CA58121770B_OFFSET UNITYSDK_OFFSET(0x11EB8DD0)
#define CLASS_4_E97E5B843CDE4EAE_METHOD_4_C43DD7AFEEA2B827_OFFSET UNITYSDK_OFFSET(0x11EB8280)
#define CLASS_4_E97E5B843CDE4EAE__CTOR_OFFSET UNITYSDK_OFFSET(0x11EB8B60)

inline static constexpr unsigned int Class_4_E97E5B843CDE4EAE_TypeDefinitionIndex = 40744;

class Class_4_E97E5B843CDE4EAE : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_5B5E82918BC44D6E* Field_4_6; // 0x28
	::Class_4_2FF7D360A2F3EC48<::System::Single>* Field_4_3; // 0x30
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_4_0; // 0x38
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_4_1; // 0x40
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_4_4; // 0x48
	::Class_4_2FF7D360A2F3EC48<::MoleMole::EntityHandle>* Field_4_2; // 0x50
	::Class_4_2FF7D360A2F3EC48<::System::Single>* Field_4_5; // 0x58
	::Class_3_CF43FA1E89397A1C* Field_4_7; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E97E5B843CDE4EAE__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_28EB11670A8E5A86()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E97E5B843CDE4EAE_METHOD_4_28EB11670A8E5A86_OFFSET))(this);
	}

	::System::Void Method_4_3F0F9592A0E917D4(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_E97E5B843CDE4EAE_METHOD_4_3F0F9592A0E917D4_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E97E5B843CDE4EAE_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Void Method_4_C43DD7AFEEA2B827(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_E97E5B843CDE4EAE_METHOD_4_C43DD7AFEEA2B827_OFFSET))(this, a1);
	}

	static ::MoleMole::Utils::INapCameraSequenceDataTableEntry* Method_4_0BA07FBB7BA42AD1(::System::String* a1, ::MoleMole::Utils::NapCameraSequence* a2)
	{
		return ((::MoleMole::Utils::INapCameraSequenceDataTableEntry*(*)(::System::String*, ::MoleMole::Utils::NapCameraSequence*))((::PBYTE)hIl2Cpp + CLASS_4_E97E5B843CDE4EAE_METHOD_4_0BA07FBB7BA42AD1_OFFSET))(a1, a2);
	}

	static ::MoleMole::Utils::NapCameraSequence* Method_4_40A13CA58121770B(::Enum_3_86F978FA535DE21D a1)
	{
		return ((::MoleMole::Utils::NapCameraSequence*(*)(::Enum_3_86F978FA535DE21D))((::PBYTE)hIl2Cpp + CLASS_4_E97E5B843CDE4EAE_METHOD_4_40A13CA58121770B_OFFSET))(a1);
	}
};
