#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_CHARACTERSCRIPTCONFIGBASE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16292330)
#define MOLEMOLE_CHARACTERSCRIPTCONFIGBASE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16292370)
#define MOLEMOLE_CHARACTERSCRIPTCONFIGBASE___C__FILTERQTECAMERABASEINFO_B__24_1_OFFSET UNITYSDK_OFFSET(0x16292380)

namespace MoleMole
{
	inline static constexpr unsigned int CharacterScriptConfigBase___c_TypeDefinitionIndex = 68721;

	class CharacterScriptConfigBase___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Type*, ::System::Boolean>** StaticGet___9__24_1()
		{
			return (::System::Func_2<::System::Type*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfigBase___c_TypeDefinitionIndex)->GetStaticField(0x3C0A0);
		}
		static ::MoleMole::CharacterScriptConfigBase___c** StaticGet___9()
		{
			return (::MoleMole::CharacterScriptConfigBase___c**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfigBase___c_TypeDefinitionIndex)->GetStaticField(0x3C0A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CHARACTERSCRIPTCONFIGBASE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHARACTERSCRIPTCONFIGBASE___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _FilterQTECameraBaseInfo_b__24_1(::System::Type* t)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHARACTERSCRIPTCONFIGBASE___C__FILTERQTECAMERABASEINFO_B__24_1_OFFSET))(this, t);
		}
	};
}
