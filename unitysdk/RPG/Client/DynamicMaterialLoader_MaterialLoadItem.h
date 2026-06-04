#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Material; }

#define RPG_CLIENT_DYNAMICMATERIALLOADER_MATERIALLOADITEM_GET_MATINST_OFFSET UNITYSDK_OFFSET(0xB822450)
#define RPG_CLIENT_DYNAMICMATERIALLOADER_MATERIALLOADITEM_METHOD_1_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0xB8223F0)
#define RPG_CLIENT_DYNAMICMATERIALLOADER_MATERIALLOADITEM_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xB822370)
#define RPG_CLIENT_DYNAMICMATERIALLOADER_MATERIALLOADITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xB822460)

namespace RPG::Client
{
	inline static constexpr unsigned int DynamicMaterialLoader_MaterialLoadItem_TypeDefinitionIndex = 63993;

	class DynamicMaterialLoader_MaterialLoadItem : public ::System::Object
	{
	public:
		::System::String* Path; // 0x10
		::UnityEngine::Material* _MatInst; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICMATERIALLOADER_MATERIALLOADITEM__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICMATERIALLOADER_MATERIALLOADITEM_METHOD_1_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_1_9681042564541CD6_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICMATERIALLOADER_MATERIALLOADITEM_METHOD_1_9681042564541CD6_1_OFFSET))(this);
		}

		::UnityEngine::Material* get_MatInst()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICMATERIALLOADER_MATERIALLOADITEM_GET_MATINST_OFFSET))(this);
		}
	};
}
