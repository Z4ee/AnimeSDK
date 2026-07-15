#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

namespace RPG::Client { class DeformationCharacterCasterBehavior; }
namespace RPG::Client { class DeformationCharacterCasterMonoPlugin_DeformationCasterTransform; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERMONOPLUGIN_BIND_OFFSET UNITYSDK_OFFSET(0x18093CB0)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERMONOPLUGIN_UNBIND_OFFSET UNITYSDK_OFFSET(0x18094070)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERMONOPLUGIN__CCTOR_OFFSET UNITYSDK_OFFSET(0x18094110)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x180940D0)

namespace RPG::Client
{
	inline static constexpr unsigned int DeformationCharacterCasterMonoPlugin_TypeDefinitionIndex = 67121;

	class DeformationCharacterCasterMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::DeformationCharacterCasterBehavior*>
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_Field_7_0()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DeformationCharacterCasterMonoPlugin_TypeDefinitionIndex)->GetStaticField(0x6AFB0);
		}
		::System::String* BoneName; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::DeformationCharacterCasterMonoPlugin_DeformationCasterTransform*>* DeformationCasterList; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCHARACTERCASTERMONOPLUGIN__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCHARACTERCASTERMONOPLUGIN__CCTOR_OFFSET))();
		}

		::System::Void Bind(::UnityEngine::GameObject* a1, ::Il2CppArray<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCHARACTERCASTERMONOPLUGIN_BIND_OFFSET))(this, a1, a2);
		}

		::System::Void Unbind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCHARACTERCASTERMONOPLUGIN_UNBIND_OFFSET))(this);
		}
	};
}
