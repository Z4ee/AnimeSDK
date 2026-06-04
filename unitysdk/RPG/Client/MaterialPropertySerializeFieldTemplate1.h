#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MaterialPropertySerializeFieldTemplate1_MaterialPropertySerializeField.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE1_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBFB6C80)
#define RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE1_GETPROPERTYFIELDS_OFFSET UNITYSDK_OFFSET(0xBFB6CD0)
#define RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE1__CTOR_OFFSET UNITYSDK_OFFSET(0xBFB6DE0)

namespace RPG::Client
{
	inline static constexpr unsigned int MaterialPropertySerializeFieldTemplate1_TypeDefinitionIndex = 66072;

	class MaterialPropertySerializeFieldTemplate1 : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Renderer* Renderer; // 0x18
		::System::Int32 MaterialIndex; // 0x20
		::RPG::Client::MaterialPropertySerializeFieldTemplate1_MaterialPropertySerializeField Field1; // 0x28
		::Il2CppArray<::RPG::Client::MaterialPropertySerializeFieldTemplate1_MaterialPropertySerializeField>* Field_5_3; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE1__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE1_DISPOSE_OFFSET))(this);
		}

		::Il2CppArray<::RPG::Client::MaterialPropertySerializeFieldTemplate1_MaterialPropertySerializeField>* GetPropertyFields()
		{
			return ((::Il2CppArray<::RPG::Client::MaterialPropertySerializeFieldTemplate1_MaterialPropertySerializeField>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE1_GETPROPERTYFIELDS_OFFSET))(this);
		}
	};
}
