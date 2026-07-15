#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PVSGAMEOBJECTFILTER_METHOD_2_685CF69E9A722CC4_OFFSET UNITYSDK_OFFSET(0x1BB0AA30)
#define RPG_GAMECORE_PVSGAMEOBJECTFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB0ABF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PVSGameObjectFilter_TypeDefinitionIndex = 18425;

	class PVSGameObjectFilter : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* NameContainStr; // 0x10
		::Il2CppArray<::System::String*>* ShaderNameContainStr; // 0x18
		::Il2CppArray<::System::String*>* ComponentInChildrenContainStr; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PVSGAMEOBJECTFILTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_685CF69E9A722CC4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PVSGameObjectFilter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PVSGameObjectFilter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PVSGAMEOBJECTFILTER_METHOD_2_685CF69E9A722CC4_OFFSET))(a1, a2);
		}
	};
}
