#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CommonSkillPool; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_BFA662C1D3733F9E_METHOD_1_1B819E8662A63D41_OFFSET UNITYSDK_OFFSET(0x95F78C0)
#define CLASS_1_BFA662C1D3733F9E_METHOD_1_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0x95F77F0)
#define CLASS_1_BFA662C1D3733F9E_METHOD_1_63FA61F66FD3A985_OFFSET UNITYSDK_OFFSET(0x95F7B70)
#define CLASS_1_BFA662C1D3733F9E_METHOD_1_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x95F7A90)
#define CLASS_1_BFA662C1D3733F9E__CCTOR_OFFSET UNITYSDK_OFFSET(0x95F7CC0)
#define CLASS_1_BFA662C1D3733F9E__CTOR_OFFSET UNITYSDK_OFFSET(0x95F7CB0)

inline static constexpr unsigned int Class_1_BFA662C1D3733F9E_TypeDefinitionIndex = 52071;

class Class_1_BFA662C1D3733F9E : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::CommonSkillPool*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::CommonSkillPool*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BFA662C1D3733F9E_TypeDefinitionIndex)->GetStaticField(0x62AC0);
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

	static ::System::Void Method_1_D0BD1377F2594D33()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BFA662C1D3733F9E_METHOD_1_D0BD1377F2594D33_OFFSET))();
	}

	static ::System::Void Method_1_1B819E8662A63D41(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BFA662C1D3733F9E_METHOD_1_1B819E8662A63D41_OFFSET))(a1);
	}

	static ::RPG::GameCore::CommonSkillPool* Method_1_63FA61F66FD3A985(::System::String* a1)
	{
		return ((::RPG::GameCore::CommonSkillPool*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BFA662C1D3733F9E_METHOD_1_63FA61F66FD3A985_OFFSET))(a1);
	}
};
