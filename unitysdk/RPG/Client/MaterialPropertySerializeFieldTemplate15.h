#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MaterialPropertySerializeFieldTemplate14.h"
#include "unitysdk/RPG/Client/MaterialPropertySerializeFieldTemplate1_MaterialPropertySerializeField.h"

#define RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE15_GETPROPERTYFIELDS_OFFSET UNITYSDK_OFFSET(0x9B74970)
#define RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE15__CTOR_OFFSET UNITYSDK_OFFSET(0x9B74FB0)
#define RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE15___IFIXBASEPROXY_GETPROPERTYFIELDS_OFFSET UNITYSDK_OFFSET(0x9B74FC0)

namespace RPG::Client
{
	inline static constexpr unsigned int MaterialPropertySerializeFieldTemplate15_TypeDefinitionIndex = 57865;

	class MaterialPropertySerializeFieldTemplate15 : public ::RPG::Client::MaterialPropertySerializeFieldTemplate14
	{
	public:
		::RPG::Client::MaterialPropertySerializeFieldTemplate1_MaterialPropertySerializeField Field15; // 0x340

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE15__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::RPG::Client::MaterialPropertySerializeFieldTemplate1_MaterialPropertySerializeField>* GetPropertyFields()
		{
			return ((::Il2CppArray<::RPG::Client::MaterialPropertySerializeFieldTemplate1_MaterialPropertySerializeField>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE15_GETPROPERTYFIELDS_OFFSET))(this);
		}

		::Il2CppArray<::RPG::Client::MaterialPropertySerializeFieldTemplate1_MaterialPropertySerializeField>* __iFixBaseProxy_GetPropertyFields()
		{
			return ((::Il2CppArray<::RPG::Client::MaterialPropertySerializeFieldTemplate1_MaterialPropertySerializeField>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE15___IFIXBASEPROXY_GETPROPERTYFIELDS_OFFSET))(this);
		}
	};
}
