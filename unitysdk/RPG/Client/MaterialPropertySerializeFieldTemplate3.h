#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MaterialPropertySerializeFieldTemplate1_MaterialPropertySerializeField.h"
#include "unitysdk/RPG/Client/MaterialPropertySerializeFieldTemplate2.h"

#define RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE3_GETPROPERTYFIELDS_OFFSET UNITYSDK_OFFSET(0x9B776D0)
#define RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE3__CTOR_OFFSET UNITYSDK_OFFSET(0x9B778B0)
#define RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE3___IFIXBASEPROXY_GETPROPERTYFIELDS_OFFSET UNITYSDK_OFFSET(0x9B778C0)

namespace RPG::Client
{
	inline static constexpr unsigned int MaterialPropertySerializeFieldTemplate3_TypeDefinitionIndex = 57872;

	class MaterialPropertySerializeFieldTemplate3 : public ::RPG::Client::MaterialPropertySerializeFieldTemplate2
	{
	public:
		::RPG::Client::MaterialPropertySerializeFieldTemplate1_MaterialPropertySerializeField Field3; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE3__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::RPG::Client::MaterialPropertySerializeFieldTemplate1_MaterialPropertySerializeField>* GetPropertyFields()
		{
			return ((::Il2CppArray<::RPG::Client::MaterialPropertySerializeFieldTemplate1_MaterialPropertySerializeField>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE3_GETPROPERTYFIELDS_OFFSET))(this);
		}

		::Il2CppArray<::RPG::Client::MaterialPropertySerializeFieldTemplate1_MaterialPropertySerializeField>* __iFixBaseProxy_GetPropertyFields()
		{
			return ((::Il2CppArray<::RPG::Client::MaterialPropertySerializeFieldTemplate1_MaterialPropertySerializeField>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE3___IFIXBASEPROXY_GETPROPERTYFIELDS_OFFSET))(this);
		}
	};
}
