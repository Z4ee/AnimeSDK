#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MaterialPropertySerializeFieldTemplate10.h"
#include "unitysdk/RPG/Client/MaterialPropertySerializeFieldTemplate1_MaterialPropertySerializeField.h"

#define RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE11_GETPROPERTYFIELDS_OFFSET UNITYSDK_OFFSET(0x9B73390)
#define RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE11__CTOR_OFFSET UNITYSDK_OFFSET(0x9B73860)
#define RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE11___IFIXBASEPROXY_GETPROPERTYFIELDS_OFFSET UNITYSDK_OFFSET(0x9B73870)

namespace RPG::Client
{
	inline static constexpr unsigned int MaterialPropertySerializeFieldTemplate11_TypeDefinitionIndex = 57861;

	class MaterialPropertySerializeFieldTemplate11 : public ::RPG::Client::MaterialPropertySerializeFieldTemplate10
	{
	public:
		::RPG::Client::MaterialPropertySerializeFieldTemplate1_MaterialPropertySerializeField Field11; // 0x260

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE11__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::RPG::Client::MaterialPropertySerializeFieldTemplate1_MaterialPropertySerializeField>* GetPropertyFields()
		{
			return ((::Il2CppArray<::RPG::Client::MaterialPropertySerializeFieldTemplate1_MaterialPropertySerializeField>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE11_GETPROPERTYFIELDS_OFFSET))(this);
		}

		::Il2CppArray<::RPG::Client::MaterialPropertySerializeFieldTemplate1_MaterialPropertySerializeField>* __iFixBaseProxy_GetPropertyFields()
		{
			return ((::Il2CppArray<::RPG::Client::MaterialPropertySerializeFieldTemplate1_MaterialPropertySerializeField>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE11___IFIXBASEPROXY_GETPROPERTYFIELDS_OFFSET))(this);
		}
	};
}
