#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CommonSkillPool; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_E5AA57745B8BB72C_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x159A9660)
#define CLASS_1_E5AA57745B8BB72C_METHOD_1_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0x159A9310)
#define CLASS_1_E5AA57745B8BB72C_METHOD_1_8F63218BB0C2ED6A_OFFSET UNITYSDK_OFFSET(0x159A93E0)
#define CLASS_1_E5AA57745B8BB72C_METHOD_1_91012FDC152072DC_OFFSET UNITYSDK_OFFSET(0x159A9720)
#define CLASS_1_E5AA57745B8BB72C_METHOD_1_F70437B4A7BC863E_OFFSET UNITYSDK_OFFSET(0x159A9780)
#define CLASS_1_E5AA57745B8BB72C__CCTOR_OFFSET UNITYSDK_OFFSET(0x159A9880)
#define CLASS_1_E5AA57745B8BB72C__CTOR_OFFSET UNITYSDK_OFFSET(0x159A9870)

inline static constexpr unsigned int Class_1_E5AA57745B8BB72C_TypeDefinitionIndex = 56677;

class Class_1_E5AA57745B8BB72C : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::CommonSkillPool*>** StaticGet_EFMBDDPGLMC()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::CommonSkillPool*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E5AA57745B8BB72C_TypeDefinitionIndex)->GetStaticField(0x55370);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5AA57745B8BB72C__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E5AA57745B8BB72C__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_56CE4AFC5339F746()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E5AA57745B8BB72C_METHOD_1_56CE4AFC5339F746_OFFSET))();
	}

	static ::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E5AA57745B8BB72C_METHOD_1_33ACA6CB2ABC73F7_OFFSET))();
	}

	static ::System::Void Method_1_91012FDC152072DC(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E5AA57745B8BB72C_METHOD_1_91012FDC152072DC_OFFSET))(a1);
	}

	static ::System::Void Method_1_8F63218BB0C2ED6A(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E5AA57745B8BB72C_METHOD_1_8F63218BB0C2ED6A_OFFSET))(a1);
	}

	static ::RPG::GameCore::CommonSkillPool* Method_1_F70437B4A7BC863E(::System::String* a1)
	{
		return ((::RPG::GameCore::CommonSkillPool*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E5AA57745B8BB72C_METHOD_1_F70437B4A7BC863E_OFFSET))(a1);
	}
};
