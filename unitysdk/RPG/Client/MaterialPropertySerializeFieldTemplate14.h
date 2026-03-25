#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MaterialPropertySerializeFieldTemplate13.h"
#include "unitysdk/RPG/Client/MaterialPropertySerializeFieldTemplate1_MaterialPropertySerializeField.h"

#define RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE14_GETPROPERTYFIELDS_OFFSET UNITYSDK_OFFSET(0x9B74370)
#define RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE14__CTOR_OFFSET UNITYSDK_OFFSET(0x9B74950)
#define RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE14___IFIXBASEPROXY_GETPROPERTYFIELDS_OFFSET UNITYSDK_OFFSET(0x9B74960)

namespace RPG::Client
{
	inline static constexpr unsigned int MaterialPropertySerializeFieldTemplate14_TypeDefinitionIndex = 57864;

	class MaterialPropertySerializeFieldTemplate14 : public ::RPG::Client::MaterialPropertySerializeFieldTemplate13
	{
	public:
		::RPG::Client::MaterialPropertySerializeFieldTemplate1_MaterialPropertySerializeField Field14; // 0x308

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE14__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::RPG::Client::MaterialPropertySerializeFieldTemplate1_MaterialPropertySerializeField>* GetPropertyFields()
		{
			return ((::Il2CppArray<::RPG::Client::MaterialPropertySerializeFieldTemplate1_MaterialPropertySerializeField>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE14_GETPROPERTYFIELDS_OFFSET))(this);
		}

		::Il2CppArray<::RPG::Client::MaterialPropertySerializeFieldTemplate1_MaterialPropertySerializeField>* __iFixBaseProxy_GetPropertyFields()
		{
			return ((::Il2CppArray<::RPG::Client::MaterialPropertySerializeFieldTemplate1_MaterialPropertySerializeField>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE14___IFIXBASEPROXY_GETPROPERTYFIELDS_OFFSET))(this);
		}
	};
}
