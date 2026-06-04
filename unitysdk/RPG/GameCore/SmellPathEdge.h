#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SMELLPATHEDGE_METHOD_2_E6DA00F7CCF0F720_OFFSET UNITYSDK_OFFSET(0x19C8F900)
#define RPG_GAMECORE_SMELLPATHEDGE__CTOR_OFFSET UNITYSDK_OFFSET(0x19C8FAD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SmellPathEdge_TypeDefinitionIndex = 16705;

	class SmellPathEdge : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 NodeIndexA; // 0x10
		::System::Int32 NodeIndexB; // 0x14
		::Il2CppArray<::RPG::MVector3>* AssistantNodes; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SMELLPATHEDGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E6DA00F7CCF0F720(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SmellPathEdge*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SmellPathEdge*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SMELLPATHEDGE_METHOD_2_E6DA00F7CCF0F720_OFFSET))(a1, a2);
		}
	};
}
