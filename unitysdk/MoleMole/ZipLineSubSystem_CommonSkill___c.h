#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14121180)
#define MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x141211C0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL___C__ONCREATEPROPERTY_B__36_1_OFFSET UNITYSDK_OFFSET(0x141211D0)

namespace MoleMole
{
	inline static constexpr unsigned int ZipLineSubSystem_CommonSkill___c_TypeDefinitionIndex = 63897;

	class ZipLineSubSystem_CommonSkill___c : public ::System::Object
	{
	public:
		static ::System::Func_1<::System::Boolean>** StaticGet___9__36_1()
		{
			return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ZipLineSubSystem_CommonSkill___c_TypeDefinitionIndex)->GetStaticField(0x4AFF0);
		}
		static ::MoleMole::ZipLineSubSystem_CommonSkill___c** StaticGet___9()
		{
			return (::MoleMole::ZipLineSubSystem_CommonSkill___c**)Il2CppClass::FromTypeDefinitionIndex(ZipLineSubSystem_CommonSkill___c_TypeDefinitionIndex)->GetStaticField(0x4AFF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnCreateProperty_b__36_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL___C__ONCREATEPROPERTY_B__36_1_OFFSET))(this);
		}
	};
}
