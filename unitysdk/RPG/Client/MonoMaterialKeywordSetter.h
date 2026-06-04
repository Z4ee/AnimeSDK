#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MONOMATERIALKEYWORDSETTER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xC12ECD0)
#define RPG_CLIENT_MONOMATERIALKEYWORDSETTER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xC12EC30)
#define RPG_CLIENT_MONOMATERIALKEYWORDSETTER__CTOR_OFFSET UNITYSDK_OFFSET(0xC12EEB0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoMaterialKeywordSetter_TypeDefinitionIndex = 66409;

	class MonoMaterialKeywordSetter : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Material* material; // 0x18
		::System::String* keywordName0; // 0x20
		::System::Boolean keywordState0; // 0x28
		::System::String* keywordName1; // 0x30
		::System::Boolean keywordState1; // 0x38
		::System::String* intName0; // 0x40
		::System::Int32 intValue0; // 0x48
		::UnityEngine::Renderer* Field_5_7; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMATERIALKEYWORDSETTER__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMATERIALKEYWORDSETTER_ONENABLE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMATERIALKEYWORDSETTER_LATEUPDATE_OFFSET))(this);
		}
	};
}
