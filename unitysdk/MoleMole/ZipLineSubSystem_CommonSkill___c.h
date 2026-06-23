#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x116BF9D0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x116BFA10)
#define MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL___C__ONCREATEPROPERTY_B__23_1_OFFSET UNITYSDK_OFFSET(0x116BFA20)

namespace MoleMole
{
	inline static constexpr unsigned int ZipLineSubSystem_CommonSkill___c_TypeDefinitionIndex = 74656;

	class ZipLineSubSystem_CommonSkill___c : public ::System::Object
	{
	public:
		static ::System::Func_1<::System::Boolean>** StaticGet___9__23_1()
		{
			return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ZipLineSubSystem_CommonSkill___c_TypeDefinitionIndex)->GetStaticField(0x4C150);
		}
		static ::MoleMole::ZipLineSubSystem_CommonSkill___c** StaticGet___9()
		{
			return (::MoleMole::ZipLineSubSystem_CommonSkill___c**)Il2CppClass::FromTypeDefinitionIndex(ZipLineSubSystem_CommonSkill___c_TypeDefinitionIndex)->GetStaticField(0x4C158);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnCreateProperty_b__23_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL___C__ONCREATEPROPERTY_B__23_1_OFFSET))(this);
		}
	};
}
