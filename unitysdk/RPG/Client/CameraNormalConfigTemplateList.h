#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace RPG::Client { class CameraNormalConfigTemplate; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CAMERANORMALCONFIGTEMPLATELIST_METHOD_3_1FB7ADE0488AC757_OFFSET UNITYSDK_OFFSET(0x9F186B0)
#define RPG_CLIENT_CAMERANORMALCONFIGTEMPLATELIST__CTOR_OFFSET UNITYSDK_OFFSET(0x9F1F5D0)

namespace RPG::Client
{
	inline static constexpr unsigned int CameraNormalConfigTemplateList_TypeDefinitionIndex = 64232;

	class CameraNormalConfigTemplateList : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::CameraNormalConfigTemplate*>* NormalConfigTemplateList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERANORMALCONFIGTEMPLATELIST__CTOR_OFFSET))(this);
		}

		::RPG::Client::CameraNormalConfigTemplate* Method_3_1FB7ADE0488AC757(::System::String* a1)
		{
			return ((::RPG::Client::CameraNormalConfigTemplate*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERANORMALCONFIGTEMPLATELIST_METHOD_3_1FB7ADE0488AC757_OFFSET))(this, a1);
		}
	};
}
