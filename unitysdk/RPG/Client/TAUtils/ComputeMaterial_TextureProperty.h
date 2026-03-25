#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Texture; }

#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_TEXTUREPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0xA5324C0)

namespace RPG::Client::TAUtils
{
	inline static constexpr unsigned int ComputeMaterial_TextureProperty_TypeDefinitionIndex = 60332;

	class ComputeMaterial_TextureProperty : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::Il2CppArray<::System::String*>* kernelNames; // 0x18
		::Il2CppArray<::System::Int32>* kernelIndices; // 0x20
		::UnityEngine::Texture* value; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_TEXTUREPROPERTY__CTOR_OFFSET))(this);
		}
	};
}
