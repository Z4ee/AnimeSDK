#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MaterialPropertySerializeFieldTemplate17.h"
#include "unitysdk/RPG/Client/MaterialPropertySerializeFieldTemplate1_MaterialPropertySerializeField.h"

#define RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE18_GETPROPERTYFIELDS_OFFSET UNITYSDK_OFFSET(0x9B75DB0)
#define RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE18__CTOR_OFFSET UNITYSDK_OFFSET(0x9B76510)
#define RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE18___IFIXBASEPROXY_GETPROPERTYFIELDS_OFFSET UNITYSDK_OFFSET(0x9B76520)

namespace RPG::Client
{
	inline static constexpr unsigned int MaterialPropertySerializeFieldTemplate18_TypeDefinitionIndex = 57868;

	class MaterialPropertySerializeFieldTemplate18 : public ::RPG::Client::MaterialPropertySerializeFieldTemplate17
	{
	public:
		::RPG::Client::MaterialPropertySerializeFieldTemplate1_MaterialPropertySerializeField Field18; // 0x3E8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE18__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::RPG::Client::MaterialPropertySerializeFieldTemplate1_MaterialPropertySerializeField>* GetPropertyFields()
		{
			return ((::Il2CppArray<::RPG::Client::MaterialPropertySerializeFieldTemplate1_MaterialPropertySerializeField>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE18_GETPROPERTYFIELDS_OFFSET))(this);
		}

		::Il2CppArray<::RPG::Client::MaterialPropertySerializeFieldTemplate1_MaterialPropertySerializeField>* __iFixBaseProxy_GetPropertyFields()
		{
			return ((::Il2CppArray<::RPG::Client::MaterialPropertySerializeFieldTemplate1_MaterialPropertySerializeField>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE18___IFIXBASEPROXY_GETPROPERTYFIELDS_OFFSET))(this);
		}
	};
}
