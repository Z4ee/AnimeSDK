#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CommonSkillPool; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_BFA662C1D3733F9E_METHOD_1_1B819E8662A63D41_OFFSET UNITYSDK_OFFSET(0x13B261C0)
#define CLASS_1_BFA662C1D3733F9E_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x13B26350)
#define CLASS_1_BFA662C1D3733F9E_METHOD_1_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0x13B260F0)
#define CLASS_1_BFA662C1D3733F9E_METHOD_1_695991F20673CFAB_OFFSET UNITYSDK_OFFSET(0x13B26410)
#define CLASS_1_BFA662C1D3733F9E_METHOD_1_F70437B4A7BC863E_OFFSET UNITYSDK_OFFSET(0x13B26470)
#define CLASS_1_BFA662C1D3733F9E__CCTOR_OFFSET UNITYSDK_OFFSET(0x13B26570)
#define CLASS_1_BFA662C1D3733F9E__CTOR_OFFSET UNITYSDK_OFFSET(0x13B26560)

inline static constexpr unsigned int Class_1_BFA662C1D3733F9E_TypeDefinitionIndex = 52745;

class Class_1_BFA662C1D3733F9E : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::CommonSkillPool*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::CommonSkillPool*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BFA662C1D3733F9E_TypeDefinitionIndex)->GetStaticField(0x60810);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BFA662C1D3733F9E__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BFA662C1D3733F9E__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_56CE4AFC5339F746()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BFA662C1D3733F9E_METHOD_1_56CE4AFC5339F746_OFFSET))();
	}

	static ::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BFA662C1D3733F9E_METHOD_1_33ACA6CB2ABC73F7_OFFSET))();
	}

	static ::System::Void Method_1_695991F20673CFAB(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BFA662C1D3733F9E_METHOD_1_695991F20673CFAB_OFFSET))(a1);
	}

	static ::System::Void Method_1_1B819E8662A63D41(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BFA662C1D3733F9E_METHOD_1_1B819E8662A63D41_OFFSET))(a1);
	}

	static ::RPG::GameCore::CommonSkillPool* Method_1_F70437B4A7BC863E(::System::String* a1)
	{
		return ((::RPG::GameCore::CommonSkillPool*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BFA662C1D3733F9E_METHOD_1_F70437B4A7BC863E_OFFSET))(a1);
	}
};
