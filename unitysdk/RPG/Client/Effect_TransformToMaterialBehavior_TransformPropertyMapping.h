#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class Effect_TransformToMaterialBehavior_TransformProperty; }
namespace RPG::Client::TAUtils { class RendererSlots; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EFFECT_TRANSFORMTOMATERIALBEHAVIOR_TRANSFORMPROPERTYMAPPING_METHOD_1_FD3B916300F77FDA_OFFSET UNITYSDK_OFFSET(0x15133940)
#define RPG_CLIENT_EFFECT_TRANSFORMTOMATERIALBEHAVIOR_TRANSFORMPROPERTYMAPPING__CTOR_OFFSET UNITYSDK_OFFSET(0x151347D0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_TransformToMaterialBehavior_TransformPropertyMapping_TypeDefinitionIndex = 67424;

	class Effect_TransformToMaterialBehavior_TransformPropertyMapping : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::Effect_TransformToMaterialBehavior_TransformProperty*>* properties; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::TAUtils::RendererSlots*>* rendererSlots; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORMTOMATERIALBEHAVIOR_TRANSFORMPROPERTYMAPPING__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_FD3B916300F77FDA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORMTOMATERIALBEHAVIOR_TRANSFORMPROPERTYMAPPING_METHOD_1_FD3B916300F77FDA_OFFSET))(this);
		}
	};
}
